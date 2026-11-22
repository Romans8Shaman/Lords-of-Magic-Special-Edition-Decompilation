
int __thiscall FUN_004eb170(void *this,undefined1 *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = 0;
  *param_3 = 0;
  if ((*(code **)((int)this + 0x34) != (code *)0x0) &&
     (iVar1 = (/*IC:004eb18e*/**(code **)((int)this + 0x34))(), iVar1 == 0)) {
    iVar1 = FUN_004eb270((int)this);
    iVar3 = 0;
    if (-1 < iVar1) {
      while (iVar2 = (/*IC:004eb1ac*/**(code **)((int)this + 0x38))(param_1,param_2,iVar3), iVar2 < 1) {
        iVar3 = iVar3 + 1;
        if (iVar1 < iVar3) {
          return 0;
        }
      }
      if (param_2 < iVar2) {
        DebugBreak();
        return 0;
      }
      iVar1 = (/*IC:004eb1de*/**(code **)((int)this + 0x3c))(param_1,iVar2,iVar3);
      if (iVar1 < 1) {
        DebugBreak();
        return 0;
      }
      *param_3 = iVar3;
      return iVar1;
    }
  }
  return 0;
}


