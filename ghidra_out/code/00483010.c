
undefined4 __thiscall FUN_00483010(void *this,LPCSTR param_1,char *param_2,char *param_3)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  DWORD DVar4;
  int iVar5;
  char *_Str2;
  int iVar6;
  char local_8 [8];
  
  *(undefined4 *)this = 0;
  piVar2 = (int *)FUN_004fe6e0(&DAT_00584ae8,param_1);
  if (piVar2 != (int *)0x0) {
    uVar3 = FUN_00548ec0((int)piVar2);
    DVar4 = FUN_00548e10(uVar3);
    *(DWORD *)((int)this + 0xa4) = DVar4;
    do {
      uVar3 = FUN_005397f0(local_8,8,1,piVar2);
      if (uVar3 != 1) {
        local_8[0] = '\0';
      }
      if ((*(byte *)(piVar2 + 3) & 0x10) != 0) {
        return 1;
      }
      iVar6 = 0;
      _Str2 = s_LS_MAP__0055b168;
      do {
        iVar5 = _strncmp(local_8,_Str2,7);
        if (iVar5 == 0) break;
        _Str2 = _Str2 + 8;
        iVar6 = iVar6 + 1;
      } while ((int)_Str2 < 0x55b1b0);
      if (iVar6 == 9) break;
      if (iVar6 != 5) {
        if ((iVar6 == 8) && (iVar6 = FUN_00483a10(this,piVar2,param_2,param_3), iVar6 != 0)) {
          cVar1 = param_2[0x2f];
          param_2[0x2d] = '\x01';
          if ('\x01' < cVar1) {
            cVar1 = '\x01';
          }
          param_2[0x2d] = cVar1;
          if (cVar1 <= param_2[0x2e]) {
            cVar1 = param_2[0x2e];
          }
          param_2[0x2d] = cVar1;
          FUN_005394d0(piVar2);
          return 1;
        }
        break;
      }
      uVar3 = FUN_005397f0(this,4,1,piVar2);
    } while (uVar3 != 0);
    FUN_005394d0(piVar2);
  }
  return 0;
}


