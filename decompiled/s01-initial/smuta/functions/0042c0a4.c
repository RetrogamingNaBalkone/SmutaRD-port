/* Ghidra address: 0042c0a4; FUN_0042c0a4 */

undefined4 FUN_0042c0a4(void)

{
  int iVar1;
  undefined4 uVar2;
  DWORD DVar3;
  undefined4 *in_stack_00000004;
  int in_stack_0000000c;
  
  iVar1 = FUN_0042bad4();
  if (iVar1 == 0) {
    if ((in_stack_0000000c == 1) && (0 < (int)in_stack_00000004[2])) {
      FUN_0042c048();
    }
    *(ushort *)((int)in_stack_00000004 + 0x12) = *(ushort *)((int)in_stack_00000004 + 0x12) & 0xfe5f
    ;
    in_stack_00000004[2] = 0;
    *in_stack_00000004 = in_stack_00000004[1];
    DVar3 = FUN_0042e20c();
    if (DVar3 == 0xffffffff) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

