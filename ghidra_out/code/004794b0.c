
void __thiscall FUN_004794b0(void *this,int param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  byte local_4 [4];
  
  bVar2 = false;
  *(undefined4 *)((int)this + 0x1398) = 0xfffffffe;
  FUN_00478920(this);
  *(undefined4 *)((int)this + 0x13ac) = 0;
  *(undefined4 *)((int)this + 0x1398) = 0xfffffffe;
  *(int *)((int)this + 0x139c) = param_1;
  *(undefined4 *)((int)this + 0x13a0) = *(undefined4 *)((int)this + 0x136c);
  piVar5 = (int *)((int)this + 0xf0);
  iVar4 = 5;
  piVar6 = this;
  do {
    piVar1 = (int *)*piVar6;
    if (piVar1 != (int *)0x0) {
      iVar3 = (/*IC:0047950c*/**(code **)(*piVar1 + 0x24))(piVar1,local_4);
      if (iVar3 == -0x7787ff6a) {
        (/*IC:0047951b*/**(code **)(*(int *)*piVar6 + 0x50))((int *)*piVar6);
      }
      if ((((local_4[0] & 5) != 0) && (*piVar5 == -1)) || (*piVar5 == -2)) {
        bVar2 = true;
      }
    }
    piVar6 = piVar6 + 1;
    piVar5 = piVar5 + 7;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  if (bVar2) {
    *(int *)((int)this + 0x13a0) =
         (*(int *)((int)this + 0x136c) + -0x9c4) / 2 + *(int *)((int)this + 0x136c);
  }
  FUN_00478c00(&DAT_00585408,DAT_005867a4);
  return;
}


