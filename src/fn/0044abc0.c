/* Rebuilt from lomse.exe FUN_0044abc0 @ 0x0044abc0 (170 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0054e640 (*(undefined *)0x0054e640)
#define FUN_004756f0 ((undefined4 (__cdecl *)(int, ...))0x004756f0)
#define FUN_004b69a0 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4))0x004b69a0)
#define Ordinal_1 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4))0x00533852) /* thunk -> DPLAYX.DLL!Ordinal_1 (DirectPlayCreate); was wrongly DSOUND 00533858 */
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define s_DirectPlayCreate_provider_guid_p_00556d98 (*(char (*)[])0x00556d98)
#define s_SelectProvider_called_with_lpDir_00556de0 (*(char (*)[])0x00556de0)
#define s__s__DirectPlayCreate_00556d80 (*(char (*)[])0x00556d80)
#define s__s__QueryInterface_00556d6c (*(char (*)[])0x00556d6c)
#define s_non_dplay_modem_not_currently_im_00556d40 (*(char (*)[])0x00556d40)

#define LOM_SELF_0044abc0 1
bool __thiscall rb_0044abc0(void *this,int param_1)

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
      iVar2 = ((undefined4 (__stdcall *)(__typeof__(puVar1), __typeof__(&DAT_0054e640), __typeof__((int)this + 0x4a0)))(**(code **)*puVar1))(puVar1,&DAT_0054e640,(int)this + 0x4a0);
      FUN_004b69a0(s__s__QueryInterface_00556d6c,0,0);
      return iVar2 == 0;
    }
  }
  return false;
}
