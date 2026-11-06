/* Ghidra address: 0042d8a0; FUN_0042d8a0 */

undefined4 * __stdcall FUN_0042d8a0(void)

{
  undefined4 *puVar1;
  
  puVar1 = &DAT_0043b010;
  while( true ) {
    if (*(char *)((int)puVar1 + 0x16) < '\0') {
      return puVar1;
    }
    if (&DAT_0043b010 + DAT_0043b4c0 * 6 <= puVar1) break;
    puVar1 = puVar1 + 6;
  }
  return (undefined4 *)0x0;
}

