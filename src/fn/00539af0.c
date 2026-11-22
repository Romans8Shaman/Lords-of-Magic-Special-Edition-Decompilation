/* Hand C for lomse.exe FUN_00539af0 @ 0x00539af0 (204 bytes, __cdecl).
 * g254, shim-plus-C. The original builds a custom EH node at [ebp-0x28]
 * whose handler is already-fn 00539bc0 (g249), stores param_5 / param_2 /
 * param_6 / param_7 in the node, then writes continuation 00539b8c, esp,
 * and ebp, and links the node at fs:0. It sets [ebp-0x34]=1, stores
 * param_1 and param_3 at [ebp-0x30]/[ebp-0x2c], cdecl-calls already-fn
 * 0053efa0 (_getptd) with those two slot values already pushed, then
 * cdecl-calls [ptd+0x68](*param_1, &pair). On a normal return it sets
 * [ebp-0x34]=0. The continuation at 00539b8c (a mid-entry; standalone
 * keeps it as a bodyref) unlinks fs:0: if [ebp-4] is 0 it just restores
 * the saved next, otherwise it stitches [fs:0]->next into the saved next
 * and pops fs:0 to that saved next, then returns [ebp-0x34]. A naked
 * shim builds that exact frame, stores its own continuation label in
 * the node so a g249-style esp/ebp/jmp lands in the shim, and uses the
 * cdecl epilogue. param_4 is unused.
 */
#include "lom.h"

#define LOM_SELF_00539af0 1

__attribute__((used)) static const unsigned g254_handler = 0x00539bc0;

#ifndef G254_NATIVE_TEST
__attribute__((used)) void *g254_getptd = (void *)0x0053efa0;
#else
void *stub_0053efa0(void);
__attribute__((used)) void *g254_getptd = (void *)stub_0053efa0;
#endif

void lom_body_00539af0(unsigned p1, unsigned *pair, unsigned *result)
    __asm__("lom_body_00539af0");

void lom_body_00539af0(unsigned p1, unsigned *pair, unsigned *result)
{
  unsigned *ptd;
#ifdef G254_NATIVE_TEST
  ptd = (unsigned *)stub_0053efa0();
  ((void (*)(unsigned, unsigned *))ptd[0x68 / 4])(*(unsigned *)(uintptr_t)p1, pair);
#else
  {
    unsigned a0 = *(unsigned *)(uintptr_t)p1;
    __asm__ volatile (
      "pushl %[pair]\n"
      "pushl %[a0]\n"
      "calll *_g254_getptd\n"
      "calll *0x68(%%eax)\n"
      "addl $8, %%esp\n"
      :
      : [pair]"m"(pair), [a0]"m"(a0)
      : "eax", "ecx", "edx", "memory"
    );
  }
#endif
  *result = 0;
}

__attribute__((naked)) void rb_00539af0(void)
{
  __asm__(
    "  pushl %ebp\n"
    "  movl %esp, %ebp\n"
    "  subl $0x34, %esp\n"
    "  pushl %ebx\n"
    "  pushl %esi\n"
    "  pushl %edi\n"
    "  movl $0, -0x28(%ebp)\n"
    "  movl $0x539bc0, -0x24(%ebp)\n"
    "  movl 0x18(%ebp), %eax\n"
    "  movl %eax, -0x20(%ebp)\n"
    "  movl 0xc(%ebp), %ecx\n"
    "  movl %ecx, -0x1c(%ebp)\n"
    "  movl 0x1c(%ebp), %edx\n"
    "  movl %edx, -0x18(%ebp)\n"
    "  movl 0x20(%ebp), %eax\n"
    "  movl %eax, -0x14(%ebp)\n"
    "  movl $0, -0x10(%ebp)\n"
    "  movl $0, -0xc(%ebp)\n"
    "  movl $0, -8(%ebp)\n"
    "  movl $0, -4(%ebp)\n"
    "  movl $1f, -0x10(%ebp)\n"
    "  movl %esp, -0xc(%ebp)\n"
    "  movl %ebp, -8(%ebp)\n"
    "  movl %fs:0, %eax\n"
    "  movl %eax, -0x28(%ebp)\n"
    "  leal -0x28(%ebp), %eax\n"
    "  movl %eax, %fs:0\n"
    "  movl $1, -0x34(%ebp)\n"
    "  movl 8(%ebp), %ecx\n"
    "  movl %ecx, -0x30(%ebp)\n"
    "  movl 0x10(%ebp), %edx\n"
    "  movl %edx, -0x2c(%ebp)\n"
    "  leal -0x34(%ebp), %eax\n"
    "  pushl %eax\n"
    "  leal -0x30(%ebp), %eax\n"
    "  pushl %eax\n"
    "  pushl 8(%ebp)\n"
    "  call lom_body_00539af0\n"
    "  addl $12, %esp\n"
    "1:\n"
    "  cmpl $0, -4(%ebp)\n"
    "  je 2f\n"
    "  movl %fs:0, %ebx\n"
    "  movl (%ebx), %eax\n"
    "  movl -0x28(%ebp), %ebx\n"
    "  movl %eax, (%ebx)\n"
    "  movl %ebx, %fs:0\n"
    "  jmp 3f\n"
    "2:\n"
    "  movl -0x28(%ebp), %eax\n"
    "  movl %eax, %fs:0\n"
    "3:\n"
    "  movl -0x34(%ebp), %eax\n"
    "  popl %edi\n"
    "  popl %esi\n"
    "  popl %ebx\n"
    "  movl %ebp, %esp\n"
    "  popl %ebp\n"
    "  retl\n"
  );
}
