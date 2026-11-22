/* Hand C for lomse.exe FUN_005399c0 @ 0x005399c0 (86 bytes, __stdcall ret 8).
 * g241, shim-plus-C. The original is an RtlUnwind wrapper: it saves fs:0 at
 * [ebp-8], stores TargetIp at [ebp-4], and calls the RtlUnwind thunk at
 * 0x00548e00(frame=param_1, TargetIp, rec=param_2, retval=0). RtlUnwind
 * continues at that TargetIp, which clears bit 1 of [param_2+4], relinks
 * fs:0 to the saved head, and ret 8. A naked shim builds that exact ebp
 * / local / saved-reg frame and uses source label rb_005399ec as TargetIp
 * so the body can be jmp+int3. Native tests still call lom_body.
 */
#include "lom.h"

#define LOM_SELF_005399c0 1

#ifndef G241_NATIVE_TEST
__attribute__((used)) void *g241_RtlUnwind = (void *)0x00548e00;
#define FUN_RtlUnwind ((void (__stdcall *)(void *, void *, void *, void *))g241_RtlUnwind)
#else
void __stdcall stub_RtlUnwind(void *frame, void *tip, void *rec, void *retval);
#define FUN_RtlUnwind stub_RtlUnwind
#endif

void rb_005399ec(void);
void lom_body_005399c0(void *frame, unsigned *rec)
    __asm__("lom_body_005399c0");

void lom_body_005399c0(void *frame, unsigned *rec)
{
  FUN_RtlUnwind(frame, (void *)rb_005399ec, rec, (void *)0);
  if (rec != 0) {
    rec[1] = rec[1] & ~2u;
  }
}

__attribute__((naked)) void rb_005399c0(void)
{
  __asm__(
    "  pushl %ebp\n"
    "  movl %esp, %ebp\n"
    "  subl $8, %esp\n"
    "  pushl %ebx\n"
    "  pushl %esi\n"
    "  pushl %edi\n"
    "  movl %fs:0, %eax\n"
    "  movl %eax, -8(%ebp)\n"
    "  movl $_rb_005399ec, -4(%ebp)\n"
#ifndef G241_NATIVE_TEST
    "  pushl $0\n"
    "  pushl 0xc(%ebp)\n"
    "  pushl $_rb_005399ec\n"
    "  pushl 8(%ebp)\n"
    "  calll *_g241_RtlUnwind\n"
#else
    "  pushl 0xc(%ebp)\n"
    "  pushl 8(%ebp)\n"
    "  call lom_body_005399c0\n"
    "  addl $8, %esp\n"
#endif
    ".globl _rb_005399ec\n"
    "_rb_005399ec:\n"
    "  movl 0xc(%ebp), %eax\n"
    "  movl 4(%eax), %ecx\n"
    "  andl $0xfffffffd, %ecx\n"
    "  movl %ecx, 4(%eax)\n"
    "  movl %fs:0, %eax\n"
    "  movl -8(%ebp), %ebx\n"
    "  movl %eax, (%ebx)\n"
    "  movl %ebx, %fs:0\n"
    "  popl %edi\n"
    "  popl %esi\n"
    "  popl %ebx\n"
    "  movl %ebp, %esp\n"
    "  popl %ebp\n"
    "  retl $8\n"
  );
}
