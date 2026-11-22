
void __cdecl op_movedungeonarmy(void *vm)

{
  uint *puVar1;
  undefined4 *puVar2;
  void *this;
  int iVar3;
  uint uVar4;
  float fVar5;
  uint uVar6;
  longlong lVar7;
  uint uStack_18;
  uint uStack_14;
  float fStack_10;
  float fStack_c;
  uint uStack_8;
  float fStack_4;
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar3 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar3;
    uStack_8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar3 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar3 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uStack_8 = 0;
  }
  iVar3 = FUN_004026a0(&uStack_8,(uint *)&vm,(uint *)&fStack_c,&fStack_10);
  if (iVar3 != 0) {
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar3 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar3;
      uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar3 * 8);
      fStack_4 = *(float *)(*(int *)((int)this + 0x50) + -4 + iVar3 * 8);
    }
    else {
      *(undefined4 *)((int)this + 0x90) = 6;
      FUN_004d4550(this);
      *(undefined4 *)((int)this + 0x90) = 0;
      *(undefined4 *)((int)this + 0xa4) = 0;
      uStack_8 = 0;
    }
    iVar3 = FUN_004026a0(&uStack_8,&uStack_14,(uint *)&fStack_10,&fStack_c);
    if (iVar3 != 0) {
      if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
        iVar3 = *(int *)((int)this + 0x54) + 1;
        *(int *)((int)this + 0x54) = iVar3;
        uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar3 * 8);
        fStack_4 = *(float *)(*(int *)((int)this + 0x50) + -4 + iVar3 * 8);
      }
      else {
        *(undefined4 *)((int)this + 0x90) = 6;
        FUN_004d4550(this);
        *(undefined4 *)((int)this + 0x90) = 0;
        *(undefined4 *)((int)this + 0xa4) = 0;
        uStack_8 = 0;
      }
      iVar3 = FUN_004026a0(&uStack_8,&uStack_18,(uint *)&fStack_10,&fStack_c);
      if (iVar3 != 0) {
        if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
          iVar3 = *(int *)((int)this + 0x54) + 1;
          *(int *)((int)this + 0x54) = iVar3;
          uVar6 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar3 * 8);
          fStack_4 = *(float *)(*(int *)((int)this + 0x50) + -4 + iVar3 * 8);
        }
        else {
          *(undefined4 *)((int)this + 0x90) = 6;
          FUN_004d4550(this);
          *(undefined4 *)((int)this + 0x90) = 0;
          *(undefined4 *)((int)this + 0xa4) = 0;
          uVar6 = 0;
        }
        uVar6 = uVar6 & 0xff;
        fVar5 = fStack_4;
        if (uVar6 != 1) {
          if (uVar6 == 2) {
            fVar5 = (float)((int)fStack_4 >> 8);
          }
          else {
            if (uVar6 != 4) {
              FUN_00404ab0(this,0xe);
              return;
            }
            lVar7 = __ftol((float10)fStack_4);
            fVar5 = (float)lVar7;
          }
        }
        uVar6 = FUN_00482ac0(&DAT_005aa12c,(int)fVar5,1);
        uVar4 = FUN_00482ac0(&DAT_005aa12c,uStack_14,1);
        if ((uVar6 != 0) && (uVar4 != 0)) {
          if (uStack_18 == 0) {
            if (vm == (void *)0x0) {
              puVar2 = *(undefined4 **)(uVar4 + 0x58);
              if (puVar2 != (undefined4 *)0x0) {
                (/*IC:00488f4f*/**(code **)*puVar2)(puVar2,1);
                *(undefined4 *)(uVar4 + 0x58) = 0;
                *(uint *)(uVar4 + 0x30) = *(uint *)(uVar4 + 0x30) | 0x100;
              }
              iVar3 = *(int *)(uVar6 + 0x58);
              if (iVar3 != 0) {
                *(int *)(uVar4 + 0x58) = iVar3;
                *(undefined4 *)(iVar3 + 0x28) = *(undefined4 *)(uVar4 + 0x28);
                *(uint *)(uVar4 + 0x30) = *(uint *)(uVar4 + 0x30) & 0xfffffeff;
                *(undefined4 *)(uVar6 + 0x58) = 0;
                *(uint *)(uVar6 + 0x30) = *(uint *)(uVar6 + 0x30) | 0x100;
                return;
              }
            }
            else if (*(int *)(uVar4 + 0x50) != 0) {
              puVar2 = *(undefined4 **)(*(int *)(uVar4 + 0x50) + -4 + (int)vm * 0xc);
              if (puVar2 != (undefined4 *)0x0) {
                (/*IC:00488fa2*/**(code **)*puVar2)(puVar2,1);
                *(undefined4 *)(*(int *)(uVar4 + 0x50) + -4 + (int)vm * 0xc) = 0;
                puVar1 = (uint *)(*(int *)(uVar4 + 0x50) + -8 + (int)vm * 0xc);
                *puVar1 = *puVar1 | 1;
              }
              if (*(int *)(uVar6 + 0x58) != 0) {
                *(int *)(*(int *)(uVar4 + 0x50) + -4 + (int)vm * 0xc) = *(int *)(uVar6 + 0x58);
                *(undefined4 *)(*(int *)(*(int *)(uVar4 + 0x50) + -4 + (int)vm * 0xc) + 0x28) =
                     *(undefined4 *)(uVar4 + 0x28);
                *(undefined4 *)(*(int *)(*(int *)(uVar4 + 0x50) + -4 + (int)vm * 0xc) + 0x1c) =
                     *(undefined4 *)(uVar4 + 0x1c);
                *(undefined4 *)(*(int *)(uVar4 + 0x50) + -8 + (int)vm * 0xc) = 0;
              }
            }
            *(undefined4 *)(uVar6 + 0x58) = 0;
            *(uint *)(uVar6 + 0x30) = *(uint *)(uVar6 + 0x30) | 0x100;
            return;
          }
          if (*(int *)(uVar6 + 0x50) != 0) {
            if (vm == (void *)0x0) {
              puVar2 = *(undefined4 **)(uVar4 + 0x58);
              if (puVar2 != (undefined4 *)0x0) {
                (/*IC:00489041*/**(code **)*puVar2)(puVar2,1);
                *(undefined4 *)(uVar4 + 0x58) = 0;
                *(uint *)(uVar4 + 0x30) = *(uint *)(uVar4 + 0x30) | 0x100;
              }
              iVar3 = *(int *)(*(int *)(uVar6 + 0x50) + -4 + uStack_18 * 0xc);
              if (iVar3 != 0) {
                *(int *)(uVar4 + 0x58) = iVar3;
                *(undefined4 *)(iVar3 + 0x28) = *(undefined4 *)(uVar4 + 0x28);
                *(uint *)(uVar4 + 0x30) = *(uint *)(uVar4 + 0x30) & 0xfffffeff;
              }
            }
            else {
              puVar2 = *(undefined4 **)(*(int *)(uVar4 + 0x50) + -4 + (int)vm * 0xc);
              if (puVar2 != (undefined4 *)0x0) {
                (/*IC:0048908e*/**(code **)*puVar2)(puVar2,1);
                *(undefined4 *)(*(int *)(uVar4 + 0x50) + -4 + (int)vm * 0xc) = 0;
                *(uint *)(*(int *)(uVar4 + 0x50) + -8 + (int)vm * 0xc) =
                     *(uint *)(*(int *)(uVar4 + 0x50) + -8 + (int)vm * 0xc) | 1;
              }
              iVar3 = *(int *)(*(int *)(uVar6 + 0x50) + -4 + uStack_18 * 0xc);
              if (iVar3 != 0) {
                *(int *)(*(int *)(uVar4 + 0x50) + -4 + (int)vm * 0xc) = iVar3;
                *(undefined4 *)(*(int *)(*(int *)(uVar4 + 0x50) + -4 + (int)vm * 0xc) + 0x28) =
                     *(undefined4 *)(uVar4 + 0x28);
                *(undefined4 *)(*(int *)(*(int *)(uVar4 + 0x50) + -4 + (int)vm * 0xc) + 0x1c) =
                     *(undefined4 *)(uVar4 + 0x1c);
                *(undefined4 *)(*(int *)(uVar4 + 0x50) + -8 + (int)vm * 0xc) = 0;
              }
            }
            *(undefined4 *)(*(int *)(uVar6 + 0x50) + -4 + uStack_18 * 0xc) = 0;
            *(uint *)(*(int *)(uVar6 + 0x50) + -8 + uStack_18 * 0xc) =
                 *(uint *)(*(int *)(uVar6 + 0x50) + -8 + uStack_18 * 0xc) | 1;
          }
        }
        return;
      }
    }
  }
  *(undefined4 *)((int)this + 0x90) = 0xe;
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
}


