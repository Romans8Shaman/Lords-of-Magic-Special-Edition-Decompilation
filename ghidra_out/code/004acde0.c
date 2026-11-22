
void __cdecl op_setmapretreatimp(void *vm)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  float *pfVar4;
  longlong lVar5;
  float fStack_4;
  
  pfVar4 = (float *)&DAT_0055cb50;
  do {
    if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
      iVar1 = *(int *)((int)vm + 0x54) + 1;
      *(int *)((int)vm + 0x54) = iVar1;
      uVar2 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
      fVar3 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
    }
    else {
      *(undefined4 *)((int)vm + 0x90) = 6;
      FUN_004d4550(vm);
      *(undefined4 *)((int)vm + 0x90) = 0;
      *(undefined4 *)((int)vm + 0xa4) = 0;
      uVar2 = 0;
      fVar3 = fStack_4;
    }
    uVar2 = uVar2 & 0xff;
    if (uVar2 == 1) {
LAB_004ace51:
      *pfVar4 = fVar3;
    }
    else {
      if (uVar2 == 2) {
        fVar3 = (float)((int)fVar3 >> 8);
        goto LAB_004ace51;
      }
      if (uVar2 == 4) {
        lVar5 = __ftol((float10)fVar3);
        fVar3 = (float)lVar5;
        goto LAB_004ace51;
      }
      *(undefined4 *)((int)vm + 0x90) = 0xe;
      FUN_004d4550(vm);
      *(undefined4 *)((int)vm + 0x90) = 0;
      *(undefined4 *)((int)vm + 0xa4) = 0;
    }
    pfVar4 = pfVar4 + -1;
    if ((int)pfVar4 < 0x55cb30) {
      return;
    }
  } while( true );
}


