
void __cdecl op_getimphotspot(void *vm)

{
  void *this;
  int iVar1;
  int *piVar2;
  ushort *puVar3;
  short *psVar4;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  short asStack_14 [2];
  float fStack_10;
  float fStack_c;
  uint auStack_8 [2];
  
  this = vm;
  FUN_0040adb0(vm,auStack_8);
  iVar1 = FUN_004026a0(auStack_8,(uint *)asStack_14,(uint *)&fStack_c,&fStack_10);
  if (iVar1 != 0) {
    FUN_0040adb0(this,auStack_8);
    iVar1 = FUN_004026a0(auStack_8,&uStack_18,(uint *)&fStack_10,&fStack_c);
    if (iVar1 != 0) {
      FUN_0040adb0(this,auStack_8);
      iVar1 = FUN_004026a0(auStack_8,&uStack_1c,(uint *)&fStack_10,&fStack_c);
      if (iVar1 != 0) {
        FUN_0040adb0(this,auStack_8);
        iVar1 = FUN_004026a0(auStack_8,&uStack_20,(uint *)&fStack_10,&fStack_c);
        if (iVar1 != 0) {
          FUN_0040adb0(this,auStack_8);
          iVar1 = FUN_004026a0(auStack_8,(uint *)&vm,(uint *)&fStack_10,&fStack_c);
          if (iVar1 != 0) {
            piVar2 = (int *)FUN_00492850(&DAT_005a7b50,(int)vm);
            if (piVar2 == (int *)0x0) {
              FUN_004d41c0(this,s_getimphotspot___no_such_imp_0055c87c);
              FUN_0041d1d0(this,1,0);
              return;
            }
            puVar3 = (ushort *)
                     (*(int *)(*(int *)(*(int *)(*(int *)(*piVar2 + 8) + 0x1c) + 0xc +
                                       (uStack_20 & 0xffff) * 0x10) + 4 + (uStack_1c & 0xffff) * 8)
                     + (uStack_18 & 0xffff) * 0x10);
            if (puVar3 == (ushort *)0x0) {
              FUN_004d41c0(this,s_getimphotspot___no_frame_0055c860);
              FUN_0041d1d0(this,1,0);
              return;
            }
            iVar1 = 1;
            if (1 < *puVar3 >> 8) {
              psVar4 = *(short **)(puVar3 + 4);
              do {
                psVar4 = psVar4 + 3;
                if (asStack_14[0] == *psVar4) {
                  psVar4 = *(short **)(puVar3 + 4) + iVar1 * 3 + 1;
                  goto LAB_0049c164;
                }
                iVar1 = iVar1 + 1;
              } while (iVar1 < (int)(uint)(*puVar3 >> 8));
            }
            psVar4 = (short *)0x0;
LAB_0049c164:
            if (psVar4 == (short *)0x0) {
              FUN_004d41c0(this,s_getimphotspot___no_such_hotspot_0055c840);
              FUN_0041d1d0(this,1,0);
              return;
            }
            FUN_0041d1d0(this,1,(int)*psVar4);
            FUN_0041d1d0(this,1,(int)psVar4[1]);
            FUN_0041d1d0(this,1,1);
            return;
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


