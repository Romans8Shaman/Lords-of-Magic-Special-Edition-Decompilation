
int __thiscall FUN_0046cca0(void *this,LONG param_1,LONG param_2)

{
  POINT pt;
  int *piVar1;
  BOOL BVar2;
  int iVar3;
  int local_14;
  RECT local_10;
  
  iVar3 = 0;
  local_14 = 0;
  if (0 < *(int *)((int)this + 0xc)) {
    do {
      piVar1 = (int *)(*(int *)((int)this + 4) + iVar3);
      local_10.left = *piVar1 + *(int *)((int)this + 0x3c);
      local_10.top = piVar1[1] + *(int *)((int)this + 0x40);
      local_10.right = piVar1[2] + local_10.left;
      local_10.bottom = piVar1[3] + local_10.top;
      pt.y = param_2;
      pt.x = param_1;
      BVar2 = PtInRect(&local_10,pt);
      if (BVar2 != 0) {
        return local_14;
      }
      local_14 = local_14 + 1;
      iVar3 = iVar3 + 0x30;
    } while (local_14 < *(int *)((int)this + 0xc));
  }
  return -1;
}


