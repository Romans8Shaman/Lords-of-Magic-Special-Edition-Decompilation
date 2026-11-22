
int __thiscall
FUN_00492030(void *this,int param_1,int param_2,int unused_stack_12,undefined4 unused_stack_16,
            undefined4 in_stack_14)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  iVar1 = FUN_00491c70(this);
  puVar2 = (undefined4 *)FUN_00491c20(this,iVar1);
  if (puVar2 != (undefined4 *)0x0) {
    piVar3 = (int *)FUN_00492760(this,param_1);
    if (piVar3 != (int *)0x0) {
      if ((*(int *)(*piVar3 + 4) < piVar3[3] * unused_stack_12 + piVar3[1]) ||
         (*(int *)(*piVar3 + 8) <
          piVar3[2] + ((unused_stack_12 + -1 + param_2) / unused_stack_12) * piVar3[4])) {
        OutputDebugStringA(s_Animation_frames_exceed_graphic_p_0055c56c);
      }
      else {
        puVar4 = (undefined4 *)Ordinal_401(0x14,s_C__lomse_source_storm_h_00555130,0x3ef,0);
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          *puVar4 = piVar3;
          puVar4[1] = param_2;
          puVar4[2] = unused_stack_12;
          puVar4[3] = unused_stack_16;
          puVar4[4] = in_stack_14;
        }
        puVar2[1] = puVar4;
        if (puVar4 != (undefined4 *)0x0) {
          *puVar2 = 8;
          return iVar1;
        }
      }
    }
  }
  return 0xffffffff;
}


