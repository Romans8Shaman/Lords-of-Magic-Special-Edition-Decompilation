
void __thiscall FUN_00461f60(void *this)

{
  int *this_00;
  int *this_01;
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  void *pvVar8;
  void *this_02;
  int iStack_1c;
  int iStack_18;
  
  FUN_00489ff0(&DAT_00584ae8);
  FUN_0048cd80();
  this_00 = (int *)((int)this + 0x660);
  *(undefined4 *)((int)this + 0x4764) = 0;
  *(undefined4 *)((int)this + 0x4768) = 0;
  *(undefined4 *)((int)this + 0x476c) = 0;
  *(undefined4 *)((int)this + 0x4770) = 0;
  *(undefined4 *)((int)this + 0x230c0) = 0;
  *(undefined4 *)((int)this + 0x4790) = 0;
  *(undefined4 *)((int)this + 0x4794) = 0;
  *(undefined4 *)((int)this + 0x4798) = 0xffffffff;
  *(undefined4 *)((int)this + 0x479c) = 0;
  FUN_004117f0(this_00,0);
  this_01 = (int *)((int)this + 0xc3c);
  FUN_004117f0(this_01,0);
  pvVar8 = (void *)((int)this + 0x4848);
  for (piVar1 = (int *)FUN_004fbe60(pvVar8,0,0); piVar1 != (int *)0x0;
      piVar1 = (int *)FUN_004fbe60(pvVar8,(int)piVar1,0)) {
    FUN_004176d0(piVar1,0);
    piVar1[0xc] = piVar1[0xc] & 0xfbffffff;
    iVar2 = FUN_00407d50((int)piVar1);
    if (iVar2 == 0) {
      iVar2 = (/*IC:00462029*/**(code **)(*piVar1 + 0x3c))();
      iVar3 = (/*IC:00462036*/**(code **)(*this_00 + 0x3c))();
      if (iVar2 == iVar3) {
        iStack_18 = 0;
        iStack_1c = 0;
        if (0 < piVar1[0x13]) {
          piVar6 = piVar1 + 0x33;
          do {
            iVar2 = piVar1[10];
            if ((piVar6[7] & 8U) == 0) {
              iVar2 = *piVar6;
            }
            else {
              piVar6[7] = piVar6[7] & 0xfffffff7;
              iVar3 = FUN_00521e00(piVar6 + -2);
              if (iVar3 == 0) {
                *piVar6 = 1;
                iVar2 = 1;
              }
              else if (((char)*(uint *)(iVar3 + 0x104) == '\x06') &&
                      ((*(uint *)(iVar3 + 0x104) & 0x100) == 0)) {
                iVar2 = FUN_00522080(piVar6 + -2,iVar3,iVar2,iStack_1c);
              }
              else {
                *piVar6 = 1;
                iVar2 = 1;
              }
            }
            piVar6 = piVar6 + 0x13;
            iStack_18 = iStack_18 + iVar2;
            iStack_1c = iStack_1c + 1;
          } while (iStack_1c < piVar1[0x13]);
        }
        *(int *)((int)this + 0x4764) = *(int *)((int)this + 0x4764) + iStack_18;
        iVar3 = FUN_00421960(piVar1);
        iVar2 = *(int *)((int)this + 0x6ac);
        *(int *)((int)this + 0x476c) = *(int *)((int)this + 0x476c) + iVar3;
        if (iVar2 < 0xf) {
          iVar3 = 0;
          if (0 < iVar2) {
            piVar6 = (int *)((int)this + 0x744);
            do {
              if (*piVar6 == piVar1[0x39]) break;
              iVar3 = iVar3 + 1;
              piVar6 = piVar6 + 0x13;
            } while (iVar3 < iVar2);
          }
          if (iVar2 <= iVar3) {
            piVar6 = piVar1 + 0x31;
            piVar7 = (int *)((int)this + iVar2 * 0x4c + 0x724);
            for (iVar3 = 0x13; iVar3 != 0; iVar3 = iVar3 + -1) {
              *piVar7 = *piVar6;
              piVar6 = piVar6 + 1;
              piVar7 = piVar7 + 1;
            }
            *(int *)((int)this + 0x6ac) = *(int *)((int)this + 0x6ac) + 1;
          }
        }
      }
      else {
        iStack_1c = 0;
        iStack_18 = 0;
        if (0 < piVar1[0x13]) {
          piVar6 = piVar1 + 0x33;
          do {
            iVar2 = piVar1[10];
            if ((piVar6[7] & 8U) == 0) {
              iVar2 = *piVar6;
            }
            else {
              piVar6[7] = piVar6[7] & 0xfffffff7;
              iVar3 = FUN_00521e00(piVar6 + -2);
              if (iVar3 == 0) {
                *piVar6 = 1;
                iVar2 = 1;
              }
              else if (((char)*(uint *)(iVar3 + 0x104) == '\x06') &&
                      ((*(uint *)(iVar3 + 0x104) & 0x100) == 0)) {
                iVar2 = FUN_00522080(piVar6 + -2,iVar3,iVar2,iStack_18);
              }
              else {
                *piVar6 = 1;
                iVar2 = 1;
              }
            }
            piVar6 = piVar6 + 0x13;
            iStack_1c = iStack_1c + iVar2;
            iStack_18 = iStack_18 + 1;
          } while (iStack_18 < piVar1[0x13]);
        }
        *(int *)((int)this + 0x4768) = *(int *)((int)this + 0x4768) + iStack_1c;
        iVar3 = FUN_00421960(piVar1);
        iVar2 = *(int *)((int)this + 0xc88);
        *(int *)((int)this + 0x4770) = *(int *)((int)this + 0x4770) + iVar3;
        if (iVar2 < 0xf) {
          iVar3 = 0;
          if (0 < iVar2) {
            piVar6 = (int *)((int)this + 0xd20);
            do {
              if (*piVar6 == piVar1[0x39]) break;
              iVar3 = iVar3 + 1;
              piVar6 = piVar6 + 0x13;
            } while (iVar3 < iVar2);
          }
          if (iVar2 <= iVar3) {
            piVar6 = piVar1 + 0x31;
            piVar7 = (int *)((int)this + iVar2 * 0x4c + 0xd00);
            for (iVar3 = 0x13; iVar3 != 0; iVar3 = iVar3 + -1) {
              *piVar7 = *piVar6;
              piVar6 = piVar6 + 1;
              piVar7 = piVar7 + 1;
            }
            *(int *)((int)this + 0xc88) = *(int *)((int)this + 0xc88) + 1;
          }
        }
      }
    }
    uVar4 = FUN_00407d60((int)piVar1);
    if (uVar4 != 0) {
      iVar2 = (/*IC:0046229c*/**(code **)(*piVar1 + 0x3c))();
      iVar3 = (/*IC:004622a7*/**(code **)(*this_00 + 0x3c))();
      if (iVar2 == iVar3) {
        iVar2 = 0;
        iStack_18 = 0;
        if (0 < piVar1[0x13]) {
          piVar6 = piVar1 + 0x33;
          do {
            iVar3 = piVar1[10];
            if ((piVar6[7] & 8U) == 0) {
              iVar3 = *piVar6;
            }
            else {
              piVar6[7] = piVar6[7] & 0xfffffff7;
              iVar5 = FUN_00521e00(piVar6 + -2);
              if (iVar5 == 0) {
                *piVar6 = 1;
                iVar3 = 1;
              }
              else if (((char)*(uint *)(iVar5 + 0x104) == '\x06') &&
                      ((*(uint *)(iVar5 + 0x104) & 0x100) == 0)) {
                iVar3 = FUN_00522080(piVar6 + -2,iVar5,iVar3,iVar2);
              }
              else {
                *piVar6 = 1;
                iVar3 = 1;
              }
            }
            piVar6 = piVar6 + 0x13;
            iStack_18 = iStack_18 + iVar3;
            iVar2 = iVar2 + 1;
          } while (iVar2 < piVar1[0x13]);
        }
        *(int *)((int)this + 0x4764) = *(int *)((int)this + 0x4764) + iStack_18;
        iVar3 = FUN_00421960(piVar1);
        iVar2 = *(int *)((int)this + 0x6ac);
        *(int *)((int)this + 0x476c) = *(int *)((int)this + 0x476c) + iVar3;
        if (iVar2 < 0xf) {
          iVar3 = 0;
          if (0 < iVar2) {
            piVar6 = (int *)((int)this + 0x744);
            do {
              if (*piVar6 == piVar1[0x39]) break;
              iVar3 = iVar3 + 1;
              piVar6 = piVar6 + 0x13;
            } while (iVar3 < iVar2);
          }
          if (iVar2 <= iVar3) {
            piVar6 = piVar1 + 0x31;
            piVar7 = (int *)((int)this + iVar2 * 0x4c + 0x724);
            for (iVar3 = 0x13; iVar3 != 0; iVar3 = iVar3 + -1) {
              *piVar7 = *piVar6;
              piVar6 = piVar6 + 1;
              piVar7 = piVar7 + 1;
            }
            *(int *)((int)this + 0x6ac) = *(int *)((int)this + 0x6ac) + 1;
          }
        }
      }
    }
  }
  FUN_00415c20(this_00,(int *)0x0,-1);
  FUN_00415c20(this_01,(int *)0x0,-1);
  piVar1 = (int *)FUN_004fbe60(pvVar8,0,0);
  do {
    if (piVar1 == (int *)0x0) {
      FUN_004a9ad0((int)this + 0x482c);
      FUN_00460440(pvVar8);
      FUN_0051a860(&DAT_00584ae8,*(int *)((int)this + 0x500c),*(int *)((int)this + 0x5010));
      FUN_0045a0e0(&DAT_00579458,DAT_005ae9c4,DAT_005ae9c8);
      FUN_004f76b0((int)pvVar8);
      *(undefined4 *)((int)this + 0x5048) = 0;
      if ((*(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400) != *(int *)((int)this + 0x6a8)) &&
         (*(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400) != *(int *)((int)this + 0xc84))) {
        (/*IC:00462506*/**(code **)(DAT_005876d0 + 0x28))(DAT_005a7990 / 2,DAT_005a7994 / 2,0x140,0xc0);
      }
      if (*(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400) == *(int *)((int)this + 0x6a8)) {
        iVar2 = FUN_00406a80(&DAT_005ae958,*(int *)((int)this + 0x6a8),-1);
        FUN_0051ab30(&DAT_005876d0,iVar2 % DAT_005ae9c4,iVar2 / DAT_005ae9c4,0x140,0xc0);
      }
      if (*(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400) == *(int *)((int)this + 0xc84)) {
        iVar2 = FUN_00406a80(&DAT_005ae958,*(int *)((int)this + 0xc84),-1);
        FUN_0051ab30(&DAT_005876d0,iVar2 % DAT_005ae9c4,iVar2 / DAT_005ae9c4,0x140,0xc0);
      }
      FUN_00420310((int)pvVar8);
      iVar2 = *(int *)((int)this + 0x6a8);
      if ((iVar2 < 0) || (0xf < iVar2)) {
        pvVar8 = (void *)0x0;
      }
      else {
        pvVar8 = (void *)((int)this + iVar2 * 0x1d84 + 0x5068);
      }
      iVar2 = *(int *)((int)this + 0xc84);
      if ((iVar2 < 0) || (0xf < iVar2)) {
        this_02 = (void *)0x0;
      }
      else {
        this_02 = (void *)((int)this + iVar2 * 0x1d84 + 0x5068);
      }
      if (pvVar8 != (void *)0x0) {
        FUN_004bb160(pvVar8,1);
      }
      if (this_02 != (void *)0x0) {
        FUN_004bb160(this_02,2);
      }
      uVar4 = FUN_00460fb0((int)this);
      *(uint *)((int)this + 0x5028) = uVar4;
      FUN_00460eb0(this,*(int *)((int)this + 0x501c));
      FUN_0048cdb0();
      return;
    }
    *(undefined1 *)(piVar1 + 0x16b) = 0xff;
    iVar2 = (/*IC:00462415*/**(code **)(*piVar1 + 0x3c))();
    iVar3 = (/*IC:0046241e*/**(code **)(*this_00 + 0x3c))();
    piVar6 = this_00;
    if (iVar2 != iVar3) {
      piVar6 = this_01;
    }
    iVar2 = 0;
    if (0 < piVar6[0x13]) {
      piVar7 = piVar6 + 0x39;
      do {
        if (*piVar7 == piVar1[0x39]) {
          *(char *)(piVar1 + 0x16b) = (char)iVar2;
          break;
        }
        iVar2 = iVar2 + 1;
        piVar7 = piVar7 + 0x13;
      } while (iVar2 < piVar6[0x13]);
    }
    piVar1 = (int *)FUN_004fbe60(pvVar8,(int)piVar1,0);
  } while( true );
}


