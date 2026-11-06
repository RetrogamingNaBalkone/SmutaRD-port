/* Ghidra address: 0042704c; FUN_0042704c */

void __cdecl FUN_0042704c(int *param_1,byte param_2)

{
  int *piVar1;
  int *piVar2;
  
  if (param_1 != (int *)0x0) {
    FUN_00426ff4(param_1);
    FUN_0042361c((LPCVOID)param_1[1]);
    piVar1 = param_1 + 2;
    piVar2 = piVar1;
    (**(code **)(param_1[2] + 8))();
    *piVar1 = (int)&PTR_FUN_004382f8;
    if ((short)param_1[3] != 0) {
      (**(code **)(*piVar1 + 8))(piVar1,*piVar1,piVar2,piVar1);
    }
    if ((param_2 & 1) != 0) {
      FUN_004350ec((int)param_1);
    }
  }
  return;
}

