
bool __thiscall FUN_00495b00(void *this,int param_1)

{
  HDC hdc;
  undefined1 *puVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 uVar3;
  char *pcVar4;
  undefined1 local_10 [4];
  undefined1 local_c [4];
  undefined1 local_8 [4];
  LPPALETTEENTRY local_4;
  
  hdc = GetDC(*(HWND *)((int)this + 0x26c));
  local_4 = (LPPALETTEENTRY)((int)this + 0x280);
  GetSystemPaletteEntries(hdc,0,10,local_4);
  GetSystemPaletteEntries(hdc,0xf6,10,(LPPALETTEENTRY)((int)this + 0x658));
  ReleaseDC(*(HWND *)((int)this + 0x26c),hdc);
  puVar1 = (undefined1 *)((int)this + 0x65b);
  iVar2 = 10;
  do {
    puVar1[-0x3d8] = 0x40;
    *puVar1 = 0x40;
    puVar1 = puVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  iVar2 = 0x14;
  puVar1 = (undefined1 *)((int)this + 0x2a9);
  uVar3 = 0;
  do {
    FUN_00474e70(this,(uint *)local_10,(uint *)local_c,(uint *)local_8,
                 CONCAT22((short)((uint)uVar3 >> 0x10),
                          *(undefined2 *)(*(int *)(param_1 + 0x10) + iVar2)));
    iVar2 = iVar2 + 2;
    puVar1[-1] = local_10[0];
    *puVar1 = local_c[0];
    uVar3 = CONCAT31((int3)((uint)extraout_ECX >> 8),local_8[0]);
    puVar1[1] = local_8[0];
    puVar1[2] = 0x40;
    puVar1 = puVar1 + 4;
  } while (iVar2 < 0x1ec);
  pcVar4 = s_DDOBJECT_>CreatePalette_DDPCAPS__0055c698;
  iVar2 = (/*IC:00495bdb*/**(code **)(**(int **)((int)this + 0x680) + 0x14))
                    (*(int **)((int)this + 0x680),4,local_4,(int)this + 0x698,0);
  iVar2 = FUN_004756f0(iVar2,pcVar4);
  return iVar2 != 0;
}


