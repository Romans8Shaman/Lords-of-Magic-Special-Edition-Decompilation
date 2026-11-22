
void __thiscall FUN_004d3f20(void *this,LPCSTR param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  uint unaff_EDI;
  undefined4 *puVar5;
  undefined4 local_1fc;
  undefined4 local_1f8;
  char local_1f4 [500];
  
  piVar1 = (int *)FUN_00539610(param_1,&DAT_0055c020);
  FUN_0053a090(local_1f4,s____last_error_call_stack____0055e498,unaff_EDI);
  if (piVar1 != (int *)0x0) {
    FUN_0053b3e0(local_1f4,piVar1);
  }
  OutputDebugStringA(local_1f4);
  uVar4 = *(int *)((int)this + 0x558) - 1;
  if (-1 < (int)uVar4) {
    piVar3 = (int *)((int)this + uVar4 * 4 + 0x3c8);
    puVar5 = (undefined4 *)((int)this + uVar4 * 8 + 0xa8);
    do {
      if ((char)*puVar5 == '\x06') {
        puVar2 = FUN_004d5ca0(this,puVar5[1],*piVar3,&local_1f8,&local_1fc);
        if (puVar2 == (undefined4 *)0x0) {
          FUN_0053a090(local_1f4,s__d____0055e490,uVar4);
        }
        else {
          FUN_0053a090(local_1f4,s__d___s__Line__d_Column__d_0055e474,uVar4,puVar2,local_1f8,
                       local_1fc);
        }
        if (piVar1 != (int *)0x0) {
          FUN_0053b3e0(local_1f4,piVar1);
        }
        OutputDebugStringA(local_1f4);
      }
      uVar4 = uVar4 - 1;
      puVar5 = puVar5 + -2;
      piVar3 = piVar3 + -1;
    } while (-1 < (int)uVar4);
  }
  FUN_0053a090(local_1f4,s_____________________________0055e454,unaff_EDI);
  OutputDebugStringA(local_1f4);
  if (piVar1 != (int *)0x0) {
    FUN_005394d0(piVar1);
  }
  return;
}


