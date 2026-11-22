/* Rebuilt from lomse.exe @ 0x0044a2f0 (360 bytes, __thiscall, ret 4): DirectPlay session open/host step.
 * 0044a460(this,0) gate; copies the 16-byte GUID at 005568a8 to this+0x404; Sleep(100); CreateEventA(0,0,0,0)
 * -> this+0x370; COM vtbl[6] on *(this+0x4a0) (this+0x2c4, {0x10,0,this+0x104,this+0x104}, event, 0,0,0) checked by
 * 004756f0(hr, 00556928); on success sets the session state and calls 004b7dd0 / vtbl[6] / 004b7b90 / 004b8b80 / 004b6520.
 * Hand-written from the disassembly. Behaviour-match target, not byte-match. */
#include "lom.h"

#define Sleep (*(__typeof__(void (__stdcall *)(DWORD)) *)0x0054d0d0) /* KERNEL32.DLL!Sleep via IAT */
#define CreateEventA (*(__typeof__(HANDLE (__stdcall *)(LPSECURITY_ATTRIBUTES, BOOL, BOOL, LPCSTR)) *)0x0054d0d4) /* KERNEL32.DLL!CreateEventA via IAT */
#define FUN_0044a460 ((int (__thiscall *)(void *, int))0x0044a460)
#define FUN_004756f0 ((int (__cdecl *)(int, const char *))0x004756f0)
#define FUN_004b69a0 ((void (__thiscall *)(void *, const char *, int, int))0x004b69a0)
#define FUN_004b7dd0 ((void (__thiscall *)(void *))0x004b7dd0)
#define FUN_004b7b90 ((void (__thiscall *)(void *, int))0x004b7b90)
#define FUN_004b8b80 ((void (__thiscall *)(void *))0x004b8b80)
#define FUN_004b6520 ((void (__thiscall *)(void *, int))0x004b6520)

/* stdcall COM method; the original leaves the object in ecx as well, so call it as thiscall(obj; obj, ...) */
typedef int (__thiscall *t_open)(void *, void *, void *, void *, HANDLE, int, int, int);
typedef void (__thiscall *t_v6)(void *);

#define LOM_SELF_0044a2f0 1
int __thiscall rb_0044a2f0(void *this_, int param_1)
{
  char *self = (char *)this_;
  int desc[4];
  int hr, res;
  HANDLE ev;
  void *obj;

  if (FUN_0044a460(this_, 0) == 0) return 0;
  ((int *)(self + 0x404))[0] = *(int *)0x005568a8;
  ((int *)(self + 0x404))[1] = *(int *)0x005568ac;
  ((int *)(self + 0x404))[2] = *(int *)0x005568b0;
  ((int *)(self + 0x404))[3] = *(int *)0x005568b4;
  Sleep(100);
  desc[0] = 0x10;
  desc[1] = 0;
  desc[2] = (int)(self + 0x104);
  desc[3] = (int)(self + 0x104);
  ev = CreateEventA(0, 0, 0, 0);
  *(HANDLE *)(self + 0x370) = ev;
  obj = *(void **)(self + 0x4a0);
  hr = ((t_open)(*(void ***)obj)[6])(obj, obj, self + 0x2c4, desc, ev, 0, 0, 0);
  res = FUN_004756f0(hr, (const char *)0x00556928);
  FUN_004b69a0(this_, (const char *)0x00556988, res, 0);
  if (res != 1) return 0;
  if (*(int *)(self + 0x2c4) == 0xffff) {
    FUN_004b69a0(this_, (const char *)0x00556974, 1, 0xffff);
    return 0;
  }
  *(int *)(self + 0x120) = 3;
  *(int *)(self + 0x390) = 1;
  FUN_004b7dd0(this_);
  *(int *)(self + 0x390) = 1;
  *(int *)(self + 0xd4) = 1;
  *(int *)(self + 0x36c) = 0;
  *(int *)(self + 0xd0) = 1;
  ((t_v6)(*(void ***)this_)[6])(this_);
  FUN_004b7b90(this_, param_1);
  FUN_004b8b80(this_);
  FUN_004b6520((void *)0x005cd358, 1);
  return 1;
}
