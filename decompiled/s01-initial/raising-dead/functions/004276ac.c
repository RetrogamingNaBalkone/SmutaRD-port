/* Ghidra address: 004276ac; FUN_004276ac */

void __cdecl FUN_004276ac(int param_1)

{
  uint *puVar1;
  short sVar2;
  
  puVar1 = FUN_00435120(0x300);
  if (puVar1 != (uint *)0x0) {
    FUN_00435394((int *)puVar1,3,0x100,1,FUN_00422604);
  }
  sVar2 = 0;
  do {
    FUN_00426494((byte *)(param_1 + 0x4a),(undefined1 *)puVar1,sVar2);
    FUN_004275d4();
    sVar2 = sVar2 + 3;
  } while (sVar2 < 0x65);
  FUN_004350ec((int)puVar1);
  return;
}

