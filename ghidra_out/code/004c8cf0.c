
void __fastcall FUN_004c8cf0(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x6f));
  iVar1 = param_1[3];
  puVar3 = (undefined4 *)*param_1;
  for (uVar2 = (uint)(iVar1 * 6) >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  for (uVar2 = iVar1 * 6 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar3 = 0;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  param_1[0x6e] = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x6f));
  return;
}


