/* Rebuilt from lomse.exe FUN_00470c40 @ 0x00470c40 (437 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00557f98 (*(undefined *)0x00557f98)
#define DAT_0055b1b0 (*(undefined4 *)0x0055b1b0)
#define DAT_00579274 (*(CHAR *)0x00579274)
#define DAT_00584d54 (*(undefined4 *)0x00584d54)
#define GetComputerNameA (*(__typeof__(BOOL (__stdcall *)(LPSTR, LPDWORD)) *)0x0054d040) /* KERNEL32.DLL!GetComputerNameA via IAT */
#define LAB_004704d0 (*(undefined *)0x004704d0) /* code label used as address */
#define LAB_00470bb0 (*(undefined *)0x00470bb0) /* code label used as address */
#define LAB_00470bc0 (*(undefined *)0x00470bc0) /* code label used as address */
#define LAB_00470be0 (*(undefined *)0x00470be0) /* code label used as address */
#define LAB_00470bf0 (*(undefined *)0x00470bf0) /* code label used as address */
#define LAB_00470c00 (*(undefined *)0x00470c00) /* code label used as address */
#define LAB_00470c20 (*(undefined *)0x00470c20) /* code label used as address */
#define LAB_00470c30 (*(undefined *)0x00470c30) /* code label used as address */
#define Ordinal_117 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4, undefined4))0x0053389a) /* thunk -> STORM.DLL!Ordinal_117 */
#define s_A_Player_00557f9c (*(char (*)[])0x00557f9c)
#define s_LOMDeb_exe_00557f8c (*(char (*)[])0x00557f8c)
#define s_Lords_of_Magic_00557c1c (*(char (*)[])0x00557c1c)
#define s_Lords_of_Magic_v1_0_00557fa8 (*(char (*)[])0x00557fa8)

#define LOM_SELF_00470c40 1
undefined4 __thiscall rb_00470c40(void *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  DWORD *pDVar3;
  undefined4 *puVar4;
  undefined1 **ppuVar5;
  uchar _fr[0x1c0] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_uStack_1b8;
  typedef undefined * _t_puStack_1b4;
  typedef char * _t_pcStack_1b0;
  typedef undefined4 _t_uStack_1ac;
  typedef undefined4 _t_uStack_1a8;
  typedef undefined4 _t_uStack_1a4;
  CHAR *pCStack_1a0;
  typedef char * _t_pcStack_19c;
  typedef undefined4 _t_uStack_198;
  DWORD aDStack_194 [2];
  typedef char * _t_pcStack_18c;
  typedef char * _t_pcStack_188;
  typedef undefined4 _t_uStack_184;
  typedef undefined4 _t_uStack_180;
  typedef undefined4 _t_uStack_178;
  typedef undefined4 _t_uStack_174;
  typedef undefined4 _t_uStack_170;
  typedef undefined1 * _t_apuStack_154[4];
  typedef undefined1 * _t_puStack_144;
  typedef undefined1 * _t_puStack_140;
  typedef undefined1 * _t_puStack_13c;
  typedef undefined1 * _t_puStack_138;
  typedef undefined1 * _t_puStack_134;
  typedef undefined1 * _t_puStack_130;
  typedef undefined1 * _t_puStack_12c;
  typedef undefined1 * _t_puStack_128;
  CHAR CStack_104;
  typedef undefined4 _t_uStack_103;
#define uStack_1b8 (*(_t_uStack_1b8 *)(_fr + 0x0))
#define puStack_1b4 (*(_t_puStack_1b4 *)(_fr + 0x4))
#define pcStack_1b0 (*(_t_pcStack_1b0 *)(_fr + 0x8))
#define uStack_1ac (*(_t_uStack_1ac *)(_fr + 0xc))
#define uStack_1a8 (*(_t_uStack_1a8 *)(_fr + 0x10))
#define uStack_1a4 (*(_t_uStack_1a4 *)(_fr + 0x14))
#define pcStack_19c (*(_t_pcStack_19c *)(_fr + 0x1c))
#define uStack_198 (*(_t_uStack_198 *)(_fr + 0x20))
#define pcStack_18c (*(_t_pcStack_18c *)(_fr + 0x2c))
#define pcStack_188 (*(_t_pcStack_188 *)(_fr + 0x30))
#define uStack_184 (*(_t_uStack_184 *)(_fr + 0x34))
#define uStack_180 (*(_t_uStack_180 *)(_fr + 0x38))
#define uStack_178 (*(_t_uStack_178 *)(_fr + 0x40))
#define uStack_174 (*(_t_uStack_174 *)(_fr + 0x44))
#define uStack_170 (*(_t_uStack_170 *)(_fr + 0x48))
#define apuStack_154 (*(_t_apuStack_154 *)(_fr + 0x64))
#define puStack_144 (*(_t_puStack_144 *)(_fr + 0x74))
#define puStack_140 (*(_t_puStack_140 *)(_fr + 0x78))
#define puStack_13c (*(_t_puStack_13c *)(_fr + 0x7c))
#define puStack_138 (*(_t_puStack_138 *)(_fr + 0x80))
#define puStack_134 (*(_t_puStack_134 *)(_fr + 0x84))
#define puStack_130 (*(_t_puStack_130 *)(_fr + 0x88))
#define puStack_12c (*(_t_puStack_12c *)(_fr + 0x8c))
#define puStack_128 (*(_t_puStack_128 *)(_fr + 0x90))
#define uStack_103 (*(_t_uStack_103 *)(_fr + 0xb5))
  
  pDVar3 = aDStack_194;
  for (iVar2 = 0xf; pDVar3 = pDVar3 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
    *pDVar3 = 0;
  }
  uStack_180 = DAT_0055b1b0;
  CStack_104 = DAT_00579274;
  puVar4 = &uStack_103;
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  *(undefined1 *)((int)puVar4 + 2) = 0;
  aDStack_194[1] = 0x3c;
  pcStack_18c = s_Lords_of_Magic_00557c1c;
  pcStack_188 = s_Lords_of_Magic_v1_0_00557fa8;
  uStack_184 = 0x44545354;
  uStack_178 = 4;
  uStack_174 = 0;
  uStack_170 = 0;
  aDStack_194[0] = 0x104;
  GetComputerNameA(&CStack_104,aDStack_194);
  pCStack_1a0 = &CStack_104;
  uStack_198 = 0;
  uStack_1a4 = 0x10;
  ppuVar5 = apuStack_154;
  for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
    *ppuVar5 = (undefined1 *)0x0;
    ppuVar5 = ppuVar5 + 1;
  }
  apuStack_154[2] = (undefined1 *)DAT_00584d54;
  iVar2 = *(int *)((int)this + param_1 * 4 + 0x394);
  pcStack_19c = s_A_Player_00557f9c;
  apuStack_154[0] = (undefined1 *)0x50;
  apuStack_154[3] = &LAB_004704d0;
  puStack_144 = &LAB_00470bb0;
  puStack_140 = &LAB_00470bc0;
  puStack_13c = &LAB_00470be0;
  puStack_138 = &LAB_00470bf0;
  puStack_134 = &LAB_00470c00;
  puStack_130 = &LAB_00470c20;
  puStack_12c = &LAB_00470c30;
  puStack_128 = &LAB_00470c30;
  uStack_1b8 = 0x14;
  puStack_1b4 = &DAT_00557f98;
  pcStack_1b0 = s_LOMDeb_exe_00557f8c;
  uStack_1ac = 0;
  uStack_1a8 = 0;
  if (iVar2 == 0) {
    return 0;
  }
  uVar1 = Ordinal_117(iVar2,aDStack_194 + 1,&uStack_1a4,apuStack_154,&uStack_1b8);
  return uVar1;
#undef uStack_1b8
#undef puStack_1b4
#undef pcStack_1b0
#undef uStack_1ac
#undef uStack_1a8
#undef uStack_1a4
#undef pcStack_19c
#undef uStack_198
#undef pcStack_18c
#undef pcStack_188
#undef uStack_184
#undef uStack_180
#undef uStack_178
#undef uStack_174
#undef uStack_170
#undef apuStack_154
#undef puStack_144
#undef puStack_140
#undef puStack_13c
#undef puStack_138
#undef puStack_134
#undef puStack_130
#undef puStack_12c
#undef puStack_128
#undef uStack_103
}
