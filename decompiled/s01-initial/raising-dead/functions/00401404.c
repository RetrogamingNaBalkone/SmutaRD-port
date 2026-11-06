/* Ghidra address: 00401404; FUN_00401404 */

void __stdcall FUN_00401404(void)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_0042c8f0(0x438204);
  if (0 < DAT_00438200) {
    (**(code **)(**(int **)(&DAT_0043da34 + DAT_00438200 * 4) + 0x14))();
    piVar1 = *(int **)(&DAT_0043da34 + DAT_00438200 * 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(piVar1,DAT_00438200,*piVar1,piVar1,3);
    }
    DAT_00438200 = DAT_00438200 + -1;
  }
  *in_FS_OFFSET = local_28;
  return;
}

