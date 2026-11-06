/* Ghidra address: 00436d98; FUN_00436d98 */

undefined4 __cdecl FUN_00436d98(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = param_1;
  iVar2 = FUN_00436b80(param_1);
  if (iVar2 == -1) {
    uVar3 = 1;
  }
  else {
    pcVar1 = *(code **)(&DAT_0043ca50 + iVar2 * 4);
    if (pcVar1 != (code *)0x1) {
      if (pcVar1 == (code *)0x0) {
        if ((1 < param_1 - 0x10U) && (param_1 != 0x14)) {
          if (param_1 == 0x16) {
            FUN_004365dc();
          }
          else {
            FUN_00436674(3);
          }
        }
      }
      else {
        *(undefined4 *)(&DAT_0043ca50 + iVar2 * 4) = 0;
        if ((&DAT_0043caa0)[iVar2] == '\0') {
          (*pcVar1)(pcVar1,0,iVar4,param_1);
        }
        else {
          (*pcVar1)();
        }
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}

