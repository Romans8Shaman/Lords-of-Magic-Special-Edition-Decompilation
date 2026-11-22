/* Rebuilt from lomse.exe FUN_00539580 @ 0x00539580 (73 bytes). HAND (2026-11-13, was asmfn):
 * CRT fprintf(stream, fmt, ...): _lock_file2; flag = _stbuf(stream); r = _output(stream, fmt, &args);
 * _ftbuf(flag, stream); _unlock_file2; return r. */
#include "lom.h"
#include <stdarg.h>

#define FUN_0053cc50 ((void (__cdecl *)(void *))0x0053cc50)
#define FUN_0053cef0 ((int (__cdecl *)(void *))0x0053cef0)
#define FUN_0053cff0 ((int (__cdecl *)(void *, const char *, va_list))0x0053cff0)
#define FUN_0053cfb0 ((void (__cdecl *)(int, void *))0x0053cfb0)
#define FUN_0053ccc0 ((void (__cdecl *)(void *))0x0053ccc0)

#define LOM_SELF_00539580 1
int __cdecl rb_00539580(void *stream, const char *fmt, ...)
{
  va_list ap;
  int flag, r;
  FUN_0053cc50(stream);
  flag = FUN_0053cef0(stream);
  va_start(ap, fmt);
  r = FUN_0053cff0(stream, fmt, ap);
  FUN_0053cfb0(flag, stream);
  FUN_0053ccc0(stream);
  return r;
}
