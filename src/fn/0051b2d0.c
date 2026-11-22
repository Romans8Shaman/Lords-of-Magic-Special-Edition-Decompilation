/* Rebuilt from lomse.exe FUN_0051b2d0 @ 0x0051b2d0 (520 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_0051b2d0 1
uint __stdcall rb_0051b2d0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_1[1];
  iVar2 = param_2[1];
  if (iVar1 == iVar2) {
    if (param_3[1] < iVar1) {
      return (uint)(*param_2 <= *param_1);
    }
    return (uint)(*param_1 <= *param_2);
  }
  iVar3 = param_3[1];
  if (iVar2 <= iVar1) {
    if (iVar1 == iVar3) {
      return (uint)(*param_1 <= *param_3);
    }
    if (iVar1 <= iVar3) {
      iVar3 = iVar3 - iVar2 >> 0x10;
      if (iVar3 < 1) {
        iVar3 = 0x8000;
      }
      else {
        iVar3 = (iVar1 - iVar2) / iVar3;
      }
      return (uint)(*param_1 <= (*param_3 - *param_2 >> 0x10) * iVar3 + *param_2);
    }
    if (iVar2 == iVar3) {
      return (uint)(*param_2 <= *param_3);
    }
    if (iVar2 < iVar3) {
      iVar1 = iVar1 - iVar2 >> 0x10;
      if (iVar1 < 1) {
        iVar1 = 0x8000;
      }
      else {
        iVar1 = (iVar3 - iVar2) / iVar1;
      }
      return (uint)((*param_1 - *param_2 >> 0x10) * iVar1 + *param_2 <= *param_3);
    }
    iVar1 = iVar1 - iVar3 >> 0x10;
    if (iVar1 < 1) {
      iVar1 = 0x8000;
    }
    else {
      iVar1 = (iVar2 - iVar3) / iVar1;
    }
    return (uint)(*param_2 <= (*param_1 - *param_3 >> 0x10) * iVar1 + *param_3);
  }
  if (iVar1 == iVar3) {
    return (uint)(*param_3 <= *param_1);
  }
  if (iVar3 <= iVar1) {
    iVar2 = iVar2 - iVar3 >> 0x10;
    if (iVar2 < 1) {
      iVar2 = 0x8000;
    }
    else {
      iVar2 = (iVar1 - iVar3) / iVar2;
    }
    return (uint)((*param_2 - *param_3 >> 0x10) * iVar2 + *param_3 <= *param_1);
  }
  if (iVar2 == iVar3) {
    return (uint)(*param_3 < *param_2);
  }
  if (iVar3 < iVar2) {
    iVar2 = iVar2 - iVar1 >> 0x10;
    if (iVar2 < 1) {
      iVar2 = 0x8000;
    }
    else {
      iVar2 = (iVar3 - iVar1) / iVar2;
    }
    return (uint)(*param_3 <= (*param_2 - *param_1 >> 0x10) * iVar2 + *param_1);
  }
  iVar3 = iVar3 - iVar1 >> 0x10;
  if (iVar3 < 1) {
    iVar3 = 0x8000;
  }
  else {
    iVar3 = (iVar2 - iVar1) / iVar3;
  }
  return (uint)((*param_3 - *param_1 >> 0x10) * iVar3 + *param_1 <= *param_2);
}
