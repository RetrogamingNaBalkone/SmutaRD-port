/* Ghidra address: 0042b9b0; thunk_FUN_0042da20 */

char * thunk_FUN_0042da20(void)

{
  char *pcVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  DWORD extraout_ECX;
  uint in_stack_00000004;
  LPVOID in_stack_00000008;
  char *in_stack_0000000c;
  
  if (in_stack_00000004 < DAT_00437f24) {
    if (in_stack_0000000c + 1 < (char *)0x2) {
      pcVar1 = (char *)0x0;
    }
    else if ((*(byte *)((int)&DAT_00437f28 + in_stack_00000004 * 4 + 1) & 0x40) == 0) {
      pcVar1 = (char *)FUN_0042e074(in_stack_00000004,in_stack_00000004,(DWORD)in_stack_0000000c,
                                    in_stack_00000004,in_stack_00000008,(DWORD)in_stack_0000000c);
    }
    else if ((*(byte *)((int)&DAT_00437f28 + in_stack_00000004 * 4 + 1) & 2) == 0) {
      pcVar1 = (char *)0x0;
      if (in_stack_0000000c != (char *)0x0) {
        while( true ) {
          uVar6 = (int)in_stack_0000000c - (int)pcVar1;
          uVar2 = FUN_0042e074(uVar6,in_stack_00000004,uVar6,in_stack_00000004,in_stack_00000008,
                               uVar6);
          if (uVar2 == 0xffffffff) {
            return (char *)0xffffffff;
          }
          if (uVar2 == 0) {
            return pcVar1;
          }
          pcVar3 = FUN_00428fc4();
          if (pcVar3 != (char *)0x0) {
            (&DAT_00437f28)[in_stack_00000004] = (&DAT_00437f28)[in_stack_00000004] | 0x200;
            uVar2 = (int)pcVar3 - (int)in_stack_00000008;
            if (uVar2 == 0) {
              return pcVar1;
            }
          }
          if ((*(char *)((int)in_stack_00000008 + (uVar2 - 1)) == '\r') &&
             (iVar4 = (uVar2 - 1) + (int)in_stack_00000008,
             iVar4 = FUN_0042e074(iVar4,in_stack_00000004,extraout_ECX,in_stack_00000004,
                                  (LPVOID)iVar4,1), iVar4 == -1)) break;
          pcVar5 = FUN_0042d9b4();
          pcVar1 = pcVar1 + (int)pcVar5;
          if ((uVar2 < uVar6) &&
             ((*(byte *)((int)&DAT_00437f28 + in_stack_00000004 * 4 + 1) & 0x20) != 0)) {
            return pcVar1;
          }
          if (pcVar3 != (char *)0x0) {
            return pcVar1;
          }
          if (pcVar5 != (char *)0x0) {
            return pcVar1;
          }
          if (in_stack_0000000c <= pcVar1) {
            return pcVar1;
          }
        }
        pcVar1 = (char *)0xffffffff;
      }
    }
    else {
      pcVar1 = (char *)0x0;
    }
  }
  else {
    pcVar1 = (char *)FUN_0042dfc8();
  }
  return pcVar1;
}

