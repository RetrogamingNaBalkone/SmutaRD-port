/* Ghidra address: 004010f9; FUN_004010f9 */

undefined4 __stdcall FUN_004010f9(void)

{
  int *piVar1;
  undefined2 in_FS;
  
  piVar1 = (int *)segment(in_FS,0x2c);
  return *(undefined4 *)(*piVar1 + _tls_index * 4);
}

