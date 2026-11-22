
void __cdecl op_startordermode(void *vm)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  float fStack_4;
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar2 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uVar2 = 0;
  }
  uVar2 = uVar2 & 0xff;
  if (uVar2 != 1) {
    if (uVar2 == 2) {
      fStack_4 = (float)((int)fStack_4 >> 8);
    }
    else {
      if (uVar2 != 4) {
        *(undefined4 *)((int)vm + 0x90) = 0xe;
        FUN_004d4550(vm);
        *(undefined4 *)((int)vm + 0x90) = 0;
        *(undefined4 *)((int)vm + 0xa4) = 0;
        return;
      }
      lVar3 = __ftol((float10)fStack_4);
      fStack_4 = (float)lVar3;
    }
  }
  switch(fStack_4) {
  case 1.4013e-45:
    FUN_00503040(&DAT_00584ae8,9);
    return;
  case 2.8026e-45:
    FUN_00503040(&DAT_00584ae8,0xb);
    return;
  case 8.40779e-45:
    FUN_00503040(&DAT_00584ae8,0x11);
    return;
  case 9.80909e-45:
    FUN_00503040(&DAT_00584ae8,7);
    return;
  case 1.12104e-44:
    FUN_00503040(&DAT_00584ae8,1);
    FUN_00530420((int)(&DAT_005a7d90 + DAT_005a7d8c * 0x400));
    FUN_00503040(&DAT_00584ae8,0);
    return;
  case 1.4013e-44:
    FUN_00503040(&DAT_00584ae8,8);
    return;
  case 2.52234e-44:
    FUN_00503040(&DAT_00584ae8,0x12);
    return;
  case 2.8026e-44:
    FUN_00503040(&DAT_00584ae8,1);
    FUN_0052eaf0((int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400));
    FUN_00503040(&DAT_00584ae8,0);
    return;
  case 2.94273e-44:
    FUN_00503040(&DAT_00584ae8,0xd);
    return;
  case 3.22299e-44:
    FUN_00503040(&DAT_00584ae8,1);
    FUN_0052eb40((int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400));
    FUN_00503040(&DAT_00584ae8,0);
    return;
  case 3.36312e-44:
    FUN_00503040(&DAT_00584ae8,0xf);
    return;
  case 3.50325e-44:
    FUN_00503040(&DAT_00584ae8,0x10);
    return;
  case 3.64338e-44:
    FUN_00503040(&DAT_00584ae8,1);
    FUN_0052ea30((int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400));
    FUN_00503040(&DAT_00584ae8,0);
    return;
  case 3.78351e-44:
    FUN_00503040(&DAT_00584ae8,1);
    FUN_0052ea80((int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400));
    FUN_00503040(&DAT_00584ae8,0);
    return;
  case 3.92364e-44:
    FUN_0052fcf0((int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400));
    return;
  case 4.06377e-44:
    FUN_0052fd60((int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400));
    return;
  case 4.2039e-44:
    FUN_00503040(&DAT_00584ae8,0x15);
    return;
  case 4.34403e-44:
    FUN_00503040(&DAT_00584ae8,0x16);
    return;
  case 4.48416e-44:
    FUN_00503040(&DAT_00584ae8,0x17);
    return;
  case 4.62428e-44:
    FUN_00503040(&DAT_00584ae8,0x18);
    return;
  case 4.76441e-44:
    FUN_00503040(&DAT_00584ae8,1);
    FUN_0052e9e0((int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400));
    FUN_00503040(&DAT_00584ae8,0);
    return;
  case 4.90454e-44:
    FUN_00503040(&DAT_00584ae8,0x1a);
    return;
  case 5.04467e-44:
    FUN_00503040(&DAT_00584ae8,0x1b);
    return;
  case 5.1848e-44:
    FUN_00503040(&DAT_00584ae8,1);
    FUN_0052ed80();
    FUN_00503040(&DAT_00584ae8,0);
    return;
  case 5.32493e-44:
    FUN_00503040(&DAT_00584ae8,1);
    FUN_0052ee90();
    FUN_00503040(&DAT_00584ae8,0);
    return;
  case 5.46506e-44:
    FUN_00503040(&DAT_00584ae8,1);
    FUN_0052efa0();
    FUN_00503040(&DAT_00584ae8,0);
    return;
  case 5.60519e-44:
    FUN_00503040(&DAT_00584ae8,1);
    FUN_0052f240();
    FUN_00503040(&DAT_00584ae8,0);
    return;
  case 5.74532e-44:
    FUN_00503040(&DAT_00584ae8,1);
    FUN_0052f4e0();
    FUN_00503040(&DAT_00584ae8,0);
    return;
  case 5.88545e-44:
    FUN_0052fdc0((int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400));
    return;
  case 6.02558e-44:
    FUN_0052fe20((int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400));
    return;
  case 6.16571e-44:
    FUN_0052fe80((int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400));
    return;
  case 6.30584e-44:
    FUN_0052fee0((int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400));
    return;
  case 6.44597e-44:
    FUN_00503040(&DAT_00584ae8,1);
    FUN_00530390(&DAT_005a7d90 + DAT_005a7d8c * 0x400);
    FUN_00503040(&DAT_00584ae8,0);
    return;
  case 6.5861e-44:
    FUN_00503040(&DAT_00584ae8,0x1c);
    return;
  case 6.86636e-44:
    FUN_00503040(&DAT_00584ae8,0x1d);
  }
  return;
}


