
void __thiscall FUN_00456670(void *this,int param_1,int param_2,int param_3,int param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  if (param_4 == 0) {
    if (param_3 == 0) {
      iVar2 = (param_2 * *(int *)((int)this + 0x6c) + 1 + param_1) * 8;
      *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) =
           *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) & 0xff5c0fff;
      *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) =
           *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) | 0x1000;
      iVar2 = ((param_2 + 1) * *(int *)((int)this + 0x6c) + 1 + param_1) * 8;
      *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) =
           *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) & 0xff5c0fff;
      puVar1 = (uint *)(iVar2 + 4 + *(int *)((int)this + 100));
      *puVar1 = *puVar1 | 0x1000;
      iVar2 = (param_2 * *(int *)((int)this + 0x6c) + param_1) * 8;
      *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) =
           *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) & 0xff5c0fff;
      *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) =
           *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) | 0x10000;
      iVar2 = (param_2 * *(int *)((int)this + 0x6c) + -1 + param_1) * 8;
      *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) =
           *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) & 0xff5c0fff;
      puVar1 = (uint *)(iVar2 + 4 + *(int *)((int)this + 100));
      *puVar1 = *puVar1 | 0x10000;
      iVar2 = (param_2 * *(int *)((int)this + 0x6c) + 1 + param_1) * 8;
      *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) =
           *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) & 0xff5c0fff;
      puVar1 = (uint *)(iVar2 + 4 + *(int *)((int)this + 100));
      *puVar1 = *puVar1 | 0x10000;
      return;
    }
    if (param_3 == 4) {
      iVar2 = (param_2 * *(int *)((int)this + 0x6c) + -1 + param_1) * 8;
      *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) =
           *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) & 0xff5c0fff;
      *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) =
           *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) | 0x1000;
      iVar2 = ((param_2 + -1) * *(int *)((int)this + 0x6c) + -1 + param_1) * 8;
      *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) =
           *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) & 0xff5c0fff;
      puVar1 = (uint *)(iVar2 + 4 + *(int *)((int)this + 100));
      *puVar1 = *puVar1 | 0x1000;
      iVar2 = (param_2 * *(int *)((int)this + 0x6c) + param_1) * 8;
      *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) =
           *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) & 0xff5c0fff;
      *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) =
           *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) | 0x10000;
      iVar2 = (param_2 * *(int *)((int)this + 0x6c) + -1 + param_1) * 8;
      *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) =
           *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) & 0xff5c0fff;
      puVar1 = (uint *)(iVar2 + 4 + *(int *)((int)this + 100));
      *puVar1 = *puVar1 | 0x10000;
      iVar2 = (param_2 * *(int *)((int)this + 0x6c) + 1 + param_1) * 8;
      *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) =
           *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) & 0xff5c0fff;
      puVar1 = (uint *)(iVar2 + 4 + *(int *)((int)this + 100));
      *puVar1 = *puVar1 | 0x10000;
      return;
    }
    if (param_3 == 2) {
      iVar2 = param_2 + -1;
      iVar3 = (iVar2 * *(int *)((int)this + 0x6c) + param_1) * 8;
      *(uint *)(iVar3 + 4 + *(int *)((int)this + 100)) =
           *(uint *)(iVar3 + 4 + *(int *)((int)this + 100)) & 0xff5c0fff;
      puVar1 = (uint *)(iVar3 + 4 + *(int *)((int)this + 100));
      *puVar1 = *puVar1 | 0x1000;
      iVar3 = (iVar2 * *(int *)((int)this + 0x6c) + -1 + param_1) * 8;
      *(uint *)(iVar3 + 4 + *(int *)((int)this + 100)) =
           *(uint *)(iVar3 + 4 + *(int *)((int)this + 100)) & 0xff5c0fff;
      *(uint *)(iVar3 + 4 + *(int *)((int)this + 100)) =
           *(uint *)(iVar3 + 4 + *(int *)((int)this + 100)) | 0x1000;
      iVar3 = (param_2 * *(int *)((int)this + 0x6c) + param_1) * 8;
      *(uint *)(iVar3 + 4 + *(int *)((int)this + 100)) =
           *(uint *)(iVar3 + 4 + *(int *)((int)this + 100)) & 0xff5c0fff;
      puVar1 = (uint *)(iVar3 + 4 + *(int *)((int)this + 100));
      *puVar1 = *puVar1 | 0x8000;
      iVar2 = (iVar2 * *(int *)((int)this + 0x6c) + param_1) * 8;
      *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) =
           *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) & 0xff5c0fff;
      *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) =
           *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) | 0x8000;
    }
    else {
      iVar2 = ((param_2 + 1) * *(int *)((int)this + 0x6c) + param_1) * 8;
      *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) =
           *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) & 0xff5c0fff;
      puVar1 = (uint *)(iVar2 + 4 + *(int *)((int)this + 100));
      *puVar1 = *puVar1 | 0x1000;
      iVar2 = ((param_2 + 1) * *(int *)((int)this + 0x6c) + 1 + param_1) * 8;
      *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) =
           *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) & 0xff5c0fff;
      *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) =
           *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) | 0x1000;
      iVar2 = (param_2 * *(int *)((int)this + 0x6c) + param_1) * 8;
      *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) =
           *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) & 0xff5c0fff;
      puVar1 = (uint *)(iVar2 + 4 + *(int *)((int)this + 100));
      *puVar1 = *puVar1 | 0x8000;
      iVar2 = ((param_2 + -1) * *(int *)((int)this + 0x6c) + param_1) * 8;
      *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) =
           *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) & 0xff5c0fff;
      *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) =
           *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) | 0x8000;
    }
    iVar2 = ((param_2 + 1) * *(int *)((int)this + 0x6c) + param_1) * 8;
    *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) =
         *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) & 0xff5c0fff;
    puVar1 = (uint *)(iVar2 + 4 + *(int *)((int)this + 100));
    *puVar1 = *puVar1 | 0x8000;
    return;
  }
  if (param_3 == 0) {
    iVar2 = (param_2 * *(int *)((int)this + 0x6c) + param_1) * 8;
    *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) =
         *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) & 0xfffe7fff;
    puVar1 = (uint *)(iVar2 + 4 + *(int *)((int)this + 100));
    *puVar1 = *puVar1 | 0x1000;
    iVar2 = (param_2 * *(int *)((int)this + 0x6c) + -1 + param_1) * 8;
    *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) =
         *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) & 0xfffe7fff;
    puVar1 = (uint *)(iVar2 + 4 + *(int *)((int)this + 100));
    *puVar1 = *puVar1 | 0x1000;
    iVar2 = (param_2 * *(int *)((int)this + 0x6c) + 1 + param_1) * 8;
    *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) =
         *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) & 0xfffe7fff;
    puVar1 = (uint *)(iVar2 + 4 + *(int *)((int)this + 100));
    *puVar1 = *puVar1 | 0x1000;
    iVar2 = (param_2 * *(int *)((int)this + 0x6c) + 1 + param_1) * 8;
    *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) =
         *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) & 0xff5c0fff;
    puVar1 = (uint *)(iVar2 + 4 + *(int *)((int)this + 100));
    *puVar1 = *puVar1 | 0x4000;
    iVar2 = ((param_2 + 1) * *(int *)((int)this + 0x6c) + 1 + param_1) * 8;
    *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) =
         *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) & 0xff5c0fff;
    puVar1 = (uint *)(iVar2 + 4 + *(int *)((int)this + 100));
    *puVar1 = *puVar1 | 0x4000;
    return;
  }
  if (param_3 == 4) {
    iVar2 = (param_2 * *(int *)((int)this + 0x6c) + param_1) * 8;
    *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) =
         *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) & 0xfffe7fff;
    puVar1 = (uint *)(iVar2 + 4 + *(int *)((int)this + 100));
    *puVar1 = *puVar1 | 0x1000;
    iVar2 = (param_2 * *(int *)((int)this + 0x6c) + -1 + param_1) * 8;
    *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) =
         *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) & 0xfffe7fff;
    puVar1 = (uint *)(iVar2 + 4 + *(int *)((int)this + 100));
    *puVar1 = *puVar1 | 0x1000;
    iVar2 = (param_2 * *(int *)((int)this + 0x6c) + 1 + param_1) * 8;
    *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) =
         *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) & 0xfffe7fff;
    puVar1 = (uint *)(iVar2 + 4 + *(int *)((int)this + 100));
    *puVar1 = *puVar1 | 0x1000;
    iVar2 = (param_2 * *(int *)((int)this + 0x6c) + -1 + param_1) * 8;
    *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) =
         *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) & 0xff5c0fff;
    puVar1 = (uint *)(iVar2 + 4 + *(int *)((int)this + 100));
    *puVar1 = *puVar1 | 0x4000;
    iVar2 = ((param_2 + -1) * *(int *)((int)this + 0x6c) + -1 + param_1) * 8;
    *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) =
         *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) & 0xff5c0fff;
    puVar1 = (uint *)(iVar2 + 4 + *(int *)((int)this + 100));
    *puVar1 = *puVar1 | 0x4000;
    return;
  }
  if (param_3 == 2) {
    iVar2 = (param_2 * *(int *)((int)this + 0x6c) + param_1) * 8;
    *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) =
         *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) & 0xfffe7fff;
    *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) =
         *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) | 0x1000;
    iVar2 = param_2 + -1;
    iVar3 = (iVar2 * *(int *)((int)this + 0x6c) + param_1) * 8;
    *(uint *)(iVar3 + 4 + *(int *)((int)this + 100)) =
         *(uint *)(iVar3 + 4 + *(int *)((int)this + 100)) & 0xfffe7fff;
    puVar1 = (uint *)(iVar3 + 4 + *(int *)((int)this + 100));
    *puVar1 = *puVar1 | 0x1000;
    iVar3 = ((param_2 + 1) * *(int *)((int)this + 0x6c) + param_1) * 8;
    *(uint *)(iVar3 + 4 + *(int *)((int)this + 100)) =
         *(uint *)(iVar3 + 4 + *(int *)((int)this + 100)) & 0xfffe7fff;
    *(uint *)(iVar3 + 4 + *(int *)((int)this + 100)) =
         *(uint *)(iVar3 + 4 + *(int *)((int)this + 100)) | 0x1000;
    iVar3 = (iVar2 * *(int *)((int)this + 0x6c) + param_1) * 8;
    *(uint *)(iVar3 + 4 + *(int *)((int)this + 100)) =
         *(uint *)(iVar3 + 4 + *(int *)((int)this + 100)) & 0xff5c0fff;
    puVar1 = (uint *)(iVar3 + 4 + *(int *)((int)this + 100));
    *puVar1 = *puVar1 | 0x2000;
    iVar2 = (iVar2 * *(int *)((int)this + 0x6c) + -1 + param_1) * 8;
    *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) =
         *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) & 0xff5c0fff;
    puVar1 = (uint *)(iVar2 + 4 + *(int *)((int)this + 100));
    *puVar1 = *puVar1 | 0x2000;
    return;
  }
  iVar2 = (param_2 * *(int *)((int)this + 0x6c) + param_1) * 8;
  *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) =
       *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) & 0xfffe7fff;
  puVar1 = (uint *)(iVar2 + 4 + *(int *)((int)this + 100));
  *puVar1 = *puVar1 | 0x1000;
  iVar2 = ((param_2 + -1) * *(int *)((int)this + 0x6c) + param_1) * 8;
  *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) =
       *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) & 0xfffe7fff;
  puVar1 = (uint *)(iVar2 + 4 + *(int *)((int)this + 100));
  *puVar1 = *puVar1 | 0x1000;
  iVar2 = param_2 + 1;
  iVar3 = (iVar2 * *(int *)((int)this + 0x6c) + param_1) * 8;
  *(uint *)(iVar3 + 4 + *(int *)((int)this + 100)) =
       *(uint *)(iVar3 + 4 + *(int *)((int)this + 100)) & 0xfffe7fff;
  puVar1 = (uint *)(iVar3 + 4 + *(int *)((int)this + 100));
  *puVar1 = *puVar1 | 0x1000;
  iVar3 = (iVar2 * *(int *)((int)this + 0x6c) + param_1) * 8;
  *(uint *)(iVar3 + 4 + *(int *)((int)this + 100)) =
       *(uint *)(iVar3 + 4 + *(int *)((int)this + 100)) & 0xff5c0fff;
  puVar1 = (uint *)(iVar3 + 4 + *(int *)((int)this + 100));
  *puVar1 = *puVar1 | 0x2000;
  iVar2 = (iVar2 * *(int *)((int)this + 0x6c) + 1 + param_1) * 8;
  *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) =
       *(uint *)(iVar2 + 4 + *(int *)((int)this + 100)) & 0xff5c0fff;
  puVar1 = (uint *)(iVar2 + 4 + *(int *)((int)this + 100));
  *puVar1 = *puVar1 | 0x2000;
  return;
}


