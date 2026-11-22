
void FUN_004b6900(undefined4 *param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (uVar1 = param_2 - 1U >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  for (uVar1 = param_2 - 1U & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)puVar2 = 0;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  *(undefined1 *)(param_2 + -1 + (int)param_1) = 1;
  return;
}


