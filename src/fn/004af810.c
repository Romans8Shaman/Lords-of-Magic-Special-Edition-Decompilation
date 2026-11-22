/* Hand-fixed from lomse.exe 0x004af810 (op_launchmissile, __cdecl(void *vm), 1443 bytes, plain ret).
 * Ghidra C was bitcast-REJECTED (float/uint overlays of the same stack slots). Here the whole 0x6c-byte frame is one dword array f[]
 * (f[k] = esp_after_sub + 4k, exactly the asm layout) so every out-pointer passed to the script argument reader 004026a0 is the
 * same slot as in the original; the record passed to 004ad860 is &f[4]. 0040adb0(vm,&rec) + 004026a0(rec,p1,p2,p3) read the next
 * script argument; reads #1-#6 failing -> bad-args path (0x90=0xe, 004d4550, 0x90=0xa4=0); #7..#18 failing -> 00404ab0(vm,0xe).
 * The param slot itself is reused as an out float (x K_dbc0 -> f[14]). */
#include "lom.h"

#define LOM_SELF_004af810 1
#define FUN_0040adb0 ((void (__thiscall *)(void *, void *))0x0040adb0)
#define FUN_004026a0 ((int (__cdecl *)(void *, void *, void *, void *))0x004026a0)
#define FUN_00404ab0 ((int (__thiscall *)(void *, int))0x00404ab0)
#define FUN_004d4550 ((void (__thiscall *)(void *))0x004d4550)
#define FUN_0043da90 ((int (__thiscall *)(void *, void *))0x0043da90)
#define FUN_004f6000 ((int * (__thiscall *)(void *, int))0x004f6000)
#define FUN_00485080 ((int * (__thiscall *)(void *, int, int))0x00485080)
#define FUN_004d41c0 ((int (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004b0230 ((int (__thiscall *)(void *, int))0x004b0230)
#define FUN_0041efa0 ((void (__thiscall *)(void *, int))0x0041efa0)
#define FUN_004ad860 ((int (__thiscall *)(void *, void *))0x004ad860)
#define K_dbc0 (*(float *)0x0054dbc0)
#define DAT_005ae9c0 (*(int *)0x005ae9c0)

int __cdecl rb_004af810(void *vmp)
{
  unsigned f[27];
  void *vm = vmp;
  int *ob, *ob2, *os, *od, *e;
  FUN_0040adb0(vm, &f[2]);
  if (!FUN_004026a0(&f[2], &f[26], &f[1], &f[0])) goto fail1;
  FUN_0040adb0(vm, &f[2]);
  if (!FUN_004026a0(&f[2], &f[0], &f[1], &f[25])) goto fail1;
  FUN_0040adb0(vm, &f[2]);
  if (!FUN_004026a0(&f[2], &f[0], &f[1], &f[24])) goto fail1;
  f[23] = 0xffffffff;
  FUN_0040adb0(vm, &f[2]);
  if (!FUN_004026a0(&f[2], &f[22], &f[0], &f[1])) goto fail1;
  FUN_0040adb0(vm, &f[2]);
  if (!FUN_004026a0(&f[2], &f[21], &f[0], &f[1])) goto fail1;
  FUN_0040adb0(vm, &f[2]);
  if (!FUN_004026a0(&f[2], &f[6], &f[0], &f[1])) goto fail1;
  FUN_0040adb0(vm, &f[2]);
  if (!FUN_004026a0(&f[2], &f[0], &f[1], &f[5])) return FUN_00404ab0(vm, 0xe);
  FUN_0040adb0(vm, &f[2]);
  if (!FUN_004026a0(&f[2], &f[4], &f[0], &f[1])) return FUN_00404ab0(vm, 0xe);
  FUN_0040adb0(vm, &f[2]);
  if (!FUN_004026a0(&f[2], &f[16], &f[0], &f[1])) return FUN_00404ab0(vm, 0xe);
  FUN_0040adb0(vm, &f[2]);
  if (!FUN_004026a0(&f[2], &f[17], &f[0], &f[1])) return FUN_00404ab0(vm, 0xe);
  if (!FUN_0043da90(vm, &f[15])) return 0;
  FUN_0040adb0(vm, &f[2]);
  if (!FUN_004026a0(&f[2], &f[0], &f[1], &vmp)) return FUN_00404ab0(vm, 0xe);
  *(float *)&f[14] = *(float *)&vmp * K_dbc0;
  FUN_0040adb0(vm, &f[2]);
  if (!FUN_004026a0(&f[2], &f[0], &f[1], &f[13])) return FUN_00404ab0(vm, 0xe);
  FUN_0040adb0(vm, &f[2]);
  if (!FUN_004026a0(&f[2], &f[19], &f[0], &f[1])) return FUN_00404ab0(vm, 0xe);
  FUN_0040adb0(vm, &f[2]);
  if (!FUN_004026a0(&f[2], &f[18], &f[0], &f[1])) return FUN_00404ab0(vm, 0xe);
  FUN_0040adb0(vm, &f[2]);
  if (!FUN_004026a0(&f[2], &f[12], &f[0], &f[1])) return FUN_00404ab0(vm, 0xe);
  FUN_0040adb0(vm, &f[2]);
  if (!FUN_004026a0(&f[2], &f[20], &f[0], &f[1])) return FUN_00404ab0(vm, 0xe);
  FUN_0040adb0(vm, &f[2]);
  if (!FUN_004026a0(&f[2], &f[11], &f[0], &f[1])) return FUN_00404ab0(vm, 0xe);
  FUN_0040adb0(vm, &f[2]);
  if (!FUN_004026a0(&f[2], &f[10], &f[0], &f[1])) return FUN_00404ab0(vm, 0xe);
  if (!FUN_0043da90(vm, &f[8])) return 0;
  if (!FUN_0043da90(vm, &f[7])) return 0;

  ob = FUN_004f6000((void *)0x005ae974, (int)f[7]);
  ob2 = FUN_004f6000((void *)0x005ae974, (int)f[10]);
  os = FUN_00485080((void *)0x005aa12c, (int)f[7], 0x2f);
  od = FUN_00485080((void *)0x005aa12c, (int)f[10], 0x2f);
  f[0] = (unsigned)od;
  if (os != 0 && (int)f[8] >= 0 && (int)f[8] < os[0x13]) f[9] = (unsigned)os[((int)f[8] + 3) * 0x13];
  else f[9] = 0xffffffff;
  if (ob != 0 && (int)f[4] < 0) f[4] = (unsigned)ob[7];
  if (ob2 != 0 && (int)f[6] < 0) f[6] = (unsigned)ob2[7];
  if ((int)f[4] < 0 || DAT_005ae9c0 <= (int)f[4]) { return FUN_004d41c0(vm, (char *)0x0055cd14); }
  if (FUN_004b0230((void *)0x005ae958, (int)f[6]) == 0) { return FUN_004d41c0(vm, (char *)0x0055ccec); }
  if (os == 0) f[15] |= 0x10000;
  if (od == 0) f[15] |= 0x20000;
  if ((int)f[18] >= 0 && os != 0) FUN_0041efa0(os, (int)f[18]);
  return FUN_004ad860((void *)0x005aa12c, &f[4]);
fail1:
  *(int *)((char *)vm + 0x90) = 0xe;
  FUN_004d4550(vm);
  *(int *)((char *)vm + 0x90) = 0;
  *(int *)((char *)vm + 0xa4) = 0;
  return 0;
}
