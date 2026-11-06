/* Ghidra address: 0042d9f4; FUN_0042d9f4 */

uint __cdecl FUN_0042d9f4(uint *param_1,int *param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  if ((param_1 != (uint *)0x0) && (pcVar1 = FUN_0042a144(param_1), pcVar1 != (char *)0x0)) {
    pcVar2 = FUN_0042d918((byte *)param_1,pcVar1,param_2);
    if (pcVar2 != (char *)0x0) {
      return (uint)(byte)pcVar1[(int)param_1 + -1];
    }
    return 0xffffffff;
  }
  return 0;
}

