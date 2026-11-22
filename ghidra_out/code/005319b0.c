
void __thiscall
FUN_005319b0(void *this,int unused_stack_4,undefined4 unused_stack_8,undefined4 param_p3)

{
  byte bVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  int iVar6;
  int unaff_EBX;
  int iVar7;
  int unaff_EBP;
  int iVar8;
  int unaff_ESI;
  byte *pbVar9;
  
  pbVar9 = *(byte **)((int)this + 8);
  (/*IC:005319de*/**(code **)(*(int *)(&DAT_0058516c)[unused_stack_4] + 100))
            ((int *)(&DAT_0058516c)[unused_stack_4],0,&DAT_005851cc + unused_stack_4 * 0x6c,1,0);
  iVar2 = *(int *)(&DAT_005851f0 + unused_stack_4 * 0x6c);
  iVar5 = *(int *)(*(int *)this + 4);
  iVar8 = 0x280 - iVar5;
  puVar3 = (undefined2 *)(iVar2 + (unaff_EBX * 0x280 + unaff_EBP) * 2);
  iVar7 = 0;
  if (0 < *(int *)(*(int *)this + 8)) {
    do {
      iVar6 = 0;
      puVar4 = puVar3;
      if (0 < iVar5) {
        do {
          puVar3 = puVar4 + 1;
          bVar1 = *pbVar9;
          pbVar9 = pbVar9 + 1;
          iVar6 = iVar6 + 1;
          *puVar4 = *(undefined2 *)((int)this + (uint)bVar1 * 2 + 0xc);
          iVar5 = *(int *)(*(int *)this + 4);
          puVar4 = puVar3;
        } while (iVar6 < iVar5);
      }
      iVar7 = iVar7 + 1;
      puVar3 = puVar3 + iVar8;
    } while (iVar7 < *(int *)(*(int *)this + 8));
  }
  (/*IC:00531a4e*/**(code **)(*(int *)(&DAT_0058516c)[unaff_ESI] + 0x80))((int *)(&DAT_0058516c)[unaff_ESI],iVar2);
  return;
}


