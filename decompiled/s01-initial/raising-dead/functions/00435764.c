/* Ghidra address: 00435764; FUN_00435764 */

undefined4 __cdecl FUN_00435764(int param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint local_c;
  uint *local_8;
  
  uVar6 = param_1 + 0xfffU & 0xfffff000;
  if (DAT_0043c880 == 0) {
    DAT_0043c880 = FUN_00435f24();
  }
  puVar1 = DAT_0043c864;
  if (DAT_0043c86c == 0) {
    uVar6 = uVar6 + (DAT_0043c858 * 2 + 0x109fU & 0xfffff000);
  }
  for (; puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[0x23]) {
    if (uVar6 < puVar1[1] - *puVar1) {
      iVar2 = DAT_0043c850;
      if ((uint)(DAT_0043c884 + DAT_0043c84c) < DAT_0043c880) {
        iVar2 = DAT_0043c84c;
      }
      iVar5 = DAT_0043c850;
      if ((uint)(DAT_0043c884 + DAT_0043c84c) < DAT_0043c880) {
        iVar5 = DAT_0043c84c;
      }
      if (puVar1[1] < (iVar2 + -1 + uVar6 & ~(iVar5 - 1U)) + *puVar1) {
        uVar6 = puVar1[1];
      }
      else {
        iVar2 = DAT_0043c850;
        if ((uint)(DAT_0043c884 + DAT_0043c84c) < DAT_0043c880) {
          iVar2 = DAT_0043c84c;
        }
        iVar5 = DAT_0043c850;
        if ((uint)(DAT_0043c884 + DAT_0043c84c) < DAT_0043c880) {
          iVar5 = DAT_0043c84c;
        }
        uVar6 = (iVar2 + -1 + uVar6 & ~(iVar5 - 1U)) + *puVar1;
      }
      iVar2 = FUN_004361e0((LPVOID)(*puVar1 + (int)puVar1),uVar6 - *puVar1);
      if (iVar2 != 0) {
        DAT_0043c884 = DAT_0043c884 + (uVar6 - *puVar1);
        FUN_00435678(puVar1,uVar6);
        return 0;
      }
      iVar2 = FUN_004361e0((LPVOID)(*puVar1 + (int)puVar1),0x1000);
      if (iVar2 != 0) {
        DAT_0043c884 = DAT_0043c884 + 0x1000;
        FUN_00435678(puVar1,*puVar1 + 0x1000);
        return 0;
      }
      return 0xffffffff;
    }
  }
  uVar3 = uVar6;
  if (uVar6 < DAT_0043c848) {
    uVar3 = DAT_0043c848;
  }
  iVar2 = FUN_00436174(uVar3,&local_8,&local_c);
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    iVar2 = DAT_0043c850;
    if ((uint)(DAT_0043c884 + DAT_0043c84c) < DAT_0043c880) {
      iVar2 = DAT_0043c84c;
    }
    iVar5 = DAT_0043c850;
    if ((uint)(DAT_0043c884 + DAT_0043c84c) < DAT_0043c880) {
      iVar5 = DAT_0043c84c;
    }
    uVar6 = uVar6 + iVar2 + 0xfff & ~(iVar5 - 1U);
    for (puVar1 = DAT_0043c864; puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[0x23]) {
      if (((uint *)(puVar1[1] + (int)puVar1) == local_8) && ((int)puVar1[2] < 0x20)) {
        iVar2 = puVar1[1] - *puVar1;
        if (iVar2 != 0) {
          iVar5 = FUN_004361e0((LPVOID)(*puVar1 + (int)puVar1),iVar2);
          if (iVar5 == 0) {
            return 0xffffffff;
          }
          DAT_0043c884 = DAT_0043c884 + iVar2;
          FUN_00435678(puVar1,puVar1[1]);
        }
        iVar5 = FUN_004361e0(local_8,uVar6 - iVar2);
        if (iVar5 != 0) {
          DAT_0043c884 = DAT_0043c884 + (uVar6 - iVar2);
          uVar3 = puVar1[2];
          puVar1[2] = puVar1[2] + 1;
          puVar1[uVar3 + 3] = (uint)local_8;
          puVar1[1] = puVar1[1] + local_c;
          FUN_00435678(puVar1,(uVar6 + *puVar1) - iVar2);
          return 0;
        }
        return 0xffffffff;
      }
    }
    iVar2 = FUN_004361e0(local_8,uVar6);
    if (iVar2 == 0) {
      FUN_00436258(local_8);
      uVar4 = 0xffffffff;
    }
    else {
      DAT_0043c884 = DAT_0043c884 + uVar6;
      FUN_00435578(local_8,uVar6,local_c);
      uVar4 = 0;
    }
  }
  return uVar4;
}

