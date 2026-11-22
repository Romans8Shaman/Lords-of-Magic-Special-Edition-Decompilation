
void __thiscall FUN_0051cd20(void *this,int param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  void *local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar6 = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  local_14 = (void *)FUN_0051b870(param_1);
  if (local_14 != (void *)0x0) {
    FUN_0051cab0(this,local_14,1,&local_c,&local_8,&local_4);
    iVar5 = 0;
    local_28 = 0;
    local_18 = 0;
    puVar1 = FUN_004c6fb0();
    iVar3 = puVar1[0x6c];
    local_10 = iVar3;
    if ((0 < iVar3) && (iVar3 != *(int *)((int)this + 0x74))) {
      FUN_0051b8b0((int)this);
    }
    param_1 = 0;
    if (0 < iVar3) {
      do {
        pvVar2 = (void *)FUN_0051b870(param_1);
        iVar3 = FUN_004c8660((int)pvVar2);
        uVar4 = FUN_0051c9b0(this,iVar3);
        if ((uVar4 & 0xe) == 0) {
          *(undefined4 *)(*(int *)((int)this + 0x70) + 4 + iVar6) = 0;
          *(undefined4 *)(*(int *)((int)this + 0x70) + 8 + iVar6) = 0;
          *(undefined4 *)(*(int *)((int)this + 0x70) + 0xc + iVar6) = 0;
        }
        else {
          FUN_0051cb30(this,pvVar2,(int)local_14,&local_24,&local_20,&local_1c);
          *(int *)(*(int *)((int)this + 0x70) + 4 + iVar6) = local_24;
          *(int *)(*(int *)((int)this + 0x70) + 8 + iVar6) = local_20;
          *(int *)(*(int *)((int)this + 0x70) + 0xc + iVar6) = local_1c;
          local_28 = local_28 + local_20;
          iVar5 = iVar5 + local_24;
          local_18 = local_18 + local_1c;
        }
        param_1 = param_1 + 1;
        iVar6 = iVar6 + 0x14;
      } while (param_1 < local_10);
    }
    *(int *)((int)this + 0xc0) = local_c;
    *(int *)((int)this + 0xc4) = local_8;
    *(int *)((int)this + 200) = local_4;
    if (iVar5 == 0) {
      if (local_28 != 0) {
        *(int *)((int)this + 0xcc) = local_c;
        *(undefined4 *)((int)this + 0xc0) = 0;
        return;
      }
      *(undefined4 *)((int)this + 0xc0) = 0;
      *(int *)((int)this + 200) = local_4 + local_c;
    }
  }
  return;
}


