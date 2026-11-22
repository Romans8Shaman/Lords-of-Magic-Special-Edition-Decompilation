/* Rebuilt from lomse.exe @ 0x004d0d40 (327 bytes, __cdecl): GS VM call helper.
 * Pushes two 8-byte VM values onto the VM stack of DAT_005845ec, runs 004d05e0
 * (vm, DAT_005845f0, DAT_005845f4), pops the result and converts it to int by
 * its type byte (1 int, 2 fixed 24.8, 4 float via _ftol); else error 0xe -> 0.
 * Hand-written from the disassembly. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005845ec (*(int *)0x005845ec)
#define DAT_005845f0 (*(uint *)0x005845f0)
#define DAT_005845f4 (*(int **)0x005845f4)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

static void vm_push(int *v)
{
  int vm = DAT_005845ec;
  int a = v[0], b = v[1];
  int sp = *(int *)(vm + 0x54);
  if (sp != 0) {
    sp = sp - 1;
    *(int *)(vm + 0x54) = sp;
    *(int *)(*(int *)(vm + 0x50) + sp * 8) = a;
    *(int *)(*(int *)(vm + 0x50) + sp * 8 + 4) = b;
  }
  else {
    *(int *)(vm + 0x90) = 3;
    FUN_004d4550((void *)vm);
    *(int *)(vm + 0x90) = 0;
    *(int *)(vm + 0xa4) = 0;
  }
}

#define LOM_SELF_004d0d40 1
int __cdecl rb_004d0d40(int *param_1, int *param_2)
{
  int vm;
  uint type;
  int val = 0;
  int sp;

  vm_push(param_1);
  vm_push(param_2);
  FUN_004d05e0((void *)DAT_005845ec, DAT_005845f0, DAT_005845f4);
  vm = DAT_005845ec;
  sp = *(int *)(vm + 0x54);
  if (sp < *(int *)(vm + 0x58)) {
    sp = sp + 1;
    *(int *)(vm + 0x54) = sp;
    type = *(uint *)(*(int *)(vm + 0x50) + sp * 8 - 8);
    val = *(int *)(*(int *)(vm + 0x50) + sp * 8 - 4);
  }
  else {
    *(int *)(vm + 0x90) = 6;
    FUN_004d4550((void *)vm);
    *(int *)(vm + 0x90) = 0;
    *(int *)(vm + 0xa4) = 0;
    type = 0;
  }
  type = type & 0xff;
  if (type == 1) return val;
  if (type == 2) return val >> 8;
  if (type == 4) return (int)__ftol((float10)__BC(float, val));
  *(int *)(vm + 0x90) = 0xe;
  FUN_004d4550((void *)vm);
  *(int *)(vm + 0x90) = 0;
  *(int *)(vm + 0xa4) = 0;
  return 0;
}
