/* Ghidra address: 00414f5c; FUN_00414f5c */

void __cdecl FUN_00414f5c(int *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_0042c8f0(0x439c04);
  if (param_1 != (int *)0x0) {
    param_1[5] = (int)&PTR_FUN_00439c88;
    if (*(int *)((int)param_1 + 0x115) != 0) {
      (*(code *)**(undefined4 **)(*(int *)((int)param_1 + 0x115) + 0x14))();
    }
    if (*(int *)((int)param_1 + 0x119) != 0) {
      (*(code *)**(undefined4 **)(*(int *)((int)param_1 + 0x119) + 0x14))();
    }
    if (*(int *)((int)param_1 + 0x11d) != 0) {
      (*(code *)**(undefined4 **)(*(int *)((int)param_1 + 0x11d) + 0x14))();
    }
    if (*(int *)((int)param_1 + 0x121) != 0) {
      (*(code *)**(undefined4 **)(*(int *)((int)param_1 + 0x121) + 0x14))();
    }
    if (*(int *)((int)param_1 + 0x125) != 0) {
      (*(code *)**(undefined4 **)(*(int *)((int)param_1 + 0x125) + 0x14))();
    }
    if (*(int *)((int)param_1 + 0x129) != 0) {
      (*(code *)**(undefined4 **)(*(int *)((int)param_1 + 0x129) + 0x14))();
    }
    if ((int *)param_1[0x42] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x42] + 4))();
    }
    if ((int *)param_1[0x43] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x43] + 4))();
    }
    *(undefined2 *)((int)param_1 + 0x1b) = 0;
    FUN_00410734(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_004350ec((int)param_1);
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

