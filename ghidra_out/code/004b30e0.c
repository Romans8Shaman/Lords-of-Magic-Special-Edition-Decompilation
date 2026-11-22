
void __thiscall FUN_004b30e0(void *this,char *param_1)

{
  int iVar1;
  int iVar2;
  LPCSTR pCVar3;
  char *pcVar4;
  bool bVar5;
  undefined4 local_2e4;
  undefined1 local_2e0;
  undefined4 local_2df;
  undefined1 local_2db;
  undefined4 local_2da;
  undefined1 local_2d6;
  undefined4 local_2d5;
  undefined1 local_2d1;
  undefined4 local_2d0;
  undefined1 local_2cc;
  undefined4 local_2cb;
  undefined1 local_2c7;
  undefined4 local_2c6;
  undefined1 local_2c2;
  undefined4 local_2c1;
  undefined1 local_2bd;
  char local_2bc;
  undefined4 local_2b7;
  undefined1 local_2b3;
  char local_240 [4];
  char local_23c [572];
  
  if (DAT_005d1e84 == 0) {
    bVar5 = true;
  }
  else {
    iVar2 = *(int *)(DAT_005d1e84 + 0x390);
    iVar1 = FUN_004b7dd0(DAT_005d1e84);
    bVar5 = iVar2 == iVar1;
  }
  if (bVar5) {
    iVar2 = _strncmp((char *)((int)this + 0x32),param_1,0x32);
    if (iVar2 != 0) {
      _strncpy((char *)((int)this + 0x32),param_1,0x32);
      if (*(char *)((int)this + 0x2d) != '\0') {
        pCVar3 = (LPCSTR)FUN_004b54c0();
        if (pCVar3 != (LPCSTR)0x0) {
          iVar2 = FUN_00483010(&DAT_005aa12c,pCVar3,(char *)&local_2e4,local_240);
          if (iVar2 != 0) {
            *(undefined4 *)this = local_2e4;
            *(undefined1 *)((int)this + 4) = local_2e0;
            *(undefined4 *)((int)this + 5) = local_2df;
            *(undefined1 *)((int)this + 9) = local_2db;
            *(undefined4 *)((int)this + 10) = local_2da;
            *(undefined1 *)((int)this + 0xe) = local_2d6;
            *(undefined4 *)((int)this + 0xf) = local_2d5;
            *(undefined1 *)((int)this + 0x13) = local_2d1;
            *(undefined4 *)((int)this + 0x14) = local_2d0;
            *(undefined1 *)((int)this + 0x18) = local_2cc;
            *(undefined4 *)((int)this + 0x19) = local_2cb;
            *(undefined1 *)((int)this + 0x1d) = local_2c7;
            *(undefined4 *)((int)this + 0x1e) = local_2c6;
            *(undefined1 *)((int)this + 0x22) = local_2c2;
            *(undefined4 *)((int)this + 0x23) = local_2c1;
            *(undefined1 *)((int)this + 0x27) = local_2bd;
            FUN_004b1c20(this,'\b',local_2bc,0);
            *(undefined4 *)((int)this + 0x2d) = local_2b7;
            *(undefined1 *)((int)this + 0x31) = local_2b3;
            if (0x62 < DAT_005aa12c) {
              iVar2 = 0;
              do {
                FUN_004b7b50(iVar2,0xffffffff);
                iVar2 = iVar2 + 1;
              } while (iVar2 < 0x10);
              iVar2 = 0;
              pcVar4 = local_23c;
              do {
                FUN_004b7b50(iVar2,*(undefined4 *)(pcVar4 + -4));
                FUN_004c03b0(iVar2,pcVar4);
                iVar2 = iVar2 + 1;
                pcVar4 = pcVar4 + 0x24;
              } while (iVar2 < 0x10);
            }
          }
        }
      }
      FUN_004b2310(0x5aa12c);
    }
  }
  return;
}


