
void __thiscall FUN_00512350(void *this,int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int local_68;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  int iStack_14;
  int *piStack_10;
  
  local_68 = (*(int *)((int)this + 0x1f0) * 2 - *(int *)((int)this + 0x200)) + 0x17f;
  iVar1 = (/*IC:005123a8*/**(code **)((int)this + 0x220))
                    (param_1,param_2,-*(int *)((int)this + 0x1fc),-*(int *)((int)this + 0x200),
                     (*(int *)((int)this + 0x1ec) * 2 - *(int *)((int)this + 0x1fc)) + 0x27f);
  if (-1 < iVar1) {
    piVar2 = (int *)FUN_004755e0(0x584ae8);
    if (piVar2 == (int *)0x0) {
      *(undefined4 *)((int)this + 0x202c8) = 1;
      return;
    }
    iVar3 = (int)*(short *)(DAT_005ae9ac + (*(int *)((int)this + 0x202c0) * param_2 + param_1) * 8);
    if ((iVar3 < 0) || (DAT_005aeb88 <= iVar3)) {
      piStack_10 = (int *)0x0;
    }
    else {
      piStack_10 = (int *)(iVar3 * 0x10 + DAT_005aeb84);
    }
    piVar7 = piVar2;
    if (piStack_10 != (int *)0x0) {
      iVar6 = *(int *)((int)this + 0x202ac);
      iVar3 = param_1 * 8;
      local_68 = ((int)*(short *)(*(int *)(iVar6 + param_2 * 4) + iVar3) +
                  *(int *)((int)this + iVar1 * 4 + 0x22c) + *(int *)((int)this + 0x1fc)) * 0x10000;
      iStack_14 = iStack_14 * 8 + 8;
      iStack_54 = ((int)*(short *)(*(int *)(iVar6 + param_2 * 4) + iStack_14) +
                   *(int *)((int)this + iVar1 * 4 + 0x22c) + *(int *)((int)this + 0x1fc)) * 0x10000;
      iStack_50 = ((int)*(short *)(*(int *)(iVar6 + param_2 * 4) + 10 + iVar3) +
                   *(int *)((int)this + iVar1 * 4 + 0x250) + *(int *)((int)this + 0x200)) * 0x10000;
      uStack_44 = *(undefined4 *)(*(int *)(iVar6 + param_2 * 4) + 0xc + iVar3);
      iStack_40 = ((int)*(short *)(*(int *)(iVar6 + 4 + param_2 * 4) + iVar3) +
                   *(int *)((int)this + iVar1 * 4 + 0x22c) + *(int *)((int)this + 0x1fc)) * 0x10000;
      iStack_3c = ((int)*(short *)(*(int *)(iVar6 + 4 + param_2 * 4) + 2 + iVar3) +
                   *(int *)((int)this + iVar1 * 4 + 0x250) + *(int *)((int)this + 0x200)) * 0x10000;
      uStack_30 = *(undefined4 *)(*(int *)(iVar6 + 4 + param_2 * 4) + 4 + iVar3);
      iStack_2c = ((int)*(short *)(*(int *)(iVar6 + 4 + param_2 * 4) + iStack_14) +
                   *(int *)((int)this + iVar1 * 4 + 0x22c) + *(int *)((int)this + 0x1fc)) * 0x10000;
      iStack_28 = ((int)*(short *)(*(int *)(iVar6 + 4 + param_2 * 4) + 10 + iVar3) +
                   *(int *)((int)this + iVar1 * 4 + 0x250) + *(int *)((int)this + 0x200)) * 0x10000;
      uStack_1c = *(undefined4 *)(*(int *)(iVar6 + 4 + param_2 * 4) + 0xc + iVar3);
      iStack_38 = *piStack_10 << 0x10;
      iStack_48 = piStack_10[1] << 0x10;
      iStack_4c = (piStack_10[2] + *piStack_10) * 0x10000 + -0x10000;
      iStack_34 = (piStack_10[3] + piStack_10[1]) * 0x10000 + -0x10000;
      iStack_24 = iStack_4c;
      iStack_20 = iStack_34;
      FUN_00512710(this,piVar2,&local_68,&iStack_54,&iStack_40,*(int *)((int)this + 0x284));
      FUN_00512710(this,piVar2,&iStack_2c,&iStack_40,&iStack_54,*(int *)((int)this + 0x284));
    }
    if (DAT_005aec3c == 0) {
      iStack_14 = 2;
      iVar1 = 0;
      iVar3 = 1;
      iVar6 = 3;
    }
    else if (DAT_005aec3c == 2) {
      iStack_14 = 3;
      iVar1 = 2;
      iVar3 = 0;
      iVar6 = 1;
    }
    else if (DAT_005aec3c == 4) {
      iStack_14 = 1;
      iVar1 = 3;
      iVar3 = 2;
      iVar6 = 0;
    }
    else if (DAT_005aec3c == 6) {
      iStack_14 = 0;
      iVar1 = 1;
      iVar3 = 3;
      iVar6 = 2;
    }
    else {
      iVar1 = iStack_14;
      iVar3 = iStack_14;
      iVar6 = iStack_14;
    }
    iVar5 = *(int *)((int)this + 0x1b0);
    iVar4 = iStack_14 * 5;
    iStack_14 = iVar5;
    iVar4 = ((&local_68)[iVar4] >> 0x10) - iVar5;
    iVar5 = ((&local_68)[iVar3 * 5] >> 0x10) - iVar5;
    iVar1 = (*(int *)((int)register0x00000010 + iVar1 * 0x14 + -100) >> 0x10) -
            *(int *)((int)this + 0x1b4);
    iVar3 = (*(int *)((int)register0x00000010 + iVar6 * 0x14 + -100) >> 0x10) -
            *(int *)((int)this + 0x1b4);
    if (0x17f < iVar3) {
      iVar3 = 0x17f;
    }
    FUN_00500650(&DAT_00584ae8,iVar4,iVar1,iVar5,iVar3);
    FUN_00476010(&DAT_005a7a14,iVar4,iVar1,iVar5,iVar3);
    FUN_004756c0(&DAT_00584ae8,piVar7);
  }
  return;
}


