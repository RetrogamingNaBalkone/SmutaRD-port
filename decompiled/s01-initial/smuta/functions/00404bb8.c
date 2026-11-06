/* Ghidra address: 00404bb8; FUN_00404bb8 */

void FUN_00404bb8(void)

{
  char *pcVar1;
  undefined1 *puVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar1 = FUN_004042c0();
  iVar3 = 0;
  puVar2 = &DAT_004342b3;
  do {
    *puVar2 = 0;
    iVar3 = iVar3 + 1;
    puVar2[-1] = *pcVar1 << 2;
    pcVar4 = pcVar1 + 2;
    puVar2[-2] = pcVar1[1] << 2;
    pcVar1 = pcVar1 + 3;
    puVar2[-3] = *pcVar4 << 2;
    puVar2 = puVar2 + 4;
  } while (iVar3 < 0x100);
  return;
}

