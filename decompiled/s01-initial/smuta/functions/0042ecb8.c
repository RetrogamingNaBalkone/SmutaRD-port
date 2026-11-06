/* Ghidra address: 0042ecb8; FUN_0042ecb8 */

int * FUN_0042ecb8(void)

{
  int *piVar1;
  undefined1 *puVar2;
  bool bVar3;
  undefined3 extraout_var;
  uint uVar4;
  int iVar5;
  undefined1 uVar6;
  int *in_stack_00000004;
  undefined1 *in_stack_00000008;
  
  bVar3 = FUN_0042e6f4();
  if (CONCAT31(extraout_var,bVar3) != 0) {
    iVar5 = *(int *)(*in_stack_00000004 + 4);
    if (*(uint *)(iVar5 + 0x20) < *(uint *)(iVar5 + 0x24)) {
      iVar5 = *(int *)(iVar5 + 0x24) - *(int *)(iVar5 + 0x20);
    }
    else {
      iVar5 = 0;
    }
    if (iVar5 == 0) {
      uVar4 = FUN_0042e6a4();
      uVar6 = (undefined1)uVar4;
    }
    else {
      piVar1 = *(int **)(*in_stack_00000004 + 4);
      if (((uint)piVar1[8] < (uint)piVar1[9]) ||
         (iVar5 = (**(code **)(*piVar1 + 0xc))(), iVar5 != -1)) {
        puVar2 = (undefined1 *)piVar1[8];
        piVar1[8] = piVar1[8] + 1;
        uVar6 = *puVar2;
      }
      else {
        uVar6 = 0xff;
      }
    }
    *in_stack_00000008 = uVar6;
    return in_stack_00000004;
  }
  return in_stack_00000004;
}

