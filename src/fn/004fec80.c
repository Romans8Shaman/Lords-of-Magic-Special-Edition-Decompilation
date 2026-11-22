/* Rebuilt from lomse.exe FUN_004fec80 @ 0x004fec80 (197 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match.
 * v1.2: if HKLM\\SOFTWARE\\Sierra OnLine\\Setup\\LOMSE CDPath is missing,
 * fall back to the directory of this exe so no install-registry keys are required.
 * v1.6: if a registry CDPath is present but has no special.mpq/sndfx.mpq
 * (Steam's installscript writes cdpath=c:\\), ignore it and use the exe
 * folder (or exe\\English\\). Then SetCurrentDirectory there, like vanilla
 * chdir-to-CDPath, but never to a bare drive that would prompt for a CD.
 * Also writes lomse_sa_audio.log next to the exe (path/cwd/DirectSound notes).
 * v1.7: v16_audio_log_i for signed decimal (volumes / gates). */
#include "lom.h"

#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define Ordinal_266 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x005338ee) /* thunk -> STORM.DLL!Ordinal_266 */
#define RegCloseKey (*(__typeof__(LSTATUS (__stdcall *)(HKEY)) *)0x0054d000) /* ADVAPI32.DLL!RegCloseKey via IAT */
#define RegOpenKeyExA (*(__typeof__(LSTATUS (__stdcall *)(HKEY, LPCSTR, DWORD, REGSAM, PHKEY)) *)0x0054d008) /* ADVAPI32.DLL!RegOpenKeyExA via IAT */
#define RegQueryValueExA (*(__typeof__(LSTATUS (__stdcall *)(HKEY, LPCSTR, LPDWORD, LPDWORD, LPBYTE, LPDWORD)) *)0x0054d004) /* ADVAPI32.DLL!RegQueryValueExA via IAT */
#define GetModuleFileNameA (*(__typeof__(DWORD (__stdcall *)(HMODULE, LPSTR, DWORD)) *)0x0054d048) /* KERNEL32.DLL!GetModuleFileNameA via IAT */
#define GetCurrentDirectoryA (*(__typeof__(DWORD (__stdcall *)(DWORD, LPSTR)) *)0x0054d1f4) /* KERNEL32.DLL!GetCurrentDirectoryA via IAT */
#define SetCurrentDirectoryA (*(__typeof__(BOOL (__stdcall *)(LPCSTR)) *)0x0054d1f8) /* KERNEL32.DLL!SetCurrentDirectoryA via IAT */
#define CreateFileA (*(__typeof__(HANDLE (__stdcall *)(LPCSTR, DWORD, DWORD, LPVOID, DWORD, DWORD, HANDLE)) *)0x0054d06c)
#define WriteFile (*(__typeof__(BOOL (__stdcall *)(HANDLE, LPCVOID, DWORD, LPDWORD, LPVOID)) *)0x0054d0fc)
#define CloseHandle (*(__typeof__(BOOL (__stdcall *)(HANDLE)) *)0x0054d054)
#define SetFilePointer (*(__typeof__(DWORD (__stdcall *)(HANDLE, LONG, PLONG, DWORD)) *)0x0054d178)
#define FUN_00539610 ((undefined4 (__cdecl *)(LPCSTR, char *))0x00539610)
#define FUN_005394d0 ((undefined4 (__cdecl *)(int *))0x005394d0)
#define DAT_005572ec (*(undefined *)0x005572ec)
#define _strrchr ((char * (__cdecl *)(char *, int))0x0053aa70)
#define s_CDPath_00573498 (*(char (*)[])0x00573498)
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)
#define s_SOFTWARE_Sierra_OnLine_Setup_LOM_005734a0 (*(char (*)[])0x005734a0)
#define s_special_mpq_005734d0 (*(char (*)[])0x005734d0)

static void v16_cpy(char *dst, char *src)
{
  while (*src != 0) {
    *dst = *src;
    dst = dst + 1;
    src = src + 1;
  }
  *dst = 0;
}

static uint v16_len(char *s)
{
  uint n;
  n = 0;
  if (s == (char *)0x0) {
    return 0;
  }
  while (s[n] != 0) {
    n = n + 1;
  }
  return n;
}

void v16_fill_exe_dir(char *path)
{
  DWORD n;
  char *slash;
  path[0] = 0;
  n = GetModuleFileNameA((HMODULE)0, path, 260);
  if (n == 0) {
    return;
  }
  slash = _strrchr(path, 0x5c);
  if (slash != (char *)0x0) {
    slash[1] = 0;
  }
}

static int v16_file_in_dir(char *dir, char *name)
{
  char path[260];
  uint i;
  int *h;
  i = 0;
  if (dir == (char *)0x0) {
    return 0;
  }
  while ((dir[i] != 0) && (i < 240)) {
    path[i] = dir[i];
    i = i + 1;
  }
  if ((i != 0) && (path[i - 1] != '\\') && (path[i - 1] != '/')) {
    path[i] = '\\';
    i = i + 1;
  }
  while (*name != 0) {
    if (250 < i) {
      return 0;
    }
    path[i] = *name;
    i = i + 1;
    name = name + 1;
  }
  path[i] = 0;
  h = (int *)FUN_00539610(path, &DAT_005572ec);
  if (h == (int *)0x0) {
    return 0;
  }
  FUN_005394d0(h);
  return 1;
}

int v16_mpq_present_in_dir(char *dir)
{
  if (v16_file_in_dir(dir, "special.mpq") != 0) {
    return 1;
  }
  if (v16_file_in_dir(dir, "sndfx.mpq") != 0) {
    return 1;
  }
  return 0;
}

int v16_storm_open_exedir(char *name, undefined4 param_2)
{
  char path[260];
  char *slash;
  uint i;
  v16_fill_exe_dir(path);
  if (path[0] == 0) {
    return 0;
  }
  i = v16_len(path);
  v16_cpy(path + i, name);
  if (Ordinal_266(path, 1, 0, param_2) != 0) {
    return 1;
  }
  /* exe is at the game root: try English\\name */
  v16_fill_exe_dir(path);
  i = v16_len(path);
  v16_cpy(path + i, "English\\");
  i = v16_len(path);
  v16_cpy(path + i, name);
  if (Ordinal_266(path, 1, 0, param_2) != 0) {
    return 1;
  }
  return 0;
}

void v16_audio_log(char *msg)
{
  char path[260];
  char *slash;
  HANDLE h;
  DWORD w;
  uint n;
  v16_fill_exe_dir(path);
  if (path[0] == 0) {
    return;
  }
  n = v16_len(path);
  v16_cpy(path + n, "lomse_sa_audio.log");
  h = CreateFileA(path, 0x40000000, 1, (LPVOID)0x0, 4, 0x80, (HANDLE)0x0);
  /* GENERIC_WRITE=0x40000000, FILE_SHARE_READ=1, OPEN_ALWAYS=4, FILE_ATTRIBUTE_NORMAL=0x80 */
  if (h == (HANDLE)0xffffffff) {
    return;
  }
  SetFilePointer(h, 0, (PLONG)0x0, 2);
  n = v16_len(msg);
  if (0 < n) {
    WriteFile(h, msg, n, &w, (LPVOID)0x0);
  }
  WriteFile(h, "\r\n", 2, &w, (LPVOID)0x0);
  CloseHandle(h);
}

void v16_audio_log_hr(char *msg, int hr)
{
  char buf[300];
  uint i;
  uint n;
  uint u;
  char *p;
  n = v16_len(msg);
  if (280 < n) {
    n = 280;
  }
  for (i = 0; i < n; i = i + 1) {
    buf[i] = msg[i];
  }
  buf[n] = ' ';
  buf[n + 1] = '0';
  buf[n + 2] = 'x';
  p = buf + n + 3;
  u = (uint)hr;
  i = 8;
  while (i != 0) {
    i = i - 1;
    p[i] = "0123456789abcdef"[(u & 0xf)];
    u = u >> 4;
  }
  p[8] = 0;
  v16_audio_log(buf);
}

void v16_audio_log_i(char *msg, int v)
{
  char buf[300];
  char tmp[12];
  uint i;
  uint n;
  uint u;
  int t;
  n = v16_len(msg);
  if (260 < n) {
    n = 260;
  }
  for (i = 0; i < n; i = i + 1) {
    buf[i] = msg[i];
  }
  buf[n] = ' ';
  n = n + 1;
  if (v < 0) {
    if (v == (int)0x80000000) {
      v16_audio_log_hr(msg, v);
      return;
    }
    buf[n] = '-';
    n = n + 1;
    u = (uint)(0 - v);
  }
  else {
    u = (uint)v;
  }
  if (u == 0) {
    buf[n] = '0';
    buf[n + 1] = 0;
    v16_audio_log(buf);
    return;
  }
  t = 0;
  while (u != 0) {
    tmp[t] = (char)('0' + (u % 10));
    t = t + 1;
    u = u / 10;
  }
  while (t != 0) {
    t = t - 1;
    buf[n] = tmp[t];
    n = n + 1;
  }
  buf[n] = 0;
  v16_audio_log(buf);
}

static void v16_set_path_from_dir(int param_1, char *dir)
{
  LPBYTE lpData;
  uint i;
  uint len;
  if (*(int *)(param_1 + 0x110) != 0) {
    Ordinal_403(*(int *)(param_1 + 0x110), s_C__lomse_source_storm_h_00555130, 0x3f6, 0);
    *(undefined4 *)(param_1 + 0x110) = 0;
  }
  len = v16_len(dir);
  if ((len != 0) && (dir[len - 1] != '\\') && (dir[len - 1] != '/')) {
    /* store with trailing slash */
  }
  len = v16_len(dir) + 2;
  lpData = (LPBYTE)Ordinal_401(len, s_C__lomse_source_storm_h_00555130, 0x3fa, 0);
  *(LPBYTE *)(param_1 + 0x110) = lpData;
  if (lpData != (LPBYTE)0x0) {
    i = 0;
    while (dir[i] != 0) {
      lpData[i] = (BYTE)dir[i];
      i = i + 1;
    }
    if ((i != 0) && (lpData[i - 1] != '\\') && (lpData[i - 1] != '/')) {
      lpData[i] = (BYTE)'\\';
      i = i + 1;
    }
    lpData[i] = 0;
  }
}

#define LOM_SELF_004fec80 1
void __fastcall rb_004fec80(int param_1)

{
  LSTATUS LVar1;
  LPBYTE lpData;
  char exedir[260];
  char cwd[260];
  char english[280];
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef HKEY _t_local_c;
#define local_c (*(_t_local_c *)(_fr + 0x4))
  DWORD DStack_8;
  DWORD DStack_4;
  
  LVar1 = RegOpenKeyExA((HKEY)0x80000002,s_SOFTWARE_Sierra_OnLine_Setup_LOM_005734a0,0,0xf003f,
                        &local_c);
  if (LVar1 == 0) {
    if (*(int *)(param_1 + 0x110) != 0) {
      Ordinal_403(*(int *)(param_1 + 0x110),s_C__lomse_source_storm_h_00555130,0x3f6,0);
    }
    lpData = (LPBYTE)Ordinal_401(0x104,s_C__lomse_source_storm_h_00555130,0x3fa,0);
    *(LPBYTE *)(param_1 + 0x110) = lpData;
    DStack_8 = 0x104;
    LVar1 = RegQueryValueExA(local_c,s_CDPath_00573498,(LPDWORD)0x0,&DStack_4,lpData,&DStack_8);
    RegCloseKey(local_c);
    if (LVar1 != 0) {
      if (*(int *)(param_1 + 0x110) != 0) {
        Ordinal_403(*(int *)(param_1 + 0x110),s_C__lomse_source_storm_h_00555130,0x3f6,0);
      }
      *(undefined4 *)(param_1 + 0x110) = 0;
    }
    else {
      v16_audio_log("registry CDPath:");
      if (lpData != (LPBYTE)0x0) {
        v16_audio_log((char *)lpData);
      }
      /* v1.6: Steam writes CDPath=c:\\ which does not contain the MPQs. */
      if (v16_mpq_present_in_dir((char *)*(int *)(param_1 + 0x110)) == 0) {
        v16_audio_log("registry CDPath has no special.mpq/sndfx.mpq, ignoring");
        if (*(int *)(param_1 + 0x110) != 0) {
          Ordinal_403(*(int *)(param_1 + 0x110),s_C__lomse_source_storm_h_00555130,0x3f6,0);
        }
        *(undefined4 *)(param_1 + 0x110) = 0;
      }
    }
  }
  if (*(int *)(param_1 + 0x110) == 0) {
    v16_fill_exe_dir(exedir);
    if (v16_mpq_present_in_dir(exedir) != 0) {
      v16_set_path_from_dir(param_1, exedir);
      v16_audio_log("CDPath fallback: exe folder");
    }
    else {
      v16_cpy(english, exedir);
      v16_cpy(english + v16_len(english), "English\\");
      if (v16_mpq_present_in_dir(english) != 0) {
        v16_set_path_from_dir(param_1, english);
        v16_audio_log("CDPath fallback: exe\\English");
      }
      else {
        /* still record the exe folder so prefix opens have a chance */
        v16_set_path_from_dir(param_1, exedir);
        v16_audio_log("CDPath fallback: exe folder (no mpq seen yet)");
      }
    }
  }
  cwd[0] = 0;
  GetCurrentDirectoryA(260, cwd);
  v16_audio_log("cwd:");
  v16_audio_log(cwd);
  if (*(int *)(param_1 + 0x110) != 0) {
    v16_audio_log("using data path:");
    v16_audio_log(*(char **)(param_1 + 0x110));
    /* vanilla 004fed50 chdir'd to CDPath; do that only for a folder that has the MPQs */
    if (v16_mpq_present_in_dir(*(char **)(param_1 + 0x110)) != 0) {
      SetCurrentDirectoryA(*(LPCSTR *)(param_1 + 0x110));
      v16_audio_log("SetCurrentDirectory to data path");
    }
  }
  return;
#undef local_c
}
