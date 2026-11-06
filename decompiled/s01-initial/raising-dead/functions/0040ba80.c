/* Ghidra address: 0040ba80; FUN_0040ba80 */

void __stdcall FUN_0040ba80(void)

{
  int iVar1;
  
  if (DAT_00438f30 != (int *)0x0) {
    iVar1 = (**(code **)(*DAT_00438f30 + 0x60))();
    if (iVar1 == -0x7789fe3e) {
      FUN_0040ba10(DAT_00438f30);
    }
  }
  if (DAT_00438f34 != (int *)0x0) {
    iVar1 = (**(code **)(*DAT_00438f34 + 0x60))();
    if (iVar1 == -0x7789fe3e) {
      FUN_0040ba10(DAT_00438f34);
    }
  }
  return;
}

