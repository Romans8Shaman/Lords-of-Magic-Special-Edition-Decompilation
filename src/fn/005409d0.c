/* Hand-written from lomse.exe 0x005409d0 disassembly (MSVC CRT _XcptFilter, __cdecl(int xcptnum, EXCEPTION_POINTERS *p), plain ret).
 * ptd = _getptd(); entry = 00540be0(xcptnum, ptd->_pxcptacttab (+0x50)); no entry / no action -> UnhandledExceptionFilter(p);
 * action 5 (SIG_ACK) -> clear, return 1; action 1 (SIG_IGN) -> return -1; else swap ptd+0x54 (_tpxcptinfoptrs) with p; if the
 * entry's signal (+4) != 8 clear action, call action(sig) (cdecl) and return -1; for SIGFPE clear the action fields of the
 * FPE table rows [574e48, 574e48+574e4c), then map the exception code to a _FPE_* code in ptd+0x58 (_tfpecode),
 * call action(8, fpecode) (cdecl), restore both ptd fields, return -1. */
#include "lom.h"

#define FUN_0053efa0 ((int * (__stdcall *)(void))0x0053efa0)
#define FUN_00540be0 ((int * (__cdecl *)(int, int))0x00540be0)
#define DAT_00574e48 (*(volatile int *)0x00574e48)
#define DAT_00574e4c (*(volatile int *)0x00574e4c)
#define UnhandledExceptionFilter (*(__typeof__(LONG (__stdcall *)(_EXCEPTION_POINTERS *)) *)0x0054d154) /* KERNEL32.DLL!UnhandledExceptionFilter via IAT */

#define LOM_SELF_005409d0 1
int __cdecl rb_005409d0(int xcptnum, _EXCEPTION_POINTERS *ep)
{
  int *ptd = FUN_0053efa0();
  int *ent = FUN_00540be0(xcptnum, ptd[0x14]);
  void (__cdecl *act)();
  int oldptrs, oldfpe, code, i;
  if (ent == 0 || (act = (void (__cdecl *)())ent[2]) == 0)
    return UnhandledExceptionFilter(ep);
  if ((int)act == 5) { ent[2] = 0; return 1; }
  if ((int)act == 1) return -1;
  oldptrs = ptd[0x15];
  ptd[0x15] = (int)ep;
  if (ent[1] != 8) {
    ent[2] = 0;
    ((void (__cdecl *)(int))act)(ent[1]);
    ptd[0x15] = oldptrs;
    return -1;
  }
  if (DAT_00574e48 < DAT_00574e4c + DAT_00574e48) {
    i = DAT_00574e48;
    do {
      *(int *)(ptd[0x14] + 8 + i * 12) = 0;
      i++;
    } while (i < DAT_00574e4c + DAT_00574e48);
  }
  code = ent[0];
  oldfpe = ptd[0x16];
  if (code == (int)0xc000008e) ptd[0x16] = 0x83;
  else if (code == (int)0xc0000090) ptd[0x16] = 0x81;
  else if (code == (int)0xc0000091) ptd[0x16] = 0x84;
  else if (code == (int)0xc0000093) ptd[0x16] = 0x85;
  else if (code == (int)0xc000008d) ptd[0x16] = 0x82;
  else if (code == (int)0xc000008f) ptd[0x16] = 0x86;
  else if (code == (int)0xc0000092) ptd[0x16] = 0x8a;
  ((void (__cdecl *)(int, int))act)(8, ptd[0x16]);
  ptd[0x16] = oldfpe;
  ptd[0x15] = oldptrs;
  return -1;
}
