/* Ghidra address: 00429e9c; FUN_00429e9c */

void __cdecl FUN_00429e9c(short *param_1)

{
  DWORD DVar1;
  
  if (*param_1 == 0) {
    DVar1 = timeGetTime();
    *(DWORD *)(param_1 + 1) = DVar1;
    *param_1 = 1;
  }
  return;
}

