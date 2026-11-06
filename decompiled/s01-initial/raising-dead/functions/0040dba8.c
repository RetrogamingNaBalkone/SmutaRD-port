/* Ghidra address: 0040dba8; FUN_0040dba8 */

undefined4 * __stdcall FUN_0040dba8(void)

{
  uint *puVar1;
  undefined4 *puVar2;
  
  puVar1 = FUN_00435120(0x1c);
  if (puVar1 == (uint *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_0040dbf8(puVar1);
  }
  return puVar2;
}

