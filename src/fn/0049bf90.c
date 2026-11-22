/* Rebuilt from lomse.exe op_getimphotspot @ 0x0049bf90 (576 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b50 (*(undefined4 *)0x005a7b50)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_0040adb0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0040adb0)
#define FUN_0041d1d0 ((undefined4 (__thiscall *)(void *, undefined4, undefined4))0x0041d1d0)
#define FUN_00492850 ((int (__thiscall *)(void *, int))0x00492850)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define s_getimphotspot___no_frame_0055c860 (*(char (*)[])0x0055c860)
#define s_getimphotspot___no_such_hotspot_0055c840 (*(char (*)[])0x0055c840)
#define s_getimphotspot___no_such_imp_0055c87c (*(char (*)[])0x0055c87c)

#define LOM_SELF_0049bf90 1
void __cdecl rb_0049bf90(void *vm)

{
  void *this;
  int iVar1;
  int *piVar2;
  ushort *puVar3;
  short *psVar4;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_20;
  typedef uint _t_uStack_1c;
  typedef uint _t_uStack_18;
  typedef short _t_asStack_14[2];
  typedef undefined4 _t_fStack_10;
  typedef undefined4 _t_fStack_c;
  typedef uint _t_auStack_8[2];
#define uStack_20 (*(_t_uStack_20 *)(_fr + 0x0))
#define uStack_1c (*(_t_uStack_1c *)(_fr + 0x4))
#define uStack_18 (*(_t_uStack_18 *)(_fr + 0x8))
#define asStack_14 (*(_t_asStack_14 *)(_fr + 0xc))
#define fStack_10 (*(_t_fStack_10 *)(_fr + 0x10))
#define fStack_c (*(_t_fStack_c *)(_fr + 0x14))
#define auStack_8 (*(_t_auStack_8 *)(_fr + 0x18))
  
  this = vm;
  FUN_0040adb0(vm,auStack_8);
  iVar1 = FUN_004026a0(auStack_8,(uint *)asStack_14,(uint *)&fStack_c,&fStack_10);
  if (iVar1 != 0) {
    FUN_0040adb0(this,auStack_8);
    iVar1 = FUN_004026a0(auStack_8,&uStack_18,(uint *)&fStack_10,&fStack_c);
    if (iVar1 != 0) {
      FUN_0040adb0(this,auStack_8);
      iVar1 = FUN_004026a0(auStack_8,&uStack_1c,(uint *)&fStack_10,&fStack_c);
      if (iVar1 != 0) {
        FUN_0040adb0(this,auStack_8);
        iVar1 = FUN_004026a0(auStack_8,&uStack_20,(uint *)&fStack_10,&fStack_c);
        if (iVar1 != 0) {
          FUN_0040adb0(this,auStack_8);
          iVar1 = FUN_004026a0(auStack_8,(uint *)&vm,(uint *)&fStack_10,&fStack_c);
          if (iVar1 != 0) {
            piVar2 = (int *)FUN_00492850(&DAT_005a7b50,(int)vm);
            if (piVar2 == (int *)0x0) {
              FUN_004d41c0(this,s_getimphotspot___no_such_imp_0055c87c);
              FUN_0041d1d0(this,1,0);
              return;
            }
            puVar3 = (ushort *)
                     (*(int *)(*(int *)(*(int *)(*(int *)(*piVar2 + 8) + 0x1c) + 0xc +
                                       (uStack_20 & 0xffff) * 0x10) + 4 + (uStack_1c & 0xffff) * 8)
                     + (uStack_18 & 0xffff) * 0x10);
            if (puVar3 == (ushort *)0x0) {
              FUN_004d41c0(this,s_getimphotspot___no_frame_0055c860);
              FUN_0041d1d0(this,1,0);
              return;
            }
            iVar1 = 1;
            if (1 < *puVar3 >> 8) {
              psVar4 = *(short **)(puVar3 + 4);
              do {
                psVar4 = psVar4 + 3;
                if (asStack_14[0] == *psVar4) {
                  psVar4 = *(short **)(puVar3 + 4) + iVar1 * 3 + 1;
                  goto LAB_0049c164;
                }
                iVar1 = iVar1 + 1;
              } while (iVar1 < (int)(uint)(*puVar3 >> 8));
            }
            psVar4 = (short *)0x0;
LAB_0049c164:
            if (psVar4 == (short *)0x0) {
              FUN_004d41c0(this,s_getimphotspot___no_such_hotspot_0055c840);
              FUN_0041d1d0(this,1,0);
              return;
            }
            FUN_0041d1d0(this,1,(int)*psVar4);
            FUN_0041d1d0(this,1,(int)psVar4[1]);
            FUN_0041d1d0(this,1,1);
            return;
          }
        }
      }
    }
  }
  *(undefined4 *)((int)this + 0x90) = 0xe;
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
#undef uStack_20
#undef uStack_1c
#undef uStack_18
#undef asStack_14
#undef fStack_10
#undef fStack_c
#undef auStack_8
}
