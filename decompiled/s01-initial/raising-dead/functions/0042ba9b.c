/* Ghidra address: 0042ba9b; FUN_0042ba9b */

void __cdecl FUN_0042ba9b(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined2 in_FS;
  
  FUN_0042b91d((int)param_1);
  puVar1 = (undefined4 *)segment(in_FS,0);
  *puVar1 = *param_1;
  return;
}

