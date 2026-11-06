/* Ghidra address: 0042f500; FUN_0042f500 */

uint FUN_0042f500(void)

{
  int iVar1;
  uint uVar2;
  int *in_stack_00000004;
  
  iVar1 = (**(code **)(*in_stack_00000004 + 0xc))();
  if (iVar1 == -1) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(byte *)in_stack_00000004[8];
  }
  return uVar2;
}

