/* Ghidra address: 00431eac; FUN_00431eac */

uint __cdecl FUN_00431eac(int param_1)

{
  if (*(byte **)(param_1 + 0x20) < *(byte **)(param_1 + 0x24)) {
    return (uint)**(byte **)(param_1 + 0x20);
  }
  *(byte **)(param_1 + 0x20) = *(byte **)(param_1 + 0x24);
  return 0xffffffff;
}

