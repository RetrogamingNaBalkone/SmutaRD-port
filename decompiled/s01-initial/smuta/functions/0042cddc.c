/* Ghidra address: 0042cddc; FUN_0042cddc */

uint FUN_0042cddc(void)

{
  int iVar1;
  char *pcVar2;
  char *extraout_ECX;
  char *pcVar3;
  char *extraout_ECX_00;
  char *extraout_ECX_01;
  char *extraout_EDX;
  char *pcVar4;
  char *extraout_EDX_00;
  char *extraout_EDX_01;
  char *extraout_EDX_02;
  char *extraout_EDX_03;
  char *pcVar5;
  int iVar7;
  uint uVar8;
  char *in_stack_00000008;
  undefined1 *in_stack_0000000c;
  char *in_stack_00000010;
  char *in_stack_00000014;
  char local_10b [263];
  char *pcVar6;
  
  uVar8 = 0;
  if (in_stack_00000008 != (char *)0x0) {
    *in_stack_00000008 = '\0';
  }
  if (in_stack_0000000c != (undefined1 *)0x0) {
    *in_stack_0000000c = 0;
  }
  if (in_stack_00000010 != (char *)0x0) {
    *in_stack_00000010 = '\0';
  }
  if (in_stack_00000014 != (char *)0x0) {
    *in_stack_00000014 = '\0';
  }
  iVar1 = FUN_00429114();
  if (0x104 < iVar1) {
    iVar1 = 0x104;
  }
  FUN_004291bc();
  local_10b[iVar1] = '\0';
  iVar7 = 0;
  pcVar3 = extraout_ECX;
  pcVar4 = extraout_EDX;
  pcVar5 = local_10b + iVar1;
LAB_0042ce51:
  pcVar6 = pcVar5;
  pcVar5 = pcVar6 + -1;
  iVar1 = (int)*pcVar5;
  if (iVar1 < 0x30) {
    if (iVar1 != 0x2f) {
      pcVar2 = (char *)(iVar1 + -1);
      if (iVar1 == 0) goto LAB_0042cecd;
      if (iVar1 == 0x2a) goto LAB_0042cf37;
      if (pcVar2 == (char *)0x2d) {
        if ((iVar7 == 0) && (*pcVar6 == '\0')) {
          pcVar3 = pcVar5;
          iVar7 = FUN_0042cda4();
          pcVar4 = extraout_EDX_00;
        }
        if ((iVar7 == 0) && ((uVar8 & 2) == 0)) {
          uVar8 = uVar8 | 2;
          FUN_0042cd4c(in_stack_00000014,pcVar4,pcVar3,in_stack_00000014,pcVar5,0xff);
          *pcVar5 = '\0';
          pcVar3 = extraout_ECX_00;
          pcVar4 = extraout_EDX_01;
        }
      }
      goto LAB_0042ce51;
    }
  }
  else if (iVar1 == 0x3a) {
    pcVar4 = local_10b + 1;
    pcVar2 = (char *)0x0;
    if (pcVar5 != pcVar4) goto LAB_0042ce51;
LAB_0042cecd:
    if (iVar7 != 0) {
      if (*pcVar6 != '\0') {
        uVar8 = uVar8 | 8;
      }
      FUN_0042cd4c(pcVar2,pcVar4,in_stack_0000000c,in_stack_0000000c,pcVar6,0xff);
      *pcVar6 = '\0';
      pcVar4 = extraout_EDX_02;
LAB_0042cf47:
      if (pcVar6[-1] == ':') {
        if (local_10b[0] != '\0') {
          uVar8 = uVar8 | 0x10;
        }
        FUN_0042cd4c(in_stack_00000008,pcVar4,local_10b,in_stack_00000008,local_10b,2);
      }
      return uVar8;
    }
  }
  else {
    if (iVar1 == 0x3f) {
LAB_0042cf37:
      if (iVar7 == 0) {
        uVar8 = uVar8 | 1;
      }
      goto LAB_0042ce51;
    }
    if (iVar1 != 0x5c) goto LAB_0042ce51;
  }
  if (iVar7 == 0) {
    iVar7 = 1;
    if (*pcVar6 != '\0') {
      uVar8 = uVar8 | 4;
    }
    FUN_0042cd4c(in_stack_00000010,pcVar4,pcVar3,in_stack_00000010,pcVar6,0xff);
    *pcVar6 = '\0';
    pcVar5 = pcVar6 + -1;
    pcVar4 = extraout_EDX_03;
    if ((*pcVar5 == '\0') ||
       ((pcVar3 = extraout_ECX_01, *pcVar5 == ':' && (pcVar4 = local_10b + 1, pcVar5 == pcVar4))))
    goto LAB_0042cf47;
  }
  goto LAB_0042ce51;
}

