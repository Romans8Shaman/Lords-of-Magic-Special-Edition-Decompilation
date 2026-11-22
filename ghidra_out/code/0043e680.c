
int * __thiscall FUN_0043e680(void *this,int *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = FUN_00482ac0(&DAT_005aa12c,*(int *)((int)this + 0x28),3);
  uVar1 = (uint)(uVar1 != 0);
  iVar3 = *(int *)((int)this + 0x1c) % DAT_005ae9c4;
  iVar2 = *(int *)((int)this + 0x1c) / DAT_005ae9c4;
  switch(param_2) {
  case 9:
    iVar3 = *(int *)(&DAT_005564b8 + uVar1 * 0x18) + iVar3;
    iVar2 = *(int *)(&DAT_005564bc + uVar1 * 0x18) + iVar2;
    break;
  case 10:
    iVar3 = (&DAT_005564c0)[uVar1 * 6] + iVar3;
    iVar2 = (&DAT_005564c4)[uVar1 * 6] + iVar2;
    break;
  default:
    break;
  case 0xc:
    iVar3 = (&DAT_005564c8)[uVar1 * 6] + iVar3;
    iVar2 = (&DAT_005564cc)[uVar1 * 6] + iVar2;
    break;
  case 0xe:
    iVar3 = DAT_005564e8 + iVar3;
    iVar2 = DAT_005564ec + iVar2;
    break;
  case 0xf:
    iVar3 = DAT_005564f0 + iVar3;
    iVar2 = DAT_005564f4 + iVar2;
    break;
  case 0x10:
    iVar3 = DAT_00556508 + iVar3;
    iVar2 = DAT_0055650c + iVar2;
  }
  uVar1 = 0x40000;
  iVar2 = FUN_004a51c0(&DAT_005ae958,iVar3,iVar2);
  iVar2 = FUN_004a6f60(&DAT_005ae958,iVar2,uVar1);
  iVar3 = iVar2 / DAT_005ae9c4;
  *param_1 = iVar2 % DAT_005ae9c4;
  param_1[1] = iVar3;
  return param_1;
}


