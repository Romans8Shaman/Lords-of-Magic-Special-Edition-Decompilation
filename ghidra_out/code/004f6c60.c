
undefined4 __thiscall FUN_004f6c60(void *this,int *param_1)

{
  int *piVar1;
  int *a1;
  int iVar2;
  DWORD DVar3;
  int iVar4;
  int local_c;
  int local_8;
  DWORD local_4;
  
  a1 = param_1;
  local_c = 0;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  local_4 = FUN_0053ac20(param_1);
  FUN_00539660((char *)&local_c,4,1,a1);
  local_8 = *(int *)((int)this + 0x24);
  if (local_8 < *(int *)((int)this + 0x10)) {
    do {
      iVar4 = local_8;
      piVar1 = *(int **)(*(int *)((int)this + 8) + local_8 * 4);
      if (piVar1 != (int *)0x0) {
        iVar2 = piVar1[1];
        if (iVar2 == 0) {
          if ((DAT_005aa7b4 == local_8) || (DAT_005aad90 == local_8)) goto LAB_004f6cd7;
        }
        else if (iVar2 == 1) {
          if ((DAT_005aa7b4 == local_8) || (DAT_005aad90 == local_8)) {
            if (piVar1[0x16] == 0) goto LAB_004f6cd7;
            param_1 = (int *)0x0;
            FUN_00539660((char *)&param_1,4,1,a1);
            (/*IC:004f6dac*/**(code **)(*(int *)piVar1[0x16] + 0x20))((int *)piVar1[0x16],a1);
            local_c = local_c + 1;
          }
        }
        else if (iVar2 == 2) {
          if ((DAT_005aa7b4 == local_8) || (DAT_005aad90 == local_8)) {
            if (piVar1[0x12] == 0) goto LAB_004f6cd7;
            param_1 = (int *)0x0;
            FUN_00539660((char *)&param_1,4,1,a1);
            (/*IC:004f6df6*/**(code **)(*(int *)piVar1[0x12] + 0x20))((int *)piVar1[0x12],a1);
            local_c = local_c + 1;
          }
        }
        else if (iVar2 == 3) {
          if (piVar1[7] == DAT_005aad84) {
            iVar4 = (/*IC:004f6e27*/**(code **)(DAT_005aad68 + 0x3c))(&DAT_005aad68);
            iVar2 = (/*IC:004f6e30*/**(code **)(*piVar1 + 0x3c))(piVar1);
            if (iVar2 == iVar4) {
              param_1 = (int *)0x0;
              FUN_00539660((char *)&param_1,4,1,a1);
              (/*IC:004f6e5b*/**(code **)(*(int *)piVar1[0x11] + 0x20))((int *)piVar1[0x11],a1);
              local_c = local_c + 1;
            }
            iVar4 = local_8;
          }
        }
        else {
LAB_004f6cd7:
          iVar2 = FUN_004a84b0(&DAT_005ae958,piVar1[7]);
          if (iVar2 != 0) {
            param_1 = *(int **)(*(int *)(*(int *)((int)this + 8) + iVar4 * 4) + 4);
            FUN_00539660((char *)&param_1,4,1,a1);
            piVar1 = *(int **)(*(int *)((int)this + 8) + iVar4 * 4);
            (/*IC:004f6d11*/**(code **)(*piVar1 + 0x20))(piVar1,a1);
            local_c = local_c + 1;
          }
        }
      }
      local_8 = iVar4 + 1;
    } while (local_8 < *(int *)((int)this + 0x10));
  }
  DVar3 = FUN_0053ac20(a1);
  FUN_0053a140(a1,local_4,0);
  FUN_00539660((char *)&local_c,4,1,a1);
  FUN_0053a140(a1,DVar3,0);
  return 1;
}


