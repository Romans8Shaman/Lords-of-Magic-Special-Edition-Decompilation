/* Rebuilt from lomse.exe FUN_00470e30 @ 0x00470e30 (306 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d1e84 (*(void * *)0x005d1e84)
#define FUN_004b7f90 ((undefined4 (__stdcall *)(void))0x004b7f90)
#define FUN_004b80f0 ((undefined4 (__thiscall *)(void *, undefined4))0x004b80f0)
#define Ordinal_109 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4))0x005338ac) /* thunk -> STORM.DLL!Ordinal_109 */
#define Ordinal_113 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4))0x005338a6) /* thunk -> STORM.DLL!Ordinal_113 */
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define s_player_gap_00557fbc (*(char (*)[])0x00557fbc)

#define LOM_SELF_00470e30 1
void __thiscall rb_00470e30(void *this)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint arg1;
  char *pcVar5;
  char *pcVar6;
  uchar _fr[0x30] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_28;
  typedef int _t_iStack_24;
  typedef uint _t_uStack_20;
  typedef char _t_acStack_1c[28];
#define uStack_28 (*(_t_uStack_28 *)(_fr + 0x0))
#define iStack_24 (*(_t_iStack_24 *)(_fr + 0x4))
#define uStack_20 (*(_t_uStack_20 *)(_fr + 0x8))
#define acStack_1c (*(_t_acStack_1c *)(_fr + 0xc))
  
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  uStack_20 = 0;
  uStack_28 = 0;
  iStack_24 = 0;
  Ordinal_109(&uStack_20,&uStack_28,&iStack_24);
  if (iStack_24 != 0) {
    if (0x14 < (int)((uStack_28 - uStack_20) + 1)) {
      return;
    }
    arg1 = uStack_20;
    if (uStack_20 <= uStack_28) {
      do {
        iVar2 = Ordinal_113(arg1,acStack_1c,0x19);
        if (iVar2 == 0) {
          OutputDebugStringA(s_player_gap_00557fbc);
        }
        else {
          if (DAT_005d1e84 != (void *)0x0) {
            FUN_004b80f0(DAT_005d1e84,arg1);
          }
          *(uint *)((int)this + *(int *)((int)this + 0x100) * 0x25 + 0xc) = arg1;
          *(int *)((int)this + *(int *)((int)this + 0x100) * 0x25 + 0x10) =
               *(int *)((int)this + 0x100) + 1;
          uVar3 = 0xffffffff;
          pcVar5 = acStack_1c;
          do {
            pcVar6 = pcVar5;
            if (uVar3 == 0) break;
            uVar3 = uVar3 - 1;
            pcVar6 = pcVar5 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar6;
          } while (cVar1 != '\0');
          uVar3 = ~uVar3;
          pcVar5 = pcVar6 + -uVar3;
          pcVar6 = (char *)((int)this + *(int *)((int)this + 0x100) * 0x25 + 0x14);
          for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
            pcVar5 = pcVar5 + 4;
            pcVar6 = pcVar6 + 4;
          }
          for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
            *pcVar6 = *pcVar5;
            pcVar5 = pcVar5 + 1;
            pcVar6 = pcVar6 + 1;
          }
          *(undefined4 *)((int)this + *(int *)((int)this + 0x100) * 0x25 + 0x2d) = 0;
          iVar2 = *(int *)((int)this + 0x100) + 1;
          *(int *)((int)this + 0x100) = iVar2;
          if (arg1 == *(uint *)((int)this + 0x2c4)) {
            *(int *)((int)this + 0x120) = iVar2;
          }
        }
        arg1 = arg1 + 1;
      } while (arg1 <= uStack_28);
    }
  }
  FUN_004b7f90();
  return;
#undef uStack_28
#undef iStack_24
#undef uStack_20
#undef acStack_1c
}
