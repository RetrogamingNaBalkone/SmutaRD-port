/* Ghidra address: 0042888a; FUN_0042888a */

void FUN_0042888a(void)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  int in_stack_00000004;
  
  bVar1 = FUN_00428da2();
  if ((short)CONCAT31(extraout_var,bVar1) != 0) {
    iVar2 = 0;
    do {
      *(undefined4 *)(in_stack_00000004 + 0x14 + iVar2 * 0x14) = 1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 4);
    waveOutReset(*(HWAVEOUT *)(in_stack_00000004 + 200));
  }
  return;
}

