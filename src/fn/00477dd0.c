/* Rebuilt from lomse.exe @ 0x00477dd0 (__cdecl int(char **)): read the lobby session name.
 * Frees the old DAT_005832d8 copy (SMemFree), DirectPlayLobbyCreateA, GetConnectionSettings size probe
 * (DPERR_BUFFERTOOSMALL) + GlobalAlloc/GlobalLock buffer, second GetConnectionSettings; on success copies
 * lpSessionDesc->lpszSessionNameA into a new SMemAlloc block (DAT_005832d8, *out). Releases the lobby and frees the
 * buffer (GlobalHandle/GlobalUnlock/GlobalFree). Hand-written from the disassembly. Behaviour-match, not byte-match. */
#include "lom.h"

#define GlobalAlloc (*(__typeof__(HGLOBAL (__stdcall *)(UINT, SIZE_T)) *)0x0054d0c8) /* KERNEL32.DLL!GlobalAlloc via IAT */
#define GlobalLock (*(__typeof__(LPVOID (__stdcall *)(HGLOBAL)) *)0x0054d0cc) /* KERNEL32.DLL!GlobalLock via IAT */
#define GlobalHandle (*(__typeof__(HGLOBAL (__stdcall *)(LPCVOID)) *)0x0054d05c) /* KERNEL32.DLL!GlobalHandle via IAT */
#define GlobalUnlock (*(__typeof__(BOOL (__stdcall *)(HGLOBAL)) *)0x0054d058) /* KERNEL32.DLL!GlobalUnlock via IAT */
#define GlobalFree (*(__typeof__(HGLOBAL (__stdcall *)(HGLOBAL)) *)0x0054d04c) /* KERNEL32.DLL!GlobalFree via IAT */
#define DAT_005832d8 (*(char **)0x005832d8)
#define Ordinal_401 ((void * (__stdcall *)(int, const char *, int, int))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 (SMemAlloc) */
#define Ordinal_403 ((int (__stdcall *)(void *, const char *, int, int))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 (SMemFree) */
#define FUN_00533846 ((int (__stdcall *)(void *, void *, void *, void *, int))0x00533846) /* DirectPlayLobbyCreateA */

typedef int (__stdcall *t_getconn)(void *, int, void *, int *);
typedef int (__stdcall *t_release)(void *);
#define VT(o, n) ((*(void ***)(o))[n])

#define LOM_SELF_00477dd0 1
int __cdecl rb_00477dd0(char **param_1)
{
  void *lobby;
  int size;
  int ok = 1;
  char *buf, *name, *d;
  int n, i;

  if (DAT_005832d8 != 0) Ordinal_403(DAT_005832d8, (const char *)0x00555130, 0x3eb, 0);
  if (FUN_00533846(0, &lobby, 0, 0, 0) < 0) return 0;
  if (((t_getconn)VT(lobby, 8))(lobby, 0, 0, &size) != (int)0x8877001e) {
    ((t_release)VT(lobby, 2))(lobby);
    return 0;
  }
  buf = (char *)GlobalLock(GlobalAlloc(0x42, size));
  if (buf == 0) {
    ((t_release)VT(lobby, 2))(lobby);
    return 0;
  }
  if (((t_getconn)VT(lobby, 8))(lobby, 0, buf, &size) < 0) ok = 0;
  if (ok != 0) {
    name = *(char **)(*(int *)(buf + 8) + 0x30);
    if (name != 0) {
      n = 0;
      while (name[n] != 0) n++;
      n = n + 1;
      d = (char *)Ordinal_401(n, (const char *)0x00555130, 0x3fa, 0);
      DAT_005832d8 = d;
      name = *(char **)(*(int *)(buf + 8) + 0x30);
      for (i = 0; i < n; i++) d[i] = name[i];
      *param_1 = DAT_005832d8;
    }
  }
  ((t_release)VT(lobby, 2))(lobby);
  GlobalUnlock(GlobalHandle(buf));
  GlobalFree(GlobalHandle(buf));
  return ok;
}
