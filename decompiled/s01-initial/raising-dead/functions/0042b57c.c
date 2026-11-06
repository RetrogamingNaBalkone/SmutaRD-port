/* Ghidra address: 0042b57c; FUN_0042b57c */

/* WARNING: Unable to track spacebase fully for stack */

void __stdcall FUN_0042b57c(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined2 in_FS;
  undefined4 in_stack_00000000;
  
  piVar4 = (int *)FUN_004010f9();
  if (*piVar4 == 0) {
    FUN_004362c4(s___CPPexceptionList_0043a6ae,s_XX_CPP_0043a6c1,0x5d7);
  }
  piVar4 = (int *)FUN_004010f9();
  puVar1 = (undefined4 *)*piVar4;
  puVar5 = (undefined4 *)FUN_004010f9();
  *puVar5 = *puVar1;
  iVar2 = puVar1[10];
  piVar4 = (int *)segment(in_FS,0);
  iVar3 = *piVar4;
  if (iVar3 == 0) {
    FUN_004362c4(&DAT_0043a6c8,s_XX_CPP_0043a6cb,0x5e5);
  }
  if (iVar3 != puVar1[10]) {
    FUN_004362c4(s_xdrPtr_>xdERRaddr____xl_0043a6d2,s_XX_CPP_0043a6ea,0x5e6);
  }
  *(undefined2 *)(iVar2 + 0x10) =
       *(undefined2 *)(*(int *)(iVar2 + 8) + (uint)*(ushort *)(iVar2 + 0x10));
  FUN_0042b4f4((int)puVar1);
  (*(code *)puVar1[7])();
  *(undefined4 *)(*(int *)(iVar2 + 0xc) + -4) = in_stack_00000000;
  return;
}

