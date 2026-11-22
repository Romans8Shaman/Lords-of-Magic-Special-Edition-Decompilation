/* Rebuilt from lomse.exe FUN_00478c00 @ 0x00478c00 (698 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match.
 * v1.7: IDirectSoundBuffer::Play is 3 args (dwReserved1, dwPriority, dwFlags).
 * The Ghidra/gen rebuild called Play(buf, 0, 0) and returned uStack_14, so
 * dwFlags was leftover stack. Wine often left 0 (SFX played); Win11 DirectSound
 * rejects a garbage flag and all static samples (clicks + announcer) go silent.
 * Music uses 004b36d0 Play(buf, 0, 0, 1) and was unaffected. Pass uStack_14
 * (1 if this+0x13ac==1, else 0) as dwFlags, matching vanilla 00478e2e. */
#include "lom.h"

#define FUN_004784f0 ((int (__fastcall *)(int *))0x004784f0)
#define FUN_00478570 ((undefined4 (__thiscall *)(void *, undefined4, undefined4 *))0x00478570)
#define FUN_00478a70 ((int (__thiscall *)(void *, undefined4))0x00478a70)
#define FUN_00478ec0 ((undefined4 (__cdecl *)(undefined4, char *))0x00478ec0)
#define FUN_00479050 ((undefined4 (__stdcall *)(undefined4, int *))0x00479050)
#define s_DUPLICATE_SOUND_BUFFER_ERROR_1_0055aefc (*(char (*)[])0x0055aefc)
#define s_DUPLICATE_SOUND_BUFFER_ERROR_2_0055af3c (*(char (*)[])0x0055af3c)
#define s_DUPLICATE_SOUND_BUFFER_ERROR_3_0055af1c (*(char (*)[])0x0055af1c)

void v16_audio_log(char *msg);
void v16_audio_log_hr(char *msg, int hr);
void v16_audio_log_i(char *msg, int v);

#define LOM_SELF_00478c00 1
undefined4 __thiscall rb_00478c00(void *this,int in_stack_4)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_14;
  typedef byte _t_local_4[4];
#define uStack_14 (*(_t_uStack_14 *)(_fr + 0x4))
#define local_4 (*(_t_local_4 *)(_fr + 0x14))
  
  {
    char *v17nm;
    v17nm = (char *)0x0;
    if (((-1 < in_stack_4) && (in_stack_4 <= *(int *)((int)this + 0xfb8) + -1)) &&
       (*(int *)((int)this + 0xfbc) != 0)) {
      v17nm = *(char **)(*(int *)((int)this + 0xfbc) + in_stack_4 * 4);
    }
    v16_audio_log("00478c00 play request");
    v16_audio_log_i("  id", in_stack_4);
    if ((v17nm != (char *)0x0) && (*v17nm != '\0')) {
      v16_audio_log(v17nm);
    }
    v16_audio_log_i("  ds", *(int *)((int)this + 0x13b4));
    v16_audio_log_i("  count", *(int *)((int)this + 0xfb8));
    v16_audio_log_i("  vol 0x13a0", *(int *)((int)this + 0x13a0));
    v16_audio_log_i("  sfxvol 0x136c", *(int *)((int)this + 0x136c));
    v16_audio_log_i("  0x13ac", *(int *)((int)this + 0x13ac));
  }
  if ((((*(int *)((int)this + 0x13b4) != 0) && (-1 < in_stack_4)) &&
      (in_stack_4 <= *(int *)((int)this + 0xfb8) + -1)) && (-0x9c4 < *(int *)((int)this + 0x13a0)))
  {
    iVar7 = 0;
    piVar6 = (int *)((int)this + 0xf0);
    piVar8 = this;
    do {
      piVar2 = (int *)*piVar8;
      if (piVar2 != (int *)0x0) {
        iVar3 = ((undefined4 (__stdcall *)(__typeof__(piVar2), __typeof__(local_4)))(**(code **)(*piVar2 + 0x24)))(piVar2,local_4);
        if (iVar3 == -0x7787ff6a) {
          ((undefined4 (__stdcall *)(__typeof__((int *)*piVar8)))(**(code **)(*(int *)*piVar8 + 0x50)))((int *)*piVar8);
        }
        if (((*piVar6 == *(int *)((int)this + 0x1398)) && (*(int *)((int)this + 0x1398) != -1)) &&
           ((local_4[0] & 5) != 0)) {
          return 0xffffffff;
        }
      }
      iVar7 = iVar7 + 1;
      piVar8 = piVar8 + 1;
      piVar6 = piVar6 + 7;
    } while (iVar7 < 5);
    iVar7 = FUN_004784f0(this);
    if ((char)iVar7 != -1) {
      iVar7 = (int)(char)iVar7;
      piVar8 = (int *)((int)this + iVar7 * 4);
      puVar4 = (undefined4 *)((int)this + iVar7 * 0x1c + 0xf0);
      FUN_00479050(puVar4,piVar8);
      uStack_14 = (uint)(*(int *)((int)this + 0x13ac) == 1);
      iVar3 = 0;
      piVar6 = (int *)((int)this + 0x180);
      do {
        if (*piVar6 == in_stack_4) {
          piVar6 = *(int **)((int)this + 0x13b4);
          puVar1 = (undefined4 *)((int)this + iVar3 * 4 + 0x14);
          pcVar5 = (char *)((undefined4 (__thiscall *)(__typeof__(piVar6), __typeof__(piVar6), __typeof__(*puVar1), __typeof__(piVar8)))(**(code **)(*piVar6 + 0x14)))(piVar6,piVar6,*puVar1,piVar8);
          if (pcVar5 == (char *)0x88780096) {
            ((undefined4 (__stdcall *)(__typeof__((int *)*puVar1)))(**(code **)(*(int *)*puVar1 + 0x50)))((int *)*puVar1);
            iVar3 = FUN_00478570(this,in_stack_4,puVar1);
            if (iVar3 == 0) {
              v16_audio_log("00478570 create/load failed");
              return 0xffffffff;
            }
          }
          else if (pcVar5 != (char *)0x0) {
            FUN_00478ec0(s_DUPLICATE_SOUND_BUFFER_ERROR_1_0055aefc,pcVar5);
            return 0xffffffff;
          }
          goto LAB_00478df9;
        }
        iVar3 = iVar3 + 1;
        piVar6 = piVar6 + 7;
      } while (iVar3 < 0x32);
      iVar3 = 0;
      piVar6 = (int *)((int)this + 0x6f8);
      do {
        if (*piVar6 == in_stack_4) {
          piVar6 = *(int **)((int)this + 0x13b4);
          puVar1 = (undefined4 *)((int)this + iVar3 * 4 + 0xdc);
          pcVar5 = (char *)((undefined4 (__thiscall *)(__typeof__(piVar6), __typeof__(piVar6), __typeof__(*puVar1), __typeof__(piVar8)))(**(code **)(*piVar6 + 0x14)))(piVar6,piVar6,*puVar1,piVar8);
          if (pcVar5 == (char *)0x88780096) {
            ((undefined4 (__stdcall *)(__typeof__((int *)*puVar1)))(**(code **)(*(int *)*puVar1 + 0x50)))((int *)*puVar1);
            iVar3 = FUN_00478570(this,in_stack_4,puVar1);
            if (iVar3 == 0) {
              v16_audio_log("00478570 create/load failed");
              return 0xffffffff;
            }
          }
          else if (pcVar5 != (char *)0x0) {
            FUN_00478ec0(s_DUPLICATE_SOUND_BUFFER_ERROR_2_0055af3c,pcVar5);
            return 0xffffffff;
          }
          goto LAB_00478df9;
        }
        iVar3 = iVar3 + 1;
        piVar6 = piVar6 + 7;
      } while (iVar3 < 5);
      iVar3 = FUN_00478a70(this,in_stack_4);
      if (-1 < iVar3) {
        piVar6 = *(int **)((int)this + 0x13b4);
        puVar1 = (undefined4 *)((int)this + iVar3 * 4 + 0xdc);
        pcVar5 = (char *)((undefined4 (__thiscall *)(__typeof__(piVar6), __typeof__(piVar6), __typeof__(*puVar1), __typeof__(piVar8)))(**(code **)(*piVar6 + 0x14)))(piVar6,piVar6,*puVar1,piVar8);
        if (pcVar5 == (char *)0x88780096) {
          ((undefined4 (__stdcall *)(__typeof__((int *)*puVar1)))(**(code **)(*(int *)*puVar1 + 0x50)))((int *)*puVar1);
          iVar3 = FUN_00478570(this,in_stack_4,puVar1);
          if (iVar3 == 0) {
            v16_audio_log("00478570 create/load failed");
            return 0xffffffff;
          }
        }
        else if (pcVar5 != (char *)0x0) {
          FUN_00478ec0(s_DUPLICATE_SOUND_BUFFER_ERROR_3_0055af1c,pcVar5);
          return 0xffffffff;
        }
LAB_00478df9:
        *puVar4 = *(undefined4 *)((int)this + 0x1398);
        *(int *)((int)this + iVar7 * 0x1c + 0xf4) = in_stack_4;
        ((undefined4 (__stdcall *)(__typeof__((int *)*piVar8), __typeof__(0)))(**(code **)(*(int *)*piVar8 + 0x40)))((int *)*piVar8,0);
        ((undefined4 (__stdcall *)(__typeof__((int *)*piVar8), __typeof__(*(undefined4 *)((int)this + 0x13a0))))(**(code **)(*(int *)*piVar8 + 0x3c)))((int *)*piVar8,*(undefined4 *)((int)this + 0x13a0));
        /* v1.7: Play(dwReserved1=0, dwPriority=0, dwFlags=uStack_14). */
        iVar3 = ((undefined4 (__stdcall *)(__typeof__((int *)*piVar8), __typeof__(0), __typeof__(0), __typeof__(uStack_14)))(**(code **)(*(int *)*piVar8 + 0x30)))((int *)*piVar8,0,0,uStack_14);
        v16_audio_log_hr("Play", iVar3);
        v16_audio_log_i("  dwFlags", (int)uStack_14);
        v16_audio_log_i("  SetVolume", *(int *)((int)this + 0x13a0));
        return uStack_14;
      }
    }
  }
  v16_audio_log("00478c00 gate fail or no buffer slot");
  return 0xffffffff;
#undef uStack_14
#undef local_4
}
