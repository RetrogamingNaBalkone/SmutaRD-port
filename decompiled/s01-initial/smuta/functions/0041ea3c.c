/* Ghidra address: 0041ea3c; FUN_0041ea3c */

void FUN_0041ea3c(void)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  char *pcVar1;
  int in_stack_00000004;
  
  for (pcVar1 = (char *)(in_stack_00000004 + 0x94); *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
    FUN_004238a4();
  }
  *(undefined1 *)(in_stack_00000004 + 0x94) = 0;
  if (*(int *)(in_stack_00000004 + 0x90) < 1) {
    if (*(int *)(in_stack_00000004 + 0x90) < 0) {
      if (*(int *)(in_stack_00000004 + 0x90) == -2) {
        DAT_0043408c = 30000;
        DAT_00434090 = 30000;
      }
      *(undefined1 *)(DAT_00499d54 + 0x12e) = *(undefined1 *)(in_stack_00000004 + 0x8f);
      FUN_00420544();
    }
  }
  else {
    (**(code **)(*(int *)(*(int *)(DAT_0048aab4 + 0x30e +
                                  (uint)*(byte *)(in_stack_00000004 + 0x8f) * 4) + 0x14) + 0x20))();
    FUN_0040a7a4(*(undefined4 *)(in_stack_00000004 + 0x6c),extraout_EDX,extraout_ECX,
                 *(undefined4 *)(in_stack_00000004 + 0x6c),0);
    *(undefined4 *)(in_stack_00000004 + 0x90) = 0;
  }
  return;
}

