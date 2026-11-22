
void __fastcall FUN_004311a0(int param_1)

{
  short *psVar1;
  char cVar2;
  int *this;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int local_c;
  int local_8;
  
  for (this = FUN_004fbed0(&DAT_005ae974,0); this != (int *)0x0;
      this = FUN_004fbed0(&DAT_005ae974,(int)this)) {
    if (this[0x12] == *(int *)(param_1 + 8)) {
      local_c = param_1 + 0x52;
      local_8 = *(int *)(param_1 + 0xc);
    }
    else if (this[0x12] == *(int *)(param_1 + 0xc)) {
      local_c = param_1 + 0x28;
      local_8 = *(int *)(param_1 + 8);
    }
    else {
      local_c = 0;
    }
    if (local_c != 0) {
      uVar4 = 0;
      iVar5 = 0;
      do {
        psVar1 = (short *)(local_c + iVar5 * 6);
        cVar2 = *(char *)(local_c + 4 + iVar5 * 6);
        if (cVar2 == '\x05') {
          FUN_00432be0(psVar1);
          if (this[10] == (int)*psVar1) {
            *(undefined1 *)(psVar1 + 2) = 0;
            uVar4 = uVar4 | 1 << (*(byte *)((int)psVar1 + 5) & 0x1f);
          }
        }
        else if ((cVar2 == '\n') && (FUN_00432be0(psVar1), this[10] == (int)*psVar1)) {
          uVar4 = 0xffffffff;
          *(undefined1 *)(psVar1 + 2) = 0;
          iVar5 = 7;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 7);
      if (uVar4 != 0) {
        FUN_00410af0(this,uVar4);
        FUN_004176d0(this,0);
        iVar5 = FUN_004c1c90(this,uVar4);
        if (iVar5 == 0) {
          FUN_00424990(this,uVar4,local_8);
        }
        else {
          if ((this[0xc] & 0x1c00000U) != 0) {
            FUN_004245a0(this);
          }
          FUN_0041d2f0(&DAT_005aa12c,(int)this,local_8);
          if ((this[0x16c] != -1) &&
             (puVar3 = FUN_00485080(&DAT_005aa12c,this[0x16c],0x2f), puVar3 != (undefined4 *)0x0)) {
            puVar3[0x16d] = 0xffffffff;
          }
          this[0x16e] = -1;
          this[0x16c] = -1;
          this[0x16d] = -1;
        }
      }
    }
  }
  return;
}


