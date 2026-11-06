/* Ghidra address: 00407498; FUN_00407498 */

int __cdecl FUN_00407498(LPCVOID param_1)

{
  int iVar1;
  
  iVar1 = FUN_004065e0(*(short *)((int)param_1 + 2),*(short *)((int)param_1 + 4),0);
  FUN_00429f78(*(undefined4 **)(iVar1 + 0xe),(undefined4 *)((int)param_1 + 800),
               *(uint *)((int)param_1 + 0xc));
  *(undefined4 *)(iVar1 + 10) = *(undefined4 *)((int)param_1 + 0xc);
  FUN_0042361c(param_1);
  return iVar1;
}

