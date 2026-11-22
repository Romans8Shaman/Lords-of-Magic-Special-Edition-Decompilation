
int * __thiscall FUN_00509280(void *this,int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  char *unused_stack_0;
  uint local_20 [8];
  
  puVar9 = *(undefined4 **)((int)this + 0x38);
  for (uVar4 = *(uint *)((int)this + 0x2c) & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined1 *)puVar9 = 0;
    puVar9 = (undefined4 *)((int)puVar9 + 1);
  }
  if ((param_1 < 0) || (*(int *)((int)this + 0x14) <= param_1)) {
    unused_stack_0 = s_TileSet__CalculateMatches___inva_005737f4;
  }
  else {
    iVar5 = 0;
    puVar7 = local_20;
    while ((iVar6 = *(int *)((param_2 - (int)local_20) + (int)puVar7), -1 < iVar6 &&
           (iVar6 < *(int *)((int)this + 0x2c)))) {
      iVar6 = *(int *)(*(int *)((int)this + 0x18) + iVar6 * 4);
      if (iVar6 < 0) {
        unused_stack_0 = s_TileSet__CalculateMatches___text_005737bc;
        goto LAB_005093ef;
      }
      iVar5 = iVar5 + 1;
      *puVar7 = 1 << ((byte)iVar6 & 0x1f);
      puVar7 = puVar7 + 1;
      if (7 < iVar5) {
        if (*(int *)this == 0) {
          FUN_005091c0(this);
        }
        piVar1 = (int *)((int)this + 0x30);
        iVar5 = param_1 * 4;
        *piVar1 = 0;
        param_2 = *(int *)(iVar5 + *(int *)((int)this + 0x1c));
        if (param_2 < *(int *)(iVar5 + *(int *)((int)this + 0x20)) + param_2) {
          iVar6 = param_2 * 0x2c;
          do {
            iVar8 = *(int *)((int)this + 0xc);
            iVar10 = 0;
            puVar3 = local_20;
            puVar7 = (uint *)(iVar6 + 0xc + iVar8);
            do {
              if ((*puVar3 & *puVar7) == 0) break;
              iVar10 = iVar10 + 1;
              puVar7 = puVar7 + 1;
              puVar3 = puVar3 + 1;
            } while (iVar10 < 8);
            if ((iVar10 == 8) && (iVar10 = 0, 0 < *(int *)(iVar6 + 4 + iVar8))) {
              do {
                iVar2 = *(int *)((int)this + 0x38);
                if (*(int *)(iVar2 + *(int *)(*(int *)(iVar6 + iVar8) + iVar10 * 4) * 4) == 0) {
                  iVar8 = *(int *)(*(int *)(iVar6 + iVar8) + iVar10 * 4);
                  *(int *)(iVar2 + iVar8 * 4) = *(int *)(iVar2 + iVar8 * 4) + 1;
                  *(undefined4 *)(*(int *)((int)this + 0x34) + *piVar1 * 4) =
                       *(undefined4 *)(*(int *)(iVar6 + *(int *)((int)this + 0xc)) + iVar10 * 4);
                  *piVar1 = *piVar1 + 1;
                }
                iVar8 = *(int *)((int)this + 0xc);
                iVar10 = iVar10 + 1;
              } while (iVar10 < *(int *)(iVar6 + 4 + iVar8));
            }
            param_2 = param_2 + 1;
            iVar6 = iVar6 + 0x2c;
          } while (param_2 < *(int *)(iVar5 + *(int *)((int)this + 0x20)) +
                             *(int *)(iVar5 + *(int *)((int)this + 0x1c)));
        }
        return piVar1;
      }
    }
    unused_stack_0 = s_TileSet__CalculateMatches___inva_0057378c;
  }
LAB_005093ef:
  FUN_005047d0(unused_stack_0);
  return (int *)0x0;
}


