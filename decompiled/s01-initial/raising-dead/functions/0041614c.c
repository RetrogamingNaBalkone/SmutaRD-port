/* Ghidra address: 0041614c; FUN_0041614c */

undefined4 * __cdecl FUN_0041614c(uint *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  if (*(short *)(DAT_004d0020 + 8) == 0) {
    puVar1 = FUN_00435120(0x1c);
    if (puVar1 == (uint *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = FUN_0040dbd8(puVar1);
    }
  }
  else {
    for (iVar4 = 0; iVar4 < (int)(uint)DAT_00439efc; iVar4 = iVar4 + 1) {
      iVar3 = FUN_0042a210((char *)param_1,&DAT_004d0c2c + iVar4 * 0x104,0x100);
      if (iVar3 == 0) {
        puVar1 = FUN_00435120(0x1c);
        if (puVar1 != (uint *)0x0) {
          puVar2 = FUN_0040dbf8(puVar1);
          return puVar2;
        }
        return (undefined4 *)0x0;
      }
    }
    iVar4 = FUN_0042709c(DAT_0053d630,(char *)param_1);
    puVar1 = FUN_00435120(0x1c);
    if (puVar1 == (uint *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = FUN_0040dbd8(puVar1);
    }
    FUN_0040dd00((int)puVar2,iVar4);
    if (DAT_00439efc < 0x200) {
      FUN_0042a2c8((undefined4 *)(&DAT_004d0c2c + (uint)DAT_00439efc * 0x104),param_1,(char *)0x100)
      ;
      *(undefined4 **)(&DAT_004d0d2c + (uint)DAT_00439efc * 0x104) = puVar2;
      DAT_00439efc = DAT_00439efc + 1;
    }
    FUN_00427190(DAT_0053d630,(char *)param_1);
  }
  return puVar2;
}

