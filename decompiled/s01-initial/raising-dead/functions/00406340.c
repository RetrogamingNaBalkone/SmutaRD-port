/* Ghidra address: 00406340; FUN_00406340 */

void __cdecl FUN_00406340(int param_1,int param_2)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (param_2 == 1) {
    DAT_0043faf4 = &DAT_0043faf8;
  }
  else {
    DAT_0043faf4 = &DAT_00440f0c;
  }
  pvVar2 = FUN_0041606c((char *)*DAT_0043faf4);
  puVar1 = DAT_0043faf4;
  DAT_0043faf4[1] = pvVar2;
  *(undefined2 *)(param_1 + 0x24) = *(undefined2 *)(puVar1 + 2);
  *(undefined2 *)(param_1 + 0x26) = *(undefined2 *)(DAT_0043faf4 + 3);
  return;
}

