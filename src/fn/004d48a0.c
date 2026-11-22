/* Hand C for lomse.exe FUN_004d48a0 @ 0x004d48a0 (368 bytes, __thiscall, ret 4).
 * g219, shim-plus-C. The original installs a C++ EH registration (next, handler
 * 0054b78b, try level), then __alloca_probe 00539630 for exactly 0x28b8 bytes,
 * then four saved regs. The local file object lives at [esp+0x14] and the
 * 10000-byte buffer at [esp+0x1b8], immediately below the registration; try
 * level is [esp+0x28d0]. 004fe720 can overrun that buffer, and unwind funclet
 * 0054b780 (already hookset asm: lea ecx,[ebp-0x28c0]; jmp 004fe9c0) needs this
 * layout. A naked shim builds that exact fs:0 / alloca frame and epilogue
 * (unlink [esp+0x28c8], add 0x28c4, ret 4). The C body uses those slots and
 * does not allocate its own object/buffer.
 */
#include "lom.h"

#define LOM_SELF_004d48a0 1

#ifndef G219_NATIVE_TEST
#define FUN_00539610 ((unsigned (__cdecl *)(char *, unsigned))0x00539610)
#define FUN_004fe720 ((void (__thiscall *)(void *, char *, unsigned, void *, int, int))0x004fe720)
#define FUN_0053a090 ((int (__cdecl *)(char *, unsigned, unsigned))0x0053a090)
#define FUN_004d41c0 ((unsigned (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_00530d00 ((unsigned (__thiscall *)(void *, unsigned char *, int))0x00530d00)
#define FUN_004d4a10 ((unsigned (__thiscall *)(void *, unsigned *))0x004d4a10)
#define FUN_005394d0 ((unsigned (__cdecl *)(unsigned))0x005394d0)
#define FUN_004fe9c0 ((void (__fastcall *)(void *))0x004fe9c0)
/* Absolute `call 0x539630` crashes llvm-mingw 20261104 WinCOFFWriter. */
__attribute__((used)) void *g219_alloca_probe = (void *)0x00539630;
#define ALLOCA_CALL "  calll *_g219_alloca_probe\n"
#else
unsigned stub_00539610(char *path, unsigned mode);
void __thiscall stub_004fe720(void *obj, char *name, unsigned mode, void *buf, int buflen, int flag);
int stub_0053a090(char *dest, unsigned fmt, unsigned name);
unsigned __thiscall stub_004d41c0(void *this, char *msg);
unsigned __thiscall stub_00530d00(void *this, unsigned char *p, int sz);
unsigned __thiscall stub_004d4a10(void *this, unsigned *p);
unsigned stub_005394d0(unsigned fp);
void __fastcall stub_004fe9c0(void *obj);
void stub_00539630(void);
#define FUN_00539610 stub_00539610
#define FUN_004fe720 stub_004fe720
#define FUN_0053a090 stub_0053a090
#define FUN_004d41c0 stub_004d41c0
#define FUN_00530d00 stub_00530d00
#define FUN_004d4a10 stub_004d4a10
#define FUN_005394d0 stub_005394d0
#define FUN_004fe9c0 stub_004fe9c0
#define ALLOCA_CALL "  call stub_00539630\n"
#endif

#define DAT_00584600 (*(int *)0x00584600)
#define DAT_00584604 (*(int *)0x00584604)

void lom_body_004d48a0(void *this, char *param_1, int *flag,
                       unsigned *obj, char *buf, int *trylevel)
    __asm__("lom_body_004d48a0");

void lom_body_004d48a0(void *this, char *param_1, int *flag,
                       unsigned *obj, char *buf, int *trylevel)
{
  unsigned *p;
  int sz, i;

  *flag = 0;
  if ((*(int *)((char *)this + 0x88) != 0) && (*(int *)((char *)this + 0x868) == 0)) {
    *flag = 1;
    *(unsigned *)((char *)this + 0x868) =
        FUN_00539610((char *)this + 0x764, 0x0055c020u);
  }
  FUN_004fe720(obj, param_1, 3, buf, 10000, 2);
  *trylevel = 0;
  if ((int)obj[1] == 1) {
    FUN_0053a090((char *)obj + 0x14, 0x0055e6b0u, (unsigned)param_1);
    FUN_004d41c0(this, (char *)obj + 0x14);
    p = 0;
    sz = 0;
  } else {
    p = (unsigned *)obj[0];
    sz = (int)obj[2];
  }
  if (p != 0) {
    if ((DAT_00584600 != 0) && (sz > 0)) {
      i = 0;
      do {
        DAT_00584604 = DAT_00584604 + (int)(signed char)((unsigned char *)p)[i];
        i = i + 1;
      } while (i < sz);
    }
    FUN_00530d00((void *)0x005d3818, (unsigned char *)p, sz);
    *(char **)((char *)this + 0x874) = param_1;
    FUN_004d4a10(this, p);
    *(unsigned *)((char *)this + 0x874) = 0;
    *(unsigned *)((char *)this + 0x6c) = *(unsigned *)((char *)this + 0x70);
  }
  if ((*flag != 0) && (*(unsigned *)((char *)this + 0x868) != 0)) {
    FUN_005394d0(*(unsigned *)((char *)this + 0x868));
    *(unsigned *)((char *)this + 0x868) = 0;
  }
  *trylevel = -1;
  FUN_004fe9c0(obj);
}

__attribute__((naked)) void rb_004d48a0(void)
{
  __asm__(
    "  pushl $-1\n"
    "  movl %fs:0, %eax\n"
    "  pushl $0x54b78b\n"
    "  pushl %eax\n"
    "  movl $0x28b8, %eax\n"
    "  movl %esp, %fs:0\n"
    ALLOCA_CALL
    "  pushl %ebx\n"
    "  pushl %ebp\n"
    "  pushl %esi\n"
    "  movl %ecx, %esi\n"
    "  pushl %edi\n"
    "  movl $0, 0x10(%esp)\n"
    "  leal 0x28d0(%esp), %eax\n"
    "  pushl %eax\n"
    "  leal 0x1bc(%esp), %eax\n"
    "  pushl %eax\n"
    "  leal 0x1c(%esp), %eax\n"
    "  pushl %eax\n"
    "  leal 0x1c(%esp), %eax\n"
    "  pushl %eax\n"
    "  pushl 0x28e8(%esp)\n"
    "  pushl %esi\n"
    "  call lom_body_004d48a0\n"
    "  addl $24, %esp\n"
    "  movl 0x28c8(%esp), %ecx\n"
    "  popl %edi\n"
    "  popl %esi\n"
    "  popl %ebp\n"
    "  movl %ecx, %fs:0\n"
    "  popl %ebx\n"
    "  addl $0x28c4, %esp\n"
    "  retl $4\n"
  );
}
