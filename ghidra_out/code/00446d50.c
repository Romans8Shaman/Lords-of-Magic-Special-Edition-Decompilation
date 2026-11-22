
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __thiscall FUN_00446d50(void *this,int *param_1)

{
  int *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iStack_4;
  
  this_00 = (int *)FUN_0043e7b0((int)this);
  if (this_00 != (int *)0x0) {
    iVar1 = (/*IC:00446d68*/**(code **)(*this_00 + 0x3c))(this_00);
    iVar2 = (/*IC:00446d71*/**(code **)(*(int *)this + 0x3c))(this);
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
  iVar3 = FUN_00521e00((int *)(*(int *)((int)this + 0x48) + 0xc4 + iVar1));
  iVar2 = *(int *)((int)this + 0x58);
  if (iVar2 == 9) {
    if (*(int *)(iVar3 + 0x20) == 0) {
      iStack_4 = *(int *)(*(int *)((int)this + 0x48) + 0xd4 + iVar1);
    }
    else {
      iStack_4 = 0;
    }
  }
  else if (iVar2 == 10) {
    if (*(int *)(iVar3 + 0x20) == 1) {
      iStack_4 = *(int *)(*(int *)((int)this + 0x48) + 0xd4 + iVar1);
    }
    else {
      iStack_4 = 0;
    }
  }
  else if (iVar2 == 0xc) {
    if (*(int *)(iVar3 + 0x20) == 2) {
      iStack_4 = *(int *)(*(int *)((int)this + 0x48) + 0xd4 + iVar1);
    }
    else {
      iStack_4 = 0;
    }
  }
  else {
    iStack_4 = 0;
  }
  lVar4 = __ftol((float10)iStack_4 * (float10)*(int *)((int)this + 0x5c) * (float10)_DAT_0054d538);
  iVar1 = (int)lVar4;
  if (this_00 != (int *)0x0) {
    iVar2 = (/*IC:00446e52*/**(code **)(*this_00 + 0x3c))(this_00);
    iVar3 = (/*IC:00446e5f*/**(code **)(*(int *)this + 0x3c))(this);
    if ((iVar2 == iVar3) && (this_00[0x35] < 1)) {
      iVar1 = 0;
    }
  }
  *param_1 = iVar1;
  return param_1;
}


