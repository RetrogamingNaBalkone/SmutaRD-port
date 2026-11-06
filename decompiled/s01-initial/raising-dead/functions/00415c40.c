/* Ghidra address: 00415c40; FUN_00415c40 */

void __cdecl FUN_00415c40(int param_1,uint *param_2,int param_3)

{
  int iVar1;
  
  if ((*(short *)(param_1 + 0x12f) != 0) && ((*param_2 & 0x40000) != 0)) {
    *param_2 = *param_2 & 0xfffbffff;
    *(short *)(param_1 + 0x12f) = *(short *)(param_1 + 0x12f) - *(short *)(param_3 + 0x7d);
    *(undefined1 *)(param_1 + 0xff) = 1;
    if (*(short *)(param_1 + 0x133) == 0) {
      iVar1 = *(int *)(param_1 + 0x119);
      *(undefined4 *)(iVar1 + 0x3c) = 0;
      iVar1 = *(int *)(iVar1 + 0x34);
      *(undefined2 *)(iVar1 + 0x111) = *(undefined2 *)(iVar1 + 0x113);
    }
    if (*(short *)(param_1 + 0x12f) < 1) {
      *(undefined2 *)(param_1 + 0x12f) = 0;
      FUN_0041020c(param_1,*(int *)(param_1 + 0x129));
    }
  }
  return;
}

