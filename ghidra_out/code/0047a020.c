
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl op_playsoundfxwait(void *vm)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  float fStack_4;
  
  pvVar1 = vm;
  _DAT_005867a0 = 0xffffffff;
  _DAT_005867b4 = 0;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uVar3 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
    uVar3 = 0;
  }
  uVar3 = uVar3 & 0xff;
  if (uVar3 == 1) {
    DAT_005867a4 = fStack_4;
  }
  else if (uVar3 == 2) {
    DAT_005867a4 = (float)((int)fStack_4 >> 8);
  }
  else {
    if (uVar3 != 4) {
      *(undefined4 *)((int)pvVar1 + 0x90) = 0xe;
      FUN_004d4550(pvVar1);
      *(undefined4 *)((int)pvVar1 + 0x90) = 0;
      *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
      return;
    }
    lVar4 = __ftol((float10)fStack_4);
    DAT_005867a4 = (float)lVar4;
  }
  _DAT_005867a8 = DAT_00586774;
  iVar2 = FUN_00478c00(&DAT_00585408,DAT_005867a4);
  if (iVar2 != -1) {
    do {
      (/*IC:0047a0ca*/**(code **)(*(int *)(&DAT_00585408)[iVar2] + 0x24))((int *)(&DAT_00585408)[iVar2],&vm);
    } while (((uint)vm & 5) != 0);
  }
  return;
}


