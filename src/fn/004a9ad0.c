/* Rebuilt from lomse.exe FUN_004a9ad0 @ 0x004a9ad0 (146 bytes, __fastcall). HAND (2026-11-13, was asmfn).
 * Grid (cells of 8 bytes at +0x64, width +0x6c, height +0x70): clear bits 18..20 of the second dword of every border
 * cell -- top and bottom rows, then left and right columns. Every field is re-read where the original re-reads it;
 * the bottom-row offset and the right-column index are computed once from the entry width/height. */
#include "lom.h"

#define LOM_SELF_004a9ad0 1
void __fastcall rb_004a9ad0(int param_1)
{
  uint i, bot, rc;
  int w = *(int *)(param_1 + 0x6c);
  bot = ((uint)*(int *)(param_1 + 0x70) - 1u) * (uint)w * 8u;
  i = 0;
  if (w > 0) {
    do {
      uint *p = (uint *)(*(int *)(param_1 + 0x64) + i * 8 + 4);
      *p &= 0xffe3ffffu;
      p = (uint *)(*(int *)(param_1 + 0x64) + bot + 4);
      i++;
      *p &= 0xffe3ffffu;
      bot += 8;
    } while ((int)i < *(int *)(param_1 + 0x6c));
  }
  rc = (uint)*(int *)(param_1 + 0x6c) - 1u;
  i = 0;
  if (*(int *)(param_1 + 0x70) > 0) {
    do {
      uint *p = (uint *)(*(int *)(param_1 + 0x64) + i * (uint)*(int *)(param_1 + 0x6c) * 8 + 4);
      *p &= 0xffe3ffffu;
      p = (uint *)(*(int *)(param_1 + 0x64) + (i * (uint)*(int *)(param_1 + 0x6c) + rc) * 8 + 4);
      i++;
      *p &= 0xffe3ffffu;
    } while ((int)i < *(int *)(param_1 + 0x70));
  }
}
