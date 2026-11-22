/* Rebuilt from lomse.exe FUN_0041d5f0 @ 0x0041d5f0 (962 bytes, __cdecl, 3 stack args). HAND (2026-11-13, was asmfn):
 * GS VM op "setarmydata"(army, data id, vm). army NULL: error "setarmydata - no army", then vm+0x54 < vm+0x58 ? vm+0x54++ and return
 * : vm+0x90 = 6 and finish like a stack error (004d4550(vm), vm+0x90 = 0, vm+0xa4 = 0). Otherwise pops a value (0040adb0) and
 * dispatches on the id: 0 n (1..0xf, army+0x4c), 1 level (0..DAT_005ae9c0: 004a6dd0 then army->vtbl[7]()), 2 owner (0..0xf or -1:
 * 0041d2f0), 7 d (1..0xf, army+0x50), 8 mp (read-only: error), 9 (value must be type 8: 0041da40(army, value)), 10..13 (read-only
 * errors), 0xe (army+0x30 = value), 0xf (0041d220(army, value & 7)); 3..6 and others: "invalid data id". Value conversion via
 * 004026a0 (0 -> error 0xe with the stack-error tail for ids 0/1/2/7/8; 004d41c0 messages for range errors). */
#include "lom.h"

#define DAT_005ae9c0 (*(int *)0x005ae9c0)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_0040adb0 ((undefined4 (__thiscall *)(void *, uint *))0x0040adb0)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, int *, uint *, float *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_004a6dd0 ((void (__thiscall *)(void *, int *, int, int))0x004a6dd0)
#define FUN_0041d2f0 ((void (__thiscall *)(void *, int *, int))0x0041d2f0)
#define FUN_0041da00 ((undefined4 (__fastcall *)(void *))0x0041da00)
#define FUN_0041da40 ((void (__thiscall *)(int *, uint))0x0041da40)
#define FUN_0041d220 ((void (__thiscall *)(int *, uint))0x0041d220)

#define LOM_SELF_0041d5f0 1
void __cdecl rb_0041d5f0(int *army, uint id, void *vm)
{
  uint v[2];
  int iv;
  uint uv;
  float fv;
  uint x;

  if (army == 0) {
    FUN_004d41c0(vm, (char *)0x00555b40);
    if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
      *(int *)((int)vm + 0x54) = *(int *)((int)vm + 0x54) + 1;
      return;
    }
    *(undefined4 *)((int)vm + 0x90) = 6;
    goto tail;
  }
  if (id > 0xf) goto invalid;
  switch (id) {
  case 0:
    FUN_0040adb0(vm, v);
    if (FUN_004026a0(v, &iv, &uv, &fv) == 0) goto bad;
    if (iv < 1 || iv > 0xf) { FUN_004d41c0(vm, (char *)0x00555b14); return; }
    army[0x13] = iv;
    return;
  case 1:
    FUN_0040adb0(vm, v);
    if (FUN_004026a0(v, &iv, &uv, &fv) == 0) goto bad;
    if (iv < 0 || iv >= DAT_005ae9c0) { FUN_004d41c0(vm, (char *)0x00555ae8); return; }
    FUN_004a6dd0((void *)0x005ae958, army, army[7], iv);
    ((void (__thiscall *)(int *))(*(void **)(*army + 0x1c)))(army);
    return;
  case 2:
    FUN_0040adb0(vm, v);
    if (FUN_004026a0(v, &iv, &uv, &fv) == 0) goto bad;
    if ((iv < 0 || iv >= 0x10) && iv != -1) { FUN_004d41c0(vm, (char *)0x00555ac0); return; }
    FUN_0041d2f0((void *)0x005aa12c, army, iv);
    return;
  case 7:
    FUN_0040adb0(vm, v);
    if (FUN_004026a0(v, &iv, &uv, &fv) == 0) goto bad;
    if (iv < 1 || iv > 0xf) { FUN_004d41c0(vm, (char *)0x00555a94); return; }
    army[0x14] = iv;
    return;
  case 8:
    FUN_0040adb0(vm, v);
    if (FUN_004026a0(v, &iv, &uv, &fv) == 0) goto bad;
    FUN_004d41c0(vm, (char *)0x00555a68);
    return;
  case 9:
    FUN_0040adb0(vm, v);
    if (FUN_0041da00(vm) != 0) x = 0;
    else if ((uchar)v[0] != 8) { FUN_00404ab0(vm, 0xe); x = 0; }
    else x = v[1];
    if (x == 0) return;
    FUN_0041da40(army, x);
    return;
  case 10: case 11: case 12: case 13:
    FUN_0040adb0(vm, v);
    if (FUN_004026a0(v, &iv, &uv, &fv) == 0) { FUN_00404ab0(vm, 0xe); return; }
    FUN_004d41c0(vm, (char *)0x00555a3c);
    return;
  case 14:
    FUN_0040adb0(vm, v);
    if (FUN_004026a0(v, &iv, &uv, &fv) == 0) { FUN_00404ab0(vm, 0xe); return; }
    army[0xc] = iv;
    return;
  case 15:
    FUN_0040adb0(vm, v);
    if (FUN_004026a0(v, &iv, &uv, &fv) == 0) { FUN_00404ab0(vm, 0xe); return; }
    FUN_0041d220(army, (uint)iv & 7);
    return;
  default:
    break;
  }
invalid:
  FUN_004d41c0(vm, (char *)0x00555a1c);
  FUN_0040adb0(vm, v);
  return;
bad:
  *(undefined4 *)((int)vm + 0x90) = 0xe;
tail:
  FUN_004d4550(vm);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  return;
}
