
void __thiscall FUN_0047a8b0(void *this,undefined4 param_p2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint unaff_EBP;
  int unaff_ESI;
  int unaff_retaddr;
  undefined1 local_8 [2];
  undefined1 auStack_6 [2];
  int iStack_4;
  
  if ((((*(int *)((int)this + 0x13b4) != 0) && ((&DAT_005a8078)[DAT_005a7d8c * 0x100] == 2)) &&
      (-0x9c4 < *(int *)((int)this + 0x1374))) &&
     (piVar2 = *(int **)((int)this + 0x780), piVar2 != (int *)0x0)) {
    (/*IC:0047a902*/**(code **)(*piVar2 + 0x24))(piVar2,local_8);
    if (((unaff_EBP & 5) != 0) &&
       (*(int *)((int)this + (unaff_retaddr + iStack_4 * 0x34) * 4 + 0x790) != -1)) {
      piVar2 = *(int **)((int)this + 0x784);
      puVar1 = (undefined4 *)((int)this + 0x784);
      if (piVar2 != (int *)0x0) {
        (/*IC:0047a942*/**(code **)(*piVar2 + 0x48))(piVar2);
        FUN_00478f60((int *)*puVar1);
        (/*IC:0047a954*/**(code **)(*(int *)*puVar1 + 8))((int *)*puVar1);
        *puVar1 = 0;
      }
      iVar3 = FUN_00478570(this,unaff_retaddr,puVar1);
      if (iVar3 != 0) {
        uVar4 = FUN_0053a110();
        uVar5 = FUN_0053a110();
        uVar6 = FUN_0053a110();
        *(int *)((int)this + 0x1380) =
             ((int)(uVar6 * 7 + ((int)(uVar6 * 7) >> 0x1f & 0x7fffU)) >> 0xf) + -3;
        (/*IC:0047a9e5*/**(code **)(**(int **)((int)this + 0x780) + 0x18))
                  (*(int **)((int)this + 0x780),local_8 + -4);
        (/*IC:0047a9f4*/**(code **)(*(int *)*puVar1 + 0x3c))
                  ((int *)*puVar1,
                   ((int)(uVar4 * 400 + ((int)(uVar4 * 400) >> 0x1f & 0x7fffU)) >> 0xf) + -200 +
                   unaff_ESI);
        (/*IC:0047a9fd*/**(code **)(*(int *)*puVar1 + 0x40))
                  ((int *)*puVar1,
                   ((int)(uVar5 * 16000 + ((int)(uVar5 * 16000) >> 0x1f & 0x7fffU)) >> 0xf) + -8000)
        ;
        (/*IC:0047aa0b*/**(code **)(*(int *)*puVar1 + 0x30))((int *)*puVar1,0,0,0);
      }
    }
  }
  return;
}


