
void __thiscall FUN_00415b10(void *this,undefined4 *param_1,int param_2)

{
  undefined4 *this_00;
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int local_c;
  int local_8;
  int local_4;
  
  this_00 = param_1;
  iVar4 = 0;
  if (param_1 != (undefined4 *)0x0) {
    local_8 = 0;
    if (0 < (int)param_1[0x13]) {
      piVar3 = param_1 + 0x31;
      do {
        iVar1 = FUN_00525fc0(piVar3);
        if (-1 < iVar1) {
          local_8 = iVar4;
          break;
        }
        iVar4 = iVar4 + 1;
        piVar3 = piVar3 + 0x13;
      } while (iVar4 < (int)param_1[0x13]);
    }
    local_c = 0;
    if (0 < *(int *)((int)this + 0x4c)) {
      param_1 = (undefined4 *)((int)this + 0xe0);
      do {
        piVar3 = (int *)*param_1;
        while (piVar3 != (int *)0x0) {
          iVar4 = FUN_00427b80(*piVar3);
          if ((*(byte *)(iVar4 + 0x18) & 0x10) == 0) {
            iVar4 = piVar3[3];
            if (*(int *)((int)this + 0x28) < 0) {
              piVar3[4] = piVar3[4] & 0xffffffe0;
            }
            FUN_004291a0((int)this,local_c,(int)this_00,local_8,piVar3[3]);
            if ((param_2 != 0) &&
               (puVar2 = (undefined4 *)FUN_00429560(this_00,iVar4,&local_4),
               puVar2 != (undefined4 *)0x0)) {
              FUN_004288e0(&DAT_005aa12c,puVar2);
            }
            piVar3 = (int *)*param_1;
          }
          else {
            piVar3 = (int *)piVar3[5];
          }
        }
        local_c = local_c + 1;
        param_1 = param_1 + 0x13;
      } while (local_c < *(int *)((int)this + 0x4c));
    }
  }
  return;
}


