/* Rebuilt from lomse.exe FUN_005432b0 @ 0x005432b0 (158 bytes). HAND (2026-11-13, was asmfn):
 * CRT _setargv: GetModuleFileNameA(0, _pgmname, 260); _pgmptr = _pgmname; cmd = *_acmdln ? _acmdln : _pgmname;
 * parse_cmdline(cmd, 0, 0, &numargs, &numchars); argv = _malloc_crt(numargs*4 + numchars) (_amsg_exit(8) if 0);
 * parse_cmdline(cmd, argv, (char *)(argv + numargs), &numargs, &numchars); __argv = argv; __argc = numargs - 1.
 * eax on return = numargs - 1 (the original returns with it still loaded). */
#include "lom.h"

#define GetModuleFileNameA_r (*(__typeof__(uint (__stdcall *)(void *, char *, uint)) *)0x0054d048)
#define FUN_00543350 ((void (__cdecl *)(char *, char **, char *, int *, int *))0x00543350)
#define FUN_0053c1f0 ((char **(__cdecl *)(uint))0x0053c1f0)
#define FUN_0053c470 ((void (__cdecl *)(int))0x0053c470)
#define DAT_005d5560 ((char *)0x005d5560)
#define DAT_005d52e0 (*(char *volatile *)0x005d52e0)
#define DAT_005d6b38 (*(char *volatile *)0x005d6b38)
#define DAT_005d52c8 (*(char **volatile *)0x005d52c8)
#define DAT_005d52c4 (*(volatile int *)0x005d52c4)

#define LOM_SELF_005432b0 1
int __cdecl rb_005432b0(void)
{
  int numargs, numchars;
  char *cmd;
  char **argv;
  GetModuleFileNameA_r(0, DAT_005d5560, 0x104);
  cmd = DAT_005d6b38;
  DAT_005d52e0 = DAT_005d5560;
  if (*cmd == 0) cmd = DAT_005d5560;
  FUN_00543350(cmd, 0, 0, &numargs, &numchars);
  argv = FUN_0053c1f0(numargs * 4 + numchars);
  if (argv == 0) FUN_0053c470(8);
  FUN_00543350(cmd, argv, (char *)(argv + numargs), &numargs, &numchars);
  DAT_005d52c8 = argv;
  DAT_005d52c4 = numargs - 1;
  return numargs - 1;
}
