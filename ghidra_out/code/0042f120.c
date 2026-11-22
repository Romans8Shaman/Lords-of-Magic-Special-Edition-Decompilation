
undefined4 __thiscall FUN_0042f120(void *this,void *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  puVar1 = param_2;
  if (*(char *)((int)this + 0xc30) == '\0') {
    return 0;
  }
  puVar4 = param_2;
  puVar5 = this;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x44) = param_2[0x11];
  *(undefined4 *)((int)this + 0x48) = param_2[0x12];
  *(undefined4 *)((int)this + 0x4c) = param_2[0x13];
  *(undefined4 *)((int)this + 0x50) = param_2[0x14];
  *(undefined4 *)((int)this + 0x54) = param_2[0x15];
  *(undefined4 *)((int)this + 0x58) = param_2[0x16];
  *(undefined4 *)((int)this + 0x5c) = param_2[0x17];
  *(undefined4 *)((int)this + 0x60) = param_2[0x18];
  *(undefined4 *)((int)this + 100) = param_2[0x19];
  puVar4 = param_2 + 0x1a;
  puVar5 = (undefined4 *)((int)this + 0x68);
  for (iVar2 = 0x16; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)((int)this + 0xc0) = param_2[0x30];
  iVar2 = (int)param_2 - (int)this;
  param_2 = (undefined4 *)0xf;
  puVar4 = (undefined4 *)((int)this + 0xc4);
  do {
    puVar5 = (undefined4 *)(iVar2 + (int)puVar4);
    puVar6 = puVar4;
    for (iVar3 = 0x13; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    param_2 = (undefined4 *)((int)param_2 + -1);
    puVar4 = puVar4 + 0x13;
  } while (param_2 != (undefined4 *)0x0);
  *(undefined4 *)((int)this + 0x538) = puVar1[0x14e];
  *(undefined4 *)((int)this + 0x53c) = puVar1[0x14f];
  *(undefined4 *)((int)this + 0x540) = puVar1[0x150];
  *(undefined4 *)((int)this + 0x544) = puVar1[0x151];
  *(undefined4 *)((int)this + 0x548) = puVar1[0x152];
  *(undefined4 *)((int)this + 0x54c) = puVar1[0x153];
  *(undefined4 *)((int)this + 0x550) = puVar1[0x154];
  *(undefined4 *)((int)this + 0x554) = puVar1[0x155];
  *(undefined4 *)((int)this + 0x558) = puVar1[0x156];
  *(undefined4 *)((int)this + 0x55c) = puVar1[0x157];
  *(undefined4 *)((int)this + 0x560) = puVar1[0x158];
  *(undefined4 *)((int)this + 0x564) = puVar1[0x159];
  puVar4 = puVar1 + 0x15a;
  puVar5 = (undefined4 *)((int)this + 0x568);
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)((int)this + 0x58c) = puVar1[0x163];
  *(undefined4 *)((int)this + 0x590) = puVar1[0x164];
  *(undefined4 *)((int)this + 0x594) = puVar1[0x165];
  *(undefined4 *)((int)this + 0x598) = puVar1[0x166];
  *(undefined4 *)((int)this + 0x59c) = puVar1[0x167];
  *(undefined4 *)((int)this + 0x5a0) = puVar1[0x168];
  *(undefined4 *)((int)this + 0x5a4) = puVar1[0x169];
  *(undefined4 *)((int)this + 0x5a8) = puVar1[0x16a];
  *(undefined1 *)((int)this + 0x5ac) = *(undefined1 *)(puVar1 + 0x16b);
  *(undefined4 *)((int)this + 0x5b0) = puVar1[0x16c];
  *(undefined4 *)((int)this + 0x5b4) = puVar1[0x16d];
  *(undefined4 *)((int)this + 0x5b8) = puVar1[0x16e];
  *(undefined4 *)((int)this + 0x5bc) = puVar1[0x16f];
  *(undefined4 *)((int)this + 0x5c0) = puVar1[0x170];
  *(undefined4 *)((int)this + 0x5c4) = puVar1[0x171];
  *(undefined1 *)((int)this + 0x5c8) = *(undefined1 *)(puVar1 + 0x172);
  *(undefined4 *)((int)this + 0x5cc) = puVar1[0x173];
  *(undefined1 *)((int)this + 0x5d0) = *(undefined1 *)(puVar1 + 0x174);
  *(undefined4 *)((int)this + 0x5d4) = puVar1[0x175];
  *(undefined1 *)((int)this + 0x5d8) = *(undefined1 *)(puVar1 + 0x176);
  FUN_00419d00((void *)((int)this + 0x5dc),param_3);
  *(undefined4 *)((int)this + 0x28) = 0xfffffff3;
  *(undefined4 *)((int)this + 0x604) = 0xfffffff2;
  puVar1 = (undefined4 *)((int)this + 0xbf4);
  iVar2 = 0xf;
  do {
    puVar1[-0xf] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_004d09a0(param_1,*(uint *)((int)this + 0xc30),*(int **)((int)this + 0xc34),0);
  return 1;
}


