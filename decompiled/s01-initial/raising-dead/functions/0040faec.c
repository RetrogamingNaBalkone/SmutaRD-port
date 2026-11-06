/* Ghidra address: 0040faec; FUN_0040faec */

void __cdecl FUN_0040faec(int *param_1)

{
  int iVar1;
  undefined2 local_a;
  undefined2 local_8;
  short local_6;
  
  if (param_1[0xb] == 0) {
    if (*(short *)param_1[7] == 0) {
      do {
        iVar1 = FUN_0040f3f8((short *)param_1[7],&local_8,&local_a,&local_6,(short *)(param_1 + 0xc)
                             ,0);
        param_1[8] = iVar1;
      } while (iVar1 == 0);
    }
    else {
      do {
        iVar1 = FUN_0040f3f8((short *)param_1[7],&local_8,&local_a,&local_6,(short *)(param_1 + 0xc)
                             ,*(short *)((int)param_1 + 0x32));
        param_1[8] = iVar1;
      } while (iVar1 == 0);
    }
    FUN_0040e3b8(param_1,(int)local_6);
  }
  else {
    FUN_0040e374(param_1);
  }
  return;
}

