/* Hand C for lomse.exe __CallSettingFrame@12 @ 0x0053eed0 (76 bytes, stdcall 3 / ret $0xc).
 * g231. Logic lives in C: notify, call the catch handler, remap code 0x100 -> 2,
 * notify again, return the handler's eax. The original swaps ebp to (arg1+0xc)
 * around those calls and uses __NLG_Notify1 (00539d9d) with eax/ecx/ebp set;
 * those two contracts are the only naked shims. A thin naked entry also
 * preserves ecx (the original saves ecx across the handler) and does ret $0xc.
 * 00539d9d itself stays asmfn and is called at its original address.
 */
#include "lom.h"

#define LOM_SELF_0053eed0 1

#define FUN_00539d9d ((void (*)(void))0x00539d9d)

unsigned __stdcall lom_body_0053eed0(void *handler, unsigned rn, unsigned code)
    __asm__("lom_body_0053eed0");

/* Invoke 00539d9d with eax/ecx/ebp set and one stdcall dummy (it does ret $4).
 * Restores this shim's ebp/ebx/ecx/edx. Returns eax, which Notify1 preserves. */
__attribute__((naked))
static unsigned nlg_notify1(unsigned eax_v, unsigned ecx_v, unsigned ebp_v)
{
  __asm__(
    "  pushl %ebp\n"
    "  pushl %ebx\n"
    "  pushl %ecx\n"
    "  pushl %edx\n"
    "  movl 20(%esp), %eax\n"
    "  movl 24(%esp), %ecx\n"
    "  movl 28(%esp), %ebp\n"
#ifndef G231_NATIVE_TEST
    "  movl $0x00539d9d, %ebx\n"
#else
    "  movl $nlg_notify1_target, %ebx\n"
#endif
    "  pushl $0\n"
    "  call *%ebx\n"
    "  popl %edx\n"
    "  popl %ecx\n"
    "  popl %ebx\n"
    "  popl %ebp\n"
    "  retl\n"
  );
}

/* Call handler with ebp = new_ebp. Preserves this shim's ebx/esi/edi/ebp. Returns handler eax. */
__attribute__((naked))
static unsigned call_with_ebp(void *handler, unsigned new_ebp)
{
  __asm__(
    "  pushl %ebp\n"
    "  pushl %ebx\n"
    "  pushl %esi\n"
    "  pushl %edi\n"
    "  movl 20(%esp), %eax\n"
    "  movl 24(%esp), %ebp\n"
    "  call *%eax\n"
    "  popl %edi\n"
    "  popl %esi\n"
    "  popl %ebx\n"
    "  popl %ebp\n"
    "  retl\n"
  );
}

unsigned __stdcall lom_body_0053eed0(void *handler, unsigned rn, unsigned code)
{
  unsigned new_ebp = rn + 0xc;
  nlg_notify1((unsigned)handler, code, new_ebp);
  unsigned ret = call_with_ebp(handler, new_ebp);
  unsigned nlg_ecx = (code == 0x100u) ? 2u : code;
  nlg_notify1(ret, nlg_ecx, new_ebp);
  return ret;
}

__attribute__((naked)) void rb_0053eed0(void)
{
  __asm__(
    "  pushl %ecx\n"
    "  pushl 16(%esp)\n"
    "  pushl 16(%esp)\n"
    "  pushl 16(%esp)\n"
    "  call lom_body_0053eed0\n"
    "  popl %ecx\n"
    "  retl $0xc\n"
  );
}
