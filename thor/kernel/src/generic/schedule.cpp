
#include "kernel.hpp"

namespace thor {

frigg::LazyInitializer<ScheduleQueue> scheduleQueue;
frigg::LazyInitializer<ScheduleLock> scheduleLock;

KernelUnsafePtr<Thread> getCurrentThread() {
	return activeExecutor();
}

void doSchedule(ScheduleGuard guard) {
	assert(!intsAreEnabled());
	assert(guard.protects(scheduleLock.get()));

	// TODO: assert that we are called from a per-cpu stack
	// and that no executor is currently active.

	// TODO: this should be replaced by a proper "reschedule after IRQ" strategy
	while(scheduleQueue->empty()) {
		guard.unlock();
		enableInts();

		// TODO: we cannot halt() here because if an interrupt we are awaiting
		// happens before we halt() the halt might never terminate.
		//halt();

		disableInts();
		guard.lock();
	}

	KernelUnsafePtr<Thread> thread = scheduleQueue->removeFront();
	guard.unlock();

	Thread::activateOther(thread);
	thread->getAddressSpace()->activate();
	switchContext(&thread->getContext());
	switchExecutor(thread);
	restoreExecutor();
}

// FIXME: this function should get a parameter of type IrqImagePtr
extern "C" void onPreemption() {
	assert(!"Fix preemption");
/*	acknowledgePreemption();
	
	KernelUnsafePtr<Thread> thread = getCurrentThread();
	resetCurrentThread(state);
	
	ScheduleGuard schedule_guard(scheduleLock.get());
	if((thread->flags & Thread::kFlagNotScheduled) == 0)
		enqueueInSchedule(schedule_guard, thread);
	doSchedule(frigg::move(schedule_guard));*/
}

void enqueueInSchedule(ScheduleGuard &guard, KernelUnsafePtr<Thread> thread) {
	assert(!intsAreEnabled());
	assert(guard.protects(scheduleLock.get()));

	scheduleQueue->addBack(thread);
}

} // namespace thor

