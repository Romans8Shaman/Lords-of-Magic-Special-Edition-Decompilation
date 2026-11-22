/* Rebuilt from lomse.exe FUN_00401570 @ 0x00401570 (290 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00401730 ((undefined4 (__stdcall *)(void *))0x00401730)
#define FUN_00401a60 ((undefined4 (__thiscall *)(void *, int *))0x00401a60)
#define FUN_00401d20 ((undefined4 (__thiscall *)(void *, void *))0x00401d20)
#define FUN_00401f50 ((undefined4 (__thiscall *)(void *, int *))0x00401f50)
#define FUN_00402140 ((undefined4 (__stdcall *)(void *))0x00402140)
#define FUN_00402330 ((undefined4 (__thiscall *)(void *, int *))0x00402330)
#define FUN_00402740 ((undefined4 (__thiscall *)(void *, int *))0x00402740)
#define FUN_004028d0 ((undefined4 (__thiscall *)(void *, int *))0x004028d0)
#define FUN_00402a10 ((undefined4 (__thiscall *)(void *, void *))0x00402a10)
#define FUN_00402aa0 ((undefined4 (__thiscall *)(void *, void *))0x00402aa0)
#define FUN_00402da0 ((undefined4 (__thiscall *)(void *, int *))0x00402da0)
#define FUN_00403180 ((undefined4 (__thiscall *)(void *, int *))0x00403180)
#define FUN_00403380 ((undefined4 (__stdcall *)(void *))0x00403380)
#define FUN_00403640 ((undefined4 (__thiscall *)(void *, int *))0x00403640)
#define FUN_00403c50 ((undefined4 (__thiscall *)(void *, int *))0x00403c50)
#define FUN_00403d30 ((undefined4 (__thiscall *)(void *, void *))0x00403d30)
#define FUN_00403e10 ((undefined4 (__thiscall *)(void *, int *))0x00403e10)
#define FUN_00403eb0 ((undefined4 (__thiscall *)(void *, void *))0x00403eb0)
#define FUN_00403f50 ((undefined4 (__thiscall *)(void *, int *))0x00403f50)
#define FUN_00404000 ((undefined4 (__thiscall *)(void *, int *))0x00404000)
#define FUN_004040e0 ((undefined4 (__thiscall *)(void *, int *))0x004040e0)
#define FUN_00404370 ((undefined4 (__thiscall *)(void *, int *))0x00404370)
#define FUN_00404410 ((undefined4 (__thiscall *)(void *, int *))0x00404410)
#define FUN_004046f0 ((undefined4 (__thiscall *)(void *, int *))0x004046f0)
#define FUN_00408870 ((undefined4 (__thiscall *)(void *, void *))0x00408870)

#define LOM_SELF_00401570 1
void __thiscall rb_00401570(void *this,int *param_1)

{
  if ((*(byte *)(param_1 + 0xc) & 2) != 0) {
    FUN_00408870(this,param_1);
    return;
  }
  switch(*(undefined4 *)this) {
  case 1:
    FUN_00401a60(this,param_1);
    return;
  case 2:
    FUN_00402330(this,param_1);
    return;
  case 3:
    FUN_00403d30(this,param_1);
    return;
  case 4:
    FUN_00403180(this,param_1);
    return;
  case 5:
    FUN_00403380(param_1);
    return;
  case 6:
    FUN_00403640(this,param_1);
    return;
  case 7:
    FUN_00403c50(this,param_1);
    return;
  case 8:
  case 0x32:
    FUN_00403f50(this,param_1);
    return;
  case 9:
    FUN_00403eb0(this,param_1);
    return;
  default:
    FUN_00401730(param_1);
    return;
  case 0xb:
    FUN_00403e10(this,param_1);
    return;
  case 0xc:
    FUN_00404000(this,param_1);
    return;
  case 0xd:
    FUN_00401d20(this,param_1);
    return;
  case 0xe:
    FUN_00404370(this,param_1);
    return;
  case 0xf:
    FUN_00404410(this,param_1);
    return;
  case 0x10:
    FUN_004046f0(this,param_1);
    return;
  case 0x11:
    FUN_004040e0(this,param_1);
    return;
  case 0x12:
    FUN_00401f50(this,param_1);
    return;
  case 0x13:
    FUN_00402140(param_1);
    return;
  case 0x15:
    FUN_004028d0(this,param_1);
    return;
  case 0x16:
    FUN_00402a10(this,param_1);
    return;
  case 0x18:
    FUN_00402da0(this,param_1);
    return;
  case 0x19:
    FUN_00402aa0(this,param_1);
    return;
  case 0x30:
    FUN_00402740(this,param_1);
    return;
  }
}
