/* Ghidra address: 00427784; FUN_00427784 */

void __cdecl
FUN_00427784(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,byte *param_5)

{
  byte bVar1;
  short sVar2;
  
  for (sVar2 = 0; sVar2 < param_4; sVar2 = sVar2 + 1) {
    bVar1 = (**(code **)*param_1)();
    if ((ushort)bVar1 == *(ushort *)(param_1 + 5)) {
      bVar1 = 0xff;
    }
    *param_5 = bVar1;
    param_5 = param_5 + 1;
  }
  return;
}

