
void __thiscall FUN_0043d490(void *this,int *param_1)

{
  int *this_00;
  int *this_01;
  int iVar1;
  int iVar2;
  
  if (*(int *)((int)this + 0x58) == 0xd) {
    this_00 = (int *)FUN_0043dbb0((int)this);
    this_01 = (int *)FUN_0043dbd0((int)this);
    if (this_00 != (int *)0x0) {
      iVar1 = (/*IC:0043d4b6*/**(code **)(*param_1 + 0x3c))(param_1);
      iVar2 = (/*IC:0043d4bf*/**(code **)(*this_00 + 0x3c))(this_00);
      if (iVar1 == iVar2) {
        *(int *)((int)this + 0x80) = this_00[10];
        return;
      }
    }
    if (this_01 != (int *)0x0) {
      iVar1 = (/*IC:0043d4e0*/**(code **)(*param_1 + 0x3c))(param_1);
      iVar2 = (/*IC:0043d4e9*/**(code **)(*this_01 + 0x3c))(this_01);
      if (iVar1 == iVar2) {
        *(int *)((int)this + 0x80) = this_01[10];
        return;
      }
    }
    *(undefined4 *)((int)this + 0x80) = 0xffffffff;
  }
  return;
}


