/* Ghidra address: 004a3250; FUN_004a3250 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a3250(void)

{
  int iVar1;
  float10 in_ST0;
  float10 fVar2;
  
  fVar2 = in_ST0 + (float10)_DAT_004a3278;
  iVar1 = FUN_0042fc2c();
  _DAT_004a3278 = (double)(fVar2 - (float10)iVar1);
  return;
}

