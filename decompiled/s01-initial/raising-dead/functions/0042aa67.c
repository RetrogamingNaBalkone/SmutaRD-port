/* Ghidra address: 0042aa67; FUN_0042aa67 */

void __cdecl FUN_0042aa67(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  undefined4 local_c;
  undefined4 *local_8;
  
  bVar3 = param_1 != (undefined4 *)0x0;
  if (param_1 == (undefined4 *)0x0) {
    FUN_0042ab02(&local_c);
    param_1 = local_8;
  }
  else {
    param_1[5] = &LAB_0042a8c8;
    param_1[6] = &LAB_0042a9a8;
  }
  uVar4 = 0xb0;
  puVar1 = (undefined4 *)FUN_004010f9();
  FUN_00429f54(puVar1,param_1,uVar4);
  if (bVar3) {
    iVar2 = FUN_004010f9();
    *(undefined **)(iVar2 + 0xc) = &DAT_0043a444;
    iVar2 = FUN_004010f9();
    *(undefined **)(iVar2 + 0x10) = &__DebuggerHookData;
  }
  iVar2 = FUN_004010f9();
  *(undefined1 **)(iVar2 + 0x14) = &LAB_0042a8c8;
  iVar2 = FUN_004010f9();
  *(undefined1 **)(iVar2 + 0x18) = &LAB_0042a9a8;
  return;
}

