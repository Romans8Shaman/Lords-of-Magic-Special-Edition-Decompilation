
void __cdecl op_testalpha(void *vm)

{
  void *this;
  int iVar1;
  int *piVar2;
  undefined4 *this_00;
  DWORD DVar3;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  int *piStack_10;
  float fStack_c;
  uint auStack_8 [2];
  
  this = vm;
  FUN_0040adb0(vm,auStack_8);
  iVar1 = FUN_004026a0(auStack_8,(uint *)&vm,(uint *)&piStack_10,&fStack_c);
  if (iVar1 != 0) {
    FUN_0040adb0(this,auStack_8);
    iVar1 = FUN_004026a0(auStack_8,&uStack_1c,(uint *)&piStack_10,&fStack_c);
    if (iVar1 != 0) {
      FUN_0040adb0(this,auStack_8);
      iVar1 = FUN_004026a0(auStack_8,&uStack_18,(uint *)&piStack_10,&fStack_c);
      if (iVar1 != 0) {
        FUN_0040adb0(this,auStack_8);
        iVar1 = FUN_004026a0(auStack_8,&uStack_14,(uint *)&piStack_10,&fStack_c);
        if (iVar1 != 0) {
          FUN_0040adb0(this,auStack_8);
          iVar1 = FUN_004026a0(auStack_8,&uStack_20,(uint *)&piStack_10,&fStack_c);
          if (iVar1 != 0) {
            FUN_0040adb0(this,auStack_8);
            iVar1 = FUN_004026a0(auStack_8,&uStack_24,(uint *)&piStack_10,&fStack_c);
            if (iVar1 != 0) {
              piStack_10 = (int *)FUN_00492760(&DAT_005a7b50,uStack_24);
              iVar1 = 0;
              if (piStack_10 == (int *)0x0) {
                iVar1 = *(int *)((int)this + 0x90);
                *(undefined4 *)((int)this + 0x90) = 0;
                *(undefined4 *)((int)this + 0xa4) = 0;
                if (iVar1 != 0) {
                  FUN_004d41c0(this,s_No_doodad_0055615c);
                  return;
                }
              }
              else {
                piVar2 = (int *)FUN_00492760(&DAT_005a7b50,uStack_20);
                if (piVar2 == (int *)0x0) {
                  iVar1 = *(int *)((int)this + 0x90);
                  *(undefined4 *)((int)this + 0x90) = 0;
                  *(undefined4 *)((int)this + 0xa4) = 0;
                  if (iVar1 != 0) {
                    FUN_004d41c0(this,s_No_alpha_00556150);
                    return;
                  }
                }
                else {
                  this_00 = (undefined4 *)FUN_004754c0(0x584ae8);
                  if (this_00 != (undefined4 *)0x0) {
                    fStack_c = (float)GetTickCount();
                    if (0 < (int)vm) {
                      do {
                        FUN_0043abd0(this_00,piStack_10,piVar2,uStack_14,uStack_18,uStack_1c,0);
                        iVar1 = iVar1 + 1;
                      } while (iVar1 < (int)vm);
                    }
                    DVar3 = GetTickCount();
                    FUN_0041d1d0(this,1,DVar3 - (int)fStack_c);
                    FUN_004755a0(&DAT_00584ae8,this_00);
                    (/*IC:0043b4d9*/**(code **)(*DAT_0058516c + 0x1c))(DAT_0058516c,0,0,DAT_00585170,0,0);
                    return;
                  }
                  FUN_0041d1d0(this,1,0xffffffff);
                }
              }
              return;
            }
          }
        }
      }
    }
  }
  *(undefined4 *)((int)this + 0x90) = 0xe;
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
}


