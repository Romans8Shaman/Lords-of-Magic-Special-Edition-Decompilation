/* Rebuilt from lomse.exe FUN_004feb10 @ 0x004feb10 (254 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match.
 * v1.6: if cwd and CDPath prefix both fail, try the exe folder / English. */
#include "lom.h"

#define DAT_00573464 (*(undefined1 *)0x00573464)
#define Ordinal_266 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x005338ee) /* thunk -> STORM.DLL!Ordinal_266 */
int v16_storm_open_exedir(char *name, undefined4 param_2);
void v16_audio_log(char *msg);
void v16_audio_log_hr(char *msg, int hr);

#define LOM_SELF_004feb10 1
bool __thiscall rb_004feb10(void *this,char *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  uchar _fr[0x110] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef char _t_acStack_104[260];
#define acStack_104 (*(_t_acStack_104 *)(_fr + 0x4))
  
  char *v16name;
  v16name = param_1;
  iVar2 = Ordinal_266(param_1,1,0,param_2);
  if (iVar2 != 0) {
    v16_audio_log("mpq opened (cwd):");
    v16_audio_log(v16name);
    return true;
  }
  if (*(char **)((int)this + 0x110) == (char *)0x0) {
    if (v16_storm_open_exedir(v16name, param_2) != 0) {
      v16_audio_log("mpq opened (exe dir, no CDPath):");
      v16_audio_log(v16name);
      return 1;
    }
    v16_audio_log("mpq open failed (no CDPath):");
    v16_audio_log(v16name);
    return 0;
  }
  uVar3 = 0xffffffff;
  pcVar5 = *(char **)((int)this + 0x110);
  do {
    pcVar7 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar7 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar7;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar5 = pcVar7 + -uVar3;
  pcVar7 = acStack_104;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar7 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  }
  uVar3 = 0xffffffff;
  pcVar5 = acStack_104;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  if (acStack_104[~uVar3 - 2] != '\\') {
    uVar3 = 0xffffffff;
    pcVar5 = &DAT_00573464;
    do {
      pcVar7 = pcVar5;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar7 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar7;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar2 = -1;
    pcVar5 = acStack_104;
    do {
      pcVar6 = pcVar5;
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      pcVar6 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar6;
    } while (cVar1 != '\0');
    pcVar5 = pcVar7 + -uVar3;
    pcVar7 = pcVar6 + -1;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar7 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar7 = pcVar7 + 1;
    }
  }
  uVar3 = 0xffffffff;
  do {
    pcVar5 = param_1;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar5 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar5;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  iVar2 = -1;
  pcVar7 = acStack_104;
  do {
    pcVar6 = pcVar7;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar6 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar6;
  } while (cVar1 != '\0');
  pcVar5 = pcVar5 + -uVar3;
  pcVar7 = pcVar6 + -1;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar7 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  }
  iVar2 = Ordinal_266(acStack_104,1,0,param_2);
  if (iVar2 != 0) {
    v16_audio_log("mpq opened (CDPath prefix):");
    v16_audio_log(acStack_104);
    return 1;
  }
  /* v1.6: CDPath may be the Steam dummy c:\ — try the exe folder. */
  if (v16_storm_open_exedir(v16name, param_2) != 0) {
    v16_audio_log("mpq opened (exe dir after CDPath miss):");
    v16_audio_log(v16name);
    return 1;
  }
  v16_audio_log("mpq open failed:");
  v16_audio_log(v16name);
  return 0;
#undef acStack_104
}
