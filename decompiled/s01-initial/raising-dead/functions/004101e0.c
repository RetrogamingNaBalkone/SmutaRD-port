/* Ghidra address: 004101e0; FUN_004101e0 */

void __cdecl FUN_004101e0(int param_1,uint *param_2,int param_3)

{
  if (((((*param_2 & 0x40000) != 0) && (param_3 != 0)) && ((*(ushort *)(param_1 + 0x1b) & 8) == 0))
     && ((*(ushort *)(param_1 + 0x1b) & 0x10) == 0)) {
    *param_2 = *param_2 & 0xfffbffff;
  }
  return;
}

