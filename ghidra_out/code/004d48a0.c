
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __thiscall FUN_004d48a0(void *this,LPCSTR param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iStack_28c4;
  uint *puStack_28c0;
  int iStack_28bc;
  int iStack_28b8;
  char acStack_28ac [400];
  undefined1 auStack_271c [9996];
  undefined4 uStack_10;
  void *local_c;
  undefined1 *local_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  local_8 = &DAT_0054b78b;
  local_c = ExceptionList;
  uStack_10 = 0x4d48bf;
  iStack_28c4 = 0;
  ExceptionList = &local_c;
  if ((*(int *)((int)this + 0x88) != 0) &&
     (ExceptionList = &local_c, *(int *)((int)this + 0x868) == 0)) {
    iStack_28c4 = 1;
    ExceptionList = &local_c;
    uVar1 = FUN_00539610((LPCSTR)((int)this + 0x764),&DAT_0055c020);
    *(undefined4 *)((int)this + 0x868) = uVar1;
  }
  FUN_004fe720(&puStack_28c0,param_1,3,(int)auStack_271c,10000,2);
  local_4 = 0;
  if (iStack_28bc == 1) {
    FUN_0053a090(acStack_28ac,s__s_run___file_not_found_0055e6b0,(uint)param_1);
    FUN_004d41c0(this,acStack_28ac);
    iStack_28b8 = iStack_28c4;
    puStack_28c0 = (uint *)0x0;
  }
  else {
  }
  if (puStack_28c0 != (uint *)0x0) {
    if ((DAT_00584600 != 0) && (iVar2 = 0, 0 < iStack_28b8)) {
      do {
        DAT_00584604 = DAT_00584604 + *(char *)(iVar2 + (int)puStack_28c0);
        iVar2 = iVar2 + 1;
      } while (iVar2 < iStack_28b8);
    }
    FUN_00530d00(&DAT_005d3818,(byte *)puStack_28c0,iStack_28b8);
    *(LPCSTR *)((int)this + 0x874) = param_1;
    FUN_004d4a10(this,puStack_28c0);
    *(undefined4 *)((int)this + 0x874) = 0;
    *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)((int)this + 0x70);
  }
  if ((iStack_28c4 != 0) && (*(int **)((int)this + 0x868) != (int *)0x0)) {
    FUN_005394d0(*(int **)((int)this + 0x868));
    *(undefined4 *)((int)this + 0x868) = 0;
  }
  local_4 = 0xffffffff;
  FUN_004fe9c0((int *)&puStack_28c0);
  ExceptionList = local_c;
  return;
}


