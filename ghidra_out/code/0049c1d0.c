
void __cdecl op_enumimphotspots(void *vm)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  void *this;
  uint *puVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  int iStack_38;
  uint uStack_34;
  ushort *puStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  uint uStack_24;
  int *piStack_20;
  int iStack_1c;
  uint auStack_18 [2];
  uint auStack_10 [2];
  uint uStack_8;
  int *piStack_4;
  
  this = vm;
  puVar4 = (uint *)FUN_0040adb0(vm,auStack_10);
  uStack_8 = *puVar4;
  piStack_4 = (int *)puVar4[1];
  if ((char)uStack_8 != '\0') {
    FUN_0040adb0(this,auStack_18);
    iVar5 = FUN_004026a0(auStack_18,&uStack_34,auStack_10,(float *)&vm);
    if (iVar5 == 0) {
      *(undefined4 *)((int)this + 0x90) = 0xe;
      FUN_004d4550(this);
      *(undefined4 *)((int)this + 0x90) = 0;
      *(undefined4 *)((int)this + 0xa4) = 0;
      return;
    }
    piVar6 = (int *)FUN_00492850(&DAT_005a7b50,uStack_34);
    piStack_20 = piVar6;
    if (piVar6 == (int *)0x0) {
      FUN_004d41c0(this,s_no_imp_0055c898);
      return;
    }
    if (*piVar6 != 0) {
      iVar5 = *(int *)(*piVar6 + 8);
      if (iVar5 == 0) {
        uStack_3c = 0;
      }
      else {
        uStack_3c = (uint)*(ushort *)(iVar5 + 0x1a);
      }
      uStack_40 = 0;
      if (uStack_3c != 0) {
        do {
          vm = (void *)0x0;
          uStack_48 = (uStack_40 & 0xffff) * 0x10;
          auStack_10[0] = (uint)*(byte *)(*(int *)(*(int *)(*piVar6 + 8) + 0x1c) + uStack_48 + 0xb);
          if (auStack_10[0] != 0) {
            uVar9 = uStack_48;
            auStack_18[0] = uStack_48;
            do {
              uStack_44 = 0;
              iVar5 = ((uint)vm & 0xffff) * 8;
              uVar8 = (uint)*(ushort *)
                             (*(int *)(*(int *)(*(int *)(*piVar6 + 8) + 0x1c) + 0xc + uStack_48) + 2
                             + iVar5);
              uVar10 = uVar9;
              if (uVar8 != 0) {
                uStack_24 = uVar8;
                iStack_1c = iVar5;
                do {
                  puStack_30 = (ushort *)
                               (*(int *)(*(int *)(*(int *)(*(int *)(*piVar6 + 8) + 0x1c) + 0xc +
                                                 uVar9) + 4 + iVar5) + (uStack_44 & 0xffff) * 0x10);
                  if (puStack_30 != (ushort *)0x0) {
                    iStack_38 = 1;
                    uStack_28 = (uint)(*puStack_30 >> 8);
                    if (1 < *puStack_30 >> 8) {
                      iVar5 = 6;
                      do {
                        uVar1 = *(ushort *)(iVar5 + *(int *)(puStack_30 + 4));
                        uVar2 = *(undefined4 *)(iVar5 + 2 + *(int *)(puStack_30 + 4));
                        uStack_2c = uVar2;
                        if (*(int *)((int)this + 0x54) == 0) {
                          FUN_00404ab0(this,3);
                        }
                        else {
                          iVar3 = *(int *)((int)this + 0x50);
                          iVar7 = *(int *)((int)this + 0x54) + -1;
                          *(int *)((int)this + 0x54) = iVar7;
                          *(undefined4 *)(iVar3 + iVar7 * 8) = 1;
                          *(uint *)(iVar3 + 4 + iVar7 * 8) = uStack_40;
                        }
                        if (*(int *)((int)this + 0x54) == 0) {
                          FUN_00404ab0(this,3);
                        }
                        else {
                          iVar3 = *(int *)((int)this + 0x50);
                          iVar7 = *(int *)((int)this + 0x54) + -1;
                          *(int *)((int)this + 0x54) = iVar7;
                          *(undefined4 *)(iVar3 + iVar7 * 8) = 1;
                          *(void **)(iVar3 + 4 + iVar7 * 8) = vm;
                        }
                        if (*(int *)((int)this + 0x54) == 0) {
                          FUN_00404ab0(this,3);
                        }
                        else {
                          iVar3 = *(int *)((int)this + 0x50);
                          iVar7 = *(int *)((int)this + 0x54) + -1;
                          *(int *)((int)this + 0x54) = iVar7;
                          *(undefined4 *)(iVar3 + iVar7 * 8) = 1;
                          *(uint *)(iVar3 + 4 + iVar7 * 8) = uStack_44;
                        }
                        if (*(int *)((int)this + 0x54) == 0) {
                          FUN_00404ab0(this,3);
                        }
                        else {
                          iVar3 = *(int *)((int)this + 0x50);
                          iVar7 = *(int *)((int)this + 0x54) + -1;
                          *(int *)((int)this + 0x54) = iVar7;
                          *(undefined4 *)(iVar3 + iVar7 * 8) = 1;
                          *(uint *)(iVar3 + 4 + iVar7 * 8) = (uint)uVar1;
                        }
                        if (*(int *)((int)this + 0x54) == 0) {
                          FUN_00404ab0(this,3);
                        }
                        else {
                          iVar3 = *(int *)((int)this + 0x50);
                          iVar7 = *(int *)((int)this + 0x54) + -1;
                          *(int *)((int)this + 0x54) = iVar7;
                          *(undefined4 *)(iVar3 + iVar7 * 8) = 1;
                          *(int *)(iVar3 + 4 + iVar7 * 8) = (int)(short)uVar2;
                        }
                        FUN_0041d1d0(this,1,(int)uStack_2c._2_2_);
                        FUN_004d05e0(this,uStack_8,piStack_4);
                        iVar3 = *(int *)((int)this + 0x6c);
                        *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)((int)this + 0x70);
                        if (iVar3 != 0) {
                          return;
                        }
                        iStack_38 = iStack_38 + 1;
                        iVar5 = iVar5 + 6;
                      } while (iStack_38 < (int)uStack_28);
                      iVar5 = iStack_1c;
                      uVar8 = uStack_24;
                      piVar6 = piStack_20;
                    }
                  }
                  uStack_44 = uStack_44 + 1;
                } while ((int)uStack_44 < (int)uVar8);
                uVar10 = auStack_18[0];
                uStack_48 = uVar9;
              }
              vm = (void *)((int)vm + 1);
              uVar9 = uVar10;
            } while ((int)vm < (int)auStack_10[0]);
          }
          uStack_40 = uStack_40 + 1;
        } while ((int)uStack_40 < (int)uStack_3c);
      }
    }
  }
  return;
}


