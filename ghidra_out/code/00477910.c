
void __thiscall FUN_00477910(void *this,void *param_1,uint param_2)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  int local_4;
  
  iVar3 = 0;
  local_4 = 0;
  if (0 < *(int *)this) {
    do {
      piVar2 = (int *)(*(int *)((int)this + 0x10) + iVar3);
      FUN_00494e60(param_1,*piVar2,piVar2[1],piVar2[2],piVar2[3],param_2);
      puVar1 = (uint *)(*(int *)((int)this + 0x10) + iVar3);
      FUN_00494a50(param_1,*puVar1,puVar1[1],puVar1[2],
                   *(uint *)(*(int *)((int)this + 0x10) + 0xc + iVar3),param_2);
      puVar1 = (uint *)(*(int *)((int)this + 0x10) + iVar3);
      FUN_00494a50(param_1,puVar1[2],puVar1[1],*puVar1,
                   *(uint *)(*(int *)((int)this + 0x10) + 0xc + iVar3),param_2);
      local_4 = local_4 + 1;
      iVar3 = iVar3 + 0x10;
    } while (local_4 < *(int *)this);
  }
  return;
}


