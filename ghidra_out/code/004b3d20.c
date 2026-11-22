
void __fastcall FUN_004b3d20(void *param_1)

{
  if (*(int *)((int)param_1 + 0x13b4) != 0) {
    FUN_004b32c0((int *)((int)param_1 + 0xfc0));
    *(undefined4 *)((int)param_1 + 0xfdc) = 0;
    *(undefined4 *)((int)param_1 + 0x1240) = 1;
    *(undefined4 *)((int)param_1 + 0x123c) = 2;
    *(undefined1 *)((int)param_1 + 0x1345) = 0;
    *(undefined4 *)((int)param_1 + 0x1358) = 0xffffffff;
    FUN_004b3cb0(param_1,0);
    FUN_004b3580((int *)((int)param_1 + 0xfc0),(LPCSTR)((int)param_1 + 0x1244),0);
  }
  return;
}


