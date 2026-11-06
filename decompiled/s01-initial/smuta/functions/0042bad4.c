/* Ghidra address: 0042bad4; FUN_0042bad4 */

undefined4 FUN_0042bad4(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *in_stack_00000004;
  
  if (in_stack_00000004 == (int *)0x0) {
    FUN_0042bc88();
    uVar1 = 0;
  }
  else if ((short)in_stack_00000004[5] == (short)in_stack_00000004) {
    if (in_stack_00000004[2] < 0) {
      iVar3 = in_stack_00000004[3] + in_stack_00000004[2] + 1;
      in_stack_00000004[2] = in_stack_00000004[2] - iVar3;
      *in_stack_00000004 = in_stack_00000004[1];
      iVar2 = FUN_0042dc08();
      if ((iVar3 == iVar2) || ((*(byte *)((int)in_stack_00000004 + 0x13) & 2) != 0)) {
        uVar1 = 0;
      }
      else {
        *(ushort *)((int)in_stack_00000004 + 0x12) =
             *(ushort *)((int)in_stack_00000004 + 0x12) | 0x10;
        uVar1 = 0xffffffff;
      }
    }
    else {
      if ((((*(byte *)((int)in_stack_00000004 + 0x12) & 8) != 0) ||
          ((int)in_stack_00000004 + 0x17 == *in_stack_00000004)) &&
         (in_stack_00000004[2] = 0, (int)in_stack_00000004 + 0x17 == *in_stack_00000004)) {
        *in_stack_00000004 = in_stack_00000004[1];
      }
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

