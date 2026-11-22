
undefined * __thiscall FUN_00505f50(void *this,uint *param_1)

{
  void *pvVar1;
  int iVar2;
  char cVar3;
  undefined *local_4;
  
  if (*(void **)((int)this + 0x23090) == (void *)0x0) {
    return PTR_DAT_005736f8;
  }
  FUN_004d4a10(*(void **)((int)this + 0x23090),param_1);
  pvVar1 = *(void **)((int)this + 0x23090);
  if (*(int *)((int)pvVar1 + 0x54) < *(int *)((int)pvVar1 + 0x58)) {
    iVar2 = *(int *)((int)pvVar1 + 0x54) + 1;
    *(int *)((int)pvVar1 + 0x54) = iVar2;
    cVar3 = (char)*(undefined4 *)(*(int *)((int)pvVar1 + 0x50) + -8 + iVar2 * 8);
    local_4 = *(undefined **)(*(int *)((int)pvVar1 + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)pvVar1 + 0x90) = 6;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    cVar3 = '\0';
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  }
  iVar2 = *(int *)((int)pvVar1 + 0x90);
  *(undefined4 *)((int)pvVar1 + 0x90) = 0;
  *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  if (iVar2 == 0) {
    if (cVar3 == '\b') goto LAB_00505ff1;
    *(undefined4 *)((int)pvVar1 + 0x90) = 0xe;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  }
  local_4 = (undefined *)0x0;
LAB_00505ff1:
  if (local_4 == (undefined *)0x0) {
    return PTR_DAT_005736f8;
  }
  return local_4;
}


