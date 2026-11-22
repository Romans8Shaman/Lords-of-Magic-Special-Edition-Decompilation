/* HAND-WRITTEN: release DirectDraw/DirectSound-style COM objects at +0x4a0/+0x418/+0x4a4 with HRESULT logging (FUN_004756f0). */
#include "lom.h"
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8)
#define FUN_004756f0 ((int (__cdecl *)(int, ...))0x004756f0)
#define FUN_004b8b90 ((undefined4 (__fastcall *)(int))0x004b8b90)
#define FUN_004b7d40 ((undefined4 (__fastcall *)(int))0x004b7d40)
typedef int (__stdcall *com0_t)(int *);
typedef int (__stdcall *com1_t)(int *, int);
#define VT(o, off) (*(void **)(*(o) + (off)))
#define LOM_SELF_0044a930 1
void __thiscall rb_0044a930(void *this)
{
  char *t = (char *)this;
  int *o, i;
  OutputDebugStringA((LPCSTR)0x556bb4);
  FUN_004b8b90((int)this);
  o = *(int **)(t + 0x4a0);
  if (o != 0) {
    if (*(int *)(t + 0x2c4) != 0) {
      FUN_004756f0(((com1_t)VT(o, 0x24))(o, *(int *)(t + 0x2c4)), 0x556b84);
      *(int *)(t + 0x2c4) = 0;
    }
    o = *(int **)(t + 0x4a0);
    FUN_004756f0(((com0_t)VT(o, 0x10))(o), 0x5568d8);
    o = *(int **)(t + 0x4a0);
    FUN_004756f0(((com0_t)VT(o, 8))(o), 0x5568bc);
    *(int *)(t + 0x4a0) = 0;
  }
  o = *(int **)(t + 0x418);
  if (o != 0) {
    FUN_004756f0(((com0_t)VT(o, 8))(o), 0x556b68);
    *(int *)(t + 0x418) = 0;
  }
  o = *(int **)(t + 0x4a4);
  if (o != 0) {
    FUN_004756f0(((com0_t)VT(o, 8))(o), 0x556b48);
    *(int *)(t + 0x4a4) = 0;
  }
  for (i = 0; i < 10; i++) ((int *)(t + 0x4c0))[i] = 0;
  FUN_004b7d40((int)this);
  OutputDebugStringA((LPCSTR)0x556b28);
}
