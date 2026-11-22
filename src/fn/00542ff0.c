/* Rebuilt from lomse.exe FUN_00542ff0 @ 0x00542ff0 (334 bytes, __cdecl). HAND (2026-11-13, was asmfn):
 * CRT _chsize(fh, size): lseek(fh,0,SEEK_CUR) then lseek(fh,0,SEEK_END). If size>end, _setmode(fh,_O_BINARY)
 * and _write zero pages until filled (or _write fails: if doserrno==ERROR_ACCESS_DENIED set errno=EACCES,
 * rc=-1), then restore the prior mode. If size<end, lseek(fh,size,SEEK_SET) and SetEndOfFile(_get_osfhandle(fh));
 * on failure errno=EACCES and doserrno=GetLastError(). Always restore the original file position.
 * Returns 0 on success, -1 on failure. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0053f600 ((DWORD (__cdecl *)(uint, LONG, DWORD))0x0053f600) /* _lseek */
#define FUN_0053df10 ((int (__cdecl *)(uint, char *, uint))0x0053df10) /* _write */
#define FUN_00542f00 ((undefined4 (__cdecl *)(uint))0x00542f00) /* _get_osfhandle */
#define FUN_00547040 ((int (__cdecl *)(uint, int))0x00547040) /* _setmode */
#define FUN_0053b4c0 ((DWORD *(__cdecl *)(void))0x0053b4c0) /* _errno */
#define FUN_0053b4d0 ((DWORD *(__cdecl *)(void))0x0053b4d0) /* _doserrno */
#define SetEndOfFile (*(__typeof__(BOOL (__stdcall *)(HANDLE)) *)0x0054d138)
#define GetLastError (*(__typeof__(DWORD (__stdcall *)(void)) *)0x0054d044)

#define LOM_SELF_00542ff0 1

int __cdecl rb_00542ff0(uint fh, int size)
{
  DWORD here;
  DWORD end;
  int rc;
  int leftover;
  int oldmode;
  char buf[0x1000];
  int i;
  uint n;
  int w;
  HANDLE h;

  rc = 0;
  here = FUN_0053f600(fh, 0, 1); /* SEEK_CUR */
  if (here == 0xffffffff) {
    return -1;
  }
  end = FUN_0053f600(fh, 0, 2); /* SEEK_END */
  if (end == 0xffffffff) {
    return -1;
  }
  leftover = size - (int)end;
  if (leftover > 0) {
    for (i = 0; i < 0x400; i = i + 1) {
      ((uint *)buf)[i] = 0;
    }
    oldmode = FUN_00547040(fh, 0x8000); /* _O_BINARY */
    for (;;) {
      n = 0x1000;
      if (leftover < 0x1000) {
        n = (uint)leftover;
      }
      w = FUN_0053df10(fh, buf, n);
      if (w == -1) {
        if (*FUN_0053b4d0() == 5) { /* ERROR_ACCESS_DENIED */
          *FUN_0053b4c0() = 0xd; /* EACCES */
        }
        rc = -1;
        break;
      }
      leftover = leftover - w;
      if (leftover <= 0) {
        break;
      }
    }
    FUN_00547040(fh, oldmode);
    FUN_0053f600(fh, (LONG)here, 0); /* SEEK_SET */
    return rc;
  }
  if (leftover < 0) {
    FUN_0053f600(fh, size, 0);
    h = (HANDLE)FUN_00542f00(fh);
    rc = (SetEndOfFile(h) != 0) - 1;
    if (rc == -1) {
      *FUN_0053b4c0() = 0xd;
      *FUN_0053b4d0() = GetLastError();
    }
  }
  FUN_0053f600(fh, (LONG)here, 0);
  return rc;
}
