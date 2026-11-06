/* Ghidra address: 00426ea0; FUN_00426ea0 */

/* WARNING: Removing unreachable block (ram,0x00426ef4) */

void __cdecl FUN_00426ea0(undefined4 *param_1)

{
  int local_10;
  uint local_a;
  
  FUN_0040cf10(&local_10);
  FUN_0040cfe4((int)&local_10,(char *)*param_1,0x10000);
  thunk_FUN_004301bc(local_a);
  param_1[1] = 0;
  return;
}

