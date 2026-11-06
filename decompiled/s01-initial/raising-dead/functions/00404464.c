/* Ghidra address: 00404464; FUN_00404464 */

int __cdecl FUN_00404464(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = 0xcc;
  if ((*(byte *)(param_1 + 0x1e) & 1) == 0) {
    uVar1 = 0x20;
  }
  *(undefined1 *)(param_1 + 0x57) = uVar1;
  uVar1 = 0xc6;
  if ((*(byte *)(param_1 + 0x1e) & 2) == 0) {
    uVar1 = 0x20;
  }
  *(undefined1 *)(param_1 + 0x58) = uVar1;
  uVar1 = 199;
  if ((*(byte *)(param_1 + 0x1e) & 4) == 0) {
    uVar1 = 0x20;
  }
  *(undefined1 *)(param_1 + 0x59) = uVar1;
  return param_1 + 0x57;
}

