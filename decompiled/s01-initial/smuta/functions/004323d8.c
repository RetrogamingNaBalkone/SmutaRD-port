/* Ghidra address: 004323d8; FUN_004323d8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004323d8(void)

{
  char cVar1;
  int *piVar2;
  code *pcVar3;
  char cVar4;
  int *piVar5;
  char *pcVar6;
  int in_stack_00000004;
  int local_10;
  undefined1 local_c [8];
  
  _DAT_0049acd4 = *(uint *)(in_stack_00000004 + 0x10) & 1;
  FUN_0042fc14();
  FUN_00430014();
  FUN_0042bce8();
  _DAT_0049acc8 = 1;
  _DAT_0049accc = in_stack_00000004;
  DAT_0049acb0 = local_c;
  FUN_0042b908();
  _DAT_0049acb4 = GetEnvironmentStrings();
  DAT_0049acb8 = GetCommandLineA();
  FUN_00432090();
  piVar2 = (int *)FUN_00432324();
  if (piVar2 != (int *)0x0) {
    piVar2[*piVar2 + 1] = -1;
    while (pcVar3 = (code *)FUN_0043232c(), pcVar3 != (code *)0x0) {
      (*pcVar3)();
    }
    piVar5 = piVar2;
    for (local_10 = 0; piVar5 = piVar5 + 1, local_10 < *piVar2; local_10 = local_10 + 1) {
      (**(code **)(*piVar5 + 0x18))();
    }
  }
  while (pcVar3 = (code *)FUN_0043232c(), pcVar3 != (code *)0x0) {
    (*pcVar3)();
  }
  pcVar6 = DAT_0049acb8;
  if ((*(byte *)(in_stack_00000004 + 0x10) & 1) == 0) {
    (**(code **)(in_stack_00000004 + 0x18))();
    FUN_00432040();
  }
  else {
    for (; (*pcVar6 == ' ' || (*pcVar6 == '\t')); pcVar6 = pcVar6 + 1) {
    }
    if (*pcVar6 == '\"') {
      cVar4 = '\"';
      pcVar6 = pcVar6 + 1;
    }
    else {
      cVar4 = ' ';
    }
    for (; ((cVar1 = *pcVar6, cVar1 != '\0' && (cVar4 != cVar1)) && (cVar1 != '\t'));
        pcVar6 = pcVar6 + 1) {
    }
    if (*pcVar6 == '\"') {
      pcVar6 = pcVar6 + 1;
    }
    for (; ((cVar4 = *pcVar6, cVar4 != '\0' && (cVar4 == ' ')) || (cVar4 == '\t'));
        pcVar6 = pcVar6 + 1) {
    }
    GetModuleHandleA((LPCSTR)0x0);
    (**(code **)(in_stack_00000004 + 0x18))();
    FUN_00432040();
  }
  return;
}

