
undefined4 __thiscall FUN_00517e10(void *this,undefined1 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int local_80;
  uint local_7c;
  uint local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  undefined4 auStack_64 [20];
  undefined4 uStack_14;
  
  iVar6 = 0;
  switch(param_1) {
  case 0:
    iVar5 = *(int *)((int)this + 0x1f0);
    *(int *)((int)this + 0x200) = *(int *)((int)this + 0x200) + iVar5;
    *(int *)((int)this + 0x1b0) = *(int *)((int)this + 0x1ec);
    local_6c = *(int *)((int)this + 0x1ec) * 2 + 0x280;
    *(int *)((int)this + 0x1b4) = iVar5 * 2 - *(int *)((int)this + 0x1e0);
    local_68 = iVar5 + 0x17f;
    local_70 = 0;
    local_74 = 0;
    (/*IC:00517f85*/**(code **)(*DAT_00585174 + 0x1c))(DAT_00585174,DAT_00585174,0,iVar5,DAT_00585174,&local_74,0);
    local_68 = *(int *)((int)this + 0x1f0);
    local_70 = 0;
    goto LAB_00518240;
  case 1:
    iVar5 = *(int *)((int)this + 0x1f0);
    local_74 = *(int *)((int)this + 0x1ec);
    *(int *)((int)this + 0x200) = *(int *)((int)this + 0x200) + iVar5;
    *(undefined4 *)((int)this + 0x1b0) = *(undefined4 *)((int)this + 0x1dc);
    local_6c = local_74 * 2 + 0x280;
    *(int *)((int)this + 0x1fc) = *(int *)((int)this + 0x1fc) - local_74;
    *(int *)((int)this + 0x1b4) = iVar5 * 2 - *(int *)((int)this + 0x1e0);
    local_68 = iVar5 + 0x17f;
    local_70 = 0;
    (/*IC:0051800b*/**(code **)(*DAT_00585174 + 0x1c))(DAT_00585174,DAT_00585174,0,iVar5,DAT_00585174,&local_74,0);
    local_68 = *(undefined4 *)((int)this + 0x1f0);
    local_6c = *(int *)((int)this + 0x1ec) * 2 + 0x280;
    local_70 = 0;
    local_74 = 0;
    auStack_64[0] = 100;
    uStack_14 = 0;
    (/*IC:00518059*/**(code **)(*DAT_00585174 + 0x14))(DAT_00585174,&local_74,0,0,0x400,auStack_64);
    local_70 = 0;
    local_68 = *(int *)((int)this + 0x1f0) * 2 + 0x17f;
    local_74 = *(int *)((int)this + 0x1ec) + 0x280;
    local_6c = *(int *)((int)this + 0x1ec) * 2 + 0x280;
    break;
  case 2:
    local_74 = *(int *)((int)this + 0x1ec);
    *(int *)((int)this + 0x1fc) = *(int *)((int)this + 0x1fc) - local_74;
    *(undefined4 *)((int)this + 0x1b0) = *(undefined4 *)((int)this + 0x1dc);
    local_6c = local_74 * 2 + 0x280;
    *(int *)((int)this + 0x1b4) = *(int *)((int)this + 0x1f0);
    local_68 = *(int *)((int)this + 0x1f0) * 2 + 0x17f;
    local_70 = 0;
    (/*IC:005180ec*/**(code **)(*DAT_00585174 + 0x1c))(DAT_00585174,0,0,DAT_00585174,&local_74,0);
    local_70 = 0;
    local_68 = *(int *)((int)this + 0x1f0) * 2 + 0x17f;
    local_74 = *(int *)((int)this + 0x1ec) + 0x280;
    local_6c = *(int *)((int)this + 0x1ec) * 2 + 0x280;
    goto LAB_005183f0;
  case 3:
    local_70 = *(int *)((int)this + 0x1f0);
    local_74 = *(int *)((int)this + 0x1ec);
    *(int *)((int)this + 0x200) = *(int *)((int)this + 0x200) - local_70;
    *(undefined4 *)((int)this + 0x1b0) = *(undefined4 *)((int)this + 0x1dc);
    *(undefined4 *)((int)this + 0x1b4) = *(undefined4 *)((int)this + 0x1e0);
    local_6c = local_74 * 2 + 0x280;
    *(int *)((int)this + 0x1fc) = *(int *)((int)this + 0x1fc) - local_74;
    local_68 = local_70 * 2 + 0x17f;
    (/*IC:00518193*/**(code **)(*DAT_00585174 + 0x1c))(DAT_00585174,0,0,DAT_00585174,&local_74,0);
    iVar5 = *(int *)((int)this + 0x1f0);
    local_74 = *(int *)((int)this + 0x1ec) + 0x280;
    local_6c = *(int *)((int)this + 0x1ec) * 2 + 0x280;
    goto LAB_005182ee;
  case 4:
    local_70 = *(int *)((int)this + 0x1f0);
    *(int *)((int)this + 0x200) = *(int *)((int)this + 0x200) - local_70;
    *(int *)((int)this + 0x1b0) = *(int *)((int)this + 0x1ec);
    local_6c = *(int *)((int)this + 0x1ec) * 2 + 0x280;
    local_68 = local_70 * 2 + 0x17f;
    *(undefined4 *)((int)this + 0x1b4) = *(undefined4 *)((int)this + 0x1e0);
    local_74 = 0;
    (/*IC:00518226*/**(code **)(*DAT_00585174 + 0x1c))(DAT_00585174,0,0,DAT_00585174,&local_74,0);
    local_70 = *(int *)((int)this + 0x1f0) + 0x17f;
    local_68 = *(int *)((int)this + 0x1f0) * 2 + 0x17f;
LAB_00518240:
    local_6c = *(int *)((int)this + 0x1ec) * 2 + 0x280;
LAB_005183ec:
    local_74 = 0;
LAB_005183f0:
    auStack_64[0] = 100;
    uStack_14 = 0;
    break;
  case 5:
    iVar5 = *(int *)((int)this + 0x1ec);
    local_70 = *(int *)((int)this + 0x1f0);
    *(int *)((int)this + 0x1fc) = *(int *)((int)this + 0x1fc) + iVar5;
    *(int *)((int)this + 0x200) = *(int *)((int)this + 0x200) - local_70;
    local_68 = local_70 * 2 + 0x17f;
    *(int *)((int)this + 0x1b0) = iVar5 * 2 - *(int *)((int)this + 0x1dc);
    *(int *)((int)this + 0x1b4) = *(int *)((int)this + 0x1dc);
    local_6c = iVar5 + 0x280;
    local_74 = 0;
    (/*IC:005182c8*/**(code **)(*DAT_00585174 + 0x1c))(DAT_00585174,DAT_00585174,iVar5,0,DAT_00585174,&local_74,0);
    iVar5 = *(int *)((int)this + 0x1f0);
    local_6c = *(int *)((int)this + 0x1ec);
    local_74 = 0;
LAB_005182ee:
    local_68 = iVar5 * 2 + 0x17f;
    local_70 = 0;
    auStack_64[0] = 100;
    uStack_14 = 0;
    (/*IC:00518316*/**(code **)(*DAT_00585174 + 0x14))(DAT_00585174,&local_74,0,0,0x400,auStack_64);
    (/*IC:00518362*/**(code **)(*DAT_00585174 + 0x14))(DAT_00585174,auStack_64 + -10,0,0,0x400,&local_7c);
    goto switchD_00517e2d_caseD_ff;
  case 6:
    iVar5 = *(int *)((int)this + 0x1ec);
    *(int *)((int)this + 0x1fc) = *(int *)((int)this + 0x1fc) + iVar5;
    *(int *)((int)this + 0x1b4) = *(int *)((int)this + 0x1f0);
    local_68 = *(int *)((int)this + 0x1f0) * 2 + 0x17f;
    *(int *)((int)this + 0x1b0) = iVar5 * 2 - *(int *)((int)this + 0x1dc);
    local_6c = iVar5 + 0x280;
    local_70 = 0;
    local_74 = 0;
    (/*IC:005183ca*/**(code **)(*DAT_00585174 + 0x1c))(DAT_00585174,DAT_00585174,iVar5,0,DAT_00585174,&local_74,0);
    local_6c = *(int *)((int)this + 0x1ec);
    local_70 = 0;
    local_68 = *(int *)((int)this + 0x1f0) * 2 + 0x17f;
    goto LAB_005183ec;
  case 7:
    iVar5 = *(int *)((int)this + 0x1f0);
    iVar1 = *(int *)((int)this + 0x1ec);
    *(int *)((int)this + 0x200) = *(int *)((int)this + 0x200) + iVar5;
    *(int *)((int)this + 0x1fc) = *(int *)((int)this + 0x1fc) + iVar1;
    *(int *)((int)this + 0x1b0) = iVar1 * 2 - *(int *)((int)this + 0x1dc);
    *(int *)((int)this + 0x1b4) = iVar5 * 2 - *(int *)((int)this + 0x1e0);
    local_68 = iVar5 + 0x17f;
    local_6c = iVar1 + 0x280;
    local_70 = 0;
    local_74 = 0;
    (/*IC:00517eac*/**(code **)(*DAT_00585174 + 0x1c))(DAT_00585174,iVar1,iVar5,DAT_00585174,&local_74,0);
    local_68 = *(undefined4 *)((int)this + 0x1f0);
    local_6c = *(int *)((int)this + 0x1ec) * 2 + 0x280;
    local_70 = 0;
    local_74 = 0;
    auStack_64[0] = 100;
    uStack_14 = 0;
    (/*IC:00517efa*/**(code **)(*DAT_00585174 + 0x14))(DAT_00585174,&local_74,0,0,0x400,auStack_64);
    local_6c = *(int *)((int)this + 0x1ec);
    local_70 = 0;
    local_74 = 0;
    local_68 = *(int *)((int)this + 0x1f0) * 2 + 0x17f;
    break;
  default:
    goto switchD_00517e2d_caseD_ff;
  }
  (/*IC:00518415*/**(code **)(*DAT_00585174 + 0x14))(DAT_00585174,&local_74,0,0,0x400,auStack_64);
switchD_00517e2d_caseD_ff:
  if (*(int *)((int)this + 0x218) != 0) {
    local_7c = *(uint *)((int)this + 0x1a4);
    iVar5 = 8;
    local_78 = *(uint *)((int)this + 0x1a8);
    iVar1 = (local_7c ^ (int)local_7c >> 0x1f) - ((int)local_7c >> 0x1f);
    local_80 = (local_78 ^ (int)local_78 >> 0x1f) - ((int)local_78 >> 0x1f);
    if (local_80 <= iVar1) {
      local_80 = iVar1;
    }
    piVar4 = (int *)((int)this + 0x250);
    do {
      uVar3 = (int)(piVar4[-9] + local_7c) >> 0x1f;
      iVar2 = (piVar4[-9] + local_7c ^ uVar3) - uVar3;
      uVar3 = (int)(local_78 + *piVar4) >> 0x1f;
      iVar1 = (local_78 + *piVar4 ^ uVar3) - uVar3;
      if (iVar1 <= iVar2) {
        iVar1 = iVar2;
      }
      if (iVar1 < local_80) {
        iVar5 = iVar6;
        local_80 = iVar1;
      }
      iVar6 = iVar6 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar6 < 8);
    if (iVar5 != 8) {
      *(int *)((int)this + 0x1fc) =
           *(int *)((int)this + 0x1fc) + *(int *)((int)this + iVar5 * 4 + 0x22c);
      *(uint *)((int)this + 0x1a4) = local_7c + *(int *)((int)this + iVar5 * 4 + 0x22c);
      *(int *)((int)this + 0x200) =
           *(int *)((int)this + 0x200) + *(int *)((int)this + iVar5 * 4 + 0x250);
      *(uint *)((int)this + 0x1a8) = local_78 + *(int *)((int)this + iVar5 * 4 + 0x250);
      FUN_004f6540(&DAT_005ae974,*(int *)((int)this + iVar5 * 4 + 0x22c),
                   *(int *)((int)this + iVar5 * 4 + 0x250));
    }
  }
  return 1;
}


