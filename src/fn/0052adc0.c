/* Rebuilt from lomse.exe op_getunittypeeffectivedata_level @ 0x0052adc0 (705 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0040adb0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0040adb0)
#define FUN_004116b0 ((undefined4 * (__thiscall *)(void *, undefined4))0x004116b0)
#define FUN_004163a0 ((int (__thiscall *)(void *, int *))0x004163a0)
#define FUN_00483be0 ((undefined4 (__thiscall *)(void *, int *))0x00483be0)
#define FUN_004a7d50 ((int (__thiscall *)(void *, int *, int))0x004a7d50)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_005228b0 ((int (__thiscall *)(void *, undefined4, undefined4))0x005228b0)
#define FUN_00526e40 ((undefined4 * (__fastcall *)(undefined4 *))0x00526e40)
#define FUN_00529200 ((undefined4 (__thiscall *)(void *, int, uint))0x00529200)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define _DAT_00584ae0 (*(undefined4 *)0x00584ae0)
#define s_AddSprite_failed__army__00555ec8 (*(char (*)[])0x00555ec8)
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)
#define s_Insufficient_memory_to_add_army_00555ee4 (*(char (*)[])0x00555ee4)
#define s_getunittypeeffectivedata_can_cre_005742f4 (*(char (*)[])0x005742f4)
#define thunk_FUN_00526ea0 ((undefined4 (__fastcall *)(int))0x00526e90)

#define LOM_SELF_0052adc0 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl rb_0052adc0(void *vm)

{
  void *pvVar1;
  int iVar2;
  int *this;
  int iVar3;
  int iVar4;
  uchar _fr[0x80] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_74;
  typedef uint _t_uStack_70;
  typedef uint _t_uStack_6c;
  typedef undefined4 _t_fStack_68;
  typedef void * _t_pvStack_64;
  typedef uint _t_auStack_60[2];
  typedef int _t_aiStack_58[4];
  typedef int _t_iStack_48;
  typedef undefined4 _t_uStack_44;
  typedef undefined4 _t_uStack_40;
  typedef undefined4 _t_uStack_3c;
#define uStack_74 (*(_t_uStack_74 *)(_fr + 0x4))
#define uStack_70 (*(_t_uStack_70 *)(_fr + 0x8))
#define uStack_6c (*(_t_uStack_6c *)(_fr + 0xc))
#define fStack_68 (*(_t_fStack_68 *)(_fr + 0x10))
#define pvStack_64 (*(_t_pvStack_64 *)(_fr + 0x14))
#define auStack_60 (*(_t_auStack_60 *)(_fr + 0x18))
#define aiStack_58 (*(_t_aiStack_58 *)(_fr + 0x20))
#define iStack_48 (*(_t_iStack_48 *)(_fr + 0x30))
#define uStack_44 (*(_t_uStack_44 *)(_fr + 0x34))
#define uStack_40 (*(_t_uStack_40 *)(_fr + 0x38))
#define uStack_3c (*(_t_uStack_3c *)(_fr + 0x3c))

  pvVar1 = vm;
  FUN_0040adb0(vm,auStack_60);
  iVar2 = FUN_004026a0(auStack_60,&uStack_70,(uint *)&pvStack_64,&fStack_68);
  if (iVar2 == 0) {
LAB_0052ae99:
    *(undefined4 *)((int)pvVar1 + 0x90) = 0xe;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
    return;
  }
  FUN_0040adb0(pvVar1,auStack_60);
  iVar2 = FUN_004026a0(auStack_60,&uStack_74,(uint *)&fStack_68,(undefined4 *)&pvStack_64);
  if (iVar2 == 0) goto LAB_0052ae99;
  FUN_0040adb0(pvVar1,auStack_60);
  iVar2 = FUN_004026a0(auStack_60,(uint *)&vm,(uint *)&fStack_68,(undefined4 *)&pvStack_64);
  if (iVar2 == 0) goto LAB_0052ae99;
  FUN_0040adb0(pvVar1,auStack_60);
  iVar2 = FUN_004026a0(auStack_60,&uStack_6c,(uint *)&fStack_68,(undefined4 *)&pvStack_64);
  if (iVar2 == 0) goto LAB_0052ae99;
  FUN_00526e40(aiStack_58);
  iVar2 = FUN_00529200(aiStack_58,uStack_74,(uint)vm);
  if (iVar2 == 0) {
    FUN_004d41c0(pvVar1,s_getunittypeeffectivedata_can_cre_005742f4);
  }
  else {
    iStack_48 = uStack_70 << 8;
    pvStack_64 = (void *)Ordinal_401(0x5dc,s_C__lomse_source_storm_h_00555130,0x3ef,0);
    if (pvStack_64 == (void *)0x0) {
      this = (int *)0x0;
    }
    else {
      this = FUN_004116b0(pvStack_64,uStack_6c);
    }
    if (this != (int *)0x0) {
      _DAT_00584ae0 = 1;
      iVar2 = FUN_004a7d50(&DAT_005ae958,this,0);
      if (iVar2 == -1) {
        ((undefined4 (__thiscall *)(__typeof__(this), __typeof__(1)))(**(code **)*this))(this,1);
        OutputDebugStringA(s_AddSprite_failed__army__00555ec8);
        if (*(int *)((int)pvVar1 + 0x54) == 0) {
          FUN_00404ab0(pvVar1,3);
        }
        else {
          iVar3 = *(int *)((int)pvVar1 + 0x54) + -1;
          *(int *)((int)pvVar1 + 0x54) = iVar3;
          iVar2 = *(int *)((int)pvVar1 + 0x50);
          *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
          *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = 1;
        }
      }
      else {
        iVar2 = FUN_004163a0(this,aiStack_58);
        uStack_40 = 0;
        uStack_3c = 0;
        uStack_44 = 0;
        iVar2 = FUN_005228b0(this + iVar2 * 0x13 + 0x31,this[10],iVar2);
        pvVar1 = DAT_005a7b78;
        if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
          *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
          FUN_004d4550(pvVar1);
          *(undefined4 *)((int)pvVar1 + 0x90) = 0;
          *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
        }
        else {
          iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
          *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
          iVar3 = *(int *)((int)pvVar1 + 0x50);
          *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
          *(int *)(iVar3 + 4 + iVar4 * 8) = iVar2;
        }
        FUN_00483be0(&DAT_005aa12c,this);
      }
      _DAT_00584ae0 = 0;
      goto LAB_0052b05e;
    }
    OutputDebugStringA(s_Insufficient_memory_to_add_army_00555ee4);
  }
  if (*(int *)((int)pvVar1 + 0x54) == 0) {
    FUN_00404ab0(pvVar1,3);
  }
  else {
    iVar3 = *(int *)((int)pvVar1 + 0x54) + -1;
    *(int *)((int)pvVar1 + 0x54) = iVar3;
    iVar2 = *(int *)((int)pvVar1 + 0x50);
    *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
    *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = 1;
  }
LAB_0052b05e:
  thunk_FUN_00526ea0((int)aiStack_58);
  return;
#undef uStack_74
#undef uStack_70
#undef uStack_6c
#undef fStack_68
#undef pvStack_64
#undef auStack_60
#undef aiStack_58
#undef iStack_48
#undef uStack_44
#undef uStack_40
#undef uStack_3c
}
