
uint __thiscall FUN_0046fe60(void *this,undefined4 param_1)

{
  int iVar1;
  char **ppcVar2;
  undefined1 **ppuVar3;
  undefined4 local_9c;
  int local_98;
  undefined4 local_94;
  undefined4 local_90;
  char *local_8c [6];
  undefined4 local_74;
  undefined1 *local_50 [5];
  undefined1 *local_3c;
  undefined1 *local_28;
  
  ppcVar2 = local_8c;
  for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
    *ppcVar2 = (char *)0x0;
    ppcVar2 = ppcVar2 + 1;
  }
  local_8c[4] = (char *)DAT_0055b1b0;
  local_94 = 0;
  local_74 = 0x10;
  local_90 = 0;
  local_9c = 0x10;
  local_98 = (int)this + 0x104;
  ppuVar3 = local_50;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *ppuVar3 = (undefined1 *)0x0;
    ppuVar3 = ppuVar3 + 1;
  }
  local_50[2] = (undefined1 *)DAT_00584d54;
  local_8c[0] = (char *)0x3c;
  local_8c[1] = s_Lords_of_Magic_00557c1c;
  local_8c[3] = (char *)0x44545354;
  local_50[0] = (undefined1 *)0x50;
  local_50[3] = &LAB_004704d0;
  local_3c = &LAB_00470bc0;
  local_28 = &LAB_00470c30;
  iVar1 = Ordinal_116(param_1,local_8c,&local_9c,local_50,0);
  return (uint)(iVar1 != 0);
}


