/* Ghidra address: 0042d71c; FUN_0042d71c */

uint __cdecl FUN_0042d71c(char *param_1,uint *param_2,undefined4 *param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_8;
  
  local_8 = 0;
  cVar1 = *param_1;
  if (cVar1 == 'r') {
    uVar2 = 0;
    uVar3 = 1;
  }
  else if (cVar1 == 'w') {
    uVar2 = 0x301;
    local_8 = 0x80;
    uVar3 = 2;
  }
  else {
    if (cVar1 != 'a') {
      return 0;
    }
    uVar2 = 0x901;
    local_8 = 0x80;
    uVar3 = 2;
  }
  cVar1 = param_1[1];
  if ((cVar1 == '+') || ((param_1[2] == '+' && ((cVar1 == 't' || (cVar1 == 'b')))))) {
    if (cVar1 == '+') {
      cVar1 = param_1[2];
    }
    uVar3 = 3;
    local_8 = 0x180;
    uVar2 = uVar2 & 0xfffffffe | 2;
  }
  if (cVar1 == 't') {
    uVar2 = uVar2 | 0x4000;
  }
  else if (cVar1 == 'b') {
    uVar2 = uVar2 | 0x8000;
    uVar3 = uVar3 | 0x40;
  }
  else {
    if ((cVar1 != '+') && (cVar1 != '\0')) {
      return 0;
    }
    uVar2 = uVar2 | *(uint *)PTR_DAT_0043b590 & 0xc000;
    if ((*(uint *)PTR_DAT_0043b590 & 0x8000) != 0) {
      uVar3 = uVar3 | 0x40;
    }
  }
  PTR_FUN_0043c958 = &LAB_0042f8cc;
  *param_2 = uVar2;
  *param_3 = local_8;
  return uVar3;
}

