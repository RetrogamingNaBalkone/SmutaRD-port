/* Ghidra address: 00403dd8; FUN_00403dd8 */

void FUN_00403dd8(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  int in_stack_00000004;
  undefined1 local_404 [1024];
  
  if (in_stack_00000004 != DAT_00434140) {
    FUN_00403cd4();
  }
  DAT_00434140 = in_stack_00000004;
  iVar3 = 0;
  puVar2 = local_404;
  puVar4 = (undefined1 *)(in_stack_00000004 + 0x2a);
  do {
    iVar3 = iVar3 + 1;
    *puVar2 = *puVar4;
    puVar2[1] = puVar4[-1];
    puVar1 = puVar4 + -2;
    puVar4 = puVar4 + 4;
    puVar2[2] = *puVar1;
    puVar2[3] = 1;
    puVar2 = puVar2 + 4;
  } while (iVar3 < 0x100);
  if (DAT_00434138 == (int *)0x0) {
    iVar3 = (**(code **)(*DAT_00434128 + 0x14))();
    if (iVar3 == 0) {
      (**(code **)(*DAT_0043412c + 0x7c))();
    }
  }
  (**(code **)(*DAT_00434138 + 0x18))();
  return;
}

