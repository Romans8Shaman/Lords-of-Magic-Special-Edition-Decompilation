
undefined4 __thiscall FUN_00470c40(void *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  DWORD *pDVar3;
  undefined4 *puVar4;
  undefined1 **ppuVar5;
  undefined4 uStack_1b8;
  undefined *puStack_1b4;
  char *pcStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  CHAR *pCStack_1a0;
  char *pcStack_19c;
  undefined4 uStack_198;
  DWORD aDStack_194 [2];
  char *pcStack_18c;
  char *pcStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined1 *apuStack_154 [4];
  undefined1 *puStack_144;
  undefined1 *puStack_140;
  undefined1 *puStack_13c;
  undefined1 *puStack_138;
  undefined1 *puStack_134;
  undefined1 *puStack_130;
  undefined1 *puStack_12c;
  undefined1 *puStack_128;
  CHAR CStack_104;
  undefined4 uStack_103;
  
  pDVar3 = aDStack_194;
  for (iVar2 = 0xf; pDVar3 = pDVar3 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
    *pDVar3 = 0;
  }
  uStack_180 = DAT_0055b1b0;
  CStack_104 = DAT_00579274;
  puVar4 = &uStack_103;
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  *(undefined1 *)((int)puVar4 + 2) = 0;
  aDStack_194[1] = 0x3c;
  pcStack_18c = s_Lords_of_Magic_00557c1c;
  pcStack_188 = s_Lords_of_Magic_v1_0_00557fa8;
  uStack_184 = 0x44545354;
  uStack_178 = 4;
  uStack_174 = 0;
  uStack_170 = 0;
  aDStack_194[0] = 0x104;
  GetComputerNameA(&CStack_104,aDStack_194);
  pCStack_1a0 = &CStack_104;
  uStack_198 = 0;
  uStack_1a4 = 0x10;
  ppuVar5 = apuStack_154;
  for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
    *ppuVar5 = (undefined1 *)0x0;
    ppuVar5 = ppuVar5 + 1;
  }
  apuStack_154[2] = (undefined1 *)DAT_00584d54;
  iVar2 = *(int *)((int)this + param_1 * 4 + 0x394);
  pcStack_19c = s_A_Player_00557f9c;
  apuStack_154[0] = (undefined1 *)0x50;
  apuStack_154[3] = &LAB_004704d0;
  puStack_144 = &LAB_00470bb0;
  puStack_140 = &LAB_00470bc0;
  puStack_13c = &LAB_00470be0;
  puStack_138 = &LAB_00470bf0;
  puStack_134 = &LAB_00470c00;
  puStack_130 = &LAB_00470c20;
  puStack_12c = &LAB_00470c30;
  puStack_128 = &LAB_00470c30;
  uStack_1b8 = 0x14;
  puStack_1b4 = &DAT_00557f98;
  pcStack_1b0 = s_LOMDeb_exe_00557f8c;
  uStack_1ac = 0;
  uStack_1a8 = 0;
  if (iVar2 == 0) {
    return 0;
  }
  uVar1 = Ordinal_117(iVar2,aDStack_194 + 1,&uStack_1a4,apuStack_154,&uStack_1b8);
  return uVar1;
}


