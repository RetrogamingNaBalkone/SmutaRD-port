/* Ghidra address: 00401000; entry */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void entry(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined2 in_FS;
  
  _DAT_0043405e = DAT_0043405a << 2;
  puVar3 = &DAT_00439040;
  for (iVar2 = 0x61c98; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined1 *)puVar3 = 0;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  piVar1 = (int *)segment(in_FS,4);
  _DAT_0043406e = *piVar1;
  _DAT_00434066 = *(undefined4 *)(_DAT_0043406e + -8);
  _DAT_0043406a = *(undefined4 *)(_DAT_0043406e + -4);
  DAT_0049aa2c = _DAT_0043406e + -4;
  FUN_0042b696();
  _DAT_00434062 = GetModuleHandleA((LPCSTR)0x0);
  FUN_004323d8();
  return;
}

