
void __thiscall FUN_00404830(void *this,void *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  void *this_00;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  float local_4;
  
  iVar4 = FUN_004a8300(&DAT_005ae958,
                       *(int *)(DAT_005ae970 +
                               (*(int *)((int)param_1 + 0x44) + *(int *)((int)param_1 + 0x1c) * 8) *
                               4),0);
  this_00 = (void *)FUN_00482ac0(&DAT_005aa12c,iVar4,0);
  pvVar3 = DAT_005a7b78;
  if (this_00 != (void *)0x0) {
    DAT_00583ac0 = 0;
    DAT_005787b0 = param_1;
    DAT_005787ac = this_00;
    switch(*(undefined4 *)this) {
    case 1:
    case 2:
    case 3:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x15:
    case 0x30:
      if (DAT_005a7d4c != 0) {
        uVar2 = *(undefined4 *)((int)param_1 + 0x28);
        if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
          *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
          FUN_004d4550(pvVar3);
          *(undefined4 *)((int)pvVar3 + 0x90) = 0;
          *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
        }
        else {
          iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
          *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
          iVar4 = *(int *)((int)pvVar3 + 0x50);
          *(undefined4 *)(iVar4 + iVar5 * 8) = 1;
          *(undefined4 *)(iVar4 + 4 + iVar5 * 8) = uVar2;
        }
        pvVar3 = DAT_005a7b78;
        uVar2 = *(undefined4 *)((int)this_00 + 0x28);
        if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
          *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
          FUN_004d4550(pvVar3);
          *(undefined4 *)((int)pvVar3 + 0x90) = 0;
          *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
        }
        else {
          iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
          *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
          iVar4 = *(int *)((int)pvVar3 + 0x50);
          *(undefined4 *)(iVar4 + iVar5 * 8) = 1;
          *(undefined4 *)(iVar4 + 4 + iVar5 * 8) = uVar2;
        }
        FUN_004d09a0(DAT_005a7b78,DAT_005a7d4c,DAT_005a7d50,-1);
        pvVar3 = DAT_005a7b78;
        if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
          piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
          iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
          *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
          uVar6 = *(uint *)(*piVar1 + -8 + iVar4 * 8);
          local_4 = *(float *)(*piVar1 + -4 + iVar4 * 8);
        }
        else {
          *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 6;
          FUN_004d4550(pvVar3);
          uVar6 = 0;
          *(undefined4 *)((int)pvVar3 + 0x90) = 0;
          *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
        }
        uVar6 = uVar6 & 0xff;
        if (uVar6 != 1) {
          if (uVar6 == 2) {
            local_4 = (float)((int)local_4 >> 8);
          }
          else if (uVar6 == 4) {
            lVar7 = __ftol((float10)local_4);
            local_4 = (float)lVar7;
          }
          else {
            FUN_00404ab0(pvVar3,0xe);
            local_4 = 0.0;
          }
        }
        if (local_4 == 0.0) {
          FUN_0041efa0(this_00,6);
        }
        else {
          FUN_00421590(this_00);
          *(byte *)((int)this + 0x10) = *(byte *)((int)this + 0x10) | 2;
        }
        *(byte *)((int)this + 0x10) = *(byte *)((int)this + 0x10) | 1;
        *(byte *)((int)this_00 + 0x78) = *(byte *)((int)this_00 + 0x78) | 4;
        if (((~*(uint *)((int)this_00 + 0x30) & 0x100) != 0) &&
           (iVar4 = FUN_0040a9a0((int)this_00), iVar4 != 0)) {
          FUN_0040a9d0(this_00,param_1);
        }
      }
      break;
    default:
      FUN_00401730(param_1);
      break;
    case 6:
      *(undefined4 *)((int)this_00 + 0x24) = 9;
      *(byte *)((int)this_00 + 0x34) = *(byte *)((int)this_00 + 0x34) | 2;
      FUN_0041efa0(this_00,9);
      *(uint *)((int)this_00 + 0x30) = *(uint *)((int)this_00 + 0x30) | 0x800;
    }
    DAT_00583ac0 = 0;
    DAT_005787b0 = (void *)0x0;
    DAT_005787ac = (void *)0x0;
  }
  return;
}


