/* Rebuilt from lomse.exe FUN_0040afc0 @ 0x0040afc0 (225 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define FUN_0040aeb0 ((undefined4 (__stdcall *)(undefined4 *))0x0040aeb0)
#define FUN_004fbed0 ((undefined4 * (__thiscall *)(void *, int))0x004fbed0)

#define LOM_SELF_0040afc0 1
void __thiscall rb_0040afc0(void *this)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  char *pcVar4;
  uchar _fr[0x88] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef char _t_local_7c;
  typedef char _t_local_7b;
  typedef short _t_local_7a;
  typedef undefined2 _t_auStack_78[60];
#define local_7c (*(_t_local_7c *)(_fr + 0x4))
#define local_7b (*(_t_local_7b *)(_fr + 0x5))
#define local_7a (*(_t_local_7a *)(_fr + 0x6))
#define auStack_78 (*(_t_auStack_78 *)(_fr + 0x8))
  
  pcVar4 = &local_7c;
  for (iVar3 = 0x1f; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + 4;
  }
  local_7a = 0;
  do {
    bVar1 = false;
    for (puVar2 = FUN_004fbed0(&DAT_005ae974,0); puVar2 != (undefined4 *)0x0;
        puVar2 = FUN_004fbed0(&DAT_005ae974,(int)puVar2)) {
      if (*(char *)(puVar2 + 0x30) != '\0') {
        if ((local_7a == 0) ||
           ((local_7c == *(char *)(puVar2 + 0x30) && (local_7b == *(char *)((int)puVar2 + 0xc1)))))
        {
          local_7c = *(char *)(puVar2 + 0x30);
          local_7b = *(char *)((int)puVar2 + 0xc1);
          auStack_78[local_7a * 2] = *(undefined2 *)(puVar2 + 10);
          auStack_78[local_7a * 2 + 1] = *(undefined2 *)((int)puVar2 + 0xc2);
          local_7a = local_7a + 1;
          *(undefined1 *)(puVar2 + 0x30) = 0;
          if (local_7a == 0x1e) {
            bVar1 = true;
            break;
          }
        }
        else {
          bVar1 = true;
        }
      }
    }
    if (local_7a != 0) {
      FUN_0040aeb0((undefined4 *)&local_7c);
      local_7a = 0;
    }
    if (!bVar1) {
      return;
    }
  } while( true );
#undef local_7c
#undef local_7b
#undef local_7a
#undef auStack_78
}
