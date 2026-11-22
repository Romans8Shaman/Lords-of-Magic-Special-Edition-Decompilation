/* Rebuilt from lomse.exe FUN_0044a160 @ 0x0044a160 (392 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define CreateEventA (*(__typeof__(HANDLE (__stdcall *)(LPSECURITY_ATTRIBUTES, BOOL, BOOL, LPCSTR)) *)0x0054d0d4) /* KERNEL32.DLL!CreateEventA via IAT */
#define FUN_0044a460 ((undefined4 (__fastcall *)(int, undefined4, undefined4))0x0044a460)
#define FUN_004756f0 ((undefined4 (__cdecl *)(int, ...))0x004756f0)
#define FUN_004b6520 ((undefined4 (__stdcall *)(undefined4))0x004b6520)
#define FUN_004b69a0 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4))0x004b69a0)
#define FUN_004b7dd0 ((undefined4 (__fastcall *)(int))0x004b7dd0)
#define FUN_004b8b80 ((undefined4 (__fastcall *)(int))0x004b8b80)
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define _strncpy ((char * (__cdecl *)(char *, char *, size_t))0x0053a220)
#define s_Error_Creating_DirectPlay_Player_005568f0 (*(char (*)[])0x005568f0)
#define s__s__Creating_player_00556914 (*(char (*)[])0x00556914)
#define s_lpDirectPlay3A__gt_Close___005568d8 (*(char (*)[])0x005568d8)
#define s_lpDirectPlay3A__gt_CreatePlayer__Th_00556928 (*(char (*)[])0x00556928)
#define s_lpDirectPlay3A__gt_Release___005568bc (*(char (*)[])0x005568bc)
unsigned lom_inreg_0044a160[2] __asm__("lom_inreg_0044a160");
undefined4 __thiscall lom_body_0044a160(void *this,char *param_1) __asm__("lom_body_0044a160");

#define LOM_SELF_0044a160 1
__attribute__((naked)) undefined4 __thiscall rb_0044a160(void *this,char *param_1)
{
  __asm__("movl %eax, lom_inreg_0044a160\n\tmovl %edx, lom_inreg_0044a160+4\n\tjmp lom_body_0044a160");
}

undefined4 __thiscall lom_body_0044a160(void *this,char *param_1)
{
  char *_Source;
  int iVar1;
  HANDLE pvVar2;
  undefined4 uVar3;
  undefined4 in_EDX = (undefined4)*(unsigned *)((char *)lom_inreg_0044a160 + 4);
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_uStack_10;
  typedef undefined4 _t_uStack_c;
  typedef char * _t_pcStack_8;
  typedef char * _t_pcStack_4;
#define uStack_10 (*(_t_uStack_10 *)(_fr + 0x0))
#define uStack_c (*(_t_uStack_c *)(_fr + 0x4))
#define pcStack_8 (*(_t_pcStack_8 *)(_fr + 0x8))
#define pcStack_4 (*(_t_pcStack_4 *)(_fr + 0xc))
  
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
  iVar1 = ((undefined4 (__thiscall *)(__typeof__((void *)(*(int **)((int)this + 0x4a0))), __typeof__(*(int **)((int)this + 0x4a0)), __typeof__((undefined4 *)((int)this + 0x2c4)), __typeof__(&uStack_10), __typeof__(pvVar2), __typeof__(0), __typeof__(0), __typeof__(0), __typeof__(s_lpDirectPlay3A__gt_CreatePlayer__Th_00556928)))(**(code **)(**(int **)((int)this + 0x4a0) + 0x18)))
                    ((void *)(*(int **)((int)this + 0x4a0)),*(int **)((int)this + 0x4a0),(undefined4 *)((int)this + 0x2c4),&uStack_10,
                     pvVar2,0,0,0,s_lpDirectPlay3A__gt_CreatePlayer__Th_00556928);
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
    ((undefined4 (__thiscall *)(__typeof__((void *)(this))))(**(code **)(*(int *)this + 0x18)))((void *)(this));
    FUN_004b8b80((int)this);
    FUN_004b6520(1);
    return 1;
  }
  iVar1 = ((undefined4 (__stdcall *)(__typeof__(*(int **)((int)this + 0x4a0)), __typeof__(s_lpDirectPlay3A__gt_Close___005568d8)))(**(code **)(**(int **)((int)this + 0x4a0) + 0x10)))
                    (*(int **)((int)this + 0x4a0),s_lpDirectPlay3A__gt_Close___005568d8);
  FUN_004756f0(iVar1);
  iVar1 = ((undefined4 (__stdcall *)(__typeof__(*(int **)((int)this + 0x4a0)), __typeof__(s_lpDirectPlay3A__gt_Release___005568bc)))(**(code **)(**(int **)((int)this + 0x4a0) + 8)))
                    (*(int **)((int)this + 0x4a0),s_lpDirectPlay3A__gt_Release___005568bc);
  FUN_004756f0(iVar1);
  *(undefined4 *)((int)this + 0x4a0) = 0;
  OutputDebugStringA(s_Error_Creating_DirectPlay_Player_005568f0);
  return 0;
#undef uStack_10
#undef uStack_c
#undef pcStack_8
#undef pcStack_4
}
