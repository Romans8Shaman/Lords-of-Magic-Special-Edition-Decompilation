/* Rebuilt from lomse.exe FUN_004783d0 @ 0x004783d0 (53 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match.
 * v1.4: if SetCooperativeLevel(DSSCL_NORMAL) fails on modern Windows,
 * retry DSSCL_PRIORITY so DirectSound/speech can still initialize.
 * v1.6: if the stored hwnd is NULL or both coop levels fail, retry with
 * GetForegroundWindow. Log the result to lomse_sa_audio.log. */
#include "lom.h"

#define DAT_00584d54 (*(undefined4 *)0x00584d54)
#define Ordinal_1 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4))0x00533858) /* thunk -> DSOUND.DLL!Ordinal_1 */
#define GetForegroundWindow (*(__typeof__(HWND (__stdcall *)(void)) *)0x0054d320) /* USER32.DLL!GetForegroundWindow via IAT */
void v16_audio_log(char *msg);
void v16_audio_log_hr(char *msg, int hr);

#define LOM_SELF_004783d0 1
undefined4 __fastcall rb_004783d0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 hwnd;
  
  iVar2 = Ordinal_1(0,(undefined4 *)(param_1 + 0x13b4),0);
  v16_audio_log_hr("DirectSoundCreate", iVar2);
  if (-1 < iVar2) {
    piVar1 = *(int **)(param_1 + 0x13b4);
    hwnd = DAT_00584d54;
    iVar2 = ((undefined4 (__stdcall *)(__typeof__(piVar1), __typeof__(hwnd), __typeof__(1)))(**(code **)(*piVar1 + 0x18)))(piVar1,hwnd,1);
    if ((iVar2 < 0) || (hwnd == 0)) {
      /* v1.4: DSSCL_NORMAL failed — try DSSCL_PRIORITY (2). */
      iVar2 = ((undefined4 (__stdcall *)(__typeof__(piVar1), __typeof__(hwnd), __typeof__(2)))(**(code **)(*piVar1 + 0x18)))(piVar1,hwnd,2);
    }
    if (iVar2 < 0) {
      /* v1.6: stored hwnd may be wrong under a Win11 exclusive/DWM window. */
      hwnd = GetForegroundWindow();
      v16_audio_log_hr("DS GetForegroundWindow hwnd", (int)hwnd);
      iVar2 = ((undefined4 (__stdcall *)(__typeof__(piVar1), __typeof__(hwnd), __typeof__(1)))(**(code **)(*piVar1 + 0x18)))(piVar1,hwnd,1);
      if (iVar2 < 0) {
        iVar2 = ((undefined4 (__stdcall *)(__typeof__(piVar1), __typeof__(hwnd), __typeof__(2)))(**(code **)(*piVar1 + 0x18)))(piVar1,hwnd,2);
      }
    }
    v16_audio_log_hr("SetCooperativeLevel", iVar2);
    if (-1 < iVar2) {
      return 1;
    }
  }
  return 0;
}
