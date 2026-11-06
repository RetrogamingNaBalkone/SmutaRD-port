/* Ghidra address: 004366b0; FUN_004366b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall FUN_004366b0(void)

{
  char cVar1;
  bool bVar2;
  uint *puVar3;
  char *pcVar4;
  uint *local_18;
  uint *local_14;
  
  if (DAT_0053e5e4 != (uint *)0x0) {
    DAT_0053e5b8 = 0;
    DAT_0053e5ec = 0;
    DAT_0053e5b4 = 0;
    local_18 = DAT_0053e5e4;
    FUN_004368d4(DAT_0043c9d8,1);
    for (; ((char)*local_18 == ' ' || ((char)*local_18 == '\t'));
        local_18 = (uint *)((int)local_18 + 1)) {
    }
    if ((char)*local_18 == '\"') {
      do {
        puVar3 = local_18;
        local_18 = (uint *)((int)puVar3 + 1);
        if (*(char *)local_18 == '\"') break;
      } while (*(char *)local_18 != '\0');
      if (*(char *)local_18 == '\"') {
        local_18 = (uint *)((int)puVar3 + 2);
      }
    }
    else {
      for (; ((cVar1 = (char)*local_18, cVar1 != ' ' && (cVar1 != '\t')) && (cVar1 != '\0'));
          local_18 = (uint *)((int)local_18 + 1)) {
      }
    }
    pcVar4 = FUN_0042a144(local_18);
    _DAT_0053e5bc = FUN_00435c48((uint)(pcVar4 + 1));
    local_14 = _DAT_0053e5bc;
    if (_DAT_0053e5bc == (uint *)0x0) {
      FUN_0043647c();
    }
    for (; puVar3 = local_14, (char)*local_18 != '\0'; local_18 = (uint *)((int)local_18 + 1)) {
      bVar2 = false;
      for (; ((char)*local_18 == ' ' || ((char)*local_18 == '\t'));
          local_18 = (uint *)((int)local_18 + 1)) {
      }
      if ((char)*local_18 == '\0') break;
      while (((cVar1 = (char)*local_18, cVar1 != ' ' && (cVar1 != '\t')) && (cVar1 != '\0'))) {
        if (cVar1 == '\"') {
          local_18 = (uint *)((int)local_18 + 1);
          while (((char)*local_18 != '\"' && ((char)*local_18 != '\0'))) {
            FUN_00436880((int *)&local_14,(int *)&local_18);
          }
          if ((char)*local_18 == '\"') {
            local_18 = (uint *)((int)local_18 + 1);
          }
        }
        else {
          if (((char)*local_18 == '*') || ((char)*local_18 == '?')) {
            bVar2 = true;
          }
          FUN_00436880((int *)&local_14,(int *)&local_18);
        }
      }
      *(undefined1 *)local_14 = 0;
      local_14 = (uint *)((int)local_14 + 1);
      if (bVar2) {
        (*(code *)PTR_FUN_0043c964)();
      }
      else {
        FUN_004368d4(puVar3,0);
      }
      if ((char)*local_18 == '\0') break;
    }
    FUN_004368d4((uint *)0x0,0);
    DAT_0053e5ec = DAT_0053e5ec + -1;
    DAT_0053e5f0 = DAT_0053e5ec;
    DAT_0053e5f4 = DAT_0053e5b4;
  }
  return;
}

