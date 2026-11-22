
undefined4 __thiscall FUN_004b1cc0(void *this,undefined1 param_1,char param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  char cVar4;
  
  pcVar2 = FUN_004b1db0(this,param_1);
  cVar1 = pcVar2[1];
  pcVar2[1] = param_2;
  cVar4 = *pcVar2;
  if (*pcVar2 <= param_2) {
    cVar4 = param_2;
  }
  *pcVar2 = cVar4;
  uVar3 = CONCAT31((int3)((uint)pcVar2 >> 8),cVar1);
  if ((param_2 != cVar1) && (uVar3 = 0, param_3 != 0)) {
    uVar3 = FUN_004b2310(0x5aa12c);
  }
  return uVar3;
}


