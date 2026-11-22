/* Hand C for lomse.exe FUN_0053a05f @ 0x0053a05f (29 bytes, through the ret
 * at 0053a07b). g235. Same shape as g234: no frame; reads caller's
 * [ebp+0xc]/[ebp+8]/[ebp-0x1c]/[ebp-0x20]/[ebp+0x18]. If [ebp-0x20] is 0,
 * calls 00539f60 stdcall (edi, ebx, esi, a18) and returns that eax; otherwise
 * returns [ebp-0x20]. Naked shim captures those slots and does a cdecl ret.
 * Mid-entry rb_0053a068 is the continuation after the three movs (called from
 * already-fn 00539ff0); it is not hooked and uses the caller's current
 * ebx/edi/esi. 00539f60 stays asmfn.
 */
#include "lom.h"

#define LOM_SELF_0053a05f 1

#ifndef G235_NATIVE_TEST
#define FUN_00539f60 ((unsigned (__stdcall *)(unsigned, unsigned, unsigned, unsigned))0x00539f60)
#else
unsigned __stdcall stub_00539f60(unsigned a, unsigned b, unsigned c, unsigned d);
#define FUN_00539f60 stub_00539f60
#endif

unsigned lom_body_0053a05f(unsigned ebx, unsigned edi, unsigned esi,
                           unsigned flag, unsigned a18)
    __asm__("lom_body_0053a05f");

unsigned lom_body_0053a05f(unsigned ebx, unsigned edi, unsigned esi,
                           unsigned flag, unsigned a18)
{
  if (flag == 0)
    return FUN_00539f60(edi, ebx, esi, a18);
  return flag;
}

__attribute__((naked)) void rb_0053a05f(void)
{
  __asm__(
    "  movl 0xc(%ebp), %ebx\n"
    "  movl 8(%ebp), %edi\n"
    "  movl -0x1c(%ebp), %esi\n"
    "  pushl 0x18(%ebp)\n"
    "  pushl -0x20(%ebp)\n"
    "  pushl %esi\n"
    "  pushl %edi\n"
    "  pushl %ebx\n"
    "  call lom_body_0053a05f\n"
    "  addl $20, %esp\n"
    "  retl\n"
  );
}

__attribute__((naked)) void rb_0053a068(void)
{
  /* Mid-entry 0053a068: same body, but ebx/edi/esi are already live. */
  __asm__(
    "  pushl 0x18(%ebp)\n"
    "  pushl -0x20(%ebp)\n"
    "  pushl %esi\n"
    "  pushl %edi\n"
    "  pushl %ebx\n"
    "  call lom_body_0053a05f\n"
    "  addl $20, %esp\n"
    "  retl\n"
  );
}
