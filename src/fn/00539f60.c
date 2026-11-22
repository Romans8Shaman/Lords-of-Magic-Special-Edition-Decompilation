/* Hand C for lomse.exe FUN_00539f60 @ 0x00539f60 (90/106 bytes, __stdcall ret 16).
 * g243, shim-plus-C. The original is an __ehvec-style array destructor: it
 * builds a standard ebp / _except_handler3 frame (next, handler 0053b9f8,
 * scope 0x54eea0, try=-1, sub esp,8, [ebp-0x18]=esp), sets try=0, then
 * repeatedly decrements the count slot (signed), subtracts the element size
 * from the pointer slot, and thiscall-calls the destructor in ecx, until the
 * decremented count is negative. Scope-table mid-entries 00539fa0 (filter:
 * 00539fd0 already fn) and 00539fad (catch: mov esp,[ebp-0x18]) stay original
 * bytes under a 5-byte entry hook; standalone should keep them as bodyrefs.
 * A naked shim builds the exact fs:0 / scope-table frame and ret-16 epilogue.
 * The C body uses the original pointer, count, and try slots.
 */
#include "lom.h"

#define LOM_SELF_00539f60 1

#ifndef G243_SHIM_HANDLER
#define G243_SHIM_HANDLER 0x53b9f8
#endif
#ifndef G243_SHIM_SCOPE
#define G243_SHIM_SCOPE 0x54eea0
#endif
#define G243_STRX(x) #x
#define G243_STR(x) G243_STRX(x)
#define G243_SHIM_HANDLER_STR G243_STR(G243_SHIM_HANDLER)
#define G243_SHIM_SCOPE_STR G243_STR(G243_SHIM_SCOPE)

/* Standalone bodyref anchors: scope-table filter and catch. */
__attribute__((used)) static const unsigned g243_seh_filter = 0x00539fa0;
__attribute__((used)) static const unsigned g243_seh_catch  = 0x00539fad;

void lom_body_00539f60(unsigned *ptr, unsigned size, int *count, void *dtor, int *trylevel)
    __asm__("lom_body_00539f60");

void lom_body_00539f60(unsigned *ptr, unsigned size, int *count, void *dtor, int *trylevel)
{
  *trylevel = 0;
  for (;;) {
    *count = *count - 1;
    if (*count < 0) {
      break;
    }
    *ptr = *ptr - size;
    ((void (__thiscall *)(void *))dtor)((void *)*ptr);
  }
  *trylevel = -1;
}

__attribute__((naked)) void rb_00539f60(void)
{
  __asm__(
    "  pushl %ebp\n"
    "  movl %esp, %ebp\n"
    "  pushl $-1\n"
    "  pushl $" G243_SHIM_SCOPE_STR "\n"
    "  pushl $" G243_SHIM_HANDLER_STR "\n"
    "  movl %fs:0, %eax\n"
    "  pushl %eax\n"
    "  movl %esp, %fs:0\n"
    "  subl $8, %esp\n"
    "  pushl %ebx\n"
    "  pushl %esi\n"
    "  pushl %edi\n"
    "  movl %esp, -0x18(%ebp)\n"
    "  leal -4(%ebp), %eax\n"
    "  pushl %eax\n"
    "  pushl 0x14(%ebp)\n"
    "  leal 0x10(%ebp), %eax\n"
    "  pushl %eax\n"
    "  pushl 0xc(%ebp)\n"
    "  leal 8(%ebp), %eax\n"
    "  pushl %eax\n"
    "  call lom_body_00539f60\n"
    "  addl $20, %esp\n"
    "  movl -0x10(%ebp), %ecx\n"
    "  movl %ecx, %fs:0\n"
    "  popl %edi\n"
    "  popl %esi\n"
    "  popl %ebx\n"
    "  movl %ebp, %esp\n"
    "  popl %ebp\n"
    "  retl $0x10\n"
  );
}

extern void rb_00539fd0(void);

__attribute__((naked)) void rb_00539fa0(void)
{
  __asm__(
    "  movl -0x14(%ebp), %eax\n"
    "  pushl %eax\n"
    "  calll _rb_00539fd0\n"
    "  addl $4, %esp\n"
    "  retl\n"
  );
}

__attribute__((naked)) void rb_00539fad(void)
{
  __asm__(
    "  movl -0x18(%ebp), %esp\n"
    "  movl $0xffffffff, -4(%ebp)\n"
    "  movl -0x10(%ebp), %ecx\n"
    "  movl %ecx, %fs:0\n"
    "  popl %edi\n"
    "  popl %esi\n"
    "  popl %ebx\n"
    "  movl %ebp, %esp\n"
    "  popl %ebp\n"
    "  retl $0x10\n"
  );
}
