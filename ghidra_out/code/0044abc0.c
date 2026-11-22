
bool __thiscall FUN_0044abc0(void *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  char *pcVar3;
  
  if (*(int *)((int)this + 0x4a0) != 0) {
    OutputDebugStringA(s_SelectProvider_called_with_lpDir_00556de0);
    return false;
  }
  iVar2 = *(int *)((int)this + param_1 * 4 + 0x394);
  if (iVar2 == 0) {
    OutputDebugStringA(s_non_dplay_modem_not_currently_im_00556d40);
  }
  else {
    pcVar3 = s_DirectPlayCreate_provider_guid_p_00556d98;
    iVar2 = Ordinal_1(iVar2,(undefined4 *)((int)this + 0x418),0);
    iVar2 = FUN_004756f0(iVar2,pcVar3);
    FUN_004b69a0(s__s__DirectPlayCreate_00556d80,iVar2,0);
    if (iVar2 == 0) {
      puVar1 = *(undefined4 **)((int)this + 0x418);
      iVar2 = (/*IC:0044ac36*/**(code **)*puVar1)(puVar1,&DAT_0054e640,(int)this + 0x4a0);
      FUN_004b69a0(s__s__QueryInterface_00556d6c,0,0);
      return iVar2 == 0;
    }
  }
  return false;
}


