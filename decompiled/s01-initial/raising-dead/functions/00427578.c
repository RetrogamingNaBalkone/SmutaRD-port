/* Ghidra address: 00427578; FUN_00427578 */

void __cdecl FUN_00427578(int *param_1)

{
  *(bool *)((int)param_1 + 0x34a) = *(char *)((int)param_1 + 0x34a) == '\0';
  (**(code **)(*param_1 + 0x2c))();
  *(bool *)((int)param_1 + 0x34b) = *(char *)((int)param_1 + 0x34b) == '\0';
  (**(code **)(*param_1 + 0x30))();
  return;
}

