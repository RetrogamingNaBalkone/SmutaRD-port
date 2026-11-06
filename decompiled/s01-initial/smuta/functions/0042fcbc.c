/* Ghidra address: 0042fcbc; FUN_0042fcbc */

undefined4 FUN_0042fcbc(void)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *in_stack_00000004;
  
  uVar1 = in_stack_00000004[1];
  uVar3 = 0;
  if (uVar1 != 0) {
    uVar3 = uVar1 % 10;
    in_stack_00000004[1] = uVar1 / 10;
  }
  uVar2 = *in_stack_00000004;
  *in_stack_00000004 = (int)(CONCAT44(uVar3,uVar2) / 10);
  return (int)(CONCAT44(uVar3,uVar2) % 10);
}

