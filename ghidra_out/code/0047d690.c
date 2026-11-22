
void __thiscall FUN_0047d690(void *this)

{
  void *this_00;
  int iVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  undefined4 uStack_10;
  int iStack_c;
  uint uStack_8;
  int iStack_4;
  
  iVar1 = *(int *)((int)this + 0x4c);
  if (((iVar1 < 0) || (DAT_005cd2f0 <= iVar1)) || (DAT_005cd2f4 == 0)) {
    pvVar4 = (void *)0x0;
  }
  else {
    pvVar4 = (void *)(DAT_005cd2f4 + iVar1 * 1000);
  }
  uStack_10 = 0xffffffff;
  iStack_c = -1;
  if (pvVar4 == (void *)0x0) {
    OutputDebugStringA(s_Follower___unknown_unit_type_0055b110);
    FUN_004f5a90(this,-1);
    FUN_0047d4b0(this,-1);
    FUN_004b0400((void *)((int)this + 0x88),-1);
    FUN_0042d750((void *)((int)this + 0x94),-1,0,-1);
    return;
  }
  iVar1 = FUN_00522b60(pvVar4);
  FUN_004f5a90(this,iVar1);
  iVar1 = FUN_00522c90(pvVar4);
  FUN_0047d4b0(this,iVar1);
  iVar1 = FUN_00522de0(pvVar4);
  FUN_0047d570(this,iVar1);
  this_00 = (void *)((int)this + 0x88);
  FUN_004b0400(this_00,*(int *)((int)pvVar4 + 0x4c));
  uVar2 = FUN_00482ac0(&DAT_005aa12c,*(int *)((int)this + 0x44),0);
  if (uVar2 == 0) {
    FUN_004f5b30(this,2);
    FUN_004f5b70(this,0);
    FUN_004b02c0(this_00,2);
    FUN_004b0310(this_00,0);
    FUN_0042d750((void *)((int)this + 0x94),-1,0,-1);
    *(undefined4 *)((int)this + 0x74) = 0;
    (/*IC:0047d7a3*/**(code **)(*(int *)this + 0x1c))();
    return;
  }
  FUN_004f5b30(this,*(uint *)(uVar2 + 0x544));
  FUN_004f5b70(this,*(int *)(uVar2 + 0x44));
  uVar3 = FUN_0047d680(*(int *)(uVar2 + 0x544));
  FUN_004b02c0(this_00,uVar3);
  FUN_0047d630(this,*(uint *)(uVar2 + 0x544));
  FUN_004b0310(this_00,*(int *)(uVar2 + 0x44));
  if (*(void **)((int)this + 0xb8) != (void *)0x0) {
    FUN_0049dcc0(*(void **)((int)this + 0xb8),*(int *)(uVar2 + 0x44));
  }
  if (*(void **)((int)this + 0xc0) != (void *)0x0) {
    FUN_0049dcc0(*(void **)((int)this + 0xc0),*(int *)(uVar2 + 0x44));
  }
  iVar1 = *(int *)((int)this + 0x48);
  if ((-1 < iVar1) && (iVar1 < *(int *)(uVar2 + 0x4c))) {
    FUN_005284c0((void *)(uVar2 + 0xc4 + iVar1 * 0x4c),&iStack_c,&uStack_10,&iStack_4,&uStack_8);
    FUN_0042d750((void *)((int)this + 0x94),iStack_c,uStack_10,-1);
    if (*(void **)((int)this + 0x2c) != (void *)0x0) {
      FUN_0049cd50(*(void **)((int)this + 0x2c),iStack_4,uStack_8);
    }
    FUN_004b0520(this_00,iStack_4,uStack_8);
  }
  (/*IC:0047d88f*/**(code **)(*(int *)this + 0x1c))();
  return;
}


