
undefined4 __thiscall
FUN_004750b0(void *this,int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_4;
  
  puVar1 = (undefined4 *)((int)this + param_1 * 4 + 0x684);
  piVar2 = *(int **)((int)this + param_1 * 4 + 0x684);
  if (piVar2 != (int *)0x0) {
    (/*IC:004750d2*/**(code **)(*piVar2 + 8))(piVar2);
    *puVar1 = 0;
  }
  if (param_4 == 8) {
    local_18 = 8;
    local_14 = 0;
    local_10 = 0;
    local_c = 0;
    local_6c = 0x6c;
    local_68 = 0x1007;
    local_4 = 0x840;
    uStack_60 = param_2;
    uStack_64 = param_3;
    uStack_24 = 0x20;
    uStack_20 = 0x60;
    iVar3 = (/*IC:0047514b*/**(code **)(**(int **)((int)this + 0x680) + 0x18))
                      (*(int **)((int)this + 0x680),&local_6c,puVar1,0);
    if (iVar3 != 0) {
      return 0;
    }
  }
  if (param_4 == 0x10) {
    local_6c = 0x6c;
    local_68 = 7;
    local_4 = 0x840;
    uStack_60 = param_2;
    uStack_64 = param_3;
    iVar3 = (/*IC:00475199*/**(code **)(**(int **)((int)this + 0x680) + 0x18))
                      (*(int **)((int)this + 0x680),&local_6c,puVar1,0);
    if (iVar3 != 0) {
      return 0;
    }
  }
  puVar1 = (undefined4 *)((int)this + param_1 * 0x6c + 0x6e4);
  puVar4 = puVar1;
  for (iVar3 = 0x1b; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *puVar1 = 0x6c;
  return 1;
}


