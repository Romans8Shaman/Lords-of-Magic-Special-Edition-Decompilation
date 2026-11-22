
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00454480(void *param_1)

{
  int iVar1;
  undefined4 *this;
  uint uVar2;
  int iVar3;
  int iVar4;
  int local_28;
  int local_24;
  void *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00549cc8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)param_1 + 0xbc) = DAT_00587718;
  *(undefined4 *)((int)param_1 + 0xc0) = DAT_00587720;
  FUN_0040b5e0((int *)((int)param_1 + 0x4d4c));
  FUN_0040c040((int *)((int)param_1 + 0x4d60));
  FUN_0040cb00((int *)((int)param_1 + 0x4d74));
  FUN_0040e220((int *)((int)param_1 + 0x4d84));
  FUN_0040e220((int *)((int)param_1 + 0x4d94));
  FUN_0040f430((int *)((int)param_1 + 0x4da4));
  FUN_004a4f20((void *)((int)param_1 + 0x482c),0x18,0x18,1);
  FUN_0051ab30(&DAT_005876d0,0xc,0xc,0x15c,0xe4);
  FUN_00469d80(&DAT_005876d0,223.5);
  FUN_00469e80(&DAT_005876d0,22.5);
  FUN_004a9ca0(&DAT_005ae958,1);
  FUN_004c5ef0((void *)((int)param_1 + 0x4dd8),*(int *)((int)param_1 + 0x4898),
               *(int *)((int)param_1 + 0x489c));
  FUN_00495370((void *)((int)param_1 + 0x608),(byte *)s_lbm_strt3_bk_lbm_00557594);
  FUN_00495370((void *)((int)param_1 + 0x5e8),(byte *)s_lbm_strt3_fr_lbm_00557580);
  local_10 = *(undefined4 *)((int)param_1 + 0x610);
  local_14 = *(undefined4 *)((int)param_1 + 0x60c);
  DAT_0058364c = DAT_0058364c + 0x14;
  local_1c = 0;
  local_18 = 0;
  local_4 = 0;
  local_20 = (void *)((int)param_1 + 0x608);
  this = (undefined4 *)FUN_004755e0(0x584ae8);
  _DAT_00587880 = 0;
  _DAT_00587884 = 0;
  *(undefined4 *)((int)param_1 + 0x628) = 0;
  *(undefined4 *)((int)param_1 + 0x62c) = 0;
  FUN_00495db0(this,(int *)&local_20,0,0);
  FUN_004756c0(&DAT_00584ae8,this);
  FUN_00505970(&DAT_00584ae8,8,0x42);
  FUN_005059a0(&DAT_00584ae8,8,0x3e051eb8);
  FUN_00481610(param_1,8);
  FUN_005000f0(&DAT_00584ae8,8);
  FUN_00504ce0(&DAT_00584ae8,1,0);
  iVar3 = 0;
  if (0 < *(int *)((int)param_1 + 0xb4)) {
    iVar4 = 0;
    do {
      iVar1 = iVar4 + *(int *)((int)param_1 + 0xb8);
      FUN_00480130(param_1,*(int *)(iVar1 + 8),*(void **)(iVar1 + 0xc),DAT_005a7d8c,
                   *(int *)(iVar1 + 4),100,*(int *)(iVar1 + 0x30),1000,&local_28,&local_24,0,-1);
      uVar2 = FUN_00482ac0(param_1,local_28,0);
      iVar3 = iVar3 + 1;
      *(uint *)(iVar4 + *(int *)((int)param_1 + 0xb8)) = uVar2;
      iVar4 = iVar4 + 0x38;
    } while (iVar3 < *(int *)((int)param_1 + 0xb4));
  }
  DAT_0058364c = DAT_0058364c + -0x14;
  ExceptionList = local_c;
  return 1;
}


