/* Ghidra address: 00435120; FUN_00435120 */

uint * __cdecl FUN_00435120(uint param_1)

{
  uint *puVar1;
  undefined4 extraout_EDX;
  uint uVar2;
  
  if (param_1 == 0) {
    param_1 = 1;
  }
  while( true ) {
    uVar2 = param_1;
    puVar1 = FUN_00435c48(param_1);
    if ((puVar1 != (uint *)0x0) || (DAT_0053e414 == (code *)0x0)) break;
    (*DAT_0053e414)(0,extraout_EDX,uVar2);
  }
  return puVar1;
}

