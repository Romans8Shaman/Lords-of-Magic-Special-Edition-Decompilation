
undefined4 __fastcall FUN_0045c7b0(int param_1)

{
  undefined4 uVar1;
  int local_108;
  undefined1 local_104;
  undefined1 local_f3;
  undefined1 local_f2;
  
  if (((DAT_00583574 == 0) && (*(int *)(param_1 + 0x4fec) == 0)) &&
     (*(int *)(param_1 + 0x4ff0) == 0)) {
    FUN_0048cc40((int)&local_108);
    local_f2 = *(undefined1 *)(param_1 + 0xc84);
    local_f3 = *(undefined1 *)(param_1 + 0x6a8);
    local_104 = 0x3a;
    uVar1 = FUN_00489b70(&DAT_00584ae8,&local_108);
    *(undefined4 *)(param_1 + 0x4fec) = 1;
    return uVar1;
  }
  return 0;
}


