#include <thor-internal/acpi/acpi.hpp>
#include <thor-internal/legacy-pc/system.hpp>
#include <thor-internal/arch/pic.hpp>
#include <thor-internal/arch/rtc.hpp>
#include <thor-internal/arch/system.hpp>

namespace thor {

void initializeTheSystemEarly() {
	initLocalApicOnTheSystem();
	// TODO: managarm crashes on bochs if we do not remap the legacy PIC.
	// we need to debug that and find the cause of this problem.
	setupLegacyPic();
	maskLegacyPic();
}

void initializeBasicSystem() {
	acpi::initializeBasicSystem();
}

void initializeExtendedSystem() {
	acpi::initializeExtendedSystem();
	legacy_pc::initializeDevices();
	initializeRtc();
}

} // namespace thor
