
undefined4 __thiscall FUN_0044a2f0(void *this)

{
  int iVar1;
  HANDLE pvVar2;
  undefined4 in_EDX;
  int unaff_EBP;
  undefined4 uStack_10;
  undefined4 uStack_c;
  int iStack_8;
  int iStack_4;
  
  iVar1 = FUN_0044a460((int)this,in_EDX,0);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)((int)this + 0x404) = DAT_005568a8;
  *(undefined4 *)((int)this + 0x408) = DAT_005568ac;
  *(undefined4 *)((int)this + 0x40c) = DAT_005568b0;
  *(undefined4 *)((int)this + 0x410) = DAT_005568b4;
  Sleep(100);
  uStack_c = 0;
  iStack_8 = (int)this + 0x104;
  uStack_10 = 0x10;
  iStack_4 = iStack_8;
  pvVar2 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
  *(HANDLE *)((int)this + 0x370) = pvVar2;
  iVar1 = (/*IC:0044a39c*/**(code **)(**(int **)((int)this + 0x4a0) + 0x18))
                    (*(int **)((int)this + 0x4a0),(int *)((int)this + 0x2c4),&uStack_10,pvVar2,0,0,0
                     ,s_lpDirectPlay3A_>CreatePlayer__Th_00556928);
  iVar1 = FUN_004756f0(iVar1);
  FUN_004b69a0(s__s__Creating_Player_00556988,iVar1,0);
  if (iVar1 != 1) {
    return 0;
  }
  if (*(int *)((int)this + 0x2c4) == 0xffff) {
    FUN_004b69a0(s__s__PlayerID____x_00556974,1,0xffff);
    return 0;
  }
  *(undefined4 *)((int)this + 0x120) = 3;
  *(undefined4 *)((int)this + 0x390) = 1;
  FUN_004b7dd0((int)this);
  *(undefined4 *)((int)this + 0x390) = 1;
  *(undefined4 *)((int)this + 0xd4) = 1;
  *(undefined4 *)((int)this + 0x36c) = 0;
  *(undefined4 *)((int)this + 0xd0) = 1;
  (/*IC:0044a42b*/**(code **)(*(int *)this + 0x18))();
  FUN_004b7b90(this,unaff_EBP);
  FUN_004b8b80((int)this);
  FUN_004b6520(1);
  return 1;
}


