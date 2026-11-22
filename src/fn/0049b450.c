/* Rebuilt from lomse.exe FUN_0049b450 @ 0x0049b450 (469 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583718 (*(int *)0x00583718)
#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005d1f6c (*(void * *)0x005d1f6c)
#define FUN_0049ab20 ((undefined4 (__fastcall *)(int *))0x0049ab20)
#define FUN_0049ae00 ((undefined4 (__thiscall *)(void *, undefined4, int))0x0049ae00)
#define FUN_0049b180 ((undefined4 (__thiscall *)(void *, int, int, int, int))0x0049b180)
#define FUN_0049b220 ((undefined4 (__fastcall *)(int *))0x0049b220)
#define FUN_004f55d0 ((int (__thiscall *)(void *, int, int, undefined4 *, undefined4))0x004f55d0)
#define FUN_004f5800 ((undefined4 (__fastcall *)(int))0x004f5800)
#define FUN_004fe720 ((int * (__thiscall *)(void *, LPCSTR, uint, int, int, int))0x004fe720)
#define FUN_004fe9c0 ((undefined4 (__fastcall *)(int *))0x004fe9c0)
#define FUN_00547b90 ((uint (__cdecl *)(byte *, byte *))0x00547b90)
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)
#define s_no_sequence_set_data_0055c7a8 (*(char (*)[])0x0055c7a8)

#define LOM_SELF_0049b450 1
undefined4 __thiscall rb_0049b450(void *this,byte *param_1,int *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_20[2];
  typedef int _t_local_18;
#define local_20 (*(_t_local_20 *)(_fr + 0x0))
#define local_18 (*(_t_local_18 *)(_fr + 0x8))

  if (param_1 != (byte *)0x0) {
    uVar2 = FUN_00547b90(param_1,(byte *)((int)this + 0xc));
    if (uVar2 == 0) {
      return 1;
    }
    FUN_0049ab20(this);
    if (DAT_005d1f6c != (void *)0x0) {
      if (*(int *)this != 0) {
        DAT_00583718 = DAT_00583718 - *(int *)(*(int *)this + 0x18);
        FUN_004f5800(*(int *)this);
      }
      FUN_004fe720(local_20,(LPCSTR)param_1,4,0,0,4);
      if (local_20[0] == 0) {
        *(undefined4 *)this = 0;
      }
      else {
        iVar3 = FUN_004f55d0(DAT_005d1f6c,local_20[0],local_18,this,0);
        if (iVar3 == 0) {
          DAT_00583718 = DAT_00583718 + *(int *)(*(int *)this + 0x18);
          iVar3 = *(int *)(*(int *)this + 8);
          if (iVar3 != 0) {
            FUN_0049b180(&DAT_00584ae8,3,(uint)*(ushort *)(iVar3 + 4),(uint)*(ushort *)(iVar3 + 6),8
                        );
          }
          uVar2 = 0xffffffff;
          pbVar5 = param_1;
          do {
            pbVar6 = pbVar5;
            if (uVar2 == 0) break;
            uVar2 = uVar2 - 1;
            pbVar6 = pbVar5 + 1;
            bVar1 = *pbVar5;
            pbVar5 = pbVar6;
          } while (bVar1 != 0);
          uVar2 = ~uVar2;
          pbVar5 = pbVar6 + -uVar2;
          pbVar6 = (byte *)((int)this + 0xc);
          for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined4 *)pbVar6 = *(undefined4 *)pbVar5;
            pbVar5 = pbVar5 + 4;
            pbVar6 = pbVar6 + 4;
          }
          for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
            *pbVar6 = *pbVar5;
            pbVar5 = pbVar5 + 1;
            pbVar6 = pbVar6 + 1;
          }
          if (param_2 != (int *)0x0) {
            *(int *)((int)this + 0x110) = *param_2;
            *(int *)((int)this + 0x114) = param_2[1];
            *(int *)((int)this + 0x118) = param_2[2];
          }
          if (*(int *)((int)this + 0x114) != 0) {
            FUN_0049ae00(this,param_1,(int)this + 0x110);
          }
          if (((*(int *)this != 0) && (iVar3 = *(int *)(*(int *)this + 8), iVar3 != 0)) &&
             (*(short *)(iVar3 + 0x1a) != 0)) {
            FUN_0049b220(this);
            FUN_004fe9c0(local_20);
            return 1;
          }
          OutputDebugStringA(s_no_sequence_set_data_0055c7a8);
        }
        else {
          *(undefined4 *)this = 0;
          Ordinal_403(local_20[0],s_C__lomse_source_storm_h_00555130,0x3f6,0);
        }
      }
      FUN_004fe9c0(local_20);
    }
  }
  return 0;
#undef local_20
#undef local_18
}
