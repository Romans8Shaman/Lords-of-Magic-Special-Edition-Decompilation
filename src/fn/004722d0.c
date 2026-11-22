/* Rebuilt from lomse.exe FUN_004722d0 @ 0x004722d0 (1024 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_00584d60 (*(undefined *)0x00584d60)
#define DAT_005aa2f4 (*(undefined *)0x005aa2f4)
#define DAT_005aa60c (*(undefined *)0x005aa60c)
#define FUN_00471540 ((undefined4 (__thiscall *)(void *, int *))0x00471540)
#define FUN_00471950 ((undefined4 (__fastcall *)(int *))0x00471950)
#define FUN_00472260 ((undefined4 (__fastcall *)(int))0x00472260)
#define FUN_00476010 ((bool (__thiscall *)(void *, int, int, int, int))0x00476010)
#define FUN_00476980 ((undefined4 (__thiscall *)(void *, uint *))0x00476980)
#define FUN_004c9810 ((undefined4 (__fastcall *)(undefined4 *))0x004c9810)
#define ShowCursor (*(__typeof__(int (__stdcall *)(BOOL)) *)0x0054d2a0) /* USER32.DLL!ShowCursor via IAT */

#define LOM_SELF_004722d0 1
void __thiscall rb_004722d0(void *this,int param_1,int param_2)

{
  uint *this_00;
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined *puVar4;
  void *pvVar5;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_20[4];
  typedef int _t_local_10[4];
#define local_20 (*(_t_local_20 *)(_fr + 0x0))
#define local_10 (*(_t_local_10 *)(_fr + 0x10))
  
  if ((*(byte *)((int)this + 0x178) & 1) == 0) {
    iVar2 = FUN_004c9810((undefined4 *)&DAT_00584d60);
    if (iVar2 == 0) {
      this_00 = (uint *)((int)this + 0xc);
      *this_00 = 0;
      *(undefined4 *)((int)this + 0x14) = 0;
      *(undefined4 *)((int)this + 0x18) = 0;
      piVar3 = (int *)FUN_00471540((void *)((int)this + 0xf4),local_20);
      FUN_00476010(this_00,*piVar3,piVar3[1],piVar3[2],piVar3[3]);
      piVar3 = (int *)FUN_00471540((void *)((int)this + 300),local_20);
      FUN_00476010(this_00,*piVar3,piVar3[1],piVar3[2],piVar3[3]);
      piVar3 = (int *)FUN_00471540((void *)((int)this + 0x70),local_20);
      FUN_00476010(this_00,*piVar3,piVar3[1],piVar3[2],piVar3[3]);
      piVar3 = (int *)FUN_00471540(&DAT_005aa60c,local_20);
      FUN_00476010(this_00,*piVar3,piVar3[1],piVar3[2],piVar3[3]);
      puVar4 = &DAT_005aa2f4;
      do {
        if (*(int *)(puVar4 + -0x28) != 0) {
          piVar3 = (int *)FUN_00471540(puVar4,local_20);
          FUN_00476010(this_00,*piVar3,piVar3[1],piVar3[2],piVar3[3]);
          piVar3 = (int *)FUN_00471540(puVar4 + 0x60,local_10);
          FUN_00476010(this_00,*piVar3,piVar3[1],piVar3[2],piVar3[3]);
        }
        puVar4 = puVar4 + 200;
      } while ((int)puVar4 < 0x5aa614);
      pvVar5 = (void *)((int)this + 0x19c);
      iVar2 = 4;
      do {
        piVar3 = (int *)FUN_00471540(pvVar5,local_10);
        FUN_00476010(this_00,*piVar3,piVar3[1],piVar3[2],piVar3[3]);
        pvVar5 = (void *)((int)pvVar5 + 0x38);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      *(int *)((int)this + 0xec) = param_1;
      *(int *)((int)this + 0xf0) = param_2;
      if (*(int *)((int)this + 0x188) != 0) {
        iVar2 = *(int *)((int)this + 0xec);
        iVar1 = *(int *)((int)this + 0x180);
        if (iVar2 < iVar1) {
          *(int *)((int)this + 0x18c) = iVar2;
          *(int *)((int)this + 0x194) = iVar1;
        }
        else {
          *(int *)((int)this + 0x18c) = iVar1;
          *(int *)((int)this + 0x194) = iVar2;
        }
        iVar2 = *(int *)((int)this + 0xf0);
        iVar1 = *(int *)((int)this + 0x184);
        if (iVar2 < iVar1) {
          *(int *)((int)this + 400) = iVar2;
          *(int *)((int)this + 0x198) = iVar1;
        }
        else {
          *(int *)((int)this + 400) = iVar1;
          *(int *)((int)this + 0x198) = iVar2;
        }
      }
      FUN_00471950(this);
      piVar3 = (int *)FUN_00471540((void *)((int)this + 0xf4),local_10);
      FUN_00476010(this_00,*piVar3,piVar3[1],piVar3[2],piVar3[3]);
      piVar3 = (int *)FUN_00471540((void *)((int)this + 300),local_10);
      FUN_00476010(this_00,*piVar3,piVar3[1],piVar3[2],piVar3[3]);
      piVar3 = (int *)FUN_00471540((void *)((int)this + 0x70),local_10);
      FUN_00476010(this_00,*piVar3,piVar3[1],piVar3[2],piVar3[3]);
      piVar3 = (int *)FUN_00471540(&DAT_005aa60c,local_10);
      FUN_00476010(this_00,*piVar3,piVar3[1],piVar3[2],piVar3[3]);
      puVar4 = &DAT_005aa2f4;
      do {
        if (*(int *)(puVar4 + -0x28) != 0) {
          piVar3 = (int *)FUN_00471540(puVar4,local_10);
          FUN_00476010(this_00,*piVar3,piVar3[1],piVar3[2],piVar3[3]);
          piVar3 = (int *)FUN_00471540(puVar4 + 0x60,local_20);
          FUN_00476010(this_00,*piVar3,piVar3[1],piVar3[2],piVar3[3]);
        }
        puVar4 = puVar4 + 200;
      } while ((int)puVar4 < 0x5aa614);
      pvVar5 = (void *)((int)this + 0x19c);
      iVar2 = 4;
      do {
        piVar3 = (int *)FUN_00471540(pvVar5,local_10);
        FUN_00476010(this_00,*piVar3,piVar3[1],piVar3[2],piVar3[3]);
        pvVar5 = (void *)((int)pvVar5 + 0x38);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      FUN_00476980(&DAT_00584ae8,this_00);
      FUN_00472260((int)this);
    }
    else if (*(int *)((int)this + 0x16c) < 0) {
      iVar2 = ShowCursor(1);
      *(int *)((int)this + 0x16c) = iVar2;
      return;
    }
  }
  else if (-1 < *(int *)((int)this + 0x16c)) {
    iVar2 = ShowCursor(0);
    *(int *)((int)this + 0x16c) = iVar2;
    return;
  }
  return;
#undef local_20
#undef local_10
}
