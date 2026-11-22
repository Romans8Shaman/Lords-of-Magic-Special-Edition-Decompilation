
void __cdecl op_isgreattempleactive_q(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *this;
  int iVar4;
  int iVar5;
  
  piVar2 = param_1;
  iVar3 = FUN_00451a70(param_1,(uint *)&param_1);
  if (iVar3 != 0) {
    iVar3 = (/*IC:0050f593*/**(code **)(*param_1 + 0x3c))(param_1);
    if ((iVar3 < 0) || (param_1[0x35] < 1)) {
      if (piVar2[0x15] != 0) {
        iVar3 = piVar2[0x14];
        iVar4 = piVar2[0x15] + -1;
        piVar2[0x15] = iVar4;
        *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
        *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = 0;
        return;
      }
    }
    else {
      for (this = (int *)FUN_004fbe60(&DAT_005ae974,0,1); this != (int *)0x0;
          this = (int *)FUN_004fbe60(&DAT_005ae974,(int)this,1)) {
        iVar3 = FUN_0050f7e0(this,param_1[0x20]);
        if (iVar3 != 0) {
          iVar3 = (/*IC:0050f64c*/**(code **)(*this + 0x3c))(this);
          iVar4 = (/*IC:0050f657*/**(code **)(*param_1 + 0x3c))(param_1);
          if (piVar2[0x15] != 0) {
            iVar1 = piVar2[0x14];
            iVar5 = piVar2[0x15] + -1;
            piVar2[0x15] = iVar5;
            *(undefined4 *)(iVar1 + iVar5 * 8) = 1;
            *(uint *)(iVar1 + 4 + iVar5 * 8) = -(uint)(iVar3 == iVar4);
            return;
          }
          goto LAB_0050f627;
        }
      }
      if (piVar2[0x15] != 0) {
        iVar3 = piVar2[0x14];
        iVar4 = piVar2[0x15] + -1;
        piVar2[0x15] = iVar4;
        *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
        *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = 0;
        return;
      }
    }
LAB_0050f627:
    piVar2[0x24] = 3;
    FUN_004d4550(piVar2);
    piVar2[0x24] = 0;
    piVar2[0x29] = 0;
  }
  return;
}


