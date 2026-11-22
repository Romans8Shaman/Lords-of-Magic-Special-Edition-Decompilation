/* Rebuilt from lomse.exe op_getplayerindicatorcolor @ 0x004bc800 (265 bytes, __cdecl).
 * HAND (2026-11-13): Ghidra REJECT extraout_ on the high half of a push edx after mov dx, [player+0x24].
 * FUN_00474e70 only uses param_4 & 0xffff, so a zero-extended ushort is equivalent.
 * 004bdce0(vm, &vm) pops the player into the vm slot; esi/orig keeps the VM for the three type-1 pushes.
 * Returns in eax whatever the original leaves there (0 if no player; last stack index or 004d4550 result). */
#include "lom.h"

#define FUN_004bdce0 ((undefined4 (__cdecl *)(void *, undefined4 *))0x004bdce0)
#define FUN_00474e70 ((uint (__thiscall *)(void *, uint *, uint *, uint *, uint))0x00474e70)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_004bc800 1

uint __cdecl rb_004bc800(void *vm)
{
  void *orig = vm;
  uint a, b, c;
  uint r;
  if (FUN_004bdce0(vm, (undefined4 *)&vm) == 0) return 0;
  FUN_00474e70((void *)0x00584ae8, &a, &b, &c, (uint)*(ushort *)((int)vm + 0x24));
  {
    if (*(int *)((int)orig + 0x54) == 0) {
      *(undefined4 *)((int)orig + 0x90) = 3;
      r = FUN_004d4550(orig);
      *(undefined4 *)((int)orig + 0x90) = 0;
      *(undefined4 *)((int)orig + 0xa4) = 0;
    } else {
      int i = *(int *)((int)orig + 0x54) - 1;
      int p = *(int *)((int)orig + 0x50);
      *(int *)((int)orig + 0x54) = i;
      *(undefined4 *)(p + i * 8) = 1;
      *(uint *)(p + 4 + i * 8) = a;
      r = (uint)i;
    }
    if (*(int *)((int)orig + 0x54) == 0) {
      *(undefined4 *)((int)orig + 0x90) = 3;
      r = FUN_004d4550(orig);
      *(undefined4 *)((int)orig + 0x90) = 0;
      *(undefined4 *)((int)orig + 0xa4) = 0;
    } else {
      int i = *(int *)((int)orig + 0x54) - 1;
      int p = *(int *)((int)orig + 0x50);
      *(int *)((int)orig + 0x54) = i;
      *(undefined4 *)(p + i * 8) = 1;
      *(uint *)(p + 4 + i * 8) = b;
      r = (uint)i;
    }
    if (*(int *)((int)orig + 0x54) == 0) {
      *(undefined4 *)((int)orig + 0x90) = 3;
      r = FUN_004d4550(orig);
      *(undefined4 *)((int)orig + 0x90) = 0;
      *(undefined4 *)((int)orig + 0xa4) = 0;
    } else {
      int i = *(int *)((int)orig + 0x54) - 1;
      int p = *(int *)((int)orig + 0x50);
      *(int *)((int)orig + 0x54) = i;
      *(undefined4 *)(p + i * 8) = 1;
      *(uint *)(p + 4 + i * 8) = c;
      r = (uint)i;
    }
    return r;
  }
}
