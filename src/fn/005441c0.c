/* Rebuilt from lomse.exe FUN_005441c0 @ 0x005441c0 (139 bytes). HAND (2026-11-13, was asmfn):
 * CRT _fltout2(double x, STRFLT *flt, char *resultstr): __dtold(&ld, &x); flag = $I10_OUTPUT(ld, 17, 0, &fos);
 * flt->flag = flag; flt->decpt = fos.exp; flt->sign = fos.sign; strcpy(resultstr, fos.man); flt->mantissa = resultstr. */
#include "lom.h"

#define FUN_00544250 ((void (__cdecl *)(void *, void *))0x00544250)
#define FUN_005475b0 ((int (__cdecl *)(uint, uint, uint, int, int, void *))0x005475b0)

typedef struct { short exp; char sign; char manlen; char man[24]; } lom_fos_t;   /* _FloatOutStruct */

#define LOM_SELF_005441c0 1
int *__cdecl rb_005441c0(uint x_lo, uint x_hi, int *flt, char *res)
{
  uint ld[3];
  lom_fos_t fos;
  int flag, n;
  FUN_00544250(ld, &x_lo);
  flag = FUN_005475b0(ld[0], ld[1], ld[2], 0x11, 0, &fos);
  flt[2] = flag;
  flt[1] = fos.exp;
  flt[0] = fos.sign;
  for (n = 0; fos.man[n] != 0; n++) ;
  for (int i = 0; i <= n; i++) ((volatile char *)res)[i] = fos.man[i];
  flt[3] = (int)res;
  return flt;
}
