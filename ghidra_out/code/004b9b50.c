
undefined4 __thiscall FUN_004b9b50(void *this,int param_1,int param_2,uint param_3)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int extraout_ECX;
  uint uVar5;
  int iVar6;
  uint local_18;
  uint local_14;
  int local_10;
  uint local_c;
  uint local_8;
  uint local_4;
  
  uVar2 = param_3;
  if ((int)param_3 < 1) {
    FUN_004b9b30(this);
    return 1;
  }
  if ((*(int *)this != 0) &&
     (iVar3 = FUN_004b9a90(&DAT_0058446c,param_1,param_2,param_3), iVar3 == *(int *)this)) {
    return 1;
  }
  FUN_004b9b30(this);
  iVar3 = FUN_004b9940(&DAT_0058446c,param_1,param_2,uVar2,&local_10);
  *(int *)this = iVar3;
  if (iVar3 == 0) {
    return 0;
  }
  if (local_10 == 0) {
    iVar6 = 0;
    iVar3 = extraout_ECX;
    do {
      FUN_00474e70(&DAT_00584ae8,&local_14,&local_18,&param_3,
                   CONCAT22((short)((uint)iVar3 >> 0x10),*(undefined2 *)(param_1 + iVar6)));
      iVar3 = param_3 + local_18 + local_14;
      uVar5 = iVar3 / 3 & 0xff;
      if ((int)uVar2 < 100) {
        FUN_00474e70(&DAT_00584ae8,&local_4,&local_8,&local_c,(uint)*(ushort *)(param_2 + uVar5 * 2)
                    );
        iVar3 = 100 - uVar2;
        iVar4 = FUN_00474ee0(&DAT_00584ae8,(int)(local_14 * iVar3 + local_4 * uVar2) / 100,
                             (int)(local_18 * iVar3 + local_8 * uVar2) / 100,
                             (int)(param_3 * iVar3 + local_c * uVar2) / 100);
        iVar3 = *(int *)this;
        *(short *)(iVar3 + iVar6) = (short)iVar4;
      }
      else {
        uVar1 = *(undefined2 *)(param_2 + uVar5 * 2);
        iVar3 = CONCAT22((short)((uint)-(iVar3 >> 0x1f) >> 0x10),uVar1);
        *(undefined2 *)(*(int *)this + iVar6) = uVar1;
      }
      iVar6 = iVar6 + 2;
    } while (iVar6 < 0x200);
  }
  return 1;
}


