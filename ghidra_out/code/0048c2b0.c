
int __fastcall FUN_0048c2b0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0048a400(0x584ae8);
  iVar2 = param_1 + 9;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  switch(*(undefined1 *)(param_1 + 4)) {
  case 0x3d:
    return param_1 + 9;
  case 0x3f:
  case 0x40:
  case 0x42:
  case 0x4b:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x59:
  case 0x5b:
  case 0x5d:
  case 0x5e:
  case 0x5f:
    iVar2 = 0;
  }
  return iVar2;
}


