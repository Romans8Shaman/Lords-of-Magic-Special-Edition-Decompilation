/* HAND-WRITTEN: this->vt[0x48](this); find the session name (50-byte entries at this+0x134, count this->+0x2c8) that contains (strstr)
 * s_005568b8 after strncpy(buf, e, 0x80) + uppercase -> this->+0x49c = index; set flags d4/390/d0 = 1, 36c = 0; return this->+0x49c != -1. */
#include "lom.h"
#define FUN_0053a220 ((char * (__cdecl *)(char *, char *, uint))0x0053a220)
#define FUN_0053a5e0 ((char * (__cdecl *)(char *))0x0053a5e0)
#define FUN_0053a560 ((char * (__cdecl *)(char *, char *))0x0053a560)
#define LOM_SELF_0044a050 1
int __thiscall rb_0044a050(void *this)
{
  int b = (int)this, i = 0;
  char buf[0x80];
  char *e;
  (*(void (__thiscall **)(void *))(*(int *)this + 0x48))(this);
  if (*(int *)(b + 0x2c8) > 0) {
    e = (char *)(b + 0x134);
    do {
      FUN_0053a220(buf, e, 0x80);
      FUN_0053a5e0(buf);
      if (FUN_0053a560(buf, (char *)0x5568b8) != 0) { *(int *)(b + 0x49c) = i; break; }
      i++;
      e += 0x32;
    } while (i < *(int *)(b + 0x2c8));
  }
  *(int *)(b + 0xd4) = 1;
  *(int *)(b + 0x390) = 1;
  *(int *)(b + 0xd0) = 1;
  *(int *)(b + 0x36c) = 0;
  return *(int *)(b + 0x49c) != -1;
}
