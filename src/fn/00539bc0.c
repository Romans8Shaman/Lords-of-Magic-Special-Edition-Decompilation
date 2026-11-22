/* Hand C for lomse.exe FUN_00539bc0 @ 0x00539bc0 (124/129 bytes, __cdecl).
 * g249, shim-plus-C. The original saves ebx/esi/edi on an ebp frame, does
 * cld, and inspects ExceptionFlags at [param_1+4]. If those flags & 0x66
 * are set it stores 1 at [param_2+0x24] and returns 1. Otherwise it calls
 * already-fn 0053e4c0 (cdecl, eight arguments), and if [param_2+0x24] is
 * still 0 it calls already-fn 005399c0 (stdcall RtlUnwind wrapper:
 * frame=param_2, rec=param_1). It then loads esp from [param_2+0x1c], ebp
 * from [param_2+0x20], and jumps to *[param_2+0x18]. A naked shim builds
 * that ebp / saved-reg / cld frame, runs the C body, and either returns 1
 * or performs that exact esp/ebp/jmp continuation. There is no mid-entry
 * in the 124-byte body.
 */
#include "lom.h"

#define LOM_SELF_00539bc0 1

#ifndef G249_NATIVE_TEST
__attribute__((used)) void *g249_e4c0 = (void *)0x0053e4c0;
__attribute__((used)) void *g249_unwind = (void *)0x005399c0;
#else
unsigned stub_0053e4c0(unsigned, unsigned, unsigned, unsigned, unsigned, unsigned, unsigned, unsigned);
void __stdcall stub_005399c0(void *frame, unsigned *rec);
#endif

unsigned lom_body_00539bc0(unsigned *rec, unsigned *frame, unsigned p3, int *do_jump)
    __asm__("lom_body_00539bc0");

unsigned lom_body_00539bc0(unsigned *rec, unsigned *frame, unsigned p3, int *do_jump)
{
  unsigned r;
  *do_jump = 0;
  if ((rec[1] & 0x66u) != 0) {
    frame[9] = 1; /* +0x24 */
    return 1;
  }
#ifdef G249_NATIVE_TEST
  r = stub_0053e4c0((unsigned)rec, frame[3], p3, 0, frame[2], frame[4], frame[5], 1);
  (void)r;
#else
  /* Must be a real C call. An earlier inline-asm sequence used "m" operands
   * together with push, so each push shifted ESP and later operands were
   * the wrong stack slots (difftest: 0053e4c0 got 1,1,1,0,rec,rec,rec,1). */
  {
    unsigned (__cdecl *p_e4c0)(unsigned, unsigned, unsigned, unsigned,
                               unsigned, unsigned, unsigned, unsigned) =
        (unsigned (__cdecl *)(unsigned, unsigned, unsigned, unsigned,
                              unsigned, unsigned, unsigned, unsigned))g249_e4c0;
    r = p_e4c0((unsigned)(uintptr_t)rec, frame[3], p3, 0, frame[2], frame[4], frame[5], 1);
    (void)r;
  }
#endif
  if (frame[9] == 0) {
#ifdef G249_NATIVE_TEST
    stub_005399c0(frame, rec);
#else
    __asm__ volatile (
      "pushl %1\n"
      "pushl %0\n"
      "calll *_g249_unwind\n"
      :
      : "r"(frame), "r"(rec)
      : "eax", "ecx", "edx", "memory"
    );
#endif
  }
  *do_jump = 1;
  return 0;
}

__attribute__((naked)) void rb_00539bc0(void)
{
  __asm__(
    "  pushl %ebp\n"
    "  movl %esp, %ebp\n"
    "  pushl %ebx\n"
    "  pushl %esi\n"
    "  pushl %edi\n"
    "  cld\n"
    "  subl $4, %esp\n"
    "  movl $0, (%esp)\n"
    "  leal -16(%ebp), %eax\n"
    "  pushl %eax\n"
    "  pushl 0x10(%ebp)\n"
    "  pushl 0xc(%ebp)\n"
    "  pushl 8(%ebp)\n"
    "  call lom_body_00539bc0\n"
    "  addl $16, %esp\n"
    "  cmpl $0, -16(%ebp)\n"
    "  je 1f\n"
    "  movl 0xc(%ebp), %ebx\n"
    "  movl 0x1c(%ebx), %esp\n"
    "  movl 0x20(%ebx), %ebp\n"
    "  jmpl *0x18(%ebx)\n"
    "1:\n"
    "  movl $1, %eax\n"
    "  addl $4, %esp\n"
    "  popl %edi\n"
    "  popl %esi\n"
    "  popl %ebx\n"
    "  popl %ebp\n"
    "  retl\n"
  );
}
