/* Rebuilt from lomse.exe FUN_0047d1a0 @ 0x0047d1a0 (780 bytes, __thiscall, plain ret): object world-position update
 * (bilinear height interpolation + 00469ae0 projection). Hand C from the asm (x87 sequence kept in extended precision). */
#include "lom.h"

#define F4f6760 ((void (__thiscall *)(void *, void *))0x004f6760)
#define F4a5210 ((float10 (__thiscall *)(void *, int, int))0x004a5210)
#define F469ae0 ((void (__thiscall *)(void *, void *))0x00469ae0)
#define F4f6000 ((int (__thiscall *)(void *, int))0x004f6000)
#define F47ced0 ((float10 (__thiscall *)(void *, int))0x0047ced0)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */
#define I32(a) (*(int *)(a))
#define F32(a) (*(float *)(a))

#define LOM_SELF_0047d1a0 1
void __thiscall rb_0047d1a0(void *this)
{
  char *th = (char *)this;
  int rem, quot, ix, iy, h1, h2;
  float fVar3, fVar4, fs0, fs, f8f;
  float10 Z, f8, v, bot, top, res;
  volatile float P34, P38, P3c, P40;
  volatile double u;
  float buf[6];
  int dummy[8];
  if (I32(th + 0x2c) == 0) return;
  rem = I32(th + 0x1c) % I32(0x5ae9c4);
  quot = I32(th + 0x1c) / I32(0x5ae9c4);
  F4f6760(this, dummy);
  {
    int V = I32(th + 0x78), W = I32(th + 0x7c);
    if (V < W) {
      int k = I32(th + 0x74) * 4;
      int Ax = I32(0x55b090 + k) + rem;
      int Ay = I32(0x55b0b0 + k) + quot;
      float10 C = (float10)F32(0x54d9b8);
      float10 a1 = (float10)Ax - C;
      volatile float a1f = (float)a1;
      float10 y1 = (float10)Ay - C;
      volatile float y1f = (float)y1;
      float10 q1 = (float10)quot - C;
      float10 r1 = (float10)rem - C;
      float10 d1 = r1 - (float10)a1f;
      float10 d2 = q1 - (float10)y1f;
      volatile float Vf = (float)V;
      volatile float Wf = (float)W;
      float10 d1V = d1 * (float10)Vf;
      float10 d2V = d2 * (float10)Vf;
      float10 e1 = d1V / (float10)Wf;
      float10 e2 = d2V / (float10)Wf;
      float10 X1 = (e1 + (float10)F32(th + 0x6c)) + (float10)a1f;
      float10 Y1 = (e2 + (float10)F32(th + 0x70)) + (float10)y1f;
      fVar3 = (float)X1;
      fVar4 = (float)Y1;
    } else {
      float10 C = (float10)F32(0x54d9b8);
      float10 X = ((float10)rem + (float10)F32(th + 0x6c)) - C;
      float10 Y = ((float10)quot + (float10)F32(th + 0x70)) - C;
      fVar3 = (float)X;
      fVar4 = (float)Y;
    }
  }
  iy = (int)__ftol(fVar4);
  ix = (int)__ftol(fVar3);
  P34 = (float)F4a5210((void *)0x5ae958, ix, iy);
  P38 = (float)F4a5210((void *)0x5ae958, ix + 1, iy);
  P3c = (float)F4a5210((void *)0x5ae958, ix, iy + 1);
  P40 = (float)F4a5210((void *)0x5ae958, ix + 1, iy + 1);
  {
    int D4 = I32(0x5ae9b4), D8 = I32(0x5ae9b8);
    float c2 = F32(0x54d9bc);
    fs0 = fVar3;
    if (!(fVar3 >= c2)) fs0 = (float)((float10)D4 + (float10)fVar3);
    if (!(fVar4 >= c2)) Z = (float10)D8 + (float10)fVar4;
    else Z = (float10)fVar4;
    {
      int I1 = (int)__ftol(fs0);
      fs = (float)((float10)fs0 - (float10)I1);
    }
    {
      int I2 = (int)__ftol(Z);
      f8 = Z - (float10)I2;
    }
    f8f = (float)f8;
    h1 = D4 / 2;
    h2 = D8 / 2;
    u = (double)((float10)(*(double *)0x54d9c0) - (float10)fs);
    v = (float10)(*(double *)0x54d9c0) - f8;
    bot = (float10)P3c * (float10)u + (float10)fs * (float10)P40;
    top = (float10)P34 * (float10)u + (float10)fs * (float10)P38;
    res = v * top + bot * (float10)f8f;
    buf[0] = (float)((float10)fVar3 - (float10)h1);
    buf[1] = (float)((float10)fVar4 - (float10)h2);
    buf[2] = (float)res;
  }
  F469ae0((void *)0x5876d0, buf);
  I32(th + 0xc) = (int)__ftol(buf[3]);
  I32(th + 0x10) = (int)__ftol(buf[4]);
  F32(th + 8) = buf[5];
  if (*(char *)0x583100 == 2 && I32(0x5ae92c) != -1 && *(char *)0x5ae935 == 7) {
    int o = F4f6000((void *)0x5ae974, I32(0x5ae92c));
    if (o != 0) F32(th + 8) = (float)F47ced0(this, I32(o + 0x1c));
  }
}
