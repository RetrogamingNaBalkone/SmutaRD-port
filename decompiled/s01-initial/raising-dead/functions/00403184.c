/* Ghidra address: 00403184; FUN_00403184 */

void __cdecl FUN_00403184(int param_1)

{
  uint *puVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  
  puVar1 = FUN_00435120(8);
  if (puVar1 != (uint *)0x0) {
    iVar4 = 0;
    uVar3 = *(undefined4 *)(param_1 + 4);
    pcVar2 = FUN_0040300c();
    FUN_004031c8(puVar1,pcVar2,uVar3,iVar4);
  }
  return;
}

