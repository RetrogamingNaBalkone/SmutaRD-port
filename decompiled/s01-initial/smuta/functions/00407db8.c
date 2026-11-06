/* Ghidra address: 00407db8; FUN_00407db8 */

undefined2 * FUN_00407db8(void)

{
  undefined2 *puVar1;
  short sVar2;
  undefined2 *in_stack_00000004;
  undefined2 *in_stack_00000008;
  
  sVar2 = 0;
  puVar1 = in_stack_00000004;
  do {
    *puVar1 = *in_stack_00000008;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(in_stack_00000008 + 1);
    sVar2 = sVar2 + 1;
    puVar1 = (undefined2 *)((int)puVar1 + 3);
    in_stack_00000008 = (undefined2 *)((int)in_stack_00000008 + 3);
  } while (sVar2 < 0x100);
  return in_stack_00000004;
}

