/* FUN_004b64d0 @ 0x004b64d0 (71 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_004b64d0 1
__attribute__((naked)) void rb_004b64d0(void)
{
  __asm__(
    "  pushl %esi\n"
    "  movl %ecx, %esi\n"
    "  movl $0, 0x5851a0\n"
    "  movl 0x4b2c(%esi), %ecx\n"
    "  testl %ecx, %ecx\n"
    "  je .L004b6506\n"
    "  movl (%ecx), %eax\n"
    "  call *0x44(%eax)\n"
    "  movl 0x4b2c(%esi), %ecx\n"
    "  testl %ecx, %ecx\n"
    "  je .L004b64fc\n"
    "  movl (%ecx), %edx\n"
    "  pushl $1\n"
    "  call *(%edx)\n"
    ".L004b64fc:\n"
    "  movl $0, 0x4b2c(%esi)\n"
    ".L004b6506:\n"
    "  movl $0x5cd2c4, %ecx\n"
    "  call *_lom_af_004b64d0_0\n"
    "  movl $1, %eax\n"
    "  popl %esi\n"
    "  retl \n"
  );
}
__asm__(".data\n"
  "_lom_af_004b64d0_0: .long 0x004c4d20\n"
  ".text\n");
