/* Rebuilt from lomse.exe FUN_0048e470 @ 0x0048e470 (1042 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0055c330 (*(undefined4 *)0x0055c330)
#define DAT_0055c33c (*(int *)0x0055c33c)
#define DAT_0058360c (*(undefined4 *)0x0058360c)
#define DAT_00583618 (*(undefined4 *)0x00583618)
#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005a7b50 (*(undefined4 *)0x005a7b50)
#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005d20a0 (*(undefined4 *)0x005d20a0)
#define FUN_0046c700 ((undefined4 (__thiscall *)(void *, int, LONG, LONG))0x0046c700)
#define FUN_004754c0 ((undefined * (__fastcall *)(int))0x004754c0)
#define FUN_004755a0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x004755a0)
#define FUN_00476c20 ((undefined4 (__fastcall *)(void *))0x00476c20)
#define FUN_0048dd30 ((undefined4 (__thiscall *)(void *, int, uint, LONG))0x0048dd30)
#define FUN_0048eb70 ((undefined4 (__thiscall *)(void *, int *))0x0048eb70)
#define FUN_0048ee50 ((undefined4 (__thiscall *)(void *, int *, int))0x0048ee50)
#define FUN_00492790 ((int (__thiscall *)(void *, int))0x00492790)
#define FUN_004927f0 ((int (__thiscall *)(void *, int))0x004927f0)
#define FUN_00492820 ((int (__thiscall *)(void *, int))0x00492820)
#define FUN_00493330 ((int (__thiscall *)(void *, int))0x00493330)
#define FUN_00495900 ((undefined4 (__thiscall *)(void *, undefined4))0x00495900)
#define FUN_004983a0 ((undefined4 (__thiscall *)(void *, undefined4, undefined4, undefined4, undefined4))0x004983a0)
#define FUN_004d09a0 ((undefined4 (__thiscall *)(void *, uint, int *, int))0x004d09a0)
#define FUN_004ea0a0 ((undefined4 (__thiscall *)(void *, int, uint, int))0x004ea0a0)
#define FUN_004ec2b0 ((undefined4 (__thiscall *)(void *, int, int, int))0x004ec2b0)
#define FUN_005005f0 ((int (__thiscall *)(void *, uint))0x005005f0)
#define FUN_00500650 ((undefined4 (__thiscall *)(void *, int, int, int, int))0x00500650)
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define _DAT_005a79f0 (*(undefined4 *)0x005a79f0)
#define _DAT_005a79f8 (*(undefined4 *)0x005a79f8)
#define _DAT_005a79fc (*(undefined4 *)0x005a79fc)
#define s_Can_t_LockBackBuffer__0055c340 (*(char (*)[])0x0055c340)

#define LOM_SELF_0048e470 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall rb_0048e470(void *this,int param_1,uint param_2,int param_3)

{
  void *pvVar1;
  int iVar2;
  int *piVar3;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_20[4];
  typedef int _t_local_10[4];
#define local_20 (*(_t_local_20 *)(_fr + 0x0))
#define local_10 (*(_t_local_10 *)(_fr + 0x10))
  
  pvVar1 = (void *)FUN_005005f0(&DAT_00584ae8,*(uint *)((int)this + 0xc));
  if (pvVar1 != (void *)0x0) {
    iVar2 = FUN_0048dd30(pvVar1,param_1,param_2,param_3);
    return iVar2;
  }
  pvVar1 = (void *)FUN_00492790(&DAT_005a7b50,*(int *)((int)this + 0xc));
  if (pvVar1 != (void *)0x0) {
    iVar2 = FUN_004ec2b0(pvVar1,param_1,param_2,param_3);
    if ((iVar2 != 0) && (piVar3 = (int *)FUN_004754c0(0x584ae8), piVar3 != (int *)0x0)) {
      _DAT_005a79f0 = 0;
      _DAT_005a79f8 = 0;
      _DAT_005a79fc = 0;
      FUN_0048ee50(this,piVar3,1);
      FUN_004755a0(&DAT_00584ae8,piVar3);
      piVar3 = (int *)FUN_0048eb70(this,local_20);
      FUN_00500650(&DAT_00584ae8,*piVar3,piVar3[1],piVar3[2],piVar3[3]);
      FUN_00476c20(&DAT_00584ae8);
    }
    return iVar2;
  }
  pvVar1 = (void *)FUN_004927f0(&DAT_005a7b50,*(int *)((int)this + 0xc));
  if (pvVar1 != (void *)0x0) {
    iVar2 = FUN_0046c700(pvVar1,param_1,param_2,param_3);
    return iVar2;
  }
  pvVar1 = (void *)FUN_00492820(&DAT_005a7b50,*(int *)((int)this + 0xc));
  if (pvVar1 != (void *)0x0) {
    FUN_004ea0a0(pvVar1,param_1,param_2,param_3);
  }
  switch(param_1) {
  case 0x200:
    if (DAT_0055c33c == -1) {
      return 1;
    }
    if (DAT_0055c33c == *(int *)((int)this + 0xc)) {
      return 1;
    }
    if (DAT_005d20a0 == 0) {
      return 1;
    }
    goto LAB_0048e855;
  case 0x201:
    pvVar1 = (void *)FUN_00493330(&DAT_005a7b50,*(int *)((int)this + 0xc));
    if (pvVar1 != (void *)0x0) {
      FUN_00495900(pvVar1,1);
      piVar3 = (int *)FUN_004754c0(0x584ae8);
      if (piVar3 == (int *)0x0) {
        OutputDebugStringA(s_Can_t_LockBackBuffer__0055c340);
      }
      else {
        _DAT_005a79f0 = 0;
        _DAT_005a79f8 = 0;
        _DAT_005a79fc = 0;
        FUN_0048ee50(this,piVar3,1);
        FUN_004755a0(&DAT_00584ae8,piVar3);
        piVar3 = (int *)FUN_0048eb70(this,local_20);
        FUN_00500650(&DAT_00584ae8,*piVar3,piVar3[1],piVar3[2],piVar3[3]);
        FUN_00476c20(&DAT_00584ae8);
      }
      if ((*(byte *)((int)pvVar1 + 0xc) & 0x10) != 0) {
        DAT_005d20a0 = 1;
        FUN_004983a0(&DAT_005d20a0,*(undefined4 *)((int)this + 0x28),
                     *(undefined4 *)((int)this + 0xc),*(undefined4 *)((int)this + 0x18),
                     *(undefined4 *)((int)this + 0x1c));
        if (DAT_005a7b78 != (void *)0x0) {
          FUN_004d09a0(DAT_005a7b78,*(uint *)((int)this + 0x18),*(int **)((int)this + 0x1c),0);
        }
        DAT_00583618 = 0;
        DAT_0058360c = DAT_0055c330;
        DAT_0055c33c = *(undefined4 *)((int)this + 0xc);
        return 1;
      }
    }
    break;
  case 0x202:
    pvVar1 = (void *)FUN_00493330(&DAT_005a7b50,*(int *)((int)this + 0xc));
    if (pvVar1 != (void *)0x0) {
      if ((*(byte *)((int)pvVar1 + 0xc) & 8) == 0) {
        FUN_00495900(pvVar1,0);
        piVar3 = (int *)FUN_004754c0(0x584ae8);
        if (piVar3 != (int *)0x0) {
          _DAT_005a79f0 = 0;
          _DAT_005a79f8 = 0;
          _DAT_005a79fc = 0;
          FUN_0048ee50(this,piVar3,1);
          FUN_004755a0(&DAT_00584ae8,piVar3);
          piVar3 = (int *)FUN_0048eb70(this,local_10);
          FUN_00500650(&DAT_00584ae8,*piVar3,piVar3[1],piVar3[2],piVar3[3]);
          FUN_00476c20(&DAT_00584ae8);
        }
      }
      if ((pvVar1 != (void *)0x0) && ((*(byte *)((int)pvVar1 + 0xc) & 0x10) != 0)) {
        DAT_005d20a0 = 0;
        DAT_00583618 = 0;
        DAT_0058360c = DAT_0055c330;
        DAT_0055c33c = 0xffffffff;
        return 1;
      }
    }
    if (DAT_005a7b78 != (void *)0x0) {
      FUN_004d09a0(DAT_005a7b78,*(uint *)((int)this + 0x18),*(int **)((int)this + 0x1c),0);
      return 1;
    }
    break;
  case 0x204:
    if (DAT_0055c33c == -1) {
      return 1;
    }
LAB_0048e855:
    DAT_005d20a0 = 0;
    DAT_00583618 = 0;
    DAT_0058360c = DAT_0055c330;
    DAT_0055c33c = -1;
    break;
  case 0x205:
    if (DAT_0055c33c != -1) {
      DAT_005d20a0 = 0;
      DAT_00583618 = 0;
      DAT_0058360c = DAT_0055c330;
      DAT_0055c33c = -1;
    }
    if (DAT_005a7b78 != (void *)0x0) {
      FUN_004d09a0(DAT_005a7b78,*(uint *)((int)this + 0x20),*(int **)((int)this + 0x24),0);
      return 1;
    }
  }
  return 1;
#undef local_20
#undef local_10
}
