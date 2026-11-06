/* Ghidra address: 004203d4; FUN_004203d4 */

void __cdecl FUN_004203d4(short *param_1)

{
  int *piVar1;
  undefined2 uVar2;
  char *pcVar3;
  int iVar4;
  char *local_c;
  int local_8;
  
  FUN_004274c0((int)DAT_0053d640,DAT_0053d6d0,DAT_0053d6d4,DAT_0053d6d8,DAT_0053d6dc + 1);
  piVar1 = DAT_0053d640;
  if (*(ushort *)(*(int *)(param_1 + 0x1c7) + 0x21) < 0x10) {
    uVar2 = (&DAT_004c32aa)[*(ushort *)(*(int *)(param_1 + 0x1c7) + 0x21)];
  }
  else {
    uVar2 = 0;
  }
  *(undefined2 *)(DAT_0053d640 + 4) = uVar2;
  (**(code **)(*piVar1 + 0x3c))();
  *(undefined2 *)(DAT_0053d640 + 4) = 0x1e;
  local_c = &DAT_004fc670;
  for (local_8 = 0; local_8 < *param_1 + -3; local_8 = local_8 + 1) {
    pcVar3 = local_c;
    for (iVar4 = 0; piVar1 = DAT_0053d640, iVar4 < *param_1 + -3; iVar4 = iVar4 + 1) {
      if (*pcVar3 == '\x01') {
        *(undefined2 *)(DAT_0053d640 + 4) = 0x1e;
        (**(code **)(*piVar1 + 0x3c))();
      }
      piVar1 = DAT_0053d640;
      if (*pcVar3 == '\x02') {
        *(undefined2 *)(DAT_0053d640 + 4) = 0x82;
        (**(code **)(*piVar1 + 0x3c))();
      }
      pcVar3 = pcVar3 + 1;
    }
    local_c = local_c + 0x40;
  }
  FUN_0040ca80(DAT_0043f34c);
  return;
}

