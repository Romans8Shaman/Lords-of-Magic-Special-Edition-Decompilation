
void __thiscall FUN_004d05e0(void *this,uint param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint unused_stack_0;
  undefined *unused_stack_4;
  undefined4 uVar3;
  DWORD DVar4;
  uint *puVar5;
  DWORD DVar6;
  undefined4 in_EDX;
  int iVar7;
  
  if (((param_1 & 0xff) != 6) || ((param_1 & 0x100) != 0)) {
    switch(param_1 & 0xff) {
    case 0:
      break;
    case 1:
    case 2:
    case 3:
    case 4:
    case 6:
    case 7:
    case 8:
    case 10:
    case 0xc:
    case 0xe:
      FUN_0041d1d0(this,param_1,param_2);
      break;
    case 5:
      *(uint *)((int)this + 0x94) = param_1;
      *(int **)((int)this + 0x98) = param_2;
      if ((param_1 & 0x100) == 0) {
        puVar5 = FUN_004d32a0(this,param_1,(uint)param_2);
        if (puVar5 == (uint *)0x0) {
          *(uint *)((int)this + 0x9c) = param_1;
          *(int **)((int)this + 0xa0) = param_2;
          FUN_00404ab0(this,0x11);
        }
        else {
          FUN_004d05e0(this,puVar5[2],(int *)puVar5[3]);
        }
      }
      else {
        FUN_0041d1d0(this,param_1,param_2);
      }
      break;
    case 9:
      *(uint *)((int)this + 0x94) = param_1;
      *(int **)((int)this + 0x98) = param_2;
      FUN_004d3710(this,param_1,(undefined *)param_2);
      break;
    case 0xb:
      *(uint *)((int)this + 0x94) = param_1;
      *(int **)((int)this + 0x98) = param_2;
      FUN_004d3770((int)this,in_EDX,param_1,param_2);
      break;
    case 0xd:
      *(uint *)((int)this + 0x94) = param_1;
      *(int **)((int)this + 0x98) = param_2;
      FUN_004d3930((int)this,in_EDX,param_1,param_2);
      break;
    case 0xf:
      *(uint *)((int)this + 0x94) = param_1;
      *(int **)((int)this + 0x98) = param_2;
      FUN_004d3b90((int)this,in_EDX,param_1,param_2);
      break;
    default:
      *(undefined4 *)((int)this + 0x90) = 0x13;
      FUN_004d4550(this);
      *(undefined4 *)((int)this + 0x90) = 0;
      *(undefined4 *)((int)this + 0xa4) = 0;
    }
    if ((*(int *)((int)this + 0x90) != 0) && (*(int *)((int)this + 0xa4) == 0)) {
      FUN_004d4550(this);
    }
    return;
  }
  iVar2 = *(int *)((int)this + 0x558);
  if (iVar2 < 100) {
    *(uint *)((int)this + iVar2 * 8 + 0xa8) = param_1;
    *(int **)((int)this + iVar2 * 8 + 0xac) = param_2;
    *(int *)((int)this + 0x558) = *(int *)((int)this + 0x558) + 1;
  }
  param_2[2] = param_2[2] + 1;
  DVar4 = GetTickCount();
  iVar7 = 0;
  if (0 < param_2[1]) {
    do {
      *(int *)((int)this + *(int *)((int)this + 0x558) * 4 + 0x3c4) = iVar7;
      unused_stack_0 = *(uint *)(*param_2 + iVar7 * 8);
      puVar1 = (undefined4 *)(*param_2 + iVar7 * 8);
      unused_stack_4 = (undefined *)puVar1[1];
      switch(unused_stack_0 & 0xff) {
      case 0:
        break;
      case 1:
      case 2:
      case 3:
      case 4:
      case 6:
      case 7:
      case 8:
      case 10:
      case 0xc:
      case 0xe:
        FUN_0041d1d0(this,*puVar1,puVar1[1]);
        break;
      case 5:
        *(undefined4 *)((int)this + 0x94) = *puVar1;
        *(undefined4 *)((int)this + 0x98) = puVar1[1];
        if ((unused_stack_0 & 0x100) == 0) {
          puVar5 = FUN_004d32a0(this,unused_stack_0,(uint)unused_stack_4);
          if (puVar5 == (uint *)0x0) {
            *(uint *)((int)this + 0x9c) = unused_stack_0;
            *(undefined **)((int)this + 0xa0) = unused_stack_4;
            FUN_00404ab0(this,0x11);
          }
          else {
            FUN_004d05e0(this,puVar5[2],(int *)puVar5[3]);
          }
        }
        else {
          FUN_0041d1d0(this,unused_stack_0,unused_stack_4);
        }
        break;
      case 9:
        *(undefined4 *)((int)this + 0x94) = *puVar1;
        *(undefined4 *)((int)this + 0x98) = puVar1[1];
        FUN_004d3710(this,unused_stack_0,unused_stack_4);
        break;
      case 0xb:
        *(undefined4 *)((int)this + 0x94) = *puVar1;
        uVar3 = puVar1[1];
        *(undefined4 *)((int)this + 0x98) = uVar3;
        FUN_004d3770((int)this,uVar3,unused_stack_0,unused_stack_4);
        break;
      case 0xd:
        *(undefined4 *)((int)this + 0x94) = *puVar1;
        uVar3 = puVar1[1];
        *(undefined4 *)((int)this + 0x98) = uVar3;
        FUN_004d3930((int)this,uVar3,unused_stack_0,unused_stack_4);
        break;
      case 0xf:
        *(undefined4 *)((int)this + 0x94) = *puVar1;
        uVar3 = puVar1[1];
        *(undefined4 *)((int)this + 0x98) = uVar3;
        FUN_004d3b90((int)this,uVar3,unused_stack_0,unused_stack_4);
        break;
      default:
        *(undefined4 *)((int)this + 0x90) = 0x13;
        FUN_004d4550(this);
        *(undefined4 *)((int)this + 0x90) = 0;
        *(undefined4 *)((int)this + 0xa4) = 0;
      }
      if ((*(int *)((int)this + 0x90) != 0) && (*(int *)((int)this + 0xa4) == 0)) {
        FUN_004d4550(this);
      }
    } while ((*(int *)((int)this + 0x6c) == 0) && (iVar7 = iVar7 + 1, iVar7 < param_2[1]));
  }
  DVar6 = GetTickCount();
  param_2[3] = param_2[3] + (DVar6 - DVar4);
  *(int *)((int)this + 0x558) = iVar2;
  return;
}


