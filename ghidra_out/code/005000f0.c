
undefined4 __thiscall FUN_005000f0(void *this,int param_1)

{
  void *this_00;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  bool bVar10;
  
  this_00 = (void *)((int)this + 0x25644);
  FUN_00481610(this_00,param_1);
  FUN_00472b10((int)this + 0x2531c);
  FUN_0047b4b0(this,0);
  if (DAT_005733fc == 8) {
    uVar1 = *(undefined4 *)((int)this + 0x22f1c);
    uVar2 = *(undefined4 *)((int)this + 0x22f20);
    uVar3 = *(undefined4 *)((int)this + 0x22f24);
    *(undefined4 *)((int)this + 0x22f64) = uVar1;
    *(undefined4 *)((int)this + 0x22f68) = uVar2;
    *(undefined4 *)((int)this + 0x22f6c) = uVar3;
    *(undefined4 *)((int)this + 0x22f70) = 0x17f;
    *(undefined4 *)((int)this + 0x22f40) = uVar1;
    *(undefined4 *)((int)this + 0x22f44) = uVar2;
    *(undefined4 *)((int)this + 0x22f48) = uVar3;
    *(undefined4 *)((int)this + 0x22f4c) = 0x17f;
    *(undefined4 *)((int)this + 0x22f88) = uVar1;
    *(undefined4 *)((int)this + 0x22f8c) = uVar2;
    *(undefined4 *)((int)this + 0x22f90) = uVar3;
    *(undefined4 *)((int)this + 0x22f94) = 0x17f;
  }
  if (param_1 == 8) {
    uVar1 = *(undefined4 *)((int)this + 0x22f1c);
    uVar2 = *(undefined4 *)((int)this + 0x22f20);
    uVar3 = *(undefined4 *)((int)this + 0x22f24);
    *(undefined4 *)((int)this + 0x22f64) = uVar1;
    *(undefined4 *)((int)this + 0x22f68) = uVar2;
    *(undefined4 *)((int)this + 0x22f6c) = uVar3;
    *(undefined4 *)((int)this + 0x22f70) = 0x1df;
    *(undefined4 *)((int)this + 0x22f40) = uVar1;
    *(undefined4 *)((int)this + 0x22f44) = uVar2;
    *(undefined4 *)((int)this + 0x22f48) = uVar3;
    *(undefined4 *)((int)this + 0x22f4c) = 0x1df;
    *(undefined4 *)((int)this + 0x22f88) = uVar1;
    *(undefined4 *)((int)this + 0x22f8c) = uVar2;
    *(undefined4 *)((int)this + 0x22f90) = uVar3;
    *(undefined4 *)((int)this + 0x22f94) = 0x1df;
  }
  bVar10 = param_1 != DAT_005733fc;
  iVar8 = *(int *)((int)this + 0x25318);
  DAT_005733fc = param_1;
  while (iVar8 != 0) {
    iVar8 = **(int **)((int)this + 0x25318);
    FUN_0048ed70(*(int **)((int)this + 0x25318),0xffffffff);
    *(int *)((int)this + 0x25318) = iVar8;
  }
  if (bVar10) {
    FUN_00524230((int)this + 0x48804);
    FUN_004af530((int)this + 0x48810);
    FUN_004b0f10((int)this + 0x48840);
    FUN_0042e1b0((int)this + 0x4884c);
    FUN_0043c2e0((int)this + 0x48828);
    FUN_004f1890((int *)((int)this + 0x2a384));
    FUN_0050d110((int)this + 0x4881c);
  }
  if ((param_1 == 1) || (param_1 == 3)) {
    piVar5 = (int *)((int)this + 0x23590);
    iVar8 = 8;
    do {
      *piVar5 = param_1;
      piVar5 = piVar5 + 0x100;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  else {
    FUN_0052d6f0((void *)(*(int *)((int)this + 0x232a4) * 0x400 + 0x232a8 + (int)this),param_1);
    piVar5 = (int *)((int)this + 0x23590);
    iVar8 = 8;
    do {
      if ((*piVar5 == 1) || (*piVar5 == 3)) {
        *piVar5 = param_1;
      }
      piVar5 = piVar5 + 0x100;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  puVar6 = (undefined4 *)FUN_004754c0((int)this);
  if (puVar6 != (undefined4 *)0x0) {
    iVar8 = puVar6[3];
    iVar4 = puVar6[2];
    puVar9 = (undefined4 *)*puVar6;
    for (uVar7 = (uint)(iVar8 * iVar4) >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    for (uVar7 = iVar8 * iVar4 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar9 = 0;
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    FUN_004755a0(this,puVar6);
    FUN_00500650(this,0,0,puVar6[1] + -1,puVar6[2] + -1);
  }
  if (param_1 != 8) {
    FUN_004f76b0((int)this + 0x29e8c);
    FUN_004bc910((int)this_00);
    FUN_004a90b0((void *)((int)this + 0x29e70),
                 *(int *)(*(int *)((int)this + 0x232a4) * 0x400 + 0x232a8 + (int)this));
    if (((param_1 != 3) || (DAT_00583100 != '\x02')) && (*(int *)((int)this + 0x2a5d4) == 0)) {
      FUN_004c6660((int *)((int)this + 0x2a41c));
    }
  }
  iVar8 = *(int *)((int)this + 0x23090);
  if (iVar8 != 0) {
    *(undefined4 *)(iVar8 + 0x90) = 0;
    *(undefined4 *)(iVar8 + 0xa4) = 0;
    FUN_004d05e0(*(void **)((int)this + 0x23090),*(uint *)((int)this + param_1 * 8 + 0x23094),
                 *(int **)((int)this + param_1 * 8 + 0x23098));
  }
  FUN_0047c6e0(this_00,(int *)0x0,0);
  return 1;
}


