
undefined4 __thiscall FUN_0044a160(void *this,char *param_1)

{
  char *_Source;
  int iVar1;
  HANDLE pvVar2;
  undefined4 uVar3;
  undefined4 in_EDX;
  undefined4 uStack_10;
  undefined4 uStack_c;
  char *pcStack_8;
  char *pcStack_4;
  
  iVar1 = FUN_0044a460((int)this,in_EDX,1);
  if (iVar1 == 0) {
    return 0;
  }
  _strncpy((char *)((int)this + 0xe0),param_1,0x1d);
  *(undefined1 *)((int)this + 0xfd) = 0;
  uStack_c = 0;
  _Source = (char *)((int)this + 0x104);
  uStack_10 = 0x10;
  pcStack_8 = _Source;
  pcStack_4 = _Source;
  pvVar2 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
  *(HANDLE *)((int)this + 0x370) = pvVar2;
  iVar1 = (/*IC:0044a1f4*/**(code **)(**(int **)((int)this + 0x4a0) + 0x18))
                    (*(int **)((int)this + 0x4a0),(undefined4 *)((int)this + 0x2c4),&uStack_10,
                     pvVar2,0,0,0,s_lpDirectPlay3A_>CreatePlayer__Th_00556928);
  iVar1 = FUN_004756f0(iVar1);
  FUN_004b69a0(s__s__Creating_player_00556914,iVar1,0);
  if (iVar1 == 1) {
    *(undefined4 *)((int)this + 0xd4) = 1;
    *(undefined4 *)((int)this + 0x36c) = 0;
    *(undefined4 *)((int)this + 0x120) = 1;
    uVar3 = FUN_004b7dd0((int)this);
    *(undefined4 *)((int)this + 0x390) = uVar3;
    *(undefined4 *)((int)this + 0xd0) = 1;
    *(undefined4 *)((int)this + 0xc) = *(undefined4 *)((int)this + 0x2c4);
    *(undefined4 *)((int)this + 0x10) = 1;
    *(undefined4 *)((int)this + 0x2d) = 0;
    _strncpy((char *)((int)this + 0x14),_Source,0x17);
    *(undefined1 *)((int)this + 0x2b) = 0;
    *(undefined4 *)((int)this + 0x100) = 0;
    (/*IC:0044a2c3*/**(code **)(*(int *)this + 0x18))();
    FUN_004b8b80((int)this);
    FUN_004b6520(1);
    return 1;
  }
  iVar1 = (/*IC:0044a228*/**(code **)(**(int **)((int)this + 0x4a0) + 0x10))
                    (*(int **)((int)this + 0x4a0),s_lpDirectPlay3A_>Close___005568d8);
  FUN_004756f0(iVar1);
  iVar1 = (/*IC:0044a242*/**(code **)(**(int **)((int)this + 0x4a0) + 8))
                    (*(int **)((int)this + 0x4a0),s_lpDirectPlay3A_>Release___005568bc);
  FUN_004756f0(iVar1);
  *(undefined4 *)((int)this + 0x4a0) = 0;
  OutputDebugStringA(s_Error_Creating_DirectPlay_Player_005568f0);
  return 0;
}


