/* Hand C for lomse.exe FUN_0053ea80 @ 0x0053ea80 (183 bytes, __cdecl).
 * g252, shim-plus-C. The original builds an ebp / _except_handler3 frame
 * (next, handler 0053b9f8, scope 0x54efb0, try=-1, add esp,-0x1c, saved
 * ebx/esi/edi, saved esp at [ebp-0x18]). It saves param_6 at [ebp-0x2c],
 * 0 at [ebp-0x24], and [param_2-4] at [ebp-0x28], then four times calls
 * already-fn 0053efa0 (_getptd): first two save [ptd+0x6c] and [ptd+0x70]
 * at [ebp-0x1c] and [ebp-0x20], next two write param_1 and param_3 into
 * those ptd slots. It sets try=0 then try=1, cdecl-calls already-fn
 * 00539a60(param_2, param_4, param_5, param_6, param_7), stores the result
 * in ebx and [ebp-0x2c], sets try=0 then try=-1, and calls mid-entry
 * rb_0053eb78 (source label in already-fn 0053eb6f / g236, not hooked).
 * 0053eb78 restores [param_2-4] and the ptd slots
 * and may call already-fn 0053ee20. Scope-table 0x54efb0 entry 0 is a
 * finally pointing at already-fn 0053eb6f; entry 1 is a filter/handler
 * pair at already-fn 0053eb37 / 0053eb44. No mid-entry in the 183-byte
 * body. A naked shim builds the exact fs:0 / local-slot frame, keeps
 * esi=param_2, edi=param_1 and ebx=result for the rb_0053eb78 call, and
 * uses the cdecl epilogue returning that result.
 */
#include "lom.h"

#define LOM_SELF_0053ea80 1

#ifndef G252_NATIVE_TEST
__attribute__((used)) void *g252_getptd = (void *)0x0053efa0;
__attribute__((used)) void *g252_find = (void *)0x00539a60;
extern void rb_0053eb78(void);
__attribute__((used)) void *g252_cleanup = (void *)rb_0053eb78;
#else
void *stub_0053efa0(void);
unsigned stub_00539a60(unsigned, unsigned, unsigned, unsigned, unsigned);
void stub_0053eb78(void);
__attribute__((used)) void *g252_getptd = (void *)stub_0053efa0;
__attribute__((used)) void *g252_find = (void *)stub_00539a60;
__attribute__((used)) void *g252_cleanup = (void *)stub_0053eb78;
#endif

#ifndef G252_SHIM_HANDLER
#define G252_SHIM_HANDLER 0x53b9f8
#endif
#ifndef G252_SHIM_SCOPE
#define G252_SHIM_SCOPE 0x54efb0
#endif
#define G252_STRX(x) #x
#define G252_STR(x) G252_STRX(x)
#define G252_SHIM_HANDLER_STR G252_STR(G252_SHIM_HANDLER)
#define G252_SHIM_SCOPE_STR G252_STR(G252_SHIM_SCOPE)

unsigned lom_body_0053ea80(unsigned p1, unsigned p2, unsigned p3, unsigned p4,
                           unsigned p5, unsigned p6, unsigned p7,
                           unsigned *slot_2c, unsigned *slot_24, unsigned *slot_28,
                           unsigned *slot_1c, unsigned *slot_20, int *trylevel)
    __asm__("lom_body_0053ea80");

unsigned lom_body_0053ea80(unsigned p1, unsigned p2, unsigned p3, unsigned p4,
                           unsigned p5, unsigned p6, unsigned p7,
                           unsigned *slot_2c, unsigned *slot_24, unsigned *slot_28,
                           unsigned *slot_1c, unsigned *slot_20, int *trylevel)
{
  unsigned *ptd;
  unsigned r;
  *slot_2c = p6;
  *slot_24 = 0;
  *slot_28 = *(unsigned *)(p2 - 4);
#ifdef G252_NATIVE_TEST
  ptd = (unsigned *)stub_0053efa0();
  *slot_1c = ptd[0x6c / 4];
  ptd = (unsigned *)stub_0053efa0();
  *slot_20 = ptd[0x70 / 4];
  ptd = (unsigned *)stub_0053efa0();
  ptd[0x6c / 4] = p1;
  ptd = (unsigned *)stub_0053efa0();
  ptd[0x70 / 4] = p3;
  *trylevel = 0;
  *trylevel = 1;
  r = stub_00539a60(p2, p4, p5, p6, p7);
#else
  __asm__ volatile (
    "calll *_g252_getptd\n"
    "movl 0x6c(%%eax), %%ecx\n"
    "movl %%ecx, %0\n"
    : "=m"(*slot_1c)
    :
    : "eax", "ecx", "edx", "memory"
  );
  __asm__ volatile (
    "calll *_g252_getptd\n"
    "movl 0x70(%%eax), %%edx\n"
    "movl %%edx, %0\n"
    : "=m"(*slot_20)
    :
    : "eax", "ecx", "edx", "memory"
  );
  __asm__ volatile (
    "calll *_g252_getptd\n"
    "movl %0, 0x6c(%%eax)\n"
    :
    : "r"(p1)
    : "eax", "ecx", "edx", "memory"
  );
  __asm__ volatile (
    "calll *_g252_getptd\n"
    "movl %0, 0x70(%%eax)\n"
    :
    : "r"(p3)
    : "eax", "ecx", "edx", "memory"
  );
  *trylevel = 0;
  *trylevel = 1;
  __asm__ volatile (
    "pushl %5\n"
    "pushl %4\n"
    "pushl %3\n"
    "pushl %2\n"
    "pushl %1\n"
    "calll *_g252_find\n"
    "addl $20, %%esp\n"
    : "=a"(r)
    : "r"(p2), "r"(p4), "r"(p5), "r"(p6), "r"(p7)
    : "ecx", "edx", "memory"
  );
#endif
  *slot_2c = r;
  *trylevel = 0;
  return r;
}

__attribute__((naked)) void rb_0053ea80(void)
{
  __asm__(
    "  pushl %ebp\n"
    "  movl %esp, %ebp\n"
    "  pushl $-1\n"
    "  pushl $" G252_SHIM_SCOPE_STR "\n"
    "  pushl $" G252_SHIM_HANDLER_STR "\n"
    "  movl %fs:0, %eax\n"
    "  pushl %eax\n"
    "  movl %esp, %fs:0\n"
    "  addl $-0x1c, %esp\n"
    "  pushl %ebx\n"
    "  pushl %esi\n"
    "  pushl %edi\n"
    "  movl %esp, -0x18(%ebp)\n"
    "  leal -4(%ebp), %eax\n"
    "  pushl %eax\n"
    "  leal -0x20(%ebp), %eax\n"
    "  pushl %eax\n"
    "  leal -0x1c(%ebp), %eax\n"
    "  pushl %eax\n"
    "  leal -0x28(%ebp), %eax\n"
    "  pushl %eax\n"
    "  leal -0x24(%ebp), %eax\n"
    "  pushl %eax\n"
    "  leal -0x2c(%ebp), %eax\n"
    "  pushl %eax\n"
    "  pushl 0x20(%ebp)\n"
    "  pushl 0x1c(%ebp)\n"
    "  pushl 0x18(%ebp)\n"
    "  pushl 0x14(%ebp)\n"
    "  pushl 0x10(%ebp)\n"
    "  pushl 0xc(%ebp)\n"
    "  pushl 8(%ebp)\n"
    "  call lom_body_0053ea80\n"
    "  addl $52, %esp\n"
    "  movl %eax, %ebx\n"
    "  movl 0xc(%ebp), %esi\n"
    "  movl 8(%ebp), %edi\n"
    "  movl $-1, -4(%ebp)\n"
    "  calll *_g252_cleanup\n"
    "  movl %ebx, %eax\n"
    "  movl -0x10(%ebp), %ecx\n"
    "  movl %ecx, %fs:0\n"
    "  popl %edi\n"
    "  popl %esi\n"
    "  popl %ebx\n"
    "  movl %ebp, %esp\n"
    "  popl %ebp\n"
    "  retl\n"
  );
}
