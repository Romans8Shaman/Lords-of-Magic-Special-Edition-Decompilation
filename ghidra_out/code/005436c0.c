
void FUN_005436c0(void)

{
  if ((DAT_005d5240 == 1) || ((DAT_005d5240 == 0 && (DAT_00574964 == 1)))) {
    FUN_00543700(0xfc);
    if (DAT_005d566c != (code *)0x0) {
      (/*IC:005436ed*/*DAT_005d566c)();
    }
    FUN_00543700(0xff);
  }
  return;
}


