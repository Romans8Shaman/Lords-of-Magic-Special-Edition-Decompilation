
/* WARNING: Function: __ftol replaced with injection: ftol_pop */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __thiscall FUN_00446be0(void *this,int *param_1)

{
  int *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  int iStack_8;
  
  this_00 = (int *)FUN_0043e7b0((int)this);
  if (this_00 != (int *)0x0) {
    iVar1 = (/*IC:00446bfe*/**(code **)(*this_00 + 0x3c))(this_00);
    iVar2 = (/*IC:00446c07*/**(code **)(*(int *)this + 0x3c))(this);
    if ((iVar1 == iVar2) && (this_00[0x35] < 1)) {
      *(undefined4 *)((int)this + 0x44) = 0;
    }
  }
  if (*(void **)((int)this + 0x48) == (void *)0x0) {
    *param_1 = *(int *)((int)this + 0x44);
    return param_1;
  }
  iVar1 = FUN_004154e0(*(void **)((int)this + 0x48),*(int *)((int)this + 0x58),0);
  if ((iVar1 < 0) || (*(int *)(*(int *)((int)this + 0x48) + 0x4c) <= iVar1)) {
    iVar1 = 0;
  }
  iVar1 = iVar1 * 0x4c;
  iVar3 = FUN_00521e00((int *)(iVar1 + 0xc4 + *(int *)((int)this + 0x48)));
  iVar2 = *(int *)((int)this + 0x58);
  if (iVar2 == 9) {
    if (*(int *)(iVar3 + 0x20) == 0) {
      iStack_8 = *(int *)(iVar1 + 0xd4 + *(int *)((int)this + 0x48));
    }
    else {
      iStack_8 = 0;
    }
  }
  else if (iVar2 == 10) {
    if (*(int *)(iVar3 + 0x20) == 1) {
      iStack_8 = *(int *)(iVar1 + 0xd4 + *(int *)((int)this + 0x48));
    }
    else {
      iStack_8 = 0;
    }
  }
  else if (iVar2 == 0xc) {
    if (*(int *)(iVar3 + 0x20) == 2) {
      iStack_8 = *(int *)(iVar1 + 0xd4 + *(int *)((int)this + 0x48));
    }
    else {
      iStack_8 = 0;
    }
  }
  else {
    iStack_8 = 0;
  }
  iVar1 = *(int *)((int)this + 0x44);
  iVar2 = (int)(longlong)((double)*(int *)((int)this + 0x5c) * _DAT_0054d538 * (double)iStack_8);
  if ((iVar1 < iVar2) &&
     (iVar1 = iVar1 + (int)(longlong)((double)iStack_8 * _DAT_0054d540) * *(int *)((int)this + 0x5c)
     , iVar2 < iVar1)) {
    iVar1 = iVar2;
  }
  if (this_00 != (int *)0x0) {
    iVar2 = (/*IC:00446d15*/**(code **)(*this_00 + 0x3c))(this_00);
    iVar3 = (/*IC:00446d1e*/**(code **)(*(int *)this + 0x3c))(this);
    if ((iVar2 == iVar3) && (this_00[0x35] < 1)) {
      iVar1 = 0;
    }
  }
  *param_1 = iVar1;
  return param_1;
}


