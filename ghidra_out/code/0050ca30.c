
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0050ca30(void *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = -1;
  uVar1 = *(undefined4 *)((int)this + 0x54);
  if ((param_1 != 0) && (*(int *)((int)this + 0x58) == 0)) {
    iVar2 = 0;
    if (0 < *(short *)((int)this + 0x4e)) {
      piVar3 = (int *)(*(int *)((int)this + 0x50) + 8);
      do {
        if (*piVar3 != 0) {
          *(undefined4 *)((int)this + 0x54) =
               *(undefined4 *)(*(int *)((int)this + 0x50) + iVar2 * 0xc);
          iVar5 = iVar2;
          break;
        }
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 3;
      } while (iVar2 < *(short *)((int)this + 0x4e));
    }
  }
  DAT_005cd1c0 = *(undefined2 *)((int)this + 0x54);
  FUN_0050c5d0((int)this);
  iVar2 = FUN_0050c7f0((int)this);
  if (iVar2 != 0) {
    FUN_004ecc90((undefined4 *)&DAT_005cca70);
  }
  _DAT_005cca70 = FUN_0050c500((int)this);
  _DAT_005cca74 = FUN_0050c430((int)this);
  DAT_005ccab0 = *(undefined4 *)((int)this + 0x48);
  DAT_005ccab4 = *(undefined4 *)((int)this + 0x54);
  FUN_00488640(0x5aa12c);
  DAT_005cd1ac = *(undefined2 *)((int)this + 0x54);
  iVar2 = 0;
  DAT_005cd198 = (ushort)((uint)*(undefined4 *)((int)this + 0x30) >> 8) & 1;
  if (0 < *(short *)((int)this + 0x4e)) {
    iVar4 = 0;
    do {
      FUN_00488660(&DAT_005aa12c,*(short *)(*(int *)((int)this + 0x50) + iVar4),
                   (short)*(undefined4 *)(*(int *)((int)this + 0x50) + 4 + iVar4));
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + 0xc;
    } while (iVar2 < *(short *)((int)this + 0x4e));
  }
  _DAT_005cd1f0 = 0;
  DAT_005ccab8 = iVar5;
  *(undefined4 *)((int)this + 0x54) = uVar1;
  return;
}


