/* Ghidra address: 0042cd6a; FUN_0042cd6a */

bool __cdecl FUN_0042cd6a(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  
  if (*(int *)(param_1 + 4) == 0) {
    bVar2 = false;
  }
  else if (*(int *)(param_2 + 4) == 0) {
    bVar2 = true;
  }
  else {
    iVar1 = FUN_0042a0f8((char *)((uint)*(ushort *)(*(int *)(param_1 + 4) + 6) +
                                 *(int *)(param_1 + 4)),
                         (char *)((uint)*(ushort *)(*(int *)(param_2 + 4) + 6) +
                                 *(int *)(param_2 + 4)));
    bVar2 = iVar1 < 0;
  }
  return bVar2;
}

