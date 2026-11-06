/* Ghidra address: 00420c20; FUN_00420c20 */

void FUN_00420c20(void)

{
  int *piVar1;
  int iVar2;
  undefined2 *puVar3;
  int in_stack_00000004;
  int in_stack_00000008;
  undefined4 *local_c;
  undefined4 *local_8;
  
  *(undefined2 *)(in_stack_00000004 + 0x7e) = *(undefined2 *)(in_stack_00000008 + 8);
  FUN_00408944();
  *(undefined2 *)(in_stack_00000004 + 0x82) = *(undefined2 *)(in_stack_00000008 + 0xc);
  local_c = (undefined4 *)(in_stack_00000004 + 200);
  iVar2 = 0;
  puVar3 = (undefined2 *)(in_stack_00000004 + 0xf0);
  local_8 = &DAT_00499dfc;
  piVar1 = (int *)(in_stack_00000008 + 0x10);
  do {
    if (*piVar1 != 0) {
      *local_c = *local_8;
      *puVar3 = (short)piVar1[10];
      puVar3[10] = (short)piVar1[0x14];
    }
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 1;
    local_c = local_c + 1;
    local_8 = local_8 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar2 < 10);
  FUN_00420ed0();
  FUN_0040895c();
  return;
}

