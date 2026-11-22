
void __fastcall FUN_00506140(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00420580(param_1);
  if (((iVar1 != 0) && ((*(uint *)(param_1 + 0x30) & 0x20000000) != 0)) &&
     (*(int *)(param_1 + 0x5d4) == 0)) {
    uVar2 = FUN_00506190((void *)param_1);
    *(undefined4 *)(param_1 + 0x5d4) = uVar2;
    *(undefined4 *)(param_1 + 0x5cc) = 0;
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xdfffffff;
  }
  return;
}


