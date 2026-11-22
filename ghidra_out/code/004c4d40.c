
void __thiscall FUN_004c4d40(void *this,undefined *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  
  iVar2 = FUN_004c4d00(this);
  if (1 < iVar2) {
    do {
      bVar1 = false;
      uVar3 = FUN_005262b0(this);
      puVar4 = (undefined4 *)FUN_004c4cf0(this);
      puVar5 = (undefined4 *)FUN_004c4cf0(this);
      while (puVar5 != (undefined4 *)0x0) {
        iVar2 = (/*IC:004c4d8c*/*(code *)param_1)(puVar4,puVar5);
        if (0 < iVar2) {
          uVar8 = *(uint *)((int)this + 0xc);
          bVar1 = true;
          puVar6 = puVar4;
          puVar9 = *(undefined4 **)((int)this + 0x14);
          for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar9 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar9 = puVar9 + 1;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined1 *)puVar9 = *(undefined1 *)puVar6;
            puVar6 = (undefined4 *)((int)puVar6 + 1);
            puVar9 = (undefined4 *)((int)puVar9 + 1);
          }
          uVar8 = *(uint *)((int)this + 0xc);
          puVar6 = puVar5;
          for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar4 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar4 = puVar4 + 1;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined1 *)puVar4 = *(undefined1 *)puVar6;
            puVar6 = (undefined4 *)((int)puVar6 + 1);
            puVar4 = (undefined4 *)((int)puVar4 + 1);
          }
          uVar8 = *(uint *)((int)this + 0xc);
          puVar4 = *(undefined4 **)((int)this + 0x14);
          puVar6 = puVar5;
          for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar6 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar6 = puVar6 + 1;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined1 *)puVar6 = *(undefined1 *)puVar4;
            puVar4 = (undefined4 *)((int)puVar4 + 1);
            puVar6 = (undefined4 *)((int)puVar6 + 1);
          }
        }
        puVar6 = (undefined4 *)FUN_004c4cf0(this);
        puVar4 = puVar5;
        puVar5 = puVar6;
      }
      FUN_004c4d30(this,uVar3);
    } while (bVar1);
  }
  return;
}


