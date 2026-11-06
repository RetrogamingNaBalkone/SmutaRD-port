/* Ghidra address: 00431f5c; FUN_00431f5c */

void __cdecl FUN_00431f5c(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_0042c8f0(0x43bef8);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_FUN_0043bee4;
    if (param_1[0xe] != 0) {
      FUN_004350fc(param_1[0xe]);
    }
    if (param_1[0xc] == 2) {
      if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)param_1[1])();
      }
      param_1[1] = 0;
    }
    if ((param_2 & 1) != 0) {
      FUN_004350ec((int)param_1);
    }
  }
  *in_FS_OFFSET = local_2c;
  return;
}

