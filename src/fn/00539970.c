/* Hand C for lomse.exe FUN_00539970 @ 0x00539970 (45 bytes, __cdecl, 2 args, noreturn).
 * g257, shim-plus-C. The original builds a small ebp frame (push ecx/ebx/esi/edi,
 * stores param_2+0xc at [ebp-4]), unlinks one fs:0 node (fs:0 = [fs:0]),
 * loads target=param_1, sets esp=[param_2-4], sets ebp=param_2+0xc, and
 * jmp *target. It does not return to its caller. A naked shim builds a
 * compatible ebp frame, calls a C body that unlinks fs:0 and returns the
 * target / new esp / new ebp, then the shim switches stacks and jumps.
 * Called from 0053ea6f (push esi / push eax / call) as cdecl.
 */
#include "lom.h"

#define LOM_SELF_00539970 1

unsigned lom_body_00539970(unsigned p1, unsigned p2, unsigned *new_esp, unsigned *new_ebp)
    __asm__("lom_body_00539970");

unsigned lom_body_00539970(unsigned p1, unsigned p2, unsigned *new_esp, unsigned *new_ebp)
{
  unsigned node, next;

  __asm__ volatile ("movl %%fs:0, %0" : "=r"(node));
  next = *(unsigned *)(uintptr_t)node;
  __asm__ volatile ("movl %0, %%fs:0" :: "r"(next) : "memory");
  *new_esp = *(unsigned *)(uintptr_t)(p2 - 4);
  *new_ebp = p2 + 0xc;
  return p1;
}

__attribute__((naked)) void rb_00539970(void)
{
  /* After push ebp / 4 saved regs, esp is ebp-16. sub $8 gives slots
   * [ebp-20] (new_esp) and [ebp-24] (new_ebp), below the saved regs. */
  __asm__(
    "  pushl %ebp\n"
    "  movl %esp, %ebp\n"
    "  pushl %ecx\n"
    "  pushl %ebx\n"
    "  pushl %esi\n"
    "  pushl %edi\n"
    "  subl $8, %esp\n"
    "  leal -24(%ebp), %eax\n"
    "  pushl %eax\n"
    "  leal -20(%ebp), %eax\n"
    "  pushl %eax\n"
    "  pushl 0xc(%ebp)\n"
    "  pushl 8(%ebp)\n"
    "  call lom_body_00539970\n"
    "  movl -20(%ebp), %ecx\n"
    "  movl -24(%ebp), %ebp\n"
    "  movl %ecx, %esp\n"
    "  jmp *%eax\n"
  );
}
