/* Rebuilt from lomse.exe FUN_00432d40 @ 0x00432d40 (223 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)

#define LOM_SELF_00432d40 1
undefined4 __thiscall
rb_00432d40(void *this,undefined1 param_1,short param_2,short param_3,undefined1 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  *(undefined1 *)((int)this + 4) = param_1;
  *(undefined2 *)((int)this + 2) = 0xffff;
  switch(param_1) {
  case 0:
    break;
  case 1:
  case 2:
  case 3:
  case 4:
    *(short *)this = param_2;
    return 1;
  case 5:
    *(undefined1 *)((int)this + 5) = param_4;
    *(short *)this = param_3;
    puVar1 = FUN_00485080(&DAT_005aa12c,(int)param_3,0x2f);
    if (((puVar1 != (undefined4 *)0x0) && (-1 < *(char *)((int)this + 5))) &&
       (iVar2 = (int)*(char *)((int)this + 5), iVar2 < (int)puVar1[0x13])) {
LAB_00432dcc:
      *(undefined2 *)((int)this + 2) = *(undefined2 *)(puVar1 + (iVar2 + 3) * 0x13);
      return 1;
    }
    break;
  case 6:
  case 9:
    *(short *)this = param_3;
    return 1;
  case 7:
  case 8:
    *(short *)this = param_3;
    break;
  case 10:
    *(short *)this = param_3;
    *(undefined1 *)((int)this + 5) = 0;
    puVar1 = FUN_00485080(&DAT_005aa12c,(int)param_3,0x2f);
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)*(char *)((int)this + 5);
      goto LAB_00432dcc;
    }
    break;
  case 0xb:
    *(short *)this = param_3;
    return 1;
  default:
    return 0;
  }
  return 1;
}
