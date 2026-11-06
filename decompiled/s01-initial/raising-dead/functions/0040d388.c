/* Ghidra address: 0040d388; FUN_0040d388 */

undefined4 __cdecl FUN_0040d388(undefined4 param_1)

{
  ushort uVar1;
  undefined2 *puVar2;
  
  uVar1 = 0;
  puVar2 = &DAT_004d0028;
  do {
    *puVar2 = (short)(((uint)uVar1 * 0xff) / 100);
    uVar1 = uVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (uVar1 < 0x65);
  return param_1;
}

