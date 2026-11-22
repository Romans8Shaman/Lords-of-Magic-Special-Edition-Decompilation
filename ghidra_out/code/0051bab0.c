
void __fastcall FUN_0051bab0(void *param_1,undefined4 unused_reg_1,undefined4 unused_stack_0)

{
  DWORD DVar1;
  int iVar2;
  DWORD DVar3;
  
  DVar1 = GetTickCount();
  iVar2 = FUN_0051b9b0(0x584ae8);
  while (iVar2 == 0) {
    switch(*(undefined4 *)((int)param_1 + 0x6c)) {
    case 0:
      FUN_0051c540(param_1);
      break;
    case 1:
      FUN_0051bc40(param_1);
      break;
    case 2:
      FUN_0051bcc0(param_1);
      break;
    case 3:
      FUN_0051bc80(param_1);
      break;
    case 4:
      thunk_FUN_0051c6b0((int)param_1);
      break;
    case 5:
      thunk_FUN_0051c6b0((int)param_1);
      break;
    case 6:
      FUN_0051c0f0((int)param_1);
      break;
    case 7:
      FUN_0051c5d0(param_1);
      break;
    case 8:
      FUN_0051c480(param_1);
      break;
    case 9:
    case 0x11:
      FUN_0051c610(param_1);
      break;
    case 10:
      FUN_0051c1e0(param_1);
      break;
    case 0xb:
      FUN_0051c220(param_1);
      break;
    case 0xc:
      FUN_0051c260(param_1);
      break;
    case 0xd:
      FUN_0051c2a0(param_1);
      break;
    case 0xe:
      FUN_0051c2e0(param_1);
      break;
    case 0xf:
      FUN_0051c320(param_1);
      break;
    case 0x10:
      FUN_0051c440(param_1);
      break;
    case 0x12:
      FUN_0051c650(param_1);
      break;
    default:
      goto switchD_0051badd_default;
    }
    DVar3 = GetTickCount();
    if (0xf < DVar3 - DVar1) {
      return;
    }
    iVar2 = FUN_0051b9b0(0x584ae8);
  }
switchD_0051badd_default:
  return;
}


