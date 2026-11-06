/* Ghidra address: 004162a4; FUN_004162a4 */

void __cdecl FUN_004162a4(int param_1,byte param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  short sVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_0042c8f0(0x439f0c);
  if (param_1 != 0) {
    sVar3 = 0;
    do {
      FUN_0041657c(param_1,(byte)sVar3);
      sVar3 = sVar3 + 1;
    } while (sVar3 < 0x100);
    piVar4 = (int *)(param_1 + 0x758);
    for (sVar3 = 0; sVar3 < *(short *)(param_1 + 0x70e); sVar3 = sVar3 + 1) {
      puVar2 = (undefined4 *)*piVar4;
      if (puVar2 != (undefined4 *)0x0) {
        for (; puVar1 = (undefined4 *)*puVar2, puVar1 != (undefined4 *)0x0; puVar2 = puVar2 + 1) {
          if (puVar1 != (undefined4 *)0x0) {
            (**(code **)*puVar1)();
          }
        }
        FUN_004350fc(*piVar4);
      }
      piVar4 = piVar4 + 1;
    }
    if ((param_2 & 1) != 0) {
      FUN_004350ec(param_1);
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

