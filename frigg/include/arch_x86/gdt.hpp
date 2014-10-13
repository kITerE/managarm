
namespace frigg {
namespace arch_x86 {

enum GdtFlags : uint32_t {
	kGdtWord1CodeSegment = 0x1800,
	kGdtWord1DataSegment = 0x1200,
	kGdtWord1User = 0x6000,
	kGdtWord1Present = 0x8000,
	kGdtWord1Long = 0x00200000,
	kGdtWord1Default = 0x00400000,
	kGdtWord1Granularity = 0x00800000
};

struct Gdtr {
	uint16_t limit;
	uint64_t pointer;
} __attribute__ (( packed ));

void makeGdtNullSegment(uint32_t *gdt, int entry);
void makeGdtFlatCode32SystemSegment(uint32_t *gdt, int entry);
void makeGdtFlatData32SystemSegment(uint32_t *gdt, int entry);
void makeGdtCode64SystemSegment(uint32_t *gdt, int entry);
void makeGdtCode64UserSegment(uint32_t *gdt, int entry);

}} // namespace frigg::arch_x86

