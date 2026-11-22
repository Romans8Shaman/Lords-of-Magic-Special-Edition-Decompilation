
void __thiscall FUN_004d2ec0(void *this,int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  if (param_1 != 0) {
    FUN_004d2ec0(this,*(int *)(param_1 + 8));
    FUN_004d2ec0(this,*(int *)(param_1 + 0xc));
    iVar2 = *(int *)((int)this + 0xa90) + -0x18;
    *(int *)((int)this + 0xa90) = iVar2;
    if (*(char **)(param_1 + 4) != (char *)0x0) {
      uVar3 = 0xffffffff;
      pcVar4 = *(char **)(param_1 + 4);
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      *(uint *)((int)this + 0xa90) = iVar2 - (~uVar3 - 1);
    }
    if (*(int *)(param_1 + 4) != 0) {
      Ordinal_403(*(int *)(param_1 + 4),s_C__lomse_source_storm_h_00555130,0x3f6,0);
    }
    Ordinal_403(param_1,s_C__lomse_source_storm_h_00555130,0x3eb,0);
  }
  return;
}


