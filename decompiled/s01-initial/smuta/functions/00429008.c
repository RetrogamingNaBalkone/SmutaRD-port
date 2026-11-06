/* Ghidra address: 00429008; FUN_00429008 */

undefined4 * FUN_00429008(void)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined4 *in_stack_00000004;
  undefined4 *in_stack_00000008;
  uint in_stack_0000000c;
  
  if (in_stack_00000004 < in_stack_00000008) {
    puVar3 = in_stack_00000004;
    for (uVar1 = in_stack_0000000c >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar3 = *in_stack_00000008;
      in_stack_00000008 = in_stack_00000008 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar1 = in_stack_0000000c & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)in_stack_00000008;
      in_stack_00000008 = (undefined4 *)((int)in_stack_00000008 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  else if (in_stack_00000004 != in_stack_00000008) {
    puVar2 = (undefined1 *)((int)in_stack_00000008 + (in_stack_0000000c - 1));
    puVar4 = (undefined1 *)((int)in_stack_00000004 + (in_stack_0000000c - 1));
    for (uVar1 = in_stack_0000000c & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + -1;
      puVar4 = puVar4 + -1;
    }
    puVar3 = (undefined4 *)(puVar2 + -3);
    puVar5 = (undefined4 *)(puVar4 + -3);
    for (uVar1 = in_stack_0000000c >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + -1;
      puVar5 = puVar5 + -1;
    }
  }
  return in_stack_00000004;
}

