/* Ghidra address: 0042fe30; FUN_0042fe30 */

void FUN_0042fe30(void)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int in_stack_00000004;
  short in_stack_00000008;
  short in_stack_0000000a;
  short in_stack_0000000c;
  short in_stack_0000000e;
  ushort in_stack_00000010;
  
  if (in_stack_00000004 == 0) {
    uVar1 = 0x407e;
    uVar3 = 0x3f6a;
  }
  else {
    uVar1 = 0x43fe;
    uVar3 = 0x3bcd;
  }
  uVar2 = in_stack_00000010 & 0x7fff;
  if (uVar2 == 0x7fff) {
    return;
  }
  if (uVar2 <= uVar1) {
    if (uVar1 == uVar2) {
      FUN_0042fae0();
      FUN_0042fae0();
      FUN_0042fae0();
      return;
    }
    if ((((in_stack_00000008 == 0 && uVar2 == 0) && in_stack_0000000a == 0) &&
        in_stack_0000000c == 0) && in_stack_0000000e == 0) {
      return;
    }
    if (uVar3 <= uVar2) {
      return;
    }
  }
  DAT_00438c44 = 0x22;
  return;
}

