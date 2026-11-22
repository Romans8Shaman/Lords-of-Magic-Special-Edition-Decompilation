/* Rebuilt from lomse.exe FUN_004fec10 @ 0x004fec10 (101 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match.
 * v1.4: the Special Edition flag used to come only from
 * HKLM\SOFTWARE\Sierra OnLine\Setup\LOM value "Special". Steam's
 * installscript never writes that value (and only writes a useless
 * LOMSE CDPath=c:\). If the key is missing, the query fails, or the
 * value is 0, treat the build as retail when special.mpq is next to
 * the exe or in the current directory, so special.mpq is opened and
 * selection announcer speech (wav/warrior.wav, wav/O_Fth.wav, ...)
 * can be read from the archive rather than a CD loose-wav tree. */
#include "lom.h"

#define GetModuleFileNameA (*(__typeof__(DWORD (__stdcall *)(HMODULE, LPSTR, DWORD)) *)0x0054d048) /* KERNEL32.DLL!GetModuleFileNameA via IAT */
#define RegCloseKey (*(__typeof__(LSTATUS (__stdcall *)(HKEY)) *)0x0054d000) /* ADVAPI32.DLL!RegCloseKey via IAT */
#define RegOpenKeyExA (*(__typeof__(LSTATUS (__stdcall *)(HKEY, LPCSTR, DWORD, REGSAM, PHKEY)) *)0x0054d008) /* ADVAPI32.DLL!RegOpenKeyExA via IAT */
#define RegQueryValueExA (*(__typeof__(LSTATUS (__stdcall *)(HKEY, LPCSTR, LPDWORD, LPDWORD, LPBYTE, LPDWORD)) *)0x0054d004) /* ADVAPI32.DLL!RegQueryValueExA via IAT */
#define FUN_005394d0 ((undefined4 (__cdecl *)(int *))0x005394d0)
#define FUN_00539610 ((undefined4 * (__cdecl *)(LPCSTR, char *))0x00539610)
#define _strrchr ((char * (__cdecl *)(char *, int))0x0053aa70)
#define DAT_005572ec (*(undefined *)0x005572ec)
#define s_SOFTWARE_Sierra_OnLine_Setup_LOM_00573474 (*(char (*)[])0x00573474)
#define s_Special_0057346c (*(char (*)[])0x0057346c)
#define s_special_mpq_005734d0 (*(char (*)[])0x005734d0)

static int v14_file_present(LPCSTR path)
{
  undefined4 *fp;
  fp = FUN_00539610(path, (char *)&DAT_005572ec);
  if (fp == (undefined4 *)0x0) {
    return 0;
  }
  FUN_005394d0((int *)fp);
  return 1;
}

static int v14_special_mpq_present(void)
{
  char *slash;
  DWORD n;
  uchar _fr[0x110] __attribute__((aligned(8)));
  typedef char _t_path[260];
#define path (*(_t_path *)(_fr + 0x0))
  if (v14_file_present((LPCSTR)s_special_mpq_005734d0)) {
    return 1;
  }
  n = GetModuleFileNameA((HMODULE)0x0, path, 260);
  if ((n != 0) && (n < 260)) {
    slash = _strrchr(path, '\\');
    if (slash == (char *)0x0) {
      slash = _strrchr(path, '/');
    }
    if (slash != (char *)0x0) {
      /* append special.mpq after the trailing slash */
      {
        char *d;
        char *s;
        d = slash + 1;
        s = (char *)s_special_mpq_005734d0;
        while (*s != '\0') {
          *d = *s;
          d = d + 1;
          s = s + 1;
        }
        *d = '\0';
        if (v14_file_present(path)) {
          return 1;
        }
      }
    }
  }
  return 0;
#undef path
}

#define LOM_SELF_004fec10 1
undefined4 __stdcall rb_004fec10(void)

{
  LSTATUS LVar1;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef HKEY _t_local_10;
  typedef DWORD _t_local_c;
  typedef undefined4 _t_local_8;
  typedef DWORD _t_local_4;
#define local_10 (*(_t_local_10 *)(_fr + 0x0))
#define local_c (*(_t_local_c *)(_fr + 0x4))
#define local_8 (*(_t_local_8 *)(_fr + 0x8))
#define local_4 (*(_t_local_4 *)(_fr + 0xc))

  local_c = 4;
  local_8 = 0;
  LVar1 = RegOpenKeyExA((HKEY)0x80000002,s_SOFTWARE_Sierra_OnLine_Setup_LOM_00573474,0,0xf003f,
                        &local_10);
  if (LVar1 == 0) {
    LVar1 = RegQueryValueExA(local_10,s_Special_0057346c,(LPDWORD)0x0,&local_4,(LPBYTE)&local_8,&local_c);
    RegCloseKey(local_10);
    if ((LVar1 != 0) || (local_c != 4)) {
      local_8 = 0;
    }
  }
  if (local_8 != 0) {
    return local_8;
  }
  /* v1.4: no Special registry (Steam, missing Sierra keys) — if special.mpq
   * is present this is Lords of Magic Special Edition, not the demo. */
  if (v14_special_mpq_present() != 0) {
    return 1;
  }
  return 0;
#undef local_10
#undef local_c
#undef local_8
#undef local_4
}
