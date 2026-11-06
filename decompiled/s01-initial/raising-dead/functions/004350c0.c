/* Ghidra address: 004350c0; FUN_004350c0 */

uint * __cdecl FUN_004350c0(int param_1,int param_2)

{
  uint *puVar1;
  
  puVar1 = FUN_00435c48(param_1 * param_2);
  if (puVar1 != (uint *)0x0) {
    FUN_00429fc4(puVar1,0,param_1 * param_2);
  }
  return puVar1;
}

