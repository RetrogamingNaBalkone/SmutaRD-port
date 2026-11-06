/* Ghidra address: 00428cbd; FUN_00428cbd */

DWORD FUN_00428cbd(undefined4 param_1,undefined4 param_2,DWORD param_3,int param_4)

{
  DWORD local_8;
  
  local_8 = param_3;
  waveOutGetVolume(*(HWAVEOUT *)(param_4 + 200),&local_8);
  return local_8;
}

