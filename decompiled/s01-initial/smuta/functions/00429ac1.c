/* Ghidra address: 00429ac1; FUN_00429ac1 */

bool FUN_00429ac1(void)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int in_stack_00000004;
  int in_stack_0000000c;
  byte in_stack_00000010;
  
  iVar3 = FUN_00429936();
  if (iVar3 != 0) {
    return true;
  }
  uVar1 = *(ushort *)(in_stack_00000004 + 4);
  uVar2 = *(ushort *)(in_stack_0000000c + 4);
  if ((uVar2 & 0x20) != 0) {
    iVar3 = FUN_00429936();
    if (iVar3 != 0) {
      return true;
    }
    uVar2 = *(ushort *)(*(int *)(in_stack_0000000c + 8) + 4);
    if ((uVar2 & 0x10) == 0) {
      return false;
    }
    iVar3 = FUN_00429936();
    if (iVar3 != 0) {
      return true;
    }
  }
  if ((uVar2 & 0x10) != 0) {
    if ((in_stack_00000010 & 1) != 0) {
      return true;
    }
    if ((uVar1 & 0x10) == 0) {
      return false;
    }
    if ((uVar2 & 0x40) != 0) {
      return (uVar1 & 0x300) == (uVar2 & 0x300);
    }
  }
  return false;
}

