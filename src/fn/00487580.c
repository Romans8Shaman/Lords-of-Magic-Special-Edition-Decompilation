/* Rebuilt from lomse.exe op_loadconfig @ 0x00487580 (448 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define CoCreateGuid (*(__typeof__(HRESULT (__stdcall *)(GUID *)) *)0x0054d34c) /* OLE32.DLL!CoCreateGuid via IAT */
#define DAT_005572ec (*(undefined *)0x005572ec)
#define DAT_00586784 (*(undefined4 *)0x00586784)
#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a8080 (*(undefined *)0x005a8080)
#define DAT_005aa134 (*(undefined4 *)0x005aa134)
#define DAT_005aa144 (*(undefined4 *)0x005aa144)
#define DAT_005aa148 (*(undefined4 *)0x005aa148)
#define DAT_005aa14c (*(undefined4 *)0x005aa14c)
#define DAT_005aa150 (*(undefined4 *)0x005aa150)
#define DAT_005aa154 (*(undefined4 *)0x005aa154)
#define DAT_005aa1f4 (*(int *)0x005aa1f4)
#define DAT_005aa1f8 (*(int *)0x005aa1f8)
#define DAT_005aa254 (*(undefined4 *)0x005aa254)
#define DAT_005aa258 (*(undefined4 *)0x005aa258)
#define DAT_005d20bc (*(undefined4 *)0x005d20bc)
#define FUN_00487220 ((undefined4 (__fastcall *)(int))0x00487220)
#define FUN_005394d0 ((undefined4 (__cdecl *)(int *))0x005394d0)
#define FUN_00539610 ((undefined4 (__cdecl *)(LPCSTR, char *))0x00539610)
#define FUN_005397f0 ((uint (__cdecl *)(char *, uint, uint, int *))0x005397f0)
#define s_lom_cfg_0055b4b8 (*(char (*)[])0x0055b4b8)

#define LOM_SELF_00487580 1
void __cdecl rb_00487580(void * vm)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_iStack_8;
  typedef int _t_iStack_4;
#define iStack_8 (*(_t_iStack_8 *)(_fr + 0x0))
#define iStack_4 (*(_t_iStack_4 *)(_fr + 0x4))
  
  iStack_4 = 1;
  piVar1 = (int *)FUN_00539610(s_lom_cfg_0055b4b8,&DAT_005572ec);
  if (piVar1 != (int *)0x0) {
    FUN_005397f0((char *)&DAT_005aa144,4,1,piVar1);
    FUN_005397f0((char *)&DAT_005aa148,4,1,piVar1);
    FUN_005397f0((char *)&DAT_005aa14c,4,1,piVar1);
    FUN_005397f0((char *)&DAT_005aa150,4,1,piVar1);
    if (DAT_005aa1f8 != 0) {
      FUN_005397f0((char *)&iStack_8,4,1,piVar1);
      iVar3 = 0;
      if (0 < iStack_8) {
        iVar4 = 0;
        do {
          FUN_005397f0((char *)(DAT_005aa1f8 + 4 + iVar4),4,1,piVar1);
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + 0xc;
        } while (iVar3 < iStack_8);
      }
      if (iStack_8 < DAT_005aa1f4) {
        iVar3 = iStack_8 * 0xc;
        do {
          iStack_8 = iStack_8 + 1;
          *(undefined4 *)(DAT_005aa1f8 + 4 + iVar3) = 1;
          iVar3 = iVar3 + 0xc;
        } while (iStack_8 < DAT_005aa1f4);
      }
    }
    uVar2 = FUN_005397f0((char *)&DAT_005aa154,4,1,piVar1);
    if (uVar2 == 0) {
      DAT_005aa154 = 0;
    }
    FUN_005397f0((char *)&DAT_005aa254,4,1,piVar1);
    *(undefined4 *)(&DAT_005a8080 + DAT_005a7d8c * 0x400) = DAT_005aa254;
    uVar2 = FUN_005397f0((char *)&DAT_005aa134,0x10,1,piVar1);
    if (uVar2 == 1) {
      iStack_4 = 0;
    }
    uVar2 = FUN_005397f0((char *)&DAT_00586784,4,1,piVar1);
    if (uVar2 != 1) {
      DAT_00586784 = 1;
    }
    uVar2 = FUN_005397f0((char *)&DAT_005aa258,4,1,piVar1);
    if (uVar2 != 1) {
      DAT_005aa258 = 1;
    }
    uVar2 = FUN_005397f0((char *)&DAT_005d20bc,4,1,piVar1);
    if (uVar2 != 1) {
      DAT_005d20bc = 1;
    }
    FUN_005394d0(piVar1);
  }
  if (iStack_4 != 0) {
    CoCreateGuid((GUID *)&DAT_005aa134);
    FUN_00487220(0x5aa12c);
  }
  return;
#undef iStack_8
#undef iStack_4
}
