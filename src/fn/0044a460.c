/* Rebuilt from lomse.exe @ 0x0044a460 (__thiscall, ret 4): DirectPlayLobby connect.
 * DirectPlayLobbyCreateA (00533846) -> this+0x4a4; GetConnectionSettings size probe (vtbl[8], expects
 * DPERR_BUFFERTOOSMALL) + GlobalAlloc/GlobalLock buffer; fills the DPLCONNECTION (flags 2 join / 1 create), session
 * desc (allocated with only 4 bytes when absent but zeroed for 0x50 bytes, as the original does), SP guid from
 * this+0x394[this+0x49c]; when creating (param_1 == 0) builds an INet address from the string at this+0x41c with two
 * CreateAddress calls (vtbl[4]); SetConnectionSettings (vtbl[12]); Connect (vtbl[3]) -> this+0x4a0.
 * Hand-written from the disassembly. Behaviour-match target, not byte-match. */
#include "lom.h"

#define GlobalAlloc (*(__typeof__(HGLOBAL (__stdcall *)(UINT, SIZE_T)) *)0x0054d0c8) /* KERNEL32.DLL!GlobalAlloc via IAT */
#define GlobalLock (*(__typeof__(LPVOID (__stdcall *)(HGLOBAL)) *)0x0054d0cc) /* KERNEL32.DLL!GlobalLock via IAT */
#define DAT_005d1e84 (*(void **)0x005d1e84)
#define FUN_00505f10 ((int (__thiscall *)(void *))0x00505f10)
#define FUN_00533846 ((int (__stdcall *)(void *, void *, void *, void *, int))0x00533846) /* DirectPlayLobbyCreateA */
#define FUN_004756f0 ((int (__cdecl *)(int, const char *))0x004756f0)

typedef void (__thiscall *t_log)(void *, const char *, const void *, int);
typedef int (__stdcall *t_getconn)(void *, int, void *, int *);
typedef int (__stdcall *t_mkaddr)(void *, void *, void *, void *, int, void *, int *);
typedef int (__stdcall *t_setconn)(void *, int, int, void *);
typedef int (__stdcall *t_connect)(void *, int, void **, void *);

#define VT(o, n) ((*(void ***)(o))[n])

static void cp16(void *d, const void *s)
{
  ((int *)d)[0] = ((const int *)s)[0];
  ((int *)d)[1] = ((const int *)s)[1];
  ((int *)d)[2] = ((const int *)s)[2];
  ((int *)d)[3] = ((const int *)s)[3];
}

static int slen1(const char *s)
{
  int n = 0;
  while (s[n] != 0) n++;
  return n + 1;
}

#define LOM_SELF_0044a460 1
int __thiscall rb_0044a460(void *this_, char param_1)
{
  char *self = (char *)this_;
  void **plobby = (void **)(self + 0x4a4);
  void *lobby, *dp;
  int size;
  int *conn, *sd, *sp;
  int typeguid[4];
  int spguid[4];
  char *str;
  void *buf;
  int r;

  *(int *)(self + 0x36c) = 0;
  r = FUN_00505f10((void *)0x00584ae8);
  if (DAT_005d1e84 != 0)
    ((t_log)VT(DAT_005d1e84, 11))(DAT_005d1e84, (const char *)0x00556af4, (const void *)0x005568a8, r);
  if (FUN_004756f0(FUN_00533846(0, plobby, 0, 0, 0), (const char *)0x00556ab4) != 1) return 0;
  lobby = *plobby;
  if (((t_getconn)VT(lobby, 8))(lobby, 0, 0, &size) != (int)0x8877001e) return 0;
  conn = (int *)GlobalLock(GlobalAlloc(0x42, size));
  lobby = *plobby;
  if (((t_getconn)VT(lobby, 8))(lobby, 0, conn, &size) < 0) return 0;
  conn[0] = 0x28;
  conn[1] = (param_1 != 0) ? 2 : 1;
  if (conn[2] == 0) conn[2] = (int)GlobalLock(GlobalAlloc(0x42, 4));
  sd = (int *)conn[2];
  for (r = 0; r < 0x14; r++) sd[r] = 0;
  sd = (int *)conn[2];
  sd[0] = 0x50;
  sd[1] = 0x44;
  sd[10] = 4;
  sd[12] = 0x00556aa4;
  cp16(sd + 6, (const void *)0x00556898);
  cp16(sd + 2, (const void *)0x005568a8);
  sp = *(int **)(self + 0x394 + *(int *)(self + 0x49c) * 4);
  cp16(conn + 4, sp);
  sd[12] = 0x00556af4;
  sd[16] = *(int *)0x00584604;
  sd[17] = *(int *)0x00584424;
  sp = *(int **)(self + 0x394 + *(int *)(self + 0x49c) * 4);
  cp16(spguid, sp);
  cp16(typeguid, (const void *)0x0054e810);
  if (param_1 == 0) {
    str = self + 0x41c;
    conn[9] = 0;
    lobby = *plobby;
    FUN_004756f0(((t_mkaddr)VT(lobby, 4))(lobby, spguid, typeguid, str, slen1(str), 0, &conn[9]), (const char *)0x00556a1c);
    buf = GlobalLock(GlobalAlloc(0x42, conn[9]));
    lobby = *plobby;
    FUN_004756f0(((t_mkaddr)VT(lobby, 4))(lobby, spguid, typeguid, str, slen1(str), buf, &conn[9]), (const char *)0x00556a1c);
    conn[8] = (int)buf;
    ((int *)conn[2])[12] = 0;
  }
  lobby = *plobby;
  if (FUN_004756f0(((t_setconn)VT(lobby, 12))(lobby, 0, 0, conn), (const char *)0x005569d4) != 1) return 0;
  lobby = *plobby;
  dp = 0;
  if (FUN_004756f0(((t_connect)VT(lobby, 3))(lobby, 0, &dp, 0), (const char *)0x0055699c) != 1) return 0;
  *(void **)(self + 0x4a0) = dp;
  return 1;
}
