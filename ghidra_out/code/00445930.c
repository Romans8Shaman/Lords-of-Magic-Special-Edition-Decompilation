
void __cdecl op_costbuildbuilding(void *vm)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  float fStack_210;
  uint uStack_20c;
  float fStack_208;
  uint uStack_204;
  uint auStack_200 [2];
  uint uStack_1f8;
  char acStack_1f4 [500];
  
  FUN_0040adb0(vm,auStack_200);
  iVar1 = FUN_004026a0(auStack_200,&uStack_1f8,(uint *)&fStack_208,&fStack_210);
  if (iVar1 != 0) {
    FUN_0040adb0(vm,auStack_200);
    iVar1 = FUN_004026a0(auStack_200,&uStack_20c,(uint *)&fStack_210,&fStack_208);
    if (iVar1 != 0) {
      FUN_0040adb0(vm,auStack_200);
      iVar1 = FUN_004026a0(auStack_200,&uStack_204,(uint *)&fStack_210,&fStack_208);
      if (iVar1 != 0) {
        piVar2 = FUN_0043d300(&DAT_005cd31c,uStack_204,uStack_20c,uStack_1f8);
        if (piVar2 == (int *)0x0) {
          FUN_0053a090(acStack_1f4,s_building_type__d_level__d_faith___005567e8,uStack_204,
                       uStack_1f8,uStack_20c);
          FUN_004d41c0(vm,acStack_1f4);
          if (*(int *)((int)vm + 0x54) == 0) {
            FUN_00404ab0(vm,3);
          }
          else {
            iVar1 = *(int *)((int)vm + 0x50);
            iVar3 = *(int *)((int)vm + 0x54) + -1;
            *(int *)((int)vm + 0x54) = iVar3;
            *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
            *(undefined4 *)(iVar1 + 4 + iVar3 * 8) = 0;
          }
          FUN_0041d1d0(vm,1,0);
          if (*(int *)((int)vm + 0x54) == 0) {
            FUN_00404ab0(vm,3);
          }
          else {
            iVar1 = *(int *)((int)vm + 0x50);
            iVar3 = *(int *)((int)vm + 0x54) + -1;
            *(int *)((int)vm + 0x54) = iVar3;
            *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
            *(undefined4 *)(iVar1 + 4 + iVar3 * 8) = 0;
          }
          FUN_0041d1d0(vm,1,0);
          return;
        }
        FUN_0041d1d0(vm,1,piVar2[4] >> 8);
        FUN_0041d1d0(vm,1,piVar2[5] >> 8);
        iVar1 = piVar2[6];
        if (*(int *)((int)vm + 0x54) == 0) {
          FUN_00404ab0(vm,3);
        }
        else {
          iVar3 = *(int *)((int)vm + 0x50);
          iVar4 = *(int *)((int)vm + 0x54) + -1;
          *(int *)((int)vm + 0x54) = iVar4;
          *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
          *(int *)(iVar3 + 4 + iVar4 * 8) = iVar1 >> 8;
        }
        iVar1 = piVar2[3];
        if (*(int *)((int)vm + 0x54) == 0) {
          FUN_00404ab0(vm,3);
          return;
        }
        iVar3 = *(int *)((int)vm + 0x50);
        iVar4 = *(int *)((int)vm + 0x54) + -1;
        *(int *)((int)vm + 0x54) = iVar4;
        *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
        *(int *)(iVar3 + 4 + iVar4 * 8) = iVar1 >> 8;
        return;
      }
    }
  }
  *(undefined4 *)((int)vm + 0x90) = 0xe;
  FUN_004d4550(vm);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  return;
}


