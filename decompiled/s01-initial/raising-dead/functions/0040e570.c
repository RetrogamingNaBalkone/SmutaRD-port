/* Ghidra address: 0040e570; FUN_0040e570 */

void __cdecl FUN_0040e570(int param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_0042c8f0(0x4399ca);
  if (param_1 != 0) {
    if (*(int *)(param_1 + 8) != 0) {
      (*(code *)**(undefined4 **)(*(int *)(param_1 + 8) + 4))();
    }
    if (*(LPCVOID *)(param_1 + 0xc) != (LPCVOID)0x0) {
      FUN_0042361c(*(LPCVOID *)(param_1 + 0xc));
    }
    if ((param_2 & 1) != 0) {
      FUN_004350ec(param_1);
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

