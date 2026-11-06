/* Ghidra address: 0040df8c; FUN_0040df8c */

void __cdecl FUN_0040df8c(int *param_1)

{
  int iVar1;
  uint *puVar2;
  undefined4 *puVar3;
  
  *(undefined4 *)((int)param_1 + 10) = 0;
  *(undefined4 *)((int)param_1 + 0xe) = 0;
  if ((short)param_1[2] != 0) {
    iVar1 = DirectSoundCreate();
    if (iVar1 == 0) {
      iVar1 = (**(code **)(**(int **)((int)param_1 + 10) + 0x18))();
      if (iVar1 == 0) {
        puVar2 = FUN_00435120(0x1c);
        if (puVar2 == (uint *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          puVar3 = FUN_0040dc6c(puVar2,(int)param_1);
        }
        *(undefined4 **)((int)param_1 + 0xe) = puVar3;
        (**(code **)(*param_1 + 0x24))();
      }
      else {
        (**(code **)(*param_1 + 0x28))();
      }
    }
    else {
      (**(code **)(*param_1 + 0x28))();
    }
  }
  return;
}

