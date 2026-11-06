/* Ghidra address: 0042b4f4; FUN_0042b4f4 */

void __cdecl FUN_0042b4f4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_0053e154;
  if (*(char *)(param_1 + 0x44) != '\0') {
    if ((*(byte *)(param_1 + 0x1a) & 2) != 0) {
      FUN_0042b47f(param_1 + 0x46,param_1,*(undefined **)(*(int *)(param_1 + 0x14) + 0x28),
                   (uint)*(ushort *)(*(int *)(param_1 + 0x14) + 0x2c));
    }
    DAT_0053e154 = uVar2;
    *(undefined1 *)(param_1 + 0x44) = 0;
  }
  if (*(char *)(param_1 + 0x45) != '\0') {
    iVar1 = *(int *)(param_1 + 0x3c);
    if (iVar1 == 0) {
      FUN_004362c4(s_argType_0043a69f,s_XX_CPP_0043a6a7,0x5ac);
    }
    if (((*(byte *)(iVar1 + 4) & 2) != 0) && ((*(byte *)(iVar1 + 0xc) & 2) != 0)) {
      FUN_0042b47f(*(undefined4 *)(param_1 + 0x40),iVar1,*(undefined **)(iVar1 + 0x28),
                   (uint)*(ushort *)(iVar1 + 0x2c));
    }
    *(undefined1 *)(param_1 + 0x45) = 0;
  }
  return;
}

