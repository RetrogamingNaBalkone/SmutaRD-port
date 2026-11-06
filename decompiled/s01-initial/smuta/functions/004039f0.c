/* Ghidra address: 004039f0; FUN_004039f0 */

void FUN_004039f0(void)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_00434128 + 0x54))();
  if (iVar1 != 0) {
    FUN_0042a068();
  }
  if (DAT_0043412c != (int *)0x0) {
    (**(code **)(*DAT_0043412c + 8))();
    DAT_0043412c = (int *)0x0;
  }
  if (DAT_00434138 != (int *)0x0) {
    (**(code **)(*DAT_00434138 + 8))();
    DAT_00434138 = (int *)0x0;
  }
  FUN_00429054();
  iVar1 = (**(code **)(*DAT_00434128 + 0x18))();
  if (iVar1 != 0) {
    FUN_0042a068();
  }
  FUN_00429054();
  iVar1 = (**(code **)(*DAT_0043412c + 0x30))();
  if (iVar1 != 0) {
    FUN_0042a068();
  }
  if (DAT_0043413c == 0) {
    DAT_00434134 = DAT_0043412c;
  }
  else {
    DAT_00434134 = DAT_00434130;
  }
  return;
}

