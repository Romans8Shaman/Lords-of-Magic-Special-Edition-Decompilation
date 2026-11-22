/* Hand C for lomse.exe FUN_0053eb6f @ 0x0053eb6f (87 bytes, through the ret
 * at 0053ebc5). g236. EH catch-filter helper: no frame of its own; reads the
 * caller's [ebp+0xc]/[ebp+8]/[ebp-0x2c]/[ebp-0x28]/[ebp-0x1c]/[ebp-0x20]/
 * [ebp-0x24]. Writes [esi-4], then twice calls already-C 0053efa0 (stdcall
 * no args) to store [ebp-0x1c] at [eax+0x6c] and [ebp-0x20] at [eax+0x70].
 * If [edi] looks like a C++ EH record (magic 0xE06D7363, count 3, type
 * 0x19930520) and [ebp-0x24]==0 and ebx!=0, calls g229 00539d7a and then
 * still-asmfn 0053ee20(edi, eax) cdecl. A naked shim captures the slots,
 * sets esi/edi/ebx like the original movs, and does a cdecl ret. Mid-entry
 * rb_0053eb78 is the continuation after the three movs (called from already-fn
 * 0053ea80); it is not hooked and uses the caller's current esi/edi/ebx.
 */
#include "lom.h"

#define LOM_SELF_0053eb6f 1

#ifndef G236_NATIVE_TEST
#define FUN_0053efa0 ((unsigned (__stdcall *)(void))0x0053efa0)
#define FUN_00539d7a ((int (__cdecl *)(void))0x00539d7a)
#define FUN_0053ee20 ((unsigned (__cdecl *)(unsigned, unsigned))0x0053ee20)
#else
unsigned __stdcall stub_0053efa0(void);
int stub_00539d7a(void);
unsigned stub_0053ee20(unsigned rec, unsigned abn);
#define FUN_0053efa0 stub_0053efa0
#define FUN_00539d7a stub_00539d7a
#define FUN_0053ee20 stub_0053ee20
#endif

unsigned lom_body_0053eb6f(unsigned esi, unsigned edi, unsigned ebx,
                           unsigned m28, unsigned m1c, unsigned m20,
                           unsigned m24)
    __asm__("lom_body_0053eb6f");

unsigned lom_body_0053eb6f(unsigned esi, unsigned edi, unsigned ebx,
                           unsigned m28, unsigned m1c, unsigned m20,
                           unsigned m24)
{
  unsigned eax;
  *(unsigned *)(esi - 4) = m28;
  eax = FUN_0053efa0();
  *(unsigned *)(eax + 0x6c) = m1c;
  eax = FUN_0053efa0();
  *(unsigned *)(eax + 0x70) = m20;
  if (*(unsigned *)edi == 0xE06D7363u
      && *(unsigned *)(edi + 0x10) == 3
      && *(unsigned *)(edi + 0x14) == 0x19930520u
      && m24 == 0
      && ebx != 0) {
    return FUN_0053ee20(edi, (unsigned)FUN_00539d7a());
  }
  if (*(unsigned *)edi == 0xE06D7363u
      && *(unsigned *)(edi + 0x10) == 3
      && *(unsigned *)(edi + 0x14) == 0x19930520u)
    return m24;
  return eax;
}

__attribute__((naked)) void rb_0053eb6f(void)
{
  __asm__(
    "  movl 0xc(%ebp), %esi\n"
    "  movl 8(%ebp), %edi\n"
    "  movl -0x2c(%ebp), %ebx\n"
    "  pushl -0x24(%ebp)\n"
    "  pushl -0x20(%ebp)\n"
    "  pushl -0x1c(%ebp)\n"
    "  pushl -0x28(%ebp)\n"
    "  pushl %ebx\n"
    "  pushl %edi\n"
    "  pushl %esi\n"
    "  call lom_body_0053eb6f\n"
    "  addl $28, %esp\n"
    "  retl\n"
  );
}

__attribute__((naked)) void rb_0053eb78(void)
{
  /* Mid-entry 0053eb78: same body, but esi/edi/ebx are already live. */
  __asm__(
    "  pushl -0x24(%ebp)\n"
    "  pushl -0x20(%ebp)\n"
    "  pushl -0x1c(%ebp)\n"
    "  pushl -0x28(%ebp)\n"
    "  pushl %ebx\n"
    "  pushl %edi\n"
    "  pushl %esi\n"
    "  call lom_body_0053eb6f\n"
    "  addl $28, %esp\n"
    "  retl\n"
  );
}
