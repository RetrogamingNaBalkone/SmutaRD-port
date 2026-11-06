/* Ghidra address: 0041a184; FUN_0041a184 */

void __cdecl FUN_0041a184(uint param_1)

{
  undefined2 uVar1;
  int iVar2;
  
  iVar2 = DAT_0053d640;
  uVar1 = DAT_004c329a;
  if ((param_1 & (int)*(short *)(DAT_004d09fc + 0x93)) == 0) {
    *(undefined2 *)(DAT_0053d640 + 0x20) = DAT_004c3298;
    *(undefined2 *)(iVar2 + 0x22) = uVar1;
  }
  else {
    if (param_1 == 1) {
      *(undefined2 *)(DAT_0053d640 + 0x20) = DAT_004c32a0;
      *(undefined2 *)(iVar2 + 0x22) = uVar1;
      return;
    }
    if (param_1 == 2) {
      *(undefined2 *)(DAT_0053d640 + 0x20) = DAT_004c329e;
      *(undefined2 *)(iVar2 + 0x22) = uVar1;
      return;
    }
    if (param_1 == 4) {
      *(undefined2 *)(DAT_0053d640 + 0x20) = DAT_004c329c;
      *(undefined2 *)(iVar2 + 0x22) = uVar1;
      return;
    }
  }
  return;
}

