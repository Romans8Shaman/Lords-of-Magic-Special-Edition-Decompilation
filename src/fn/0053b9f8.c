/* Hand C for lomse.exe FUN_0053b9f8 @ 0x0053b9f8 (189 bytes, __cdecl).
 * g253, shim-plus-C. The original is _except_handler3. A naked shim builds
 * the exact ebp frame (sub esp,8, saved ebx/esi/edi and a second saved ebp,
 * cld) and the cdecl epilogue, and passes the [ebp-8] / [ebp-4] slots into
 * the C body. If ExceptionFlags [rec+4] & 6, the body cdecl-calls already-fn
 * __local_unwind2 00539d12(frame, -1) with ebp set to frame+0x10 and returns
 * 1. Otherwise it stores rec and context in those two slots, writes the
 * pointer to [frame-4], and walks the scope table ([frame+8] table, [frame+0xc]
 * try). Filter-zero entries just advance to the enclosing try. A nonzero
 * filter is called with ebp=frame+0x10; 0 continues, <0 returns 0, and >0
 * cdecl-calls already-fn __global_unwind2 00539cd0(frame) with this handler's
 * ebp still in place, then __local_unwind2(frame, try) and already-fn
 * __NLG_Notify 00539da6 (eax=handler, pushed 1, stdcall ret 4) with ebp=
 * frame+0x10, writes the enclosing try into [frame+0xc], and calls the
 * handler still with that ebp. After a handler returns, this C restores its
 * own ebp so the walk can continue (the original leaves ebp at frame+0x10
 * and keeps going in ebx/esi, which is observationally the same until the
 * next filter, which switches ebp again). No mid-entry in the 189-byte body.
 */
#include "lom.h"

#define LOM_SELF_0053b9f8 1

#ifndef G253_NATIVE_TEST
__attribute__((used)) void *g253_gu = (void *)0x00539cd0;
__attribute__((used)) void *g253_lu = (void *)0x00539d12;
__attribute__((used)) void *g253_nlg = (void *)0x00539da6;
#else
void stub_00539cd0(void *frame);
void stub_00539d12(void *frame, int stop);
void __stdcall stub_00539da6(unsigned code);
__attribute__((used)) void *g253_gu = (void *)stub_00539cd0;
__attribute__((used)) void *g253_lu = (void *)stub_00539d12;
__attribute__((used)) void *g253_nlg = (void *)stub_00539da6;
#endif


__attribute__((noinline)) static void g253_lu_switch(void *frame, int stop)
{
  __asm__ volatile (
    "pushl %%ebp\n"
    "movl %0, %%ebx\n"
    "leal 0x10(%%ebx), %%ebp\n"
    "pushl %1\n"
    "pushl %%ebx\n"
    "calll *_g253_lu\n"
    "addl $8, %%esp\n"
    "popl %%ebp\n"
    :
    : "r"(frame), "r"(stop)
    : "eax", "ebx", "ecx", "edx", "memory"
  );
}

__attribute__((noinline)) static int g253_call_filter(void *frame, void *fn)
{
  int ret;
  __asm__ volatile (
    "pushl %%ebp\n"
    "movl %1, %%ecx\n"
    "movl %2, %%edx\n"
    "leal 0x10(%%ecx), %%ebp\n"
    "call *%%edx\n"
    "popl %%ebp\n"
    : "=a"(ret)
    : "r"(frame), "r"(fn)
    : "ecx", "edx", "memory"
  );
  return ret;
}

__attribute__((naked)) static void g253_nlg_and_handler(void *frame, unsigned handler, unsigned enclosing)
{
  __asm__(
    "  pushl %ebp\n"
    "  movl 8(%esp), %ebx\n"
    "  movl 12(%esp), %edi\n"
    "  leal 0x10(%ebx), %ebp\n"
    "  pushl $1\n"
    "  movl %edi, %eax\n"
    "  calll *_g253_nlg\n"
    "  movl 8(%esp), %ebx\n"
    "  movl 12(%esp), %edi\n"
    "  movl 16(%esp), %ecx\n"
    "  movl %ecx, 0xc(%ebx)\n"
    "  call *%edi\n"
    "  popl %ebp\n"
    "  retl\n"
  );
}


unsigned lom_body_0053b9f8(unsigned *rec, unsigned *frame, unsigned ctx,
                           unsigned *slot_rec, unsigned *slot_ctx)
    __asm__("lom_body_0053b9f8");

unsigned lom_body_0053b9f8(unsigned *rec, unsigned *frame, unsigned ctx,
                           unsigned *slot_rec, unsigned *slot_ctx)
{
  int esi;
  unsigned *table;
  int filt_ret;
  unsigned handler, enclosing, filter;

  if ((rec[1] & 6u) != 0) {
    g253_lu_switch(frame, -1);
    return 1;
  }

  *slot_rec = (unsigned)(uintptr_t)rec;
  *slot_ctx = ctx;
  frame[-1] = (unsigned)(uintptr_t)slot_rec;
  esi = (int)frame[3];
  for (;;) {
    if (esi == -1) {
      return 1;
    }
    table = (unsigned *)frame[2];
    filter = table[(unsigned)esi * 3 + 1];
    if (filter != 0) {
      filt_ret = g253_call_filter(frame, (void *)(uintptr_t)filter);
      if (filt_ret < 0) {
        return 0;
      }
      if (filt_ret > 0) {
        table = (unsigned *)frame[2];
        handler = table[(unsigned)esi * 3 + 2];
        enclosing = table[(unsigned)esi * 3];
#ifdef G253_NATIVE_TEST
        stub_00539cd0(frame);
#else
        __asm__ volatile (
          "pushl %0\n"
          "calll *_g253_gu\n"
          "addl $4, %%esp\n"
          :
          : "r"(frame)
          : "eax", "ecx", "edx", "memory"
        );
#endif
        g253_lu_switch(frame, esi);
        g253_nlg_and_handler(frame, handler, enclosing);
      }
    }
    table = (unsigned *)frame[2];
    esi = (int)table[(unsigned)esi * 3];
  }
}

__attribute__((naked)) void rb_0053b9f8(void)
{
  __asm__(
    "  pushl %ebp\n"
    "  movl %esp, %ebp\n"
    "  subl $8, %esp\n"
    "  pushl %ebx\n"
    "  pushl %esi\n"
    "  pushl %edi\n"
    "  pushl %ebp\n"
    "  cld\n"
    "  leal -4(%ebp), %eax\n"
    "  pushl %eax\n"
    "  leal -8(%ebp), %eax\n"
    "  pushl %eax\n"
    "  pushl 0x10(%ebp)\n"
    "  pushl 0xc(%ebp)\n"
    "  pushl 8(%ebp)\n"
    "  call lom_body_0053b9f8\n"
    "  addl $20, %esp\n"
    "  popl %ebp\n"
    "  popl %edi\n"
    "  popl %esi\n"
    "  popl %ebx\n"
    "  movl %ebp, %esp\n"
    "  popl %ebp\n"
    "  retl\n"
  );
}
