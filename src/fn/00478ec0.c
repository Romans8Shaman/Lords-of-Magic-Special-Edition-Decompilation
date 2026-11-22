/* HAND-WRITTEN: DirectX error logger: name = known HRESULT string (E_INVALIDARG, E_OUTOFMEMORY, DSERR_*) or 0;
 * sprintf(buf[1000], name ? s_55af5c(name, msg) : s_55af78(hr, msg)); OutputDebugStringA(buf). msg defaults to s_00579274. */
#include "lom.h"
#define FUN_0053a090 ((int (__cdecl *)(char *, char *, ...))0x0053a090)
#define OutputDebugStringA (*(int (__stdcall **)(char *))0x0054d0f8)
#define LOM_SELF_00478ec0 1
int __cdecl rb_00478ec0(char *param_1, int param_2)
{
  char buf[1000];
  char *m = param_1 ? param_1 : (char *)0x579274;
  char *nm;
  switch ((uint)param_2) {
  case 0x80070057u: nm = (char *)0x55afcc; break;
  case 0x8007000eu: nm = (char *)0x55afe0; break;
  case 0x8878000au: nm = (char *)0x55af94; break;
  case 0x88780032u: nm = (char *)0x55afa4; break;
  case 0x887800aau: nm = (char *)0x55afb8; break;
  default: nm = 0; break;
  }
  if (nm != 0) FUN_0053a090(buf, (char *)0x55af5c, nm, m);
  else FUN_0053a090(buf, (char *)0x55af78, param_2, m);
  return OutputDebugStringA(buf);
}
