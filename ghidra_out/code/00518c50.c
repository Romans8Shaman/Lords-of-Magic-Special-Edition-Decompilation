
undefined4 __thiscall
FUN_00518c50(void *this,int param_1,int param_2,int param_3,int unused_stack_16,
            undefined4 unused_stack_20,undefined4 unused_stack_24,undefined4 unused_stack_28,
            undefined4 unused_stack_32,int in_stack_24)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 unaff_retaddr;
  int local_5c;
  int local_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  undefined4 uStack_4;
  
  if (*(int *)((int)this + 0x284) == 0) {
    return 0;
  }
  piVar1 = (int *)FUN_004755e0(0x584ae8);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  iVar8 = unused_stack_16 - *(int *)((int)this + 0x200);
  iVar2 = param_1 - *(int *)((int)this + 0x1fc);
  iVar5 = param_3 - *(int *)((int)this + 0x1fc);
  iVar7 = param_2 - *(int *)((int)this + 0x200);
  local_54 = 0;
  if (in_stack_24 == 0) {
    *(undefined4 *)((int)this + 0x1e4) = 0;
    *(undefined4 *)((int)this + 0x1e8) = 0;
  }
  iVar9 = *(int *)((int)this + 0x1e8);
  if (iVar9 < *(int *)((int)this + 0x202c4)) {
    do {
      local_5c = *(int *)((int)this + 0x1e4);
      if (local_5c < *(int *)((int)this + 0x202c0)) {
        do {
          if (*(int *)((int)this + 0x1d8) == 0) {
            iVar3 = (/*IC:00518de5*/**(code **)((int)this + 0x220))(local_5c,iVar9,iVar2,iVar7,iVar5,iVar8);
            if (iVar3 != -1) goto LAB_00518df6;
          }
          else {
            iVar3 = (/*IC:00518d77*/**(code **)((int)this + 0x220))(local_5c,iVar9,iVar2,iVar7,iVar5,iVar8);
            iVar4 = (/*IC:00518daf*/**(code **)((int)this + 0x220))
                              (local_5c,iVar9,uStack_4,unaff_retaddr,iVar2,iVar7);
            if (iVar3 == -1) {
              if (iVar4 == -1) goto LAB_00519033;
              iVar3 = iVar4;
            }
LAB_00518df6:
            iVar4 = (int)*(short *)(DAT_005ae9ac +
                                   (iVar9 * *(int *)((int)this + 0x202c0) + local_5c) * 8);
            if ((iVar4 < 0) || (DAT_005aeb88 <= iVar4)) {
              piVar6 = (int *)0x0;
            }
            else {
              piVar6 = (int *)(iVar4 * 0x10 + DAT_005aeb84);
            }
            if (piVar6 != (int *)0x0) {
              iVar4 = *(int *)((int)this + 0x202ac);
              iStack_50 = ((int)*(short *)(*(int *)(iVar4 + iVar9 * 4) + local_5c * 8) +
                           *(int *)((int)this + iVar3 * 4 + 0x22c) + *(int *)((int)this + 0x1fc)) *
                          0x10000;
              iStack_4c = ((int)*(short *)(*(int *)(iVar4 + iVar9 * 4) + 2 + local_5c * 8) +
                           *(int *)((int)this + iVar3 * 4 + 0x250) + *(int *)((int)this + 0x200)) *
                          0x10000;
              uStack_40 = *(undefined4 *)(*(int *)(iVar4 + iVar9 * 4) + 4 + local_5c * 8);
              iStack_3c = ((int)*(short *)(*(int *)(iVar4 + iVar9 * 4) + 8 + local_5c * 8) +
                           *(int *)((int)this + iVar3 * 4 + 0x22c) + *(int *)((int)this + 0x1fc)) *
                          0x10000;
              iStack_38 = ((int)*(short *)(*(int *)(iVar4 + iVar9 * 4) + 10 + local_5c * 8) +
                           *(int *)((int)this + iVar3 * 4 + 0x250) + *(int *)((int)this + 0x200)) *
                          0x10000;
              uStack_2c = *(undefined4 *)(*(int *)(iVar4 + iVar9 * 4) + 0xc + local_5c * 8);
              iStack_28 = ((int)*(short *)(*(int *)(iVar4 + 4 + iVar9 * 4) + local_5c * 8) +
                           *(int *)((int)this + iVar3 * 4 + 0x22c) + *(int *)((int)this + 0x1fc)) *
                          0x10000;
              iStack_24 = ((int)*(short *)(*(int *)(iVar4 + 4 + iVar9 * 4) + 2 + local_5c * 8) +
                           *(int *)((int)this + iVar3 * 4 + 0x250) + *(int *)((int)this + 0x200)) *
                          0x10000;
              uStack_18 = *(undefined4 *)(*(int *)(iVar4 + 4 + iVar9 * 4) + 4 + local_5c * 8);
              iStack_14 = ((int)*(short *)(*(int *)(iVar4 + 4 + iVar9 * 4) + 8 + local_5c * 8) +
                           *(int *)((int)this + iVar3 * 4 + 0x22c) + *(int *)((int)this + 0x1fc)) *
                          0x10000;
              iStack_10 = ((int)*(short *)(*(int *)(iVar4 + 4 + iVar9 * 4) + 10 + local_5c * 8) +
                           *(int *)((int)this + iVar3 * 4 + 0x250) + *(int *)((int)this + 0x200)) *
                          0x10000;
              uStack_4 = *(undefined4 *)(*(int *)(iVar4 + 4 + iVar9 * 4) + 0xc + local_5c * 8);
              iStack_48 = *piVar6 << 0x10;
              iStack_44 = piVar6[1] << 0x10;
              iStack_34 = (piVar6[2] + *piVar6) * 0x10000 + -0x10000;
              iStack_1c = (piVar6[3] + piVar6[1]) * 0x10000 + -0x10000;
              iStack_30 = iStack_44;
              iStack_20 = iStack_48;
              iStack_c = iStack_34;
              iStack_8 = iStack_1c;
              FUN_00512710(this,piVar1,&iStack_50,&iStack_3c,&iStack_28,*(int *)((int)this + 0x284))
              ;
              FUN_00512710(this,piVar1,&iStack_14,&iStack_28,&iStack_3c,*(int *)((int)this + 0x284))
              ;
            }
            if ((in_stack_24 != 0) &&
               (local_54 = local_54 + 1, *(int *)((int)this + 0x208) <= local_54)) {
              *(int *)((int)this + 0x1e4) = local_5c + 1;
              *(int *)((int)this + 0x1e8) = iVar9;
              if (*(int *)((int)this + 0x202c0) <= local_5c + 1) {
                *(undefined4 *)((int)this + 0x1e4) = 0;
                *(int *)((int)this + 0x1e8) = iVar9 + 1;
              }
              goto LAB_005190ad;
            }
          }
LAB_00519033:
          local_5c = local_5c + 1;
        } while (local_5c < *(int *)((int)this + 0x202c0));
      }
      iVar9 = iVar9 + 1;
      *(undefined4 *)((int)this + 0x1e4) = 0;
    } while (iVar9 < *(int *)((int)this + 0x202c4));
  }
  *(int *)((int)this + 0x1e4) = local_5c;
  *(int *)((int)this + 0x1e8) = iVar9;
LAB_005190ad:
  FUN_004756c0(&DAT_00584ae8,piVar1);
  return 1;
}


