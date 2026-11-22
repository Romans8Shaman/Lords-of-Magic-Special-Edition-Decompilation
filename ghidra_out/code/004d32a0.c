
uint * __thiscall FUN_004d32a0(void *this,uint param_1,uint param_2)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int local_c;
  
  iVar4 = *(int *)((int)this + 100);
  local_c = *(int *)((int)this + 0x60);
  if (local_c < iVar4) {
    do {
      piVar1 = *(int **)(*(int *)((int)this + 0x5c) + local_c * 4);
      if ((param_1 & 0xff) == 5) {
        iVar3 = *(int *)(*(int *)((int)this + 0x80) + param_2 * 4);
        if ((((piVar1 == *(int **)(*(int *)((int)this + 0x5c) + -4 + iVar4 * 4)) &&
             (-1 < (int)param_2)) && ((int)param_2 < piVar1[1])) &&
           (*(uint *)(*piVar1 + 4 + param_2 * 0x10) == param_2)) {
          *(int **)(iVar3 + 0x10) = piVar1;
          *(uint *)(iVar3 + 0x14) = param_2;
          puVar2 = (uint *)(*piVar1 + param_2 * 0x10);
        }
        else if (((piVar1 != *(int **)(iVar3 + 0x10)) || (piVar1[1] <= *(int *)(iVar3 + 0x14))) ||
                ((puVar2 = (uint *)(*(int *)(iVar3 + 0x14) * 0x10 + *piVar1), puVar2[1] != param_2
                 || ((char)*puVar2 != '\x05')))) {
          if (piVar1[3] < 0) {
            puVar2 = (uint *)0x0;
          }
          else {
            if ((piVar1[2] <= (int)param_2) && ((int)param_2 <= piVar1[3])) goto LAB_004d3352;
            puVar2 = (uint *)0x0;
          }
        }
      }
      else {
        iVar3 = 0;
LAB_004d3352:
        iVar4 = 0;
        if (0 < piVar1[1]) {
          puVar2 = (uint *)*piVar1;
          do {
            if ((puVar2[1] == param_2) && ((*puVar2 & 0xff) == (param_1 & 0xff))) {
              if (iVar3 != 0) {
                *(int **)(iVar3 + 0x10) = piVar1;
                *(int *)(iVar3 + 0x14) = iVar4;
              }
              goto LAB_004d33a0;
            }
            iVar4 = iVar4 + 1;
            puVar2 = puVar2 + 4;
          } while (iVar4 < piVar1[1]);
        }
        puVar2 = (uint *)0x0;
      }
LAB_004d33a0:
      if (puVar2 != (uint *)0x0) {
        return puVar2;
      }
      iVar4 = *(int *)((int)this + 100);
      local_c = local_c + 1;
    } while (local_c < iVar4);
  }
  return (uint *)0x0;
}


