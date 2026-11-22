
int __thiscall FUN_004ebdf0(void *this,LONG param_1,LONG param_2)

{
  POINT pt;
  POINT pt_00;
  POINT pt_01;
  code *pcVar1;
  int iVar2;
  BOOL BVar3;
  code *pcVar4;
  int *piVar5;
  int local_1c;
  RECT *local_18;
  RECT local_10;
  
  if ((*(byte *)((int)this + 0xd4) & 1) == 0) {
    local_1c = 0;
    if (0 < *(int *)this + 1) {
      piVar5 = (int *)((int)this + 0x4c);
      local_18 = (RECT *)((int)this + 0xd8);
      do {
        pt_00.y = param_2;
        pt_00.x = param_1;
        BVar3 = PtInRect(local_18,pt_00);
        if (BVar3 != 0) {
          return local_1c;
        }
        iVar2 = *piVar5;
        if (iVar2 != 0) {
          local_10.left = piVar5[0x3b];
          local_10.top = piVar5[0x11];
          local_10.bottom = *(int *)(iVar2 + 0x10) + local_10.top;
          local_10.right = *(int *)(iVar2 + 0xc) + local_10.left;
          pt_01.y = param_2;
          pt_01.x = param_1;
          BVar3 = PtInRect(&local_10,pt_01);
          if (BVar3 != 0) {
            return local_1c;
          }
        }
        local_18 = local_18 + 1;
        local_1c = local_1c + 1;
        piVar5 = piVar5 + 1;
      } while (local_1c < *(int *)this + 1);
      return -1;
    }
  }
  else {
    local_1c = 0;
    if (0 < *(int *)this + 1) {
      piVar5 = (int *)((int)this + 0x4c);
      local_18 = (RECT *)((int)this + 0xd8);
      pcVar4 = PtInRect_exref;
      do {
        iVar2 = (/*IC:004ebe3e*/*pcVar4)(local_18,param_1,param_2);
        pcVar1 = PtInRect_exref;
        if (iVar2 != 0) {
          return local_1c;
        }
        iVar2 = *piVar5;
        if (iVar2 != 0) {
          local_10.left = piVar5[0x11];
          local_10.top = piVar5[0x3b];
          local_10.bottom = *(int *)(iVar2 + 0x10) + local_10.top;
          local_10.right = *(int *)(iVar2 + 0xc) + local_10.left;
          pt.y = param_2;
          pt.x = param_1;
          BVar3 = PtInRect(&local_10,pt);
          pcVar4 = pcVar1;
          if (BVar3 != 0) {
            return local_1c;
          }
        }
        local_18 = (RECT *)((int)local_18 + 0x10);
        local_1c = local_1c + 1;
        piVar5 = piVar5 + 1;
      } while (local_1c < *(int *)this + 1);
      return -1;
    }
  }
  return -1;
}


