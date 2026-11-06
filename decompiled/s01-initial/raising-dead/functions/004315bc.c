/* Ghidra address: 004315bc; FUN_004315bc */

void __cdecl FUN_004315bc(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_0042c8f0(0x43bdd8);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_FUN_0043bd94;
    if ((*(ushort *)(param_1 + 0xc) & 3) == 1) {
      if (param_1[0xb] == 0) {
        FUN_004350fc(param_1[2]);
      }
      else {
        (*(code *)param_1[0xb])();
      }
    }
    FUN_00431d24(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_004350ec((int)param_1);
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

