/* Rebuilt from lomse.exe FUN_0047a8b0 @ 0x0047a8b0 (360 bytes, __thiscall, ret 8). HAND (2026-11-13, was asmfn):
 * Ghidra lost the second stack param (stack confusion). Real shape: (this, p1, p2).
 * If this+0x13b4 != 0, DAT_005a8078[DAT_005a7d8c*0x100] == 2, this+0x1374 > -2500 and the DirectSound buffer at
 * this+0x780 exists: GetStatus(&st); if (st & 5) (PLAYING|LOOPING) and slot this+0x790[p1*0x34+p2] != -1:
 * Stop/00478f60/Release the old buffer at this+0x784, then 00478570(this, p2, &this->0x784); on success roll
 * three rand()s: volume jitter (r*400/32768-200), pan (r*16000/32768-8000) and this+0x1380 = r*7/32768-3,
 * then new->SetVolume(old->GetVolume()+jitter), SetPan(pan), Play(0,0,0). */
#include "lom.h"

#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define FUN_00478570 ((int (__thiscall *)(void *, int, int **))0x00478570)
#define FUN_00478f60 ((undefined4 (__stdcall *)(int *))0x00478f60)
#define FUN_0053a110 ((int (__stdcall *)(void))0x0053a110) /* rand */

typedef int (__stdcall *com1_t)(int *);
typedef int (__stdcall *com2_t)(int *, int);
typedef int (__stdcall *com2p_t)(int *, int *);
typedef int (__stdcall *com4_t)(int *, int, int, int);
#define VT(o, off) (*(void **)(*(int *)(o) + (off)))

#define LOM_SELF_0047a8b0 1
void __thiscall rb_0047a8b0(void *this, int param_1, int param_2)
{
  int *buf;
  int **slot;
  int status;
  int vol;
  int r1;
  int r2;
  int r3;
  int jitter;
  int pan;

  if (*(int *)((int)this + 0x13b4) == 0) return;
  if (*(int *)(0x005a8078 + DAT_005a7d8c * 0x400) != 2) return;
  if (*(int *)((int)this + 0x1374) <= -0x9c4) return;
  buf = *(int **)((int)this + 0x780);
  if (buf == 0) return;
  ((com2p_t)VT(buf, 0x24))(buf, &status); /* GetStatus */
  if ((status & 5) == 0) return;
  if (*(int *)((int)this + (param_1 * 0x34 + param_2) * 4 + 0x790) == -1) return;
  slot = (int **)((int)this + 0x784);
  if (*slot != 0) {
    ((com1_t)VT(*slot, 0x48))(*slot); /* Stop */
    FUN_00478f60(*slot);
    ((com1_t)VT(*slot, 8))(*slot); /* Release */
    *slot = 0;
  }
  if (FUN_00478570(this, param_2, slot) == 0) return;
  r1 = FUN_0053a110();
  jitter = (r1 * 400) / 0x8000 - 200;
  r2 = FUN_0053a110();
  pan = (r2 * 16000) / 0x8000 - 8000;
  r3 = FUN_0053a110();
  *(int *)((int)this + 0x1380) = (r3 * 7) / 0x8000 - 3;
  buf = *(int **)((int)this + 0x780);
  ((com2p_t)VT(buf, 0x18))(buf, &vol); /* GetVolume */
  ((com2_t)VT(*slot, 0x3c))(*slot, vol + jitter); /* SetVolume */
  ((com2_t)VT(*slot, 0x40))(*slot, pan); /* SetPan */
  ((com4_t)VT(*slot, 0x30))(*slot, 0, 0, 0); /* Play */
}
