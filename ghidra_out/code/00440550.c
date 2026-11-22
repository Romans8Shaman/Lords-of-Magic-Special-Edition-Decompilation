
void __cdecl op_satellitegetstrongholdlevel(void *vm)

{
  undefined4 uVar1;
  void *this;
  void *pvVar2;
  int iVar3;
  int *this_00;
  int iVar4;
  int *this_01;
  int iVar5;
  uint uStack_10;
  uint uStack_c;
  uint uStack_8;
  undefined4 uStack_4;
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar3 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar3;
    uStack_8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar3 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar3 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_8 = 0;
  }
  iVar3 = FUN_004026a0(&uStack_8,&uStack_10,&uStack_c,(float *)&vm);
  if (iVar3 == 0) {
    FUN_00404ab0(this,0xe);
  }
  else {
    this_00 = (int *)FUN_00485400(&DAT_005aa12c,uStack_10,7);
    if (this_00 != (int *)0x0) {
      this_01 = (int *)FUN_0043dbb0((int)this_00);
      vm = (void *)FUN_0043dbd0((int)this_00);
      if (this_01 != (int *)0x0) {
        if (vm != (void *)0x0) {
          iVar3 = (/*IC:00440636*/**(code **)(*this_01 + 0x3c))(this_01);
          iVar4 = (/*IC:0044063f*/**(code **)(*this_00 + 0x3c))(this_00);
          if (iVar3 == iVar4) {
            iVar3 = (/*IC:0044064c*/**(code **)(*(int *)vm + 0x3c))(vm);
            iVar4 = (/*IC:00440655*/**(code **)(*this_00 + 0x3c))(this_00);
            if (iVar3 == iVar4) {
              iVar3 = this_01[0x35];
              iVar4 = *(int *)((int)vm + 0xd4);
              if (iVar3 < iVar4) {
                if (*(int *)((int)this + 0x54) != 0) {
                  iVar5 = *(int *)((int)this + 0x54) + -1;
                  *(int *)((int)this + 0x54) = iVar5;
                  iVar3 = *(int *)((int)this + 0x50);
                  *(undefined4 *)(iVar3 + iVar5 * 8) = 1;
                  *(int *)(iVar3 + 4 + iVar5 * 8) = iVar4;
                  return;
                }
              }
              else if (*(int *)((int)this + 0x54) != 0) {
                iVar4 = *(int *)((int)this + 0x50);
                iVar5 = *(int *)((int)this + 0x54) + -1;
                *(int *)((int)this + 0x54) = iVar5;
                *(undefined4 *)(iVar4 + iVar5 * 8) = 1;
                *(int *)(iVar4 + 4 + iVar5 * 8) = iVar3;
                return;
              }
              goto LAB_0044076e;
            }
          }
        }
        if (this_01 != (int *)0x0) {
          iVar3 = (/*IC:004406c8*/**(code **)(*this_01 + 0x3c))(this_01);
          iVar4 = (/*IC:004406d1*/**(code **)(*this_00 + 0x3c))(this_00);
          if (iVar3 == iVar4) {
            iVar3 = this_01[0x35];
            if (*(int *)((int)this + 0x54) != 0) {
              iVar4 = *(int *)((int)this + 0x50);
              iVar5 = *(int *)((int)this + 0x54) + -1;
              *(int *)((int)this + 0x54) = iVar5;
              *(undefined4 *)(iVar4 + iVar5 * 8) = 1;
              *(int *)(iVar4 + 4 + iVar5 * 8) = iVar3;
              return;
            }
            goto LAB_0044076e;
          }
        }
      }
      pvVar2 = vm;
      if (vm != (void *)0x0) {
        iVar3 = (/*IC:00440711*/**(code **)(*(int *)vm + 0x3c))(vm);
        iVar4 = (/*IC:0044071a*/**(code **)(*this_00 + 0x3c))(this_00);
        if (iVar3 == iVar4) {
          uVar1 = *(undefined4 *)((int)pvVar2 + 0xd4);
          if (*(int *)((int)this + 0x54) != 0) {
            iVar3 = *(int *)((int)this + 0x50);
            iVar4 = *(int *)((int)this + 0x54) + -1;
            *(int *)((int)this + 0x54) = iVar4;
            *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
            *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = uVar1;
            return;
          }
          goto LAB_0044076e;
        }
      }
      if (*(int *)((int)this + 0x54) != 0) {
        iVar4 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar4;
        iVar3 = *(int *)((int)this + 0x50);
        *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
        *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = 0xffffffff;
        return;
      }
      goto LAB_0044076e;
    }
    FUN_004d41c0(this,s_building_in_upgradebuilding_does_0055663c);
  }
  if (*(int *)((int)this + 0x54) != 0) {
    iVar4 = *(int *)((int)this + 0x54) + -1;
    *(int *)((int)this + 0x54) = iVar4;
    iVar3 = *(int *)((int)this + 0x50);
    *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
    *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = 0xffffffff;
    return;
  }
LAB_0044076e:
  FUN_00404ab0(this,3);
  return;
}


