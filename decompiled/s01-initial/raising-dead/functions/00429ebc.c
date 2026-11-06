/* Ghidra address: 00429ebc; FUN_00429ebc */

undefined4 __cdecl FUN_00429ebc(short *param_1)

{
  DWORD DVar1;
  
  if (*param_1 != 0) {
    DVar1 = timeGetTime();
    *(DWORD *)(param_1 + 3) = DVar1 - *(int *)(param_1 + 1);
  }
  return *(undefined4 *)(param_1 + 3);
}

