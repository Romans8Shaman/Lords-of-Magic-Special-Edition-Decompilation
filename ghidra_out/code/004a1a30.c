
undefined4 __fastcall FUN_004a1a30(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int local_108;
  undefined1 local_104;
  undefined1 local_f3;
  char acStack_f2 [50];
  undefined1 local_c0;
  char acStack_bf [191];
  
  FUN_0048cc40((int)&local_108);
  local_f3 = *(undefined1 *)(param_1 + 0x6a8);
  local_c0 = *(undefined1 *)(param_1 + 0xc84);
  bVar1 = false;
  iVar3 = 0;
  local_104 = 0x33;
  do {
    uVar2 = FUN_004a19a0((void *)(param_1 + 0x22ed0),0,iVar3);
    acStack_f2[iVar3] = (char)uVar2;
    uVar2 = FUN_004a19a0((void *)(param_1 + 0x22ed0),1,iVar3);
    acStack_bf[iVar3] = (char)uVar2;
    if ((acStack_f2[iVar3] != -1) || ((char)uVar2 != -1)) {
      bVar1 = true;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x32);
  if (bVar1) {
    uVar2 = FUN_00489b70(&DAT_00584ae8,&local_108);
    return uVar2;
  }
  return 0;
}


