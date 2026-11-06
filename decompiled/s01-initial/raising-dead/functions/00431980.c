/* Ghidra address: 00431980; FUN_00431980 */

uint __cdecl FUN_00431980(int param_1)

{
  if (*(byte **)(param_1 + 0x20) < *(byte **)(param_1 + 0x24)) {
    return (uint)**(byte **)(param_1 + 0x20);
  }
  if (((*(int *)(param_1 + 8) != 0) && (*(short *)(param_1 + 6) == 0)) &&
     (*(uint *)(param_1 + 0x10) < *(uint *)(param_1 + 0x14))) {
    if ((*(uint *)(param_1 + 0x20) == 0) || (*(uint *)(param_1 + 0x20) < *(uint *)(param_1 + 0x10)))
    {
      FUN_00431df4(param_1,*(uint *)(param_1 + 8),*(uint *)(param_1 + 0x10),
                   *(uint *)(param_1 + 0x14));
      return (uint)**(byte **)(param_1 + 0x20);
    }
    if (*(uint *)(param_1 + 0x20) < *(uint *)(param_1 + 0x14)) {
      FUN_00431df4(param_1,*(uint *)(param_1 + 0x1c),*(uint *)(param_1 + 0x20),
                   *(uint *)(param_1 + 0x14));
      return (uint)**(byte **)(param_1 + 0x20);
    }
  }
  return 0xffffffff;
}

