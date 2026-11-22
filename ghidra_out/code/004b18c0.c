
undefined4 __thiscall
FUN_004b18c0(void *this,undefined4 param_1,int param_2,int param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 == param_3) {
    *param_5 = 0;
    return 1;
  }
  do {
    iVar1 = FUN_004a8b50(this,param_2,param_3);
    *(char *)(iVar2 + param_4) = (char)iVar1;
    param_2 = *(int *)(*(int *)((int)this + 0x18) + (iVar1 + param_2 * 8) * 4);
    if ((param_2 != param_3) && (iVar1 = FUN_004a83b0(this,param_2), iVar1 != 0)) {
      return 0;
    }
    iVar2 = iVar2 + 1;
    if (*(int *)((int)this + 0xd4) <= iVar2) {
      OutputDebugStringA(s_MoveMap__MakeStraightMoves___exc_0055cdb0);
      return 0;
    }
  } while (param_2 != param_3);
  *param_5 = iVar2;
  return 1;
}


