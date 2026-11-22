
undefined4 __thiscall FUN_0048dd30(void *this,int param_1,uint param_2,LONG param_3)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  do {
    DAT_005a79bc = 0xffffffff;
    DAT_005a79c0 = 0xffffffff;
    FUN_0048dc80(this,param_1,param_2,param_3);
    iVar5 = *(int *)((int)this + 0x50) + -1;
    if (-1 < iVar5) {
      iVar4 = iVar5 * 0x2c;
      do {
        uVar2 = FUN_0048e300((void *)(iVar4 + *(int *)((int)this + 0x4c)),param_2,param_3,
                             *(int *)((int)this + 0x3c),*(int *)((int)this + 0x40));
        if (uVar2 != 0) {
          iVar4 = 0;
          if (DAT_005aa080 < 1) goto LAB_0048de7d;
          piVar3 = DAT_005aa088;
          goto LAB_0048de6e;
        }
        iVar5 = iVar5 + -1;
        iVar4 = iVar4 + -0x2c;
      } while (-1 < iVar5);
    }
    if (DAT_005d20a0 != 0) {
      DAT_005d20a0 = 0;
    }
    piVar3 = (int *)FUN_0048ee40((int)this);
    if (piVar3 != (int *)0x0) {
      iVar4 = param_2 - *(int *)((int)this + 0x3c);
      piVar1 = (int *)*piVar3;
      iVar5 = param_3 - *(int *)((int)this + 0x40);
      if ((*(byte *)(piVar1 + 5) & 4) == 0) {
        if (((iVar4 < 0) || (iVar5 < 0)) || ((piVar3[3] <= iVar4 || (piVar3[4] <= iVar5))))
        goto LAB_0048de38;
        uVar2 = (uint)*(byte *)((piVar3[2] + iVar5) * piVar1[3] + piVar3[1] + iVar4 + *piVar1);
      }
      else if ((((iVar4 < 0) || (iVar5 < 0)) || (piVar3[3] <= iVar4)) || (piVar3[4] <= iVar5)) {
LAB_0048de38:
        uVar2 = 0xffffffff;
      }
      else {
        uVar2 = (uint)*(ushort *)
                       (*piVar1 + ((piVar3[2] + iVar5) * (piVar1[3] >> 1) + piVar3[1] + iVar4) * 2);
      }
      if (0 < (int)uVar2) {
        return 1;
      }
    }
    if ((*(byte *)((int)this + 4) & 4) == 0) {
      return 1;
    }
    this = *(void **)this;
    if (this == (void *)0x0) {
      return 0;
    }
  } while( true );
  while( true ) {
    iVar4 = iVar4 + 1;
    piVar3 = piVar3 + 0x20;
    if (DAT_005aa080 <= iVar4) break;
LAB_0048de6e:
    if (piVar3 == this) break;
  }
LAB_0048de7d:
  DAT_005a79bc = iVar4 + 0x11000000;
  DAT_005a79c0 = iVar5;
  if ((DAT_005a9e34 != iVar5) || (DAT_005a9e38 != DAT_005a79bc)) {
    FUN_00473990(0x5a9e04);
    if ((DAT_005a7b78 != (void *)0x0) && (DAT_005a79c0 != -1)) {
      iVar4 = FUN_0048d810(this,DAT_005a79c0);
      if ((((char)*(uint *)(iVar4 + 0x10) == '\x06') && ((*(uint *)(iVar4 + 0x10) & 0x100) == 0)) &&
         (0 < (*(int **)(iVar4 + 0x14))[1])) {
        FUN_004d09a0(DAT_005a7b78,*(uint *)(iVar4 + 0x10),*(int **)(iVar4 + 0x14),0);
      }
    }
    DAT_005a9e34 = DAT_005a79c0;
    DAT_005a9e38 = DAT_005a79bc;
  }
  iVar5 = iVar5 * 0x2c;
  if ((DAT_00583610 != (void *)(iVar5 + *(int *)((int)this + 0x4c))) && (param_1 != 0x200)) {
    if (DAT_00583610 != (void *)0x0) {
      FUN_0048dfc0(DAT_00583610,0);
    }
    DAT_00583610 = (void *)(iVar5 + *(int *)((int)this + 0x4c));
    FUN_0048dfc0(DAT_00583610,1);
  }
  FUN_0048e470((void *)(iVar5 + *(int *)((int)this + 0x4c)),param_1,param_2,param_3);
  return 1;
}


