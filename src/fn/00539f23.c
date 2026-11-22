/* Hand C for lomse.exe FUN_00539f23 @ 0x00539f23 (29 bytes, through the ret
 * at 00539f3f). g234. EH-vector helper entry: no frame of its own; reads the
 * caller's [ebp+0xc]/[ebp+8]/[ebp-0x1c]/[ebp+0x10]/[ebp+0x14]. If
 * [ebp-0x1c] is 0, calls __ehvec helper 00539f60 stdcall(esi, edi, a10, a14)
 * and returns that eax; otherwise returns [ebp-0x1c]. A naked shim only
 * captures those slots and does a cdecl ret. Mid-entry rb_00539f29 is the
 * continuation after the two movs (called from already-fn 00539eb0); it is
 * not hooked and uses the caller's current edi/esi. 00539f60 stays asmfn.
 */
#include "lom.h"

#define LOM_SELF_00539f23 1

#ifndef G234_NATIVE_TEST
#define FUN_00539f60 ((unsigned (__stdcall *)(unsigned, unsigned, unsigned, unsigned))0x00539f60)
#else
unsigned __stdcall stub_00539f60(unsigned a, unsigned b, unsigned c, unsigned d);
#define FUN_00539f60 stub_00539f60
#endif

unsigned lom_body_00539f23(unsigned edi, unsigned esi, unsigned flag,
                           unsigned a10, unsigned a14)
    __asm__("lom_body_00539f23");

unsigned lom_body_00539f23(unsigned edi, unsigned esi, unsigned flag,
                           unsigned a10, unsigned a14)
{
  if (flag == 0)
    return FUN_00539f60(esi, edi, a10, a14);
  return flag;
}

__attribute__((naked)) void rb_00539f23(void)
{
  __asm__(
    "  movl 0xc(%ebp), %edi\n"
    "  movl 8(%ebp), %esi\n"
    "  pushl 0x14(%ebp)\n"
    "  pushl 0x10(%ebp)\n"
    "  pushl -0x1c(%ebp)\n"
    "  pushl %esi\n"
    "  pushl %edi\n"
    "  call lom_body_00539f23\n"
    "  addl $20, %esp\n"
    "  retl\n"
  );
}

__attribute__((naked)) void rb_00539f29(void)
{
  /* Mid-entry 00539f29: same body, but edi/esi are already live (not reloaded). */
  __asm__(
    "  pushl 0x14(%ebp)\n"
    "  pushl 0x10(%ebp)\n"
    "  pushl -0x1c(%ebp)\n"
    "  pushl %esi\n"
    "  pushl %edi\n"
    "  call lom_body_00539f23\n"
    "  addl $20, %esp\n"
    "  retl\n"
  );
}
