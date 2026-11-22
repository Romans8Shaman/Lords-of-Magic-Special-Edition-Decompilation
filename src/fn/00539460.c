/* Rebuilt from lomse.exe FUN_00539460 @ 0x00539460 (56 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0053c620 ((undefined4 (__cdecl *)(char *))0x0053c620)
#define LAB_0053c680 (*(undefined *)0x0053c680) /* code label used as address */
#define LAB_0053c6f0 (*(undefined *)0x0053c6f0) /* code label used as address */
#define LAB_0053c710 (*(undefined *)0x0053c710) /* code label used as address */
#define LAB_0053cae0 (*(undefined *)0x0053cae0) /* code label used as address */
#define PTR_FUN_00574968 (*(undefined * *)0x00574968)
#define PTR_FUN_0057496c (*(undefined * *)0x0057496c)
#define PTR_FUN_00574970 (*(undefined * *)0x00574970)
#define PTR_FUN_00574974 (*(undefined * *)0x00574974)
#define PTR_FUN_00574978 (*(undefined * *)0x00574978)
#define PTR_FUN_0057497c (*(undefined * *)0x0057497c)

#define LOM_SELF_00539460 1
void __stdcall rb_00539460(void)

{
  PTR_FUN_0057496c = &LAB_0053c680;
  PTR_FUN_00574968 = &LAB_0053cae0;
  PTR_FUN_00574970 = &LAB_0053c710;
  PTR_FUN_00574974 = FUN_0053c620;
  PTR_FUN_00574978 = &LAB_0053c6f0;
  PTR_FUN_0057497c = &LAB_0053cae0;
  return;
}
