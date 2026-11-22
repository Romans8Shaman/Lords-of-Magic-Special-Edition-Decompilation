/* Rebuilt from lomse.exe FUN_004f73e0 @ 0x004f73e0 (665 bytes, __thiscall, ret 8). HAND (2026-11-13, was asmfn):
 * Load a sprite list from file fp: return 0 if fp is NULL; if param_2 (count) is 0 call 004f5d20(this) first, then
 * fread the count over it. For each entry fread a type dword and create the sprite: 0 0x5dc/00411610,
 * 1 0x60/0050c0b0, 2 0x94/0043b930, 3 0x34c/0044e850, 4 0x78/004ef6f0, 7 0047cbd0(), 8 0x58/004ba150,
 * 9 0x148/004acf00 (Storm SMemAlloc "storm.h" line 0x3ef, then the ctor; NULL on alloc failure), anything else logs
 * "Unrecognized sprite type" and reuses the previous object (NULL at first, as in the original). Then
 * obj+0x40 = this and obj->vtbl[0x28](fp). Finally, if (byte)DAT_005787c8, 004d05e0(DAT_005a7b78, DAT_005787c8,
 * DAT_005787cc). Returns 1. (The original's C++ EH frame only frees the allocation if a ctor throws; omitted.) */
#include "lom.h"

#define DAT_005787c8 (*(uint *)0x005787c8)
#define DAT_005787cc (*(int **)0x005787cc)
#define DAT_005a7b78 (*(void **)0x005a7b78)
#define FUN_004f5d20 ((void (__fastcall *)(void *))0x004f5d20)
#define FUN_005397f0 ((uint (__cdecl *)(void *, uint, uint, int *))0x005397f0) /* fread */
#define FUN_0047cbd0 ((int * (__stdcall *)(void))0x0047cbd0)
#define FUN_005047d0 ((void (__thiscall *)(void *, const char *))0x005047d0)
#define FUN_004d05e0 ((void (__thiscall *)(void *, uint, int *))0x004d05e0)
#define Ordinal_401 ((void * (__stdcall *)(int, const char *, int, int))0x00533864) /* Storm SMemAlloc */
typedef int * (__fastcall *ctor_t)(void *);

#define LOM_SELF_004f73e0 1
undefined4 __thiscall rb_004f73e0(void *this, int *fp, int count)
{
  int i;
  uint type;
  int *obj;
  void *mem;
  int size;
  ctor_t ctor;

  if (fp == 0) return 0;
  if (count == 0) FUN_004f5d20(this);
  FUN_005397f0(&count, 4, 1, fp);
  obj = 0;
  for (i = 0; i < count; i = i + 1) {
    FUN_005397f0(&type, 4, 1, fp);
    size = 0;
    ctor = 0;
    switch (type) {
    case 0: size = 0x5dc; ctor = (ctor_t)0x00411610; break;
    case 1: size = 0x60; ctor = (ctor_t)0x0050c0b0; break;
    case 2: size = 0x94; ctor = (ctor_t)0x0043b930; break;
    case 3: size = 0x34c; ctor = (ctor_t)0x0044e850; break;
    case 4: size = 0x78; ctor = (ctor_t)0x004ef6f0; break;
    case 7: obj = FUN_0047cbd0(); break;
    case 8: size = 0x58; ctor = (ctor_t)0x004ba150; break;
    case 9: size = 0x148; ctor = (ctor_t)0x004acf00; break;
    default:
      FUN_005047d0((void *)0x00584ae8, (const char *)0x0055b550); /* "Unrecognized sprite type" */
      break;
    }
    if (ctor != 0) {
      mem = Ordinal_401(size, (const char *)0x00555130, 0x3ef, 0);
      obj = (mem != 0) ? ctor(mem) : 0;
    }
    obj[0x10] = (int)this;
    ((void (__thiscall *)(void *, int *))(*(void **)(*obj + 0x28)))(obj, fp);
  }
  if ((byte)DAT_005787c8 != 0) {
    FUN_004d05e0(DAT_005a7b78, DAT_005787c8, DAT_005787cc);
  }
  return 1;
}
