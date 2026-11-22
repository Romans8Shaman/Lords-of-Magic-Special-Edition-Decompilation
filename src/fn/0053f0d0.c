/* Hand C for lomse.exe FUN_0053f0d0 @ 0x0053f0d0 (93/119 bytes, __cdecl).
 * g244, shim-plus-C. The original is terminate(): it builds a standard ebp /
 * _except_handler3 frame (next, handler 0053b9f8, scope 0x54efe8, try=-1,
 * sub esp,8, saved ebx/esi/edi, [ebp-0x18]=esp), sets try=0, calls already-fn
 * _getptd 0053efa0, and if [eax+0x60] is a terminate handler it sets try=1,
 * calls _getptd again, thiscall/cdecl-calls [eax+0x60], then try=0. It then
 * sets try=-1 and calls already-fn _abort thunk 0053f147. Scope-table
 * mid-entries 0053f11a (filter: return 1) and 0053f120 (catch: mov
 * esp,[ebp-0x18]) stay original bytes under a 5-byte entry hook; standalone
 * should keep them as bodyrefs. A naked shim builds the exact fs:0 /
 * scope-table frame and cdecl epilogue. The C body uses the try slot.
 */
#include "lom.h"

#define LOM_SELF_0053f0d0 1

#ifndef G244_NATIVE_TEST
__attribute__((used)) void *g244_getptd = (void *)0x0053efa0;
__attribute__((used)) void *g244_abort  = (void *)0x0053f147;
#else
void *stub_getptd(void);
unsigned stub_abort(void);
#endif

#ifndef G244_SHIM_HANDLER
#define G244_SHIM_HANDLER 0x53b9f8
#endif
#ifndef G244_SHIM_SCOPE
#define G244_SHIM_SCOPE 0x54efe8
#endif
#define G244_STRX(x) #x
#define G244_STR(x) G244_STRX(x)
#define G244_SHIM_HANDLER_STR G244_STR(G244_SHIM_HANDLER)
#define G244_SHIM_SCOPE_STR G244_STR(G244_SHIM_SCOPE)

__attribute__((used)) static const unsigned g244_seh_filter = 0x0053f11a;
__attribute__((used)) static const unsigned g244_seh_catch  = 0x0053f120;

unsigned lom_body_0053f0d0(int *trylevel)
    __asm__("lom_body_0053f0d0");

unsigned lom_body_0053f0d0(int *trylevel)
{
  unsigned ptd, fn, r;
  *trylevel = 0;
#ifdef G244_NATIVE_TEST
  ptd = (unsigned)stub_getptd();
#else
  __asm__ volatile (
    "calll *_g244_getptd\n"
    : "=a"(ptd)
    :
    : "ecx", "edx", "memory"
  );
#endif
  fn = *(unsigned *)(ptd + 0x60);
  if (fn != 0) {
    *trylevel = 1;
#ifdef G244_NATIVE_TEST
    ptd = (unsigned)stub_getptd();
    fn = *(unsigned *)(ptd + 0x60);
    ((void (*)(void))fn)();
#else
    __asm__ volatile (
      "calll *_g244_getptd\n"
      : "=a"(ptd)
      :
      : "ecx", "edx", "memory"
    );
    fn = *(unsigned *)(ptd + 0x60);
    __asm__ volatile (
      "calll *%0\n"
      :
      : "r"(fn)
      : "eax", "ecx", "edx", "memory"
    );
#endif
    *trylevel = 0;
  }
  *trylevel = -1;
#ifdef G244_NATIVE_TEST
  r = stub_abort();
#else
  __asm__ volatile (
    "calll *_g244_abort\n"
    : "=a"(r)
    :
    : "ecx", "edx", "memory"
  );
#endif
  return r;
}

__attribute__((naked)) void rb_0053f0d0(void)
{
  __asm__(
    "  pushl %ebp\n"
    "  movl %esp, %ebp\n"
    "  pushl $-1\n"
    "  pushl $" G244_SHIM_SCOPE_STR "\n"
    "  pushl $" G244_SHIM_HANDLER_STR "\n"
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
    "  call lom_body_0053f0d0\n"
    "  addl $4, %esp\n"
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

extern void rb_0053f147(void);

__attribute__((naked)) void rb_0053f11a(void)
{
  __asm__(
    "  movl $1, %eax\n"
    "  retl\n"
  );
}

__attribute__((naked)) void rb_0053f120(void)
{
  __asm__(
    "  movl -0x18(%ebp), %esp\n"
    "  movl $0, -4(%ebp)\n"
    "  movl $0xffffffff, -4(%ebp)\n"
    "  calll _rb_0053f147\n"
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
