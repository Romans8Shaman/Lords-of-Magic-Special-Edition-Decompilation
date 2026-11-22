
void __cdecl op_enumallplayeractivearmies(void *vm)

{
  int iVar1;
  int *this;
  void *this_00;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uStack_1c;
  int *piStack_18;
  float fStack_14;
  uint uStack_10;
  int *piStack_c;
  uint auStack_8 [2];
  
  this_00 = vm;
  FUN_0040adb0(vm,&uStack_10);
  iVar2 = FUN_0041da00((int)this_00);
  if (iVar2 == 0) {
    if (((char)uStack_10 == '\x06') && ((uStack_10 & 0x100) == 0)) goto LAB_004fce82;
    *(undefined4 *)((int)this_00 + 0x90) = 0x12;
    FUN_004d4550(this_00);
    *(undefined4 *)((int)this_00 + 0x90) = 0;
    *(undefined4 *)((int)this_00 + 0xa4) = 0;
  }
  uStack_10 = 0;
LAB_004fce82:
  if ((char)uStack_10 == '\0') {
    return;
  }
  FUN_0040adb0(this_00,auStack_8);
  iVar2 = FUN_004026a0(auStack_8,(uint *)&vm,(uint *)&fStack_14,(float *)&piStack_18);
  if (iVar2 != 0) {
    FUN_0040adb0(this_00,auStack_8);
    iVar2 = FUN_004026a0(auStack_8,&uStack_1c,(uint *)&piStack_18,&fStack_14);
    if (iVar2 != 0) {
      piVar3 = FUN_004fbed0(&DAT_005ae974,0);
joined_r0x004fcf18:
      do {
        do {
          this = piVar3;
          if (this == (int *)0x0) {
            return;
          }
          piStack_18 = FUN_004fbed0(&DAT_005ae974,(int)this);
          uVar4 = (/*IC:004fcf35*/**(code **)(*this + 0x3c))(this);
          piVar3 = piStack_18;
        } while (uVar4 != uStack_1c);
        if ((int)vm < 0) {
          if ((((~this[0xc] & 0x100U) == 0) ||
              (iVar2 = FUN_00407d50((int)this), piVar3 = piStack_18, iVar2 != 0)) ||
             (iVar2 = FUN_00420620((int)this), piVar3 = piStack_18, iVar2 != 0))
          goto joined_r0x004fcf18;
          iVar2 = this[10];
          if (*(int *)((int)this_00 + 0x54) == 0) {
            *(undefined4 *)((int)this_00 + 0x90) = 3;
            FUN_004d4550(this_00);
            *(undefined4 *)((int)this_00 + 0x90) = 0;
            *(undefined4 *)((int)this_00 + 0xa4) = 0;
          }
          else {
            iVar1 = *(int *)((int)this_00 + 0x50);
            iVar5 = *(int *)((int)this_00 + 0x54) + -1;
            *(int *)((int)this_00 + 0x54) = iVar5;
            *(undefined4 *)(iVar1 + iVar5 * 8) = 1;
            *(int *)(iVar1 + 4 + iVar5 * 8) = iVar2;
          }
          FUN_004d05e0(this_00,uStack_10,piStack_c);
          iVar2 = *(int *)((int)this_00 + 0x6c);
          *(undefined4 *)((int)this_00 + 0x6c) = *(undefined4 *)((int)this_00 + 0x70);
        }
        else {
          if ((((~this[0xc] & 0x100U) == 0) ||
              (iVar2 = FUN_00407d50((int)this), piVar3 = piStack_18, iVar2 != 0)) ||
             ((iVar2 = FUN_00420620((int)this), piVar3 = piStack_18, iVar2 != 0 ||
              (iVar2 = FUN_005071c0(this,(int)vm), piVar3 = piStack_18, iVar2 == 0))))
          goto joined_r0x004fcf18;
          iVar2 = this[10];
          if (*(int *)((int)this_00 + 0x54) == 0) {
            FUN_00404ab0(this_00,3);
          }
          else {
            iVar1 = *(int *)((int)this_00 + 0x50);
            iVar5 = *(int *)((int)this_00 + 0x54) + -1;
            *(int *)((int)this_00 + 0x54) = iVar5;
            *(undefined4 *)(iVar1 + iVar5 * 8) = 1;
            *(int *)(iVar1 + 4 + iVar5 * 8) = iVar2;
          }
          FUN_004d05e0(this_00,uStack_10,piStack_c);
          iVar2 = *(int *)((int)this_00 + 0x6c);
          *(undefined4 *)((int)this_00 + 0x6c) = *(undefined4 *)((int)this_00 + 0x70);
        }
        piVar3 = piStack_18;
        if (iVar2 != 0) {
          return;
        }
      } while( true );
    }
  }
  *(undefined4 *)((int)this_00 + 0x90) = 0xe;
  FUN_004d4550(this_00);
  *(undefined4 *)((int)this_00 + 0x90) = 0;
  *(undefined4 *)((int)this_00 + 0xa4) = 0;
  return;
}


