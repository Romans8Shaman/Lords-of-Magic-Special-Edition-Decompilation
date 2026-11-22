/* Rebuilt from lomse.exe FUN_0045c9e0 @ 0x0045c9e0 (962 bytes, __fastcall(this)): combat -> world map reload.
 * Hand C written from the asm (Ghidra had hidden register args / extraout_var). Behaviour-match target. */
#include "lom.h"

#define TC(addr, ret, ...) ((ret (__thiscall *)(void *, ##__VA_ARGS__))addr)
#define F478a20 ((void (__thiscall *)(void *))0x00478a20)
#define F478fb0 ((void (__thiscall *)(void *))0x00478fb0)
#define F478ff0 ((void (__thiscall *)(void *))0x00478ff0)
#define F4fbe60 ((int (__thiscall *)(void *, int, int))0x004fbe60)
#define F4286d0 ((void (__thiscall *)(void *, int, int))0x004286d0)
#define F461ec0 ((void (__thiscall *)(void *))0x00461ec0)
#define F4b7dd0 ((int (__thiscall *)(void *))0x004b7dd0)
#define F4d09a0 ((void (__thiscall *)(void *, int, int, int))0x004d09a0)
#define F4a85f0 ((void (__thiscall *)(void *))0x004a85f0)
#define F4a8640 ((void (__thiscall *)(void *, uint))0x004a8640)
#define F488660 ((void (__thiscall *)(void *, uint, int))0x00488660)
#define F51a8c0 ((void (__thiscall *)(void *, int, int))0x0051a8c0)
#define F481610 ((void (__thiscall *)(void *, int))0x00481610)
#define F524230 ((void (__thiscall *)(void *))0x00524230)
#define F4af530 ((void (__thiscall *)(void *))0x004af530)
#define F4b0f10 ((void (__thiscall *)(void *))0x004b0f10)
#define F42e1b0 ((void (__thiscall *)(void *))0x0042e1b0)
#define F43c2e0 ((void (__thiscall *)(void *))0x0043c2e0)
#define F4f1890 ((void (__thiscall *)(void *))0x004f1890)
#define F50d110 ((void (__thiscall *)(void *))0x0050d110)
#define F519980 ((void (__thiscall *)(void *))0x00519980)
#define F495590 ((void (__thiscall *)(void *))0x00495590)
#define F4a4b00 ((void (__thiscall *)(void *, int))0x004a4b00)
#define F508b00 ((void (__thiscall *)(void *))0x00508b00)
#define F453ab0 ((int (__thiscall *)(void *))0x00453ab0)
#define F483120 ((int (__thiscall *)(void *, int))0x00483120)
#define F5047e0 ((void (__thiscall *)(void *, int, int, int))0x005047e0)
#define F4a6460 ((float10 (__fastcall *)(void *))0x004a6460)
#define F4a6400 ((void (__thiscall *)(void *, float))0x004a6400)
#define F469e80 ((void (__thiscall *)(void *, uint))0x00469e80)
#define F469bf0 ((void (__thiscall *)(void *))0x00469bf0)
#define F519a10 ((void (__thiscall *)(void *))0x00519a10)
#define F5000f0 ((void (__thiscall *)(void *, int))0x005000f0)
#define F51ab90 ((void (__thiscall *)(void *))0x0051ab90)
#define F4a6470 ((void (__thiscall *)(void *))0x004a6470)
#define F504ce0 ((void (__thiscall *)(void *, int, int))0x00504ce0)
#define F48a340 ((void (__thiscall *)(void *))0x0048a340)
#define F4b7410 ((void (__thiscall *)(void *, int, int, int))0x004b7410)
#define F45cdd0 ((void (__fastcall *)(void *))0x0045cdd0)
#define SMemFree ((int (__stdcall *)(int, int, int, int))0x0053385e)
#define W32(a) (*(unsigned int *)(a))
#define I32(a) (*(int *)(a))
#define U16(a) (*(unsigned short *)(a))

#define LOM_SELF_0045c9e0 1
int __fastcall rb_0045c9e0(void *param_1)
{
  char *th = (char *)param_1;
  int item, i, n, idx, cnt, flag, ptr, o;
  int *obj;
  F478a20((void *)0x585408);
  F478fb0((void *)0x585408);
  F478ff0((void *)0x585408);
  for (item = F4fbe60(th + 0x4848, 0, 0); item != 0; item = F4fbe60(th + 0x4848, item, 0)) {
    i = 0;
    while (i < I32(item + 0x4c)) {
      F4286d0((void *)(item + 0xc4 + i * 0x4c), I32(item + 0x28), i);
      i++;
    }
  }
  F461ec0(th);
  idx = I32(th + 0x658);
  if (idx < 0 || idx >= 0x10) ptr = 0;
  else ptr = (int)(th + 0x5068 + idx * 0x1d84);
  if (ptr != 0) {
    int a = I32(ptr + 0x15dc);
    int b;
    if (I32(0x5d1e84) == 0) b = 1;
    else b = F4b7dd0((void *)I32(0x5d1e84));
    if (a != b) ptr = 0;
  }
  flag = ptr;
  F4d09a0((void *)I32(0x5a7b78), I32(0x5a7c64), I32(0x5a7c68), 0);
  if (flag != 0) {
    cnt = 0;
    item = F4fbe60(th + 0x4848, 0, 0);
    while (item != 0 && I32(th + 0x230c0) == 0) {
      if ((W32(item + 0x30) & 0xd00) == 0) {
        n = I32(item + 0x4c);
        while (n > 0) {
          if (I32(item + 0x48) == I32(th + 0x6a8)) cnt++;
          n--;
        }
      }
      item = F4fbe60(th + 0x4848, item, 0);
    }
    if (cnt > 0) I32(th + 0x230c0) = 1;
    F4a85f0(th + 0x482c);
    F4a8640(th + 0x482c, U16(0x5cd1c0));
    F488660(th, U16(0x5cd1c0), I32(th + 0x230c0) != 0);
  }
  F51a8c0((void *)0x584ae8, 0, 0);
  F481610(th, I32(th + 0xa8));
  F524230((void *)0x5cd2ec);
  F4af530((void *)0x5cd2f8);
  F4b0f10((void *)0x5cd328);
  F42e1b0((void *)0x5cd334);
  F43c2e0((void *)0x5cd310);
  F4f1890((void *)0x5aee6c);
  F50d110((void *)0x5cd304);
  o = I32(0x58340c);
  while (o != 0) {
    I32(0x58340c) = I32(o + 0x3c);
    ((void (__thiscall *)(void *, int))(*(unsigned int **)o)[0])((void *)o, 1);
    o = I32(0x58340c);
  }
  I32(0x58340c) = 0;
  o = I32(0x5836f4);
  while (o != 0) {
    int r;
    I32(0x5836f4) = I32(o + 0x3c);
    r = ((int (__thiscall *)(void *, int))(*(unsigned int **)o)[0])((void *)o, 0);
    o = I32(0x5836f4);
    if (r != 0) {
      SMemFree(r, 0x555130, 0x3eb, 0);
      o = I32(0x5836f4);
    }
  }
  I32(0x5836f4) = 0;
  F519980((void *)0x5876d0);
  F495590((void *)0x587954);
  F4a4b00(th + 0x482c, 1);
  F508b00(th + 0x4904);
  n = F453ab0(th);
  if (F483120(th, n) == 0) {
    F5047e0((void *)0x584ae8, 0x5575c8, 0x555f64, 0);
    return 0;
  }
  I32(th + 0x4838) = 0x3f800000;
  {
    float10 v = F4a6460(th + 0x482c);
    F4a6400(th + 0x482c, (float)((float10)*(float *)(th + 0xac) - v));
  }
  F469e80((void *)0x5876d0, W32(th + 0xac));
  F469bf0((void *)0x5876d0);
  F519a10((void *)0x5876d0);
  I32(th + 0x4840) = 1;
  F5000f0((void *)0x584ae8, I32(th + 0xa8));
  I32(0x587874) = I32(0x5878f4);
  I32(0x587878) = I32(0x5878f8);
  F51ab90((void *)0x5876d0);
  F4a6470(th + 0x482c);
  F504ce0((void *)0x584ae8, 1, 0);
  F48a340((void *)0x584ae8);
  if (flag != 0) {
    F4b7410((void *)0x5cd358, 0x53, 0, -1);
    F45cdd0(th);
  }
  I32(th + 0x658) = -1;
  I32(th + 0x65c) = -1;
  return 1;
}
