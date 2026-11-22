/* Rebuilt from lomse.exe FUN_004fe720 @ 0x004fe720 (668 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match.
 * v1.7: log each sample open (name, use-MPQ flag, size, status). */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_00584bfc (*(undefined *)0x00584bfc)
#define DAT_00584c08 (*(undefined4 *)0x00584c08)
#define DAT_00584c14 (*(int *)0x00584c14)
#define FUN_004fe6e0 ((undefined4 (__thiscall *)(void *, LPCSTR))0x004fe6e0)
#define FUN_005394d0 ((undefined4 (__cdecl *)(int *))0x005394d0)
#define FUN_005397f0 ((uint (__cdecl *)(char *, uint, uint, int *))0x005397f0)
#define FUN_00548e10 ((DWORD (__cdecl *)(uint))0x00548e10)
#define FUN_00548ec0 ((undefined4 (__cdecl *)(int))0x00548ec0)
#define Ordinal_253 ((undefined4 (__stdcall *)(undefined4))0x005338d6) /* thunk -> STORM.DLL!Ordinal_253 */
#define Ordinal_265 ((undefined4 (__stdcall *)(undefined4, undefined4))0x005338e2) /* thunk -> STORM.DLL!Ordinal_265 */
#define Ordinal_268 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x005338e8) /* thunk -> STORM.DLL!Ordinal_268 */
#define Ordinal_269 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4, undefined4))0x005338dc) /* thunk -> STORM.DLL!Ordinal_269 */
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

void v16_audio_log(char *msg);
void v16_audio_log_hr(char *msg, int hr);
void v16_audio_log_i(char *msg, int v);

static void v17_log_fe720(LPCSTR name, void *obj, char *tag)
{
  v16_audio_log(tag);
  if (name != (LPCSTR)0x0) {
    v16_audio_log((char *)name);
  }
  v16_audio_log_i("  use_mpq DAT_00584c14", DAT_00584c14);
  v16_audio_log_hr("  ptr", *(int *)obj);
  v16_audio_log_i("  status", *(int *)((int)obj + 4));
  v16_audio_log_i("  size", *(int *)((int)obj + 8));
}

#define LOM_SELF_004fe720 1
int * __thiscall
rb_004fe720(void *this,LPCSTR param_1,uint param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  DWORD DVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  LPCSTR pCVar10;
  char *pcVar11;
  uchar _fr[0x120] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_local_114;
  typedef uint _t_local_110;
  typedef undefined4 _t_uStack_10c;
  typedef undefined1 _t_auStack_108[4];
  typedef char _t_local_104[260];
#define local_114 (*(_t_local_114 *)(_fr + 0x4))
#define local_110 (*(_t_local_110 *)(_fr + 0x8))
#define uStack_10c (*(_t_uStack_10c *)(_fr + 0xc))
#define auStack_108 (*(_t_auStack_108 *)(_fr + 0x10))
#define local_104 (*(_t_local_104 *)(_fr + 0x14))
  
  *(uint *)((int)this + 0xc) = param_2;
  local_110 = (param_2 & 0xff) >> 1 & 1;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  v16_audio_log("004fe720 open");
  if (param_1 != (LPCSTR)0x0) {
    v16_audio_log((char *)param_1);
  }
  v16_audio_log_i("  use_mpq DAT_00584c14", DAT_00584c14);
  v16_audio_log_i("  param_5", param_5);
  if (DAT_00584c14 == 0) {
LAB_004fe8ae:
    if ((*(int *)this == 0) && ((DAT_00584c14 == 0 || ((*(byte *)((int)this + 0xc) & 1) != 0)))) {
      piVar5 = (int *)FUN_004fe6e0(&DAT_00584ae8,param_1);
      if (piVar5 != (int *)0x0) {
        uVar7 = FUN_00548ec0((int)piVar5);
        DVar6 = FUN_00548e10(uVar7);
        *(DWORD *)((int)this + 8) = DVar6;
        uStack_10c = 0;
        if ((param_3 == 0) || (param_4 < (int)(local_110 + DVar6))) {
          uVar4 = Ordinal_401(local_110 + DVar6,s_C__lomse_source_storm_h_00555130,0x3fa,0);
          *(undefined4 *)this = uVar4;
        }
        else {
          *(int *)this = param_3;
          *(uint *)((int)this + 0xc) = *(uint *)((int)this + 0xc) | 4;
        }
        if (*(char **)this == (char *)0x0) {
          *(undefined4 *)((int)this + 4) = 2;
        }
        else {
          FUN_005397f0(*(char **)this,*(uint *)((int)this + 8),1,piVar5);
          *(undefined4 *)((int)this + 4) = 3;
          if ((*(byte *)((int)this + 0xc) & 2) != 0) {
            *(undefined1 *)(*(int *)this + *(int *)((int)this + 8)) = 0;
            FUN_005394d0(piVar5);
            v17_log_fe720(param_1, this, "004fe720 result");
      return this;
          }
        }
        FUN_005394d0(piVar5);
        v17_log_fe720(param_1, this, "004fe720 result");
      return this;
      }
      *(undefined4 *)((int)this + 4) = 1;
    }
    v17_log_fe720(param_1, this, "004fe720 result");
      return this;
  }
  uVar7 = 0xffffffff;
  pCVar10 = param_1;
  do {
    pcVar9 = pCVar10;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar9 = pCVar10 + 1;
    cVar1 = *pCVar10;
    pCVar10 = pcVar9;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  pcVar9 = pcVar9 + -uVar7;
  pcVar11 = local_104;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar11 = pcVar11 + 4;
  }
  pcVar2 = local_104;
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar11 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar11 = pcVar11 + 1;
  }
  /* hand fix: Ghidra cached the loop char in local_104[0]; orig keeps it in cl */
  cVar1 = local_104[0];
  while (cVar1 != '\0') {
    if (*pcVar2 == '/') {
      *pcVar2 = '\\';
    }
    pcVar9 = pcVar2 + 1;
    pcVar2 = pcVar2 + 1;
    cVar1 = *pcVar9;
  }
  iVar3 = Ordinal_268(*(undefined4 *)(&DAT_00584bfc + param_5 * 4),local_104,0,&local_114);
  if (iVar3 == 0) {
    iVar3 = 0;
    if (param_5 == 0) {
      iVar3 = Ordinal_268(DAT_00584c08,local_104,0,&local_114);
    }
    if (iVar3 == 0) {
      *(undefined4 *)((int)this + 4) = 1;
      goto LAB_004fe8ae;
    }
  }
  iVar3 = Ordinal_265(local_114,&uStack_10c);
  *(int *)((int)this + 8) = iVar3;
  if ((param_3 == 0) || (param_4 < (int)(local_110 + iVar3))) {
    uVar4 = Ordinal_401(local_110 + iVar3,s_C__lomse_source_storm_h_00555130,0x3fa,0);
    *(undefined4 *)this = uVar4;
  }
  else {
    *(int *)this = param_3;
    *(uint *)((int)this + 0xc) = *(uint *)((int)this + 0xc) | 4;
  }
  if (*(int *)this == 0) {
    *(undefined4 *)((int)this + 4) = 2;
  }
  else {
    Ordinal_269(local_114,*(int *)this,*(undefined4 *)((int)this + 8),auStack_108,0);
    *(undefined4 *)((int)this + 4) = 3;
    if ((*(byte *)((int)this + 0xc) & 2) != 0) {
      *(undefined1 *)(*(int *)this + *(int *)((int)this + 8)) = 0;
      Ordinal_253(local_114);
      v17_log_fe720(param_1, this, "004fe720 result");
      return this;
    }
  }
  Ordinal_253(local_114);
  v17_log_fe720(param_1, this, "004fe720 result");
      return this;
#undef local_114
#undef local_110
#undef uStack_10c
#undef auStack_108
#undef local_104
}
