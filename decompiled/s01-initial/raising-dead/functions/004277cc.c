/* Ghidra address: 004277cc; FUN_004277cc */

void __cdecl
FUN_004277cc(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,char *param_5)

{
  short sVar1;
  
  for (sVar1 = 0; sVar1 < param_4; sVar1 = sVar1 + 1) {
    if (*param_5 != -1) {
      (**(code **)(*param_1 + 4))();
    }
    param_5 = param_5 + 1;
  }
  return;
}

