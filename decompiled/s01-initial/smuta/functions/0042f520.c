/* Ghidra address: 0042f520; FUN_0042f520 */

int FUN_0042f520(void)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *in_stack_00000004;
  undefined1 *in_stack_00000008;
  int in_stack_0000000c;
  undefined1 local_8;
  
  if ((uint)in_stack_00000004[8] < (uint)in_stack_00000004[9]) {
    iVar4 = in_stack_00000004[9] - in_stack_00000004[8];
  }
  else {
    iVar4 = 0;
  }
  if (0 < iVar4) {
    FUN_00428fe4();
    in_stack_00000008 = in_stack_00000008 + iVar4;
    in_stack_00000004[8] = in_stack_00000004[8] + iVar4;
  }
  while( true ) {
    if (in_stack_0000000c <= iVar4) {
      return iVar4;
    }
    if (((uint)in_stack_00000004[8] < (uint)in_stack_00000004[9]) ||
       (iVar2 = (**(code **)(*in_stack_00000004 + 0xc))(), iVar2 != -1)) {
      pbVar1 = (byte *)in_stack_00000004[8];
      in_stack_00000004[8] = in_stack_00000004[8] + 1;
      uVar3 = (uint)*pbVar1;
    }
    else {
      uVar3 = 0xffffffff;
    }
    if (uVar3 == 0xffffffff) break;
    local_8 = (undefined1)uVar3;
    *in_stack_00000008 = local_8;
    in_stack_00000008 = in_stack_00000008 + 1;
    iVar4 = iVar4 + 1;
  }
  return iVar4;
}

