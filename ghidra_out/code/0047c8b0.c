
void __fastcall FUN_0047c8b0(void *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  int local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  uint local_1f4;
  int local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc [50];
  byte local_114;
  int local_108 [5];
  int local_f3;
  undefined4 local_ef;
  undefined4 local_eb;
  uint local_e7;
  int local_e3;
  undefined4 local_df;
  undefined4 local_db;
  undefined4 local_d7;
  undefined4 local_d3;
  undefined4 local_cf [51];
  
  if (*(int *)((int)param_1 + 0x228b4) != 0) {
    iVar1 = FUN_0047c7e0(param_1,&local_200);
    while (iVar1 != 0) {
      puVar2 = FUN_00485080(param_1,local_200,0x2f);
      if (puVar2 != (undefined4 *)0x0) {
        if ((local_114 & 1) != 0) {
          return;
        }
        if ((local_1f0 == puVar2[7]) && ((*(byte *)(puVar2 + 0xc) & 2) != 0)) {
          FUN_0048cc70(local_108,0xd);
          local_f3 = local_200;
          local_df = local_1ec;
          local_db = local_1e8;
          local_eb = local_1f8;
          local_e3 = local_1f0;
          local_ef = local_1fc;
          local_e7 = local_1f4;
          local_d7 = local_1e4;
          local_d3 = local_1e0;
          if (0 < (int)local_1f4) {
            puVar2 = local_1dc;
            puVar4 = local_cf;
            for (uVar3 = local_1f4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
              *puVar4 = *puVar2;
              puVar2 = puVar2 + 1;
              puVar4 = puVar4 + 1;
            }
            for (uVar3 = local_1f4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
              *(undefined1 *)puVar4 = *(undefined1 *)puVar2;
              puVar2 = (undefined4 *)((int)puVar2 + 1);
              puVar4 = (undefined4 *)((int)puVar4 + 1);
            }
          }
          FUN_00480850(local_108);
        }
      }
      iVar1 = FUN_0047c7e0(param_1,&local_200);
    }
  }
  return;
}


