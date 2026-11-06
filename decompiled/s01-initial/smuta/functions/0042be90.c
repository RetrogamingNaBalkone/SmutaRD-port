/* Ghidra address: 0042be90; FUN_0042be90 */

undefined4 * FUN_0042be90(void)

{
  undefined4 *puVar1;
  
  puVar1 = &DAT_00437a74;
  while( true ) {
    if (*(char *)((int)puVar1 + 0x16) < '\0') {
      return puVar1;
    }
    if (&DAT_00437a74 + DAT_00437f24 * 6 <= puVar1) break;
    puVar1 = puVar1 + 6;
  }
  return (undefined4 *)0x0;
}

