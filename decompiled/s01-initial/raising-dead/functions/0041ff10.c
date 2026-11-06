/* Ghidra address: 0041ff10; FUN_0041ff10 */

void __cdecl FUN_0041ff10(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *in_EDX;
  bool bVar4;
  
  iVar3 = (int)DAT_004f92ac;
  puVar2 = DAT_004f92c4;
  if (DAT_004f92c4 == (undefined4 *)0x0) {
    DAT_004f92ac = (undefined4 *)((int)DAT_004f92ac + 0x10);
    DAT_004f92c4 = DAT_004f92ac;
    if (DAT_004f92ac != (undefined4 *)0x0) {
      *(undefined4 *)(iVar3 + 0x18) = 0;
      *(undefined4 *)(iVar3 + 0x14) = 0;
      *(int *)(iVar3 + 0x1c) = param_1;
      *DAT_004f92c4 = 0;
    }
  }
  else {
    while (puVar2 != (undefined4 *)0x0) {
      iVar1 = puVar2[3];
      if (*(int *)(iVar1 + 0x12) == 0) {
        bVar4 = true;
        if (*(int *)(iVar1 + 6) <= *(int *)(param_1 + 6)) {
          bVar4 = false;
        }
      }
      else if (*(int *)(iVar1 + 0x12) == 1) {
        bVar4 = true;
        if (*(int *)(iVar1 + 0xe) <= *(int *)(param_1 + 0xe)) {
          bVar4 = false;
        }
      }
      else if (*(int *)(iVar1 + 0x12) == 2) {
        bVar4 = *(int *)(param_1 + 10) < *(int *)(iVar1 + 10);
      }
      else {
        bVar4 = *(short *)(param_1 + 0x17) <= *(short *)(iVar1 + 0x17);
      }
      if (bVar4) {
        iVar1 = puVar2[3];
        if (*(int *)(iVar1 + 0x12) == 0) {
          bVar4 = DAT_004f92b8 < *(int *)(iVar1 + 6);
        }
        else if (*(int *)(iVar1 + 0x12) == 1) {
          bVar4 = DAT_004f92c0 < *(int *)(iVar1 + 0xe);
        }
        else if (*(int *)(iVar1 + 0x12) == 2) {
          bVar4 = DAT_004f92bc < *(int *)(iVar1 + 10);
        }
        else {
          bVar4 = -1 < *(short *)(iVar1 + 0x17);
        }
        if (bVar4) {
          in_EDX = puVar2 + 1;
          puVar2 = (undefined4 *)puVar2[1];
        }
        else {
          in_EDX = puVar2 + 2;
          puVar2 = (undefined4 *)puVar2[2];
        }
      }
      else {
        iVar1 = puVar2[3];
        if (*(int *)(iVar1 + 0x12) == 0) {
          bVar4 = DAT_004f92b8 < *(int *)(iVar1 + 6);
        }
        else if (*(int *)(iVar1 + 0x12) == 1) {
          bVar4 = DAT_004f92c0 < *(int *)(iVar1 + 0xe);
        }
        else if (*(int *)(iVar1 + 0x12) == 2) {
          bVar4 = DAT_004f92bc < *(int *)(iVar1 + 10);
        }
        else {
          bVar4 = -1 < *(short *)(iVar1 + 0x17);
        }
        if (bVar4) {
          in_EDX = puVar2 + 2;
          puVar2 = (undefined4 *)puVar2[2];
        }
        else {
          in_EDX = puVar2 + 1;
          puVar2 = (undefined4 *)puVar2[1];
        }
      }
    }
    DAT_004f92ac = (undefined4 *)((int)DAT_004f92ac + 0x10);
    puVar2 = DAT_004f92ac;
    if (DAT_004f92ac != (undefined4 *)0x0) {
      *(undefined4 *)(iVar3 + 0x18) = 0;
      *(undefined4 *)(iVar3 + 0x14) = 0;
      *(int *)(iVar3 + 0x1c) = param_1;
      *puVar2 = 0;
    }
    *in_EDX = puVar2;
  }
  return;
}

