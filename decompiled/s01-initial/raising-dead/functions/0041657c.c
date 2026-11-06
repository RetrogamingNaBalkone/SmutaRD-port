/* Ghidra address: 0041657c; FUN_0041657c */

void __cdecl FUN_0041657c(int param_1,byte param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_0042c8f0(0x439f1c);
  iVar1 = *(int *)(param_1 + 0x30e + (uint)param_2 * 4);
  if (iVar1 != 0) {
    if (iVar1 != 0) {
      (*(code *)**(undefined4 **)(iVar1 + 0x14))
                (*(undefined4 **)(iVar1 + 0x14),param_2,param_2,iVar1,3);
    }
    *(undefined4 *)(param_1 + 0x30e + (uint)param_2 * 4) = 0;
  }
  *in_FS_OFFSET = local_28;
  return;
}

