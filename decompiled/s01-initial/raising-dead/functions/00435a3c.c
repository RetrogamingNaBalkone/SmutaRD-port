/* Ghidra address: 00435a3c; FUN_00435a3c */

undefined4 __cdecl FUN_00435a3c(uint *param_1)

{
  uint uVar1;
  uint *puVar2;
  SIZE_T SVar3;
  uint uVar4;
  
  uVar4 = DAT_0043c860;
  if (DAT_0043c884 < DAT_0043c880) {
    uVar4 = DAT_0043c85c;
  }
  if (uVar4 <= *param_1 - 0xc) {
    for (puVar2 = DAT_0043c864; puVar2 != (uint *)0x0; puVar2 = (uint *)puVar2[0x23]) {
      if ((int)param_1 + (*param_1 & 0xfffffffc) + 4 == (int)puVar2 + (*puVar2 - 4)) {
        uVar4 = *puVar2 - (*param_1 - 0xc & ~(uVar4 - 1));
        FUN_00435678(puVar2,uVar4);
        while (uVar4 + (int)puVar2 <= puVar2[puVar2[2] + 2]) {
          puVar2[2] = puVar2[2] - 1;
          SVar3 = *puVar2 - (puVar2[puVar2[2] + 3] - (int)puVar2);
          FUN_00436234((LPVOID)puVar2[puVar2[2] + 3],SVar3);
          DAT_0043c884 = DAT_0043c884 - SVar3;
          FUN_00436258((LPVOID)puVar2[puVar2[2] + 3]);
          uVar1 = puVar2[puVar2[2] + 3];
          puVar2[1] = uVar1 - (int)puVar2;
          *puVar2 = uVar1 - (int)puVar2;
        }
        FUN_00436234((LPVOID)(puVar2[puVar2[2] + 2] + uVar4),*puVar2 - uVar4);
        DAT_0043c884 = DAT_0043c884 - (*puVar2 - uVar4);
        *puVar2 = uVar4;
        return 1;
      }
    }
  }
  return 0;
}

