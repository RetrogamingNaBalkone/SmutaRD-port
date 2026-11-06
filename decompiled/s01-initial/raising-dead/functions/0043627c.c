/* Ghidra address: 0043627c; FUN_0043627c */

void __cdecl FUN_0043627c(uint *param_1,int param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  undefined4 *local_8;
  
  *(undefined1 *)param_1 = 0;
  local_8 = (undefined4 *)&stack0x0000000c;
  while( true ) {
    pcVar1 = (char *)*local_8;
    if (pcVar1 == (char *)0x0) {
      return;
    }
    pcVar2 = FUN_0042a144(param_1);
    uVar3 = (param_2 - (int)pcVar2) - 1;
    if ((int)uVar3 < 1) break;
    FUN_0042a1a0((char *)param_1,pcVar1,uVar3);
    local_8 = local_8 + 1;
  }
  return;
}

