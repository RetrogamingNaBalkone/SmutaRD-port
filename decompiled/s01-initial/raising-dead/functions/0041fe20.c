/* Ghidra address: 0041fe20; FUN_0041fe20 */

void __stdcall FUN_0041fe20(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  int *piVar3;
  undefined4 local_28;
  
  FUN_0042c8f0(0x439f24);
  while (0 < DAT_004fa72c) {
    DAT_004fa72c = DAT_004fa72c + -1;
    piVar1 = (int *)(&DAT_004fa730)[DAT_004fa72c];
    if (piVar1 != (int *)0x0) {
      piVar3 = piVar1;
      uVar2 = (**(code **)(*piVar1 + 0x10))();
      if (((short)uVar2 != 0) && (piVar1 != (int *)0x0)) {
        (**(code **)*piVar1)(uVar2,(undefined4 *)*piVar1,piVar3,piVar1,3);
      }
    }
  }
  FUN_0041fe9c(DAT_004f92c4);
  FUN_0042361c(DAT_004f92a8);
  *in_FS_OFFSET = local_28;
  return;
}

