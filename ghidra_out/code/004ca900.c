
/* WARNING: Function: __ftol replaced with injection: ftol_pop */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl op_add(void *vm)

{
  void *pvVar1;
  void *pvVar2;
  void *this;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvStack_18;
  uint uStack_10;
  void *pvStack_4;
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar3 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar3;
    uVar5 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar3 * 8);
    pvStack_4 = *(void **)(*(int *)((int)vm + 0x50) + -4 + iVar3 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uVar5 = 0;
  }
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar3 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar3;
    uStack_10 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar3 * 8);
    pvVar6 = *(void **)(*(int *)((int)vm + 0x50) + -4 + iVar3 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uStack_10 = 0;
    pvVar6 = pvStack_4;
  }
  uVar5 = uVar5 & 0xff;
  if (uVar5 == 1) {
    pvVar1 = (void *)(float)(int)pvStack_4;
    pvStack_18 = (void *)((int)pvStack_4 << 8);
    vm = pvStack_4;
  }
  else if (uVar5 == 2) {
    vm = (void *)((int)pvStack_4 >> 8);
    pvVar1 = (void *)((float)(int)pvStack_4 * (float)_DAT_0054dd18);
    pvStack_18 = pvStack_4;
  }
  else {
    if (uVar5 != 4) goto LAB_004caae2;
    pvStack_18 = (void *)(longlong)((float)pvStack_4 * (float)_DAT_0054dd10);
    vm = (void *)(longlong)(float)pvStack_4;
    pvVar1 = pvStack_4;
  }
  uStack_10 = uStack_10 & 0xff;
  if (uStack_10 == 1) {
    pvVar2 = (void *)(float)(int)pvVar6;
    pvVar7 = (void *)((int)pvVar6 << 8);
    pvVar4 = pvVar6;
  }
  else if (uStack_10 == 2) {
    pvVar2 = (void *)((float)(int)pvVar6 * (float)_DAT_0054dd18);
    pvVar4 = (void *)((int)pvVar6 >> 8);
    pvVar7 = pvVar6;
  }
  else {
    if (uStack_10 != 4) {
LAB_004caae2:
      *(undefined4 *)((int)this + 0x90) = 0xe;
      FUN_004d4550(this);
      *(undefined4 *)((int)this + 0x90) = 0;
      *(undefined4 *)((int)this + 0xa4) = 0;
      return;
    }
    pvVar4 = (void *)(longlong)(float)pvVar6;
    pvVar7 = (void *)(longlong)((float)pvVar6 * (float)_DAT_0054dd10);
    pvVar2 = pvVar6;
  }
  if ((uVar5 == 4) || (uStack_10 == 4)) {
    FUN_0041d1d0(this,4,(float)pvVar2 + (float)pvVar1);
    return;
  }
  if ((uVar5 == 2) || (uStack_10 == 2)) {
    FUN_0041d1d0(this,2,(int)pvStack_18 + (int)pvVar7);
    return;
  }
  FUN_0041d1d0(this,1,(int)pvVar4 + (int)vm);
  return;
}


