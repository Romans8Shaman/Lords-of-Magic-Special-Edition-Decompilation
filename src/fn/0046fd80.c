/* Rebuilt from lomse.exe FUN_0046fd80 @ 0x0046fd80 (210 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583258 (*(int *)0x00583258)
#define DAT_0058325c (*(int *)0x0058325c)
#define DAT_005d1e84 (*(void * *)0x005d1e84)
#define FUN_0046fd10 ((int (__cdecl *)(char *, char *))0x0046fd10)
#define FUN_0046fe60 ((undefined4 (__thiscall *)(void *, undefined4))0x0046fe60)
#define s_COM1_00557bf4 (*(char (*)[])0x00557bf4)
#define s_COM2_00557bec (*(char (*)[])0x00557bec)
#define s_COM3_00557be4 (*(char (*)[])0x00557be4)
#define s_COM4_00557bdc (*(char (*)[])0x00557bdc)
#define s_LPT1_00557c14 (*(char (*)[])0x00557c14)
#define s_LPT2_00557c0c (*(char (*)[])0x00557c0c)
#define s_LPT3_00557c04 (*(char (*)[])0x00557c04)
#define s_LPT4_00557bfc (*(char (*)[])0x00557bfc)

#define LOM_SELF_0046fd80 1
undefined4 __stdcall rb_0046fd80(undefined4 param_1,char *param_2,undefined4 unused_stack_8)

{
  int iVar1;
  
  iVar1 = FUN_0046fd10(param_2,s_LPT1_00557c14);
  if (iVar1 == 0) {
    iVar1 = FUN_0046fd10(param_2,s_LPT2_00557c0c);
    if (iVar1 == 0) {
      iVar1 = FUN_0046fd10(param_2,s_LPT3_00557c04);
      if (iVar1 == 0) {
        iVar1 = FUN_0046fd10(param_2,s_LPT4_00557bfc);
        if (iVar1 == 0) {
          iVar1 = FUN_0046fd10(param_2,s_COM1_00557bf4);
          if (iVar1 == 0) {
            iVar1 = FUN_0046fd10(param_2,s_COM2_00557bec);
            if (iVar1 == 0) {
              iVar1 = FUN_0046fd10(param_2,s_COM3_00557be4);
              if (iVar1 == 0) {
                iVar1 = FUN_0046fd10(param_2,s_COM4_00557bdc);
                if (iVar1 == 0) {
                  iVar1 = FUN_0046fe60(DAT_005d1e84,DAT_0058325c);
                  if (iVar1 != 0) {
                    DAT_00583258 = DAT_0058325c;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  DAT_0058325c = DAT_0058325c + 1;
  return 1;
}
