/* Ghidra address: 00401000; entry */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall entry(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined **ppuVar3;
  
  _DAT_00438147 = _tls_index << 2;
  puVar2 = &DAT_0043cd68;
  for (iVar1 = 0x1018ac; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined1 *)puVar2 = 0;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  FUN_0042aa67((undefined4 *)0x0);
  ppuVar3 = &PTR_DAT_0043810c;
  _DAT_0043814b = GetModuleHandleA((LPCSTR)0x0);
  FUN_00436f4c((int)ppuVar3);
  return;
}

