
void __thiscall FUN_004b1bc0(void *this,int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  undefined4 *puVar3;
  
  if ((param_1 != 0) || (puVar3 = (undefined4 *)&DAT_0055cde8, DAT_005851a0 != 0)) {
    puVar3 = &DAT_0055ce20;
  }
  bVar2 = 0;
  param_1 = 0;
  do {
    puVar1 = (undefined4 *)FUN_004b1db0(this,(char)param_1);
    bVar2 = bVar2 + 1;
    param_1 = (int)bVar2;
    *puVar1 = *puVar3;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar3 + 1);
    puVar3 = (undefined4 *)((int)puVar3 + 5);
  } while ((char)bVar2 < '\n');
  return;
}


