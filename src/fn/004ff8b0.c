/* Hand C for lomse.exe FUN_004ff8b0 @ 0x004ff8b0 (WinMain, 436/458 bytes, __stdcall ret 16).
 * v1.1: the DPStub ShellExecute handoff is skipped (always the vanilla "/*"
 * launch path). See the comment at *cmd = param_3 in lom_body_004ff8b0.
 * g221, shim-plus-C. The original builds a standard ebp frame, then an
 * _except_handler3 registration (next, handler 0053b9f8, scope table 0x54e8b8,
 * try=-1), add esp,-0x40, saves ebx/esi/edi, and stores that esp at [ebp-0x18]
 * for the catch. cmd lives at [ebp-0x50], WNDCLASSA at [ebp-0x4c], "SSCLASS"
 * at [ebp-0x24], try level at [ebp-4] (0 before 004ff050, -1 on its failure
 * and before the final OutputDebugString). Scope-table mid-entries 004ffa41
 * (filter, jmp 004ff890) and 004ffa47 (catch: mov esp,[ebp-0x18]) have
 * source labels rb_004ffa41 / rb_004ffa47; standalone plants 5-byte jmp
 * stubs at the original VAs so the vanilla .rdata scope table still lands.
 * A naked shim builds that exact fs:0 / scope-table / local layout
 * and both epilogues (the C body just returns 1 or 0; the shim unlinks and
 * ret 16). The C body uses those slots and does not allocate its own wc/cls.
 */
#include "lom.h"

#define LOM_SELF_004ff8b0 1

#ifndef G221_NATIVE_TEST
#define FUN_00477dd0 ((int (__cdecl *)(char **))0x00477dd0)
#define FUN_00477c70 ((int (__cdecl *)(char *))0x00477c70)
#define FUN_004ff050 ((undefined4 (__thiscall *)(void *, undefined4, HINSTANCE, HWND, char *))0x004ff050)
#define FUN_004ffa80 ((void (__thiscall *)(void *))0x004ffa80)
#define FUN_005338f4 ((undefined4 (__stdcall *)(undefined4))0x005338f4)
#define LoadIconA (*(__typeof__(HICON (__stdcall *)(HINSTANCE, LPCSTR)) *)0x0054d300)
#define LoadCursorA (*(__typeof__(HCURSOR (__stdcall *)(HINSTANCE, LPCSTR)) *)0x0054d2d8)
#define GetStockObject (*(__typeof__(HGDIOBJ (__stdcall *)(int)) *)0x0054d038)
#define RegisterClassA (*(__typeof__(ATOM (__stdcall *)(void *)) *)0x0054d304)
#define GetSystemMetrics (*(__typeof__(int (__stdcall *)(int)) *)0x0054d308)
#define CreateWindowExA (*(__typeof__(HWND (__stdcall *)(DWORD, LPCSTR, LPCSTR, DWORD, int, int, int, int, HWND, HMENU, HINSTANCE, LPVOID)) *)0x0054d30c)
#define LoadAcceleratorsA (*(__typeof__(HACCEL (__stdcall *)(HINSTANCE, LPCSTR)) *)0x0054d2e0)
#define DestroyWindow (*(__typeof__(BOOL (__stdcall *)(HWND)) *)0x0054d280)
#define UpdateWindow (*(__typeof__(BOOL (__stdcall *)(HWND)) *)0x0054d2e4)
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8)
#else
int stub_00477dd0(char **cmd);
int stub_00477c70(char *cmd);
undefined4 __thiscall stub_004ff050(void *this, undefined4 a, HINSTANCE inst, HWND hwnd, char *cmd);
void __thiscall stub_004ffa80(void *this);
undefined4 __stdcall stub_005338f4(undefined4 a);
HICON __stdcall stub_LoadIconA(HINSTANCE inst, LPCSTR name);
HCURSOR __stdcall stub_LoadCursorA(HINSTANCE inst, LPCSTR name);
HGDIOBJ __stdcall stub_GetStockObject(int i);
ATOM __stdcall stub_RegisterClassA(void *wc);
int __stdcall stub_GetSystemMetrics(int i);
HWND __stdcall stub_CreateWindowExA(DWORD ex, LPCSTR cls, LPCSTR title, DWORD style, int x, int y, int w, int h, HWND parent, HMENU menu, HINSTANCE inst, LPVOID param);
HACCEL __stdcall stub_LoadAcceleratorsA(HINSTANCE inst, LPCSTR name);
BOOL __stdcall stub_DestroyWindow(HWND hwnd);
BOOL __stdcall stub_UpdateWindow(HWND hwnd);
void __stdcall stub_OutputDebugStringA(LPCSTR s);
#define FUN_00477dd0 stub_00477dd0
#define FUN_00477c70 stub_00477c70
#define FUN_004ff050 stub_004ff050
#define FUN_004ffa80 stub_004ffa80
#define FUN_005338f4 stub_005338f4
#define LoadIconA stub_LoadIconA
#define LoadCursorA stub_LoadCursorA
#define GetStockObject stub_GetStockObject
#define RegisterClassA stub_RegisterClassA
#define GetSystemMetrics stub_GetSystemMetrics
#define CreateWindowExA stub_CreateWindowExA
#define LoadAcceleratorsA stub_LoadAcceleratorsA
#define DestroyWindow stub_DestroyWindow
#define UpdateWindow stub_UpdateWindow
#define OutputDebugStringA stub_OutputDebugStringA
#endif

#define DAT_005d1e88 (*(undefined4 *)0x005d1e88)
#define DAT_005d2ca0 (*(undefined4 *)0x005d2ca0)
#define DAT_00584d5c (*(HACCEL *)0x00584d5c)
#define DAT_00584ae8 ((void *)0x00584ae8)

/* Scope table 0x54e8b8 points at these mid-entries. The constants tell
 * build_standalone to emit jmp-to-rb stubs at the original VAs. */
__attribute__((used)) static const unsigned g221_seh_filter = 0x004ffa41;
__attribute__((used)) static const unsigned g221_seh_catch  = 0x004ffa47;


#ifndef G221_SHIM_HANDLER
#define G221_SHIM_HANDLER 0x53b9f8
#endif
#ifndef G221_SHIM_SCOPE
#define G221_SHIM_SCOPE 0x54e8b8
#endif
#define G221_STRX(x) #x
#define G221_STR(x) G221_STRX(x)
#define G221_SHIM_HANDLER_STR G221_STR(G221_SHIM_HANDLER)
#define G221_SHIM_SCOPE_STR G221_STR(G221_SHIM_SCOPE)

undefined4 lom_body_004ff8b0(HINSTANCE param_1, undefined4 param_2, char *param_3, undefined4 param_4,
                             char **cmd, unsigned *wc, char *cls, int *trylevel)
    __asm__("lom_body_004ff8b0");

undefined4 lom_body_004ff8b0(HINSTANCE param_1, undefined4 param_2, char *param_3, undefined4 param_4,
                             char **cmd, unsigned *wc, char *cls, int *trylevel)
{
  int i;
  ATOM atom;
  HWND hwnd;
  int height;
  int width;

  (void)param_2;
  (void)param_4;
  *(undefined4 *)cls = *(undefined4 *)0x005735a0;
  *(undefined4 *)(cls + 4) = *(undefined4 *)0x005735a4;
  *cmd = param_3;
  /* v1.1: skip the DPStub ShellExecute handoff so a no-args double-click of
   * lomse_sa.exe starts the game directly. Vanilla WinMain (this function)
   * treats a command line starting with "/*" as already launched properly:
   * it does not call FUN_00477dd0 (DirectPlay lobby probe) or FUN_00477c70
   * (ShellExecuteEx of DPStub.exe next to the module, then return 1 / exit
   * so DPStub can re-launch the game). On Windows that handoff either
   * crashes DPStub at 0x1ade against the rebuilt exe, or -- if DPStub.exe
   * is absent -- shows "Windows cannot find '...\DPStub.exe'." We take the
   * "/*" path unconditionally and only set DAT_005d1e88 = 1. DirectPlay
   * lobby startup via DPStub is intentionally not used for the standalone. */
  DAT_005d1e88 = 1;

  for (i = 0; i < 10; i++) {
    wc[i] = 0;
  }
  wc[0] = 8;
  wc[1] = 0x004ff5e0;
  wc[2] = 0;
  wc[3] = 0;
  wc[4] = (unsigned)param_1;
  wc[5] = (unsigned)LoadIconA(param_1, (LPCSTR)0x65);
  wc[6] = (unsigned)LoadCursorA((HINSTANCE)0, (LPCSTR)0x7f00);
  wc[7] = (unsigned)GetStockObject(4);
  wc[8] = 0;
  wc[9] = (unsigned)cls;
  atom = RegisterClassA(wc);
  if ((unsigned short)atom == 0) {
    return 0;
  }
  height = GetSystemMetrics(1);
  width = GetSystemMetrics(0);
  hwnd = CreateWindowExA(0, cls, (LPCSTR)0x00557c1c, 0x90080000, 0, 0, width, height,
                         (HWND)0, (HMENU)0, param_1, (LPVOID)0);
  if (hwnd == (HWND)0) {
    return 0;
  }
  DAT_00584d5c = LoadAcceleratorsA(param_1, (LPCSTR)0x00573594);
  *trylevel = 0;
  i = (int)FUN_004ff050(DAT_00584ae8, 0, param_1, hwnd, *cmd);
  if (i == 0) {
    DestroyWindow(hwnd);
    *trylevel = -1;
    return 0;
  }
  UpdateWindow(hwnd);
  OutputDebugStringA((LPCSTR)0x00573574);
  while (DAT_005d2ca0 == 0) {
    FUN_004ffa80(DAT_00584ae8);
  }
  FUN_005338f4(1);
  *trylevel = -1;
  OutputDebugStringA((LPCSTR)0x00573540);
  return 0;
}

__attribute__((naked)) void rb_004ff8b0(void)
{
  __asm__(
    "  pushl %ebp\n"
    "  movl %esp, %ebp\n"
    "  pushl $-1\n"
    "  pushl $" G221_SHIM_SCOPE_STR "\n"
    "  pushl $" G221_SHIM_HANDLER_STR "\n"
    "  movl %fs:0, %eax\n"
    "  pushl %eax\n"
    "  movl %esp, %fs:0\n"
    "  addl $-0x40, %esp\n"
    "  pushl %ebx\n"
    "  pushl %esi\n"
    "  pushl %edi\n"
    "  movl %esp, -0x18(%ebp)\n"
    "  leal -4(%ebp), %eax\n"
    "  pushl %eax\n"
    "  leal -0x24(%ebp), %eax\n"
    "  pushl %eax\n"
    "  leal -0x4c(%ebp), %eax\n"
    "  pushl %eax\n"
    "  leal -0x50(%ebp), %eax\n"
    "  pushl %eax\n"
    "  pushl 0x14(%ebp)\n"
    "  pushl 0x10(%ebp)\n"
    "  pushl 0xc(%ebp)\n"
    "  pushl 8(%ebp)\n"
    "  call lom_body_004ff8b0\n"
    "  addl $32, %esp\n"
    "  movl -0x10(%ebp), %ecx\n"
    "  movl %ecx, %fs:0\n"
    "  popl %edi\n"
    "  popl %esi\n"
    "  popl %ebx\n"
    "  movl %ebp, %esp\n"
    "  popl %ebp\n"
    "  retl $0x10\n"
  );
}

extern void rb_004ff890(void);

__attribute__((naked)) void rb_004ffa41(void)
{
  __asm__("  jmp _rb_004ff890\n");
}

__attribute__((naked)) void rb_004ffa47(void)
{
  __asm__(
    "  movl -0x18(%ebp), %esp\n"
    "  pushl $0x0057355c\n"
    "  movl 0x0054d0f8, %esi\n"
    "  calll *%esi\n"
    "  movl $0xffffffff, -4(%ebp)\n"
    "  pushl $0x00573540\n"
    "  calll *%esi\n"
    "  xorl %eax, %eax\n"
    "  movl -0x10(%ebp), %ecx\n"
    "  movl %ecx, %fs:0\n"
    "  popl %edi\n"
    "  popl %esi\n"
    "  popl %ebx\n"
    "  movl %ebp, %esp\n"
    "  popl %ebp\n"
    "  retl $0x10\n"
  );
}
