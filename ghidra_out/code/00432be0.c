
void __fastcall FUN_00432be0(short *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  short *local_4;
  
  if (-1 < param_1[1]) {
    local_4 = param_1;
    puVar2 = FUN_00485080(&DAT_005aa12c,(int)*param_1,0x2f);
    if (puVar2 != (undefined4 *)0x0) {
      cVar1 = *(char *)((int)param_1 + 5);
      if (((cVar1 < '\0') || ((int)puVar2[0x13] <= (int)cVar1)) ||
         ((int)param_1[1] != puVar2[(cVar1 + 3) * 0x13])) {
        puVar2 = (undefined4 *)0x0;
      }
      if (puVar2 != (undefined4 *)0x0) {
        return;
      }
    }
    puVar2 = FUN_0044c0c0((int)param_1[1],(int *)&local_4);
    if (puVar2 == (undefined4 *)0x0) {
      OutputDebugStringA(s_BarterSlot__ReaquireUnit_____fai_00556000);
      *(undefined1 *)(param_1 + 2) = 0;
      return;
    }
    *param_1 = *(short *)(puVar2 + 10);
    *(undefined1 *)((int)param_1 + 5) = local_4._0_1_;
  }
  return;
}


