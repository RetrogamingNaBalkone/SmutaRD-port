/* Ghidra address: 00426348; FUN_00426348 */

int * __cdecl FUN_00426348(int *param_1,int param_2)

{
  short sVar1;
  int *piVar2;
  undefined4 uStack_8;
  
  FUN_00435394(param_1,3,0x100,1,FUN_00422604);
  sVar1 = 0;
  piVar2 = param_1;
  do {
    FUN_0040d474((undefined1 *)((int)&uStack_8 + 1),(ushort *)(sVar1 * 6 + param_2));
    *(undefined2 *)piVar2 = uStack_8._1_2_;
    *(undefined1 *)((int)piVar2 + 2) = uStack_8._3_1_;
    sVar1 = sVar1 + 1;
    piVar2 = (int *)((int)piVar2 + 3);
  } while (sVar1 < 0x100);
  return param_1;
}

