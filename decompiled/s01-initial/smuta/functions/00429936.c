/* Ghidra address: 00429936; FUN_00429936 */

undefined4 FUN_00429936(void)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  
  while( true ) {
    while( true ) {
      if (in_stack_00000008 == in_stack_00000004) {
        return 1;
      }
      uVar2 = *(ushort *)(in_stack_00000004 + 4);
      uVar3 = *(ushort *)(in_stack_00000008 + 4);
      if ((uVar3 & uVar2 & 0x10) == 0) break;
      uVar6 = uVar2 & 0x300;
      uVar1 = uVar3 & 0x300;
      if (uVar6 != uVar1) {
        if ((in_stack_0000000c != 0) || (uVar6 == uVar1)) {
          return 0;
        }
        if ((byte)(~(byte)(uVar1 >> 8) & (byte)(uVar6 >> 8)) != 0) {
          return 0;
        }
      }
      in_stack_0000000c = 1;
      in_stack_00000004 = *(int *)(in_stack_00000004 + 8);
      in_stack_00000008 = *(int *)(in_stack_00000008 + 8);
    }
    if ((uVar3 & uVar2 & 0x400) == 0) break;
    if ((*(int *)(in_stack_00000004 + 0xc) != *(int *)(in_stack_00000008 + 0xc)) &&
       ((in_stack_0000000c != 0 ||
        (*(int *)(in_stack_00000004 + 0xc) != 0 || *(int *)(in_stack_00000008 + 0xc) != 0)))) {
      return 0;
    }
    in_stack_0000000c = 1;
    in_stack_00000004 = *(int *)(in_stack_00000004 + 8);
    in_stack_00000008 = *(int *)(in_stack_00000008 + 8);
  }
  iVar4 = FUN_004297d6();
  if (iVar4 != 0) {
    return 1;
  }
  if ((((uVar2 & 2) != 0) && ((uVar3 & 1) != 0)) && ((*(byte *)(in_stack_00000004 + 0xc) & 4) != 0))
  {
    uVar5 = FUN_0042983c();
    return uVar5;
  }
  return 0;
}

