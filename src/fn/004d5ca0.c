/* Rebuilt from lomse.exe FUN_004d5ca0 @ 0x004d5ca0 (634 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005572ec (*(undefined *)0x005572ec)
#define DAT_0055c020 (*(undefined *)0x0055c020)
#define DAT_005844e8 (*(undefined4 *)0x005844e8)
#define FUN_005394d0 ((undefined4 (__cdecl *)(int *))0x005394d0)
#define FUN_00539610 ((undefined4 (__cdecl *)(LPCSTR, char *))0x00539610)
#define FUN_005397f0 ((uint (__cdecl *)(char *, uint, uint, int *))0x005397f0)
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define s_Unknown_record_type_in_script_de_0055e7a0 (*(char (*)[])0x0055e7a0)

#define LOM_SELF_004d5ca0 1
undefined4 * __thiscall
rb_004d5ca0(void *this,int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  LPCSTR pCVar1;
  char cVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  bool bVar10;
  uchar _fr[0x120] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_local_114;
  typedef int _t_local_110;
  typedef undefined4 _t_local_10c;
  typedef undefined4 _t_local_108;
  typedef char _t_local_104[260];
#define local_114 (*(_t_local_114 *)(_fr + 0x4))
#define local_110 (*(_t_local_110 *)(_fr + 0x8))
#define local_10c (*(_t_local_10c *)(_fr + 0xc))
#define local_108 (*(_t_local_108 *)(_fr + 0x10))
#define local_104 (*(_t_local_104 *)(_fr + 0x14))
  
  if (*(int *)((int)this + 0x88) == 0) {
    *param_3 = 0;
    *param_4 = 0;
    return (undefined4 *)0x0;
  }
  bVar10 = *(int **)((int)this + 0x868) != (int *)0x0;
  if (bVar10) {
    FUN_005394d0(*(int **)((int)this + 0x868));
    *(undefined4 *)((int)this + 0x868) = 0;
  }
  pCVar1 = (LPCSTR)((int)this + 0x764);
  piVar3 = (int *)FUN_00539610(pCVar1,&DAT_005572ec);
  if (piVar3 != (int *)0x0) {
    (*(uchar *)((uchar *)&DAT_005844e8 + 0)) = 0;
    iVar7 = *(int *)(param_1 + 4);
    uVar4 = FUN_005397f0((char *)&local_114,1,1,piVar3);
    while (uVar4 == 1) {
      uVar4 = local_114 & 0xff;
      if (uVar4 == 0) {
        uVar4 = FUN_005397f0(local_104,0x104,1,piVar3);
        if (uVar4 != 1) break;
        *param_3 = 0;
        uVar4 = 0xffffffff;
        pcVar8 = local_104;
        do {
          pcVar9 = pcVar8;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          pcVar9 = pcVar8 + 1;
          cVar2 = *pcVar8;
          pcVar8 = pcVar9;
        } while (cVar2 != '\0');
        uVar4 = ~uVar4;
        *param_4 = 0;
        iVar7 = *(int *)(param_1 + 4);
        pcVar8 = pcVar9 + -uVar4;
        pcVar9 = (char *)&DAT_005844e8;
        for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar9 = pcVar9 + 4;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pcVar9 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar9 = pcVar9 + 1;
        }
      }
      else if (uVar4 == 1) {
        uVar4 = FUN_005397f0((char *)&local_110,4,1,piVar3);
        if (uVar4 != 1) break;
        iVar7 = *(int *)(param_1 + 4);
        if (local_110 == param_1) {
          uVar4 = 0xffffffff;
          pcVar8 = local_104;
          goto code_r0x004d5ec1;
        }
      }
      else {
        if (uVar4 != 2) {
          OutputDebugStringA(s_Unknown_record_type_in_script_de_0055e7a0);
          break;
        }
        uVar4 = FUN_005397f0((char *)&local_10c,8,1,piVar3);
        if (uVar4 != 1) break;
        iVar7 = iVar7 + -1;
        if (iVar7 == param_2) {
          *param_3 = local_10c;
          *param_4 = local_108;
        }
      }
      uVar4 = FUN_005397f0((char *)&local_114,1,1,piVar3);
    }
    FUN_005394d0(piVar3);
  }
  if (bVar10) {
    uVar5 = FUN_00539610(pCVar1,&DAT_0055c020);
    *(undefined4 *)((int)this + 0x868) = uVar5;
  }
  return (undefined4 *)0x0;
  while( true ) {
    uVar4 = uVar4 - 1;
    pcVar9 = pcVar8 + 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar9;
    if (cVar2 == '\0') break;
code_r0x004d5ec1:
    pcVar9 = pcVar8;
    if (uVar4 == 0) break;
  }
  uVar4 = ~uVar4;
  pcVar8 = pcVar9 + -uVar4;
  pcVar9 = (char *)&DAT_005844e8;
  for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar9 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar9 = pcVar9 + 1;
  }
  FUN_005394d0(piVar3);
  if (bVar10) {
    uVar5 = FUN_00539610(pCVar1,&DAT_0055c020);
    *(undefined4 *)((int)this + 0x868) = uVar5;
  }
  return &DAT_005844e8;
#undef local_114
#undef local_110
#undef local_10c
#undef local_108
#undef local_104
}
