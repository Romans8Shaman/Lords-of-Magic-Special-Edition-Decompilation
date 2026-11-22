/* Rebuilt from lomse.exe op_getunitlevel @ 0x004e7cd0 (457 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_005228b0 ((int (__thiscall *)(void *, undefined4, undefined4))0x005228b0)
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define s_army_identity_trouble__00572aa4 (*(char (*)[])0x00572aa4)
#define s_bad_arguments_00572864 (*(char (*)[])0x00572864)
#define s_no_army_00555960 (*(char (*)[])0x00555960)
#define s_no_unit_num_00572ac0 (*(char (*)[])0x00572ac0)

#define LOM_SELF_004e7cd0 1
void __cdecl rb_004e7cd0(void *vm)

{
  int iVar1;
  void *this;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_14;
  typedef undefined4 _t_fStack_10;
  typedef undefined4 _t_fStack_c;
  typedef uint _t_uStack_8;
  typedef undefined4 _t_uStack_4;
#define uStack_14 (*(_t_uStack_14 *)(_fr + 0x4))
#define fStack_10 (*(_t_fStack_10 *)(_fr + 0x8))
#define fStack_c (*(_t_fStack_c *)(_fr + 0xc))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x10))
#define uStack_4 (*(_t_uStack_4 *)(_fr + 0x14))
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uStack_8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_8 = 0;
  }
  iVar2 = FUN_004026a0(&uStack_8,(uint *)&vm,(uint *)&fStack_c,&fStack_10);
  if (iVar2 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    FUN_004d41c0(this,s_no_unit_num_00572ac0);
    return;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar2 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar2;
    uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    uStack_8 = 0;
  }
  iVar2 = FUN_004026a0(&uStack_8,&uStack_14,(uint *)&fStack_10,&fStack_c);
  if (iVar2 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    FUN_004d41c0(this,s_no_army_00555960);
    return;
  }
  puVar3 = FUN_00485080(&DAT_005aa12c,uStack_14,0x3f);
  if (((puVar3 == (undefined4 *)0x0) || ((int)vm < 0)) || ((int)puVar3[0x13] <= (int)vm)) {
    FUN_004d41c0(this,s_bad_arguments_00572864);
    return;
  }
  if (puVar3[10] == -1) {
    OutputDebugStringA(s_army_identity_trouble__00572aa4);
  }
  iVar2 = FUN_005228b0(puVar3 + (int)vm * 0x13 + 0x31,uStack_14,vm);
  if (*(int *)((int)this + 0x54) == 0) {
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    return;
  }
  iVar4 = *(int *)((int)this + 0x54) + -1;
  *(int *)((int)this + 0x54) = iVar4;
  iVar1 = *(int *)((int)this + 0x50);
  *(undefined4 *)(iVar1 + iVar4 * 8) = 1;
  *(int *)(iVar1 + 4 + iVar4 * 8) = iVar2;
  return;
#undef uStack_14
#undef fStack_10
#undef fStack_c
#undef uStack_8
#undef uStack_4
}
