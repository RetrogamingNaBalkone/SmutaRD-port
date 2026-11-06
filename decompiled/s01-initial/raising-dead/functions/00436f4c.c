/* Ghidra address: 00436f4c; FUN_00436f4c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00436f4c(int param_1)

{
  char cVar1;
  int *piVar2;
  code *pcVar3;
  UINT UVar4;
  char cVar5;
  int *piVar6;
  char *pcVar7;
  int local_10;
  undefined1 local_c [8];
  
  _DAT_0053e610 = *(uint *)(param_1 + 0x10) & 1;
  FUN_00433118();
  FUN_0043366c(*(undefined **)(param_1 + 0x1c),*(undefined **)(param_1 + 0x20));
  FUN_0042d6e0(*(undefined **)(param_1 + 0x28));
  _DAT_0053e604 = 1;
  _DAT_0053e608 = param_1;
  DAT_0053e5d8 = local_c;
  FUN_0042acac();
  DAT_0053e5dc = GetEnvironmentStrings();
  DAT_0053e5e4 = GetCommandLineA();
  FUN_004366ac();
  piVar2 = (int *)FUN_00436e20();
  if (piVar2 != (int *)0x0) {
    piVar2[*piVar2 + 1] = -1;
    while (pcVar3 = (code *)FUN_00436e28(piVar2,0), pcVar3 != (code *)0x0) {
      (*pcVar3)();
    }
    piVar6 = piVar2;
    for (local_10 = 0; piVar6 = piVar6 + 1, local_10 < *piVar2; local_10 = local_10 + 1) {
      (**(code **)(*piVar6 + 0x18))();
    }
  }
  while (pcVar3 = (code *)FUN_00436e28((int *)&DAT_0053e604,0), pcVar3 != (code *)0x0) {
    (*pcVar3)();
  }
  pcVar7 = DAT_0053e5e4;
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    UVar4 = (**(code **)(param_1 + 0x18))();
    FUN_0043665c(UVar4);
  }
  else {
    for (; (*pcVar7 == ' ' || (*pcVar7 == '\t')); pcVar7 = pcVar7 + 1) {
    }
    if (*pcVar7 == '\"') {
      cVar5 = '\"';
      pcVar7 = pcVar7 + 1;
    }
    else {
      cVar5 = ' ';
    }
    for (; ((cVar1 = *pcVar7, cVar1 != '\0' && (cVar5 != cVar1)) && (cVar1 != '\t'));
        pcVar7 = pcVar7 + 1) {
    }
    if (*pcVar7 == '\"') {
      pcVar7 = pcVar7 + 1;
    }
    for (; ((cVar5 = *pcVar7, cVar5 != '\0' && (cVar5 == ' ')) || (cVar5 == '\t'));
        pcVar7 = pcVar7 + 1) {
    }
    GetModuleHandleA((LPCSTR)0x0);
    UVar4 = (**(code **)(param_1 + 0x18))();
    FUN_0043665c(UVar4);
  }
  return;
}

