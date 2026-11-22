/* Rebuilt from lomse.exe FUN_004d63f0 @ 0x004d63f0 (770 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, float *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0040adb0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0040adb0)
#define FUN_0041da00 ((undefined4 (__fastcall *)(int))0x0041da00)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_004d63f0 1
bool __stdcall rb_004d63f0(void *volatile param_1, uint volatile param_2, float volatile param_3, int volatile param_4)

{
  float fVar1;
  void *this;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_local_8[2];
#define local_8 (*(_t_local_8 *)(_fr + 0x0))
  
  this = param_1;
  pfVar4 = (float *)(param_2 + param_4);
  switch(__BC(int, param_3)) {
  case 0: /* float bits */
    if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
      iVar3 = *(int *)((int)param_1 + 0x54) + 1;
      *(int *)((int)param_1 + 0x54) = iVar3;
      param_2 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar3 * 8);
      param_3 = *(float *)(*(int *)((int)param_1 + 0x50) + -4 + iVar3 * 8);
    }
    else {
      FUN_00404ab0(param_1,6);
      param_2 = 0;
    }
    iVar3 = FUN_004026a0(&param_2,(uint *)pfVar4,(uint *)&param_4,(float *)&param_1);
    if (iVar3 == 0) {
      FUN_00404ab0(this,0xe);
      return false;
    }
    break;
  case 1: /* float bits */
    FUN_0040adb0(param_1,local_8);
    iVar3 = FUN_004026a0(local_8,(uint *)&param_1,&param_2,(float *)&param_4);
    if (iVar3 == 0) {
      FUN_00404ab0(this,0xe);
      return false;
    }
    *(undefined2 *)pfVar4 = (*(ushort *)((uchar *)&param_1 + 0));
    return true;
  case 2: /* float bits */
    FUN_0040adb0(param_1,local_8);
    iVar3 = FUN_004026a0(local_8,(uint *)&param_1,&param_2,(float *)&param_4);
    if (iVar3 == 0) {
      FUN_00404ab0(this,0xe);
      return false;
    }
    *(undefined1 *)pfVar4 = (*(uchar *)((uchar *)&param_1 + 0));
    return true;
  case 3: /* float bits */
    if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
      iVar3 = *(int *)((int)param_1 + 0x54) + 1;
      *(int *)((int)param_1 + 0x54) = iVar3;
      param_2 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar3 * 8);
      param_3 = *(float *)(*(int *)((int)param_1 + 0x50) + -4 + iVar3 * 8);
    }
    else {
      FUN_00404ab0(param_1,6);
      param_2 = 0;
    }
    iVar3 = FUN_004026a0(&param_2,(uint *)&param_4,(uint *)&param_1,pfVar4);
    if (iVar3 == 0) {
      FUN_00404ab0(this,0xe);
      return false;
    }
    break;
  case 4: /* float bits */
    FUN_0040adb0(param_1,&param_2);
    iVar3 = FUN_004026a0(&param_2,(uint *)&param_4,(uint *)pfVar4,(float *)&param_1);
    if (iVar3 == 0) {
      *(undefined4 *)((int)this + 0x90) = 0xe;
      FUN_004d4550(this);
      *(undefined4 *)((int)this + 0x90) = 0;
      *(undefined4 *)((int)this + 0xa4) = 0;
      return false;
    }
    break;
  case 5: /* float bits */
    FUN_0040adb0(param_1,&param_2);
    iVar3 = FUN_0041da00((int)this);
    if (iVar3 == 0) {
      if ((char)param_2 != '\b') {
        *(undefined4 *)((int)this + 0x90) = 0xe;
        FUN_004d4550(this);
        *(undefined4 *)((int)this + 0x90) = 0;
        *(undefined4 *)((int)this + 0xa4) = 0;
        param_3 = 0.0;
      }
    }
    else {
      param_3 = 0.0;
    }
    if (param_3 == 0.0) {
      return false;
    }
    *pfVar4 = param_3;
    break;
  case 6: /* float bits */
    pfVar2 = (float *)FUN_0040adb0(param_1,&param_2);
    *pfVar4 = *pfVar2;
    pfVar4[1] = pfVar2[1];
    return SUB41(__BC(uint, *pfVar4),0) != '\0';
  case 7: /* float bits */
    if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
      iVar3 = *(int *)((int)param_1 + 0x54) + 1;
      *(int *)((int)param_1 + 0x54) = iVar3;
      fVar1 = *(float *)(*(int *)((int)param_1 + 0x50) + -4 + iVar3 * 8);
      *pfVar4 = *(float *)(*(int *)((int)param_1 + 0x50) + -8 + iVar3 * 8);
      pfVar4[1] = fVar1;
      return SUB41(__BC(uint, *pfVar4),0) != '\0';
    }
    FUN_00404ab0(param_1,6);
    *pfVar4 = 0.0;
    pfVar4[1] = param_3;
    return SUB41(__BC(uint, *pfVar4),0) != '\0';
  default:
    return false;
  }
  return true;
#undef local_8
}
