
void __thiscall FUN_004166d0(void *this,int param_1,int param_2)

{
  void *pvVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int *this_00;
  int *piVar5;
  int iVar6;
  undefined *puVar7;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar3 = *(int *)((int)this + 0x48);
  if ((iVar3 < 0) || (0xf < iVar3)) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = &DAT_005af194 + iVar3 * 0x1d84;
  }
  if (puVar7 == (undefined *)0x0) {
    return;
  }
  if ((&DAT_005a8078)[DAT_005a7d8c * 0x100] == 8) {
    return;
  }
  iVar3 = FUN_00420580((int)this);
  if ((iVar3 != 0) && ((DAT_00555870 & 0xf00) == 0)) {
    if ((DAT_00555870 & 0x100) == 0) {
      return;
    }
    if ((*(byte *)((int)this + 0x30) & 0x20) == 0) {
      return;
    }
  }
  uVar4 = FUN_00521e30((int *)((int)this + *(int *)((int)this + 0x50) * 0x4c + 0xc4));
  if ((uVar4 == 0) || ((*(uint *)((int)this + 0x30) & 0x1c00000) != 0)) {
    bVar2 = ~(byte)*(undefined4 *)((int)this + 0x30) & 0x20 | 0x80;
  }
  else {
    bVar2 = ~(byte)*(uint *)((int)this + 0x30) & 0x20 | 0x40;
  }
  local_1c = (uint)(bVar2 >> 5);
  this_00 = (int *)FUN_00428a90((int)this + *(int *)((int)this + 0x50) * 0x4c + 0xc4);
  if (this_00 == (int *)0x0) {
    iVar3 = 0;
    if (0 < *(int *)((int)this + 0x4c)) {
      local_18 = (int)this + 0xc4;
      do {
        if (this_00 != (int *)0x0) goto LAB_004167f0;
        if (iVar3 != *(int *)((int)this + 0x50)) {
          this_00 = (int *)FUN_00428a90(local_18);
        }
        iVar3 = iVar3 + 1;
        local_18 = local_18 + 0x4c;
      } while (iVar3 < *(int *)((int)this + 0x4c));
    }
    if (this_00 == (int *)0x0) {
      if (*(int *)(puVar7 + 0x28) == 0) {
        return;
      }
      uVar4 = FUN_0049d8f0(*(int *)(puVar7 + 0x28));
      if ((int)uVar4 < 1) {
        return;
      }
      uVar4 = FUN_0049d8f0(*(int *)(puVar7 + 0x28));
      iVar3 = *(int *)((int)this + 0x28) + DAT_005af134;
      FUN_0049da80(*(void **)(puVar7 + 0x28),local_1c);
      pvVar1 = *(void **)(puVar7 + 0x28);
      *(int *)((int)pvVar1 + 0xc) = iVar3 % (int)uVar4 + -1;
      FUN_0049d9a0(pvVar1);
      FUN_0049dcc0(*(void **)(puVar7 + 0x28),*(int *)((int)this + 0x44));
      if ((*(void **)((int)this + 0x2c) == (void *)0x0) ||
         (iVar3 = FUN_0049cb20(*(void **)((int)this + 0x2c),&local_18,&local_14,8,0xffffffff),
         iVar3 == 0)) {
        iVar3 = *(int *)(puVar7 + 0x15c8);
        iVar6 = *(int *)(puVar7 + 0x15cc);
      }
      else {
        iVar6 = local_14;
        iVar3 = local_18;
      }
      uVar4 = FUN_00525f10((int)this + *(int *)((int)this + 0x50) * 0x4c + 0xc4);
      if ((uVar4 == 0) &&
         (uVar4 = FUN_00525f20((int)this + *(int *)((int)this + 0x50) * 0x4c + 0xc4), uVar4 == 0)) {
        FUN_0049cd80(*(void **)(puVar7 + 0x28),iVar3 + param_1,iVar6 + param_2,-1,0,2);
        return;
      }
      FUN_0049cd80(*(void **)(puVar7 + 0x28),iVar3 + param_1,(iVar6 + param_2) - DAT_0055d6ec,-1,0,2
                  );
      FUN_0049cd80(*(void **)(puVar7 + 0x28),iVar3 + param_1,DAT_0055d6ec + iVar6 + param_2,-1,0,2);
      return;
    }
  }
LAB_004167f0:
  if (*this_00 == 0xe) {
    FUN_0049da80((void *)this_00[1],local_1c);
    uVar4 = FUN_0049d8f0(this_00[1]);
    if ((int)uVar4 < 1) {
      iVar3 = 0;
    }
    else {
      iVar3 = (*(int *)((int)this + 0x28) + DAT_005af134) % (int)uVar4;
    }
    pvVar1 = (void *)this_00[1];
    *(int *)((int)pvVar1 + 0xc) = iVar3 + -1;
    FUN_0049d9a0(pvVar1);
    FUN_0049dcc0((void *)this_00[1],*(int *)((int)this + 0x44));
  }
  if ((*(void **)((int)this + 0x2c) == (void *)0x0) ||
     (iVar3 = FUN_0049cb20(*(void **)((int)this + 0x2c),&local_18,(int *)&local_1c,8,0xffffffff),
     iVar3 == 0)) {
    iVar3 = *(int *)(puVar7 + 0x15c8);
    uVar4 = *(uint *)(puVar7 + 0x15cc);
  }
  else {
    uVar4 = local_1c;
    iVar3 = local_18;
  }
  piVar5 = (int *)FUN_004754c0(0x584ae8);
  if (piVar5 != (int *)0x0) {
    iVar6 = FUN_00491910(this_00,&local_10,iVar3 + param_1,uVar4 + param_2);
    FUN_004935c0(this_00,piVar5,iVar3 + param_1,uVar4 + param_2,-1,1);
    FUN_004755a0(&DAT_00584ae8,piVar5);
    if (iVar6 != 0) {
      FUN_00500650(&DAT_00584ae8,local_10,local_c,local_8,local_4);
      return;
    }
  }
  return;
}


