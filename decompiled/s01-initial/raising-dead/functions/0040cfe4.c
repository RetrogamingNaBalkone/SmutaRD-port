/* Ghidra address: 0040cfe4; FUN_0040cfe4 */

undefined4 __cdecl FUN_0040cfe4(int param_1,char *param_2,uint param_3)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  
  if (*(short *)(param_1 + 4) != 1) {
    pcVar1 = FUN_00404d88(0xf);
    FUN_0040e524(pcVar1);
  }
  uVar2 = param_3;
  if ((int)param_3 < 0) {
    uVar2 = param_3 + 0x3fff;
  }
  for (iVar3 = (int)uVar2 >> 0xe; 0 < iVar3; iVar3 = iVar3 + -1) {
    pcVar1 = thunk_FUN_0042fa18(*(uint *)(param_1 + 6),param_2,(char *)0x4000);
    if (pcVar1 == (char *)0xffffffff) {
      pcVar1 = FUN_00404d88(0xf);
      FUN_0040e524(pcVar1);
    }
    param_2 = param_2 + 0x4000;
  }
  pcVar1 = (char *)(param_3 & 0x80003fff);
  if ((int)pcVar1 < 0) {
    pcVar1 = (char *)(((uint)(pcVar1 + -1) | 0xffffc000) + 1);
  }
  pcVar1 = thunk_FUN_0042fa18(*(uint *)(param_1 + 6),param_2,pcVar1);
  if (pcVar1 == (char *)0xffffffff) {
    pcVar1 = FUN_00404d88(0x10);
    FUN_0040e524(pcVar1);
  }
  return *(undefined4 *)(param_1 + 6);
}

