/* Ghidra address: 0042bb0a; FUN_0042bb0a */

/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __stdcall FUN_0042bb0a(void)

{
  undefined4 uVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  int unaff_EBP;
  undefined *UNRECOVERED_JUMPTABLE;
  undefined2 in_FS;
  
  *(undefined4 *)(unaff_EBP + -4) = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -8) = *(undefined4 *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -0xc) = *(undefined4 *)(unaff_EBP + 0x10);
  *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(*(int *)(unaff_EBP + -4) + 0x1c);
  piVar8 = *(int **)(*(int *)(unaff_EBP + -8) + 8);
  *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -8) - piVar8[1];
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(*(int *)(unaff_EBP + -8) + 0xc);
  if ((*(byte *)(*(int *)(unaff_EBP + -4) + 4) & 6) == 0) {
    if ((**(int **)(unaff_EBP + -4) != 0xeefface) &&
       (iVar3 = FUN_004010f9(), **(int **)(iVar3 + 0xc) != 0)) {
      ___lockDebuggerData_qv();
      iVar3 = FUN_004010f9();
      *(undefined4 *)(*(int *)(iVar3 + 0x10) + 0x14) = 0xc;
      iVar3 = FUN_004010f9();
      *(undefined4 *)(*(int *)(iVar3 + 0x10) + 0x18) = 0;
      iVar3 = FUN_004010f9();
      *(undefined4 *)(*(int *)(iVar3 + 0x10) + 0x20) = *(undefined4 *)(unaff_EBP + 0xc);
      iVar3 = FUN_004010f9();
      *(undefined4 *)(*(int *)(iVar3 + 0x10) + 0x34) = **(undefined4 **)(unaff_EBP + -4);
      iVar3 = FUN_004010f9();
      (**(code **)(*(int *)(iVar3 + 0x10) + 0xc))();
      ___unlockDebuggerData_qv();
    }
    uVar9 = (uint)*(ushort *)(*(int *)(unaff_EBP + -8) + 0x10);
    while (uVar9 != 0) {
      *(uint *)(unaff_EBP + -0x14) = (uint)*(ushort *)((int)piVar8 + uVar9);
      *(uint *)(unaff_EBP + -0x20) = (uint)*(ushort *)((int)piVar8 + uVar9 + 2);
      iVar3 = uVar9 + 4;
      switch(*(undefined4 *)(unaff_EBP + -0x20)) {
      case 0:
      case 4:
      case 5:
        break;
      case 1:
        if (**(int **)(unaff_EBP + -4) != 0xeefface) {
          *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(unaff_EBP + -4);
          *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(unaff_EBP + -0xc);
          *(undefined4 *)(*(int *)(unaff_EBP + -8) + 0x14) = **(undefined4 **)(unaff_EBP + -4);
          *(int *)(*(int *)(unaff_EBP + -8) + 0x18) = unaff_EBP + -0x34;
          _DAT_0053e15c = *(undefined4 *)((int)piVar8 + iVar3);
          iVar7 = FUN_0042acdb();
LAB_0042be55:
          if (iVar7 < 0) {
            if ((*(byte *)(*(int *)(unaff_EBP + -4) + 4) & 1) != 0) {
              *(undefined2 *)(*(int *)(unaff_EBP + -8) + 0x10) = *(undefined2 *)(unaff_EBP + -0x14);
            }
            return 0;
          }
          if (iVar7 != 0) {
            *(undefined4 *)(*(int *)(unaff_EBP + -8) + 0x18) = 0;
            *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x14);
            iVar7 = FUN_004010f9();
            if (**(int **)(iVar7 + 0xc) != 0) {
              ___lockDebuggerData_qv();
              iVar7 = FUN_004010f9();
              *(undefined4 *)(*(int *)(iVar7 + 0x10) + 0x14) = 0xd;
              iVar7 = FUN_004010f9();
              *(undefined4 *)(*(int *)(iVar7 + 0x10) + 0x18) = 0;
              iVar7 = FUN_004010f9();
              *(undefined4 *)(*(int *)(iVar7 + 0x10) + 0x20) = *(undefined4 *)(unaff_EBP + 0xc);
              iVar7 = FUN_004010f9();
              *(undefined4 *)(*(int *)(iVar7 + 0x10) + 0x34) = **(undefined4 **)(unaff_EBP + -4);
              iVar7 = FUN_004010f9();
              (**(code **)(*(int *)(iVar7 + 0x10) + 0xc))();
              ___unlockDebuggerData_qv();
            }
            UNRECOVERED_JUMPTABLE = *(undefined **)((int)piVar8 + iVar3 + 4);
LAB_0042bcf3:
            FUN_0042b440(*(PVOID *)(unaff_EBP + -8),*(PEXCEPTION_RECORD *)(unaff_EBP + -4));
            FUN_0042b91d(*(int *)(unaff_EBP + -8));
            *(undefined2 *)(*(int *)(unaff_EBP + -8) + 0x10) = *(undefined2 *)(unaff_EBP + -0x2c);
            if (*(int *)(unaff_EBP + -0x20) == 3) {
              FUN_0042b654(*(int *)(unaff_EBP + -0x24),*(int *)(unaff_EBP + -8),
                           *(int *)(unaff_EBP + -0x10),*(int **)(unaff_EBP + -0x28),
                           *(int *)(unaff_EBP + -0x18));
            }
            iVar3 = FUN_004010f9();
            if (**(int **)(iVar3 + 0xc) != 0) {
              ___lockDebuggerData_qv();
              iVar3 = FUN_004010f9();
              *(undefined4 *)(*(int *)(iVar3 + 0x10) + 0x14) = 2;
              iVar3 = FUN_004010f9();
              *(undefined **)(*(int *)(iVar3 + 0x10) + 0x18) = UNRECOVERED_JUMPTABLE;
              pcVar6 = FUN_0042c92c(*(int *)(*(int *)(unaff_EBP + -0x10) + 4));
              iVar3 = FUN_004010f9();
              *(char **)(*(int *)(iVar3 + 0x10) + 0x28) = pcVar6;
              iVar3 = FUN_004010f9();
              if (*(char *)(*(int *)(unaff_EBP + -0x10) + 0x44) == '\0') {
                iVar7 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0x40);
              }
              else {
                iVar7 = *(int *)(unaff_EBP + -0x10) + 0x46;
              }
              *(int *)(*(int *)(iVar3 + 0x10) + 0x1c) = iVar7;
              iVar3 = FUN_004010f9();
              (**(code **)(*(int *)(iVar3 + 0x10) + 0xc))();
              ___unlockDebuggerData_qv();
            }
            FUN_0042ace4(UNRECOVERED_JUMPTABLE);
          }
        }
        break;
      case 2:
        if (**(int **)(unaff_EBP + -4) != 0xeefface) {
          *(undefined4 *)(*(int *)(unaff_EBP + -8) + 0x14) = **(undefined4 **)(unaff_EBP + -4);
          iVar7 = *(int *)((int)piVar8 + iVar3);
          goto LAB_0042be55;
        }
        break;
      case 3:
        if (**(int **)(unaff_EBP + -4) == 0xeefface) {
          *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)((int)piVar8 + iVar3);
          piVar4 = FUN_0042bab7(*(int *)(unaff_EBP + -0x28),*(int *)(unaff_EBP + -0x10));
          *(int **)(unaff_EBP + -0x24) = piVar4;
          if (*(int *)(unaff_EBP + -0x24) != 0) {
            puVar5 = (undefined4 *)FUN_004010f9();
            **(undefined4 **)(unaff_EBP + -0x10) = *puVar5;
            puVar5 = (undefined4 *)FUN_004010f9();
            *puVar5 = *(undefined4 *)(unaff_EBP + -0x10);
            *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x28) = *(undefined4 *)(unaff_EBP + -8);
            *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x2c) = *(undefined4 *)(unaff_EBP + -0x24)
            ;
            *(uint *)(*(int *)(unaff_EBP + -0x10) + 0x30) = uVar9 + 8;
            *(uint *)(unaff_EBP + -0x2c) = uVar9 + 8;
            UNRECOVERED_JUMPTABLE = (undefined *)**(undefined4 **)(unaff_EBP + -0x24);
            goto LAB_0042bcf3;
          }
        }
        break;
      default:
        FUN_004362c4(s___bogus_context_in__ExceptionHan_0043a8ac,s_XX_CPP_0043a8d4,0xb78);
      }
      uVar9 = *(uint *)(unaff_EBP + -0x14);
    }
  }
  else {
    FUN_0042b91d(*(int *)(unaff_EBP + -8));
    if ((**(int **)(unaff_EBP + -4) == 0xeefface) && (piVar8 = (int *)*piVar8, piVar8 != (int *)0x0)
       ) {
      for (; *piVar8 != 0; piVar8 = piVar8 + 1) {
        bVar2 = FUN_0042ad62(*(int **)(*(int *)(unaff_EBP + -0x10) + 4),
                             *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 8),(int *)*piVar8,
                             (byte)*(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0xc));
        if (CONCAT31(extraout_var,bVar2) != 0) {
          return 1;
        }
      }
      puVar5 = (undefined4 *)segment(in_FS,0);
      uVar1 = *puVar5;
      puVar5 = (undefined4 *)segment(in_FS,0);
      *puVar5 = **(undefined4 **)(unaff_EBP + -8);
      FUN_0042a9d6();
      puVar5 = (undefined4 *)segment(in_FS,0);
      *puVar5 = uVar1;
    }
  }
  return 1;
}

