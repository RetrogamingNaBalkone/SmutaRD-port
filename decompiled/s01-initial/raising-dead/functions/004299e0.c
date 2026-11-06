/* Ghidra address: 004299e0; FUN_004299e0 */

void __cdecl FUN_004299e0(int param_1,byte param_2)

{
  undefined4 *puVar1;
  short sVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_0042c8f0(0x43a1c2);
  if (param_1 != 0) {
    while (0 < DAT_0053d6e6) {
      DAT_0053d6e6 = DAT_0053d6e6 + -1;
      sVar2 = (**(code **)(**(int **)(DAT_0053d6e6 * 4 + DAT_0053d6e8) + 0x10))();
      if ((sVar2 != 0) &&
         (puVar1 = *(undefined4 **)(DAT_0053d6e8 + DAT_0053d6e6 * 4), puVar1 != (undefined4 *)0x0))
      {
        (**(code **)*puVar1)((undefined4 *)*puVar1,(int)DAT_0053d6e6,DAT_0053d6e8,puVar1,3);
      }
    }
    if (0 < DAT_0053d6e4) {
      FUN_004350fc(DAT_0053d6e8);
    }
    if ((param_2 & 1) != 0) {
      FUN_004350ec(param_1);
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

