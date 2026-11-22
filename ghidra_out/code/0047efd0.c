
int __thiscall FUN_0047efd0(void *this,int param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte local_14;
  undefined1 local_13;
  undefined1 local_12;
  int local_10;
  uint local_c;
  uint local_8;
  uint local_4;
  
  if (((*(byte *)((int)this + 0x14) & 4) != 0) || (*(int *)((int)this + 0x10) == 0)) {
    iVar4 = FUN_00474ee0(&DAT_00584ae8,param_1,param_2,param_3);
    return iVar4;
  }
  bVar1 = (byte)param_1;
  iVar2 = CONCAT31((int3)((uint)*(int *)((int)this + 0x10) >> 8),(undefined1)param_2);
  local_14 = (byte)param_1;
  local_13 = (undefined1)param_2;
  local_12 = (undefined1)param_3;
  iVar4 = 10000;
  iVar3 = 0;
  do {
    FUN_00474e70(&DAT_00584ae8,&local_4,&local_8,&local_c,
                 CONCAT22((short)((uint)iVar2 >> 0x10),
                          *(undefined2 *)(*(int *)((int)this + 0x10) + iVar3 * 2)));
    param_1._0_3_ = CONCAT12((undefined1)param_3,CONCAT11((undefined1)param_2,bVar1));
    iVar2 = FUN_00511630(&local_14,(byte *)&param_1);
    if (iVar2 < iVar4) {
      iVar4 = iVar2;
      local_10 = iVar3;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x100);
  return local_10;
}


