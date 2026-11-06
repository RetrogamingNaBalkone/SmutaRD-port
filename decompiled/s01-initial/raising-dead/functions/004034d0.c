/* Ghidra address: 004034d0; FUN_004034d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_004034d0(int param_1)

{
  uint uVar1;
  uint *puVar2;
  char *pcVar3;
  int unaff_EDI;
  undefined4 uVar4;
  int iVar5;
  
  FUN_00401468();
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar1 = thunk_FUN_00548000();
    if ((((uVar1 & 0x800) == 0) && ((uVar1 & 0x200) == 0)) && ((uVar1 & 0x4000) == 0)) {
      uVar1 = FUN_00429ebc((short *)(param_1 + 0x10));
      if (5000 < uVar1) {
        FUN_00429ef0((short *)(param_1 + 0x10));
        puVar2 = FUN_00435120(8);
        if (puVar2 != (uint *)0x0) {
          iVar5 = 1;
          uVar4 = *(undefined4 *)(param_1 + 4);
          pcVar3 = FUN_004030b4();
          FUN_004031c8(puVar2,pcVar3,uVar4,iVar5);
        }
      }
    }
    else {
      *(undefined4 *)(param_1 + 0xc) = 1;
      FUN_00423700(s_MENU_SP_00438413,6);
    }
  }
  else if (*(int *)(param_1 + 0xc) == 2) {
    _DAT_0043f464 = 1;
    _DAT_0043f468 = 1;
    puVar2 = FUN_00435120(8);
    if (puVar2 != (uint *)0x0) {
      iVar5 = 0;
      uVar4 = *(undefined4 *)(param_1 + 4);
      pcVar3 = FUN_0040300c();
      FUN_004031c8(puVar2,pcVar3,uVar4,iVar5);
    }
    if (unaff_EDI < 0) {
      *(undefined4 *)(param_1 + 0xc) = 1;
      FUN_00423700(s_MENU_SP_0043841b,6);
    }
  }
  else {
    iVar5 = FUN_0042386c();
    switch(iVar5) {
    case 1:
      uVar1 = thunk_FUN_00548000();
      if ((uVar1 & 0x2000) == 0) {
        *(undefined4 *)(param_1 + 0xc) = 2;
        FUN_00401468();
        _DAT_0043f468 = 1;
      }
      else {
        puVar2 = FUN_00435120(8);
        if (puVar2 != (uint *)0x0) {
          iVar5 = 2;
          uVar4 = *(undefined4 *)(param_1 + 4);
          pcVar3 = FUN_004030b4();
          FUN_004031c8(puVar2,pcVar3,uVar4,iVar5);
        }
      }
      break;
    case 2:
      iVar5 = FUN_00402dd4((undefined4 *)&DAT_0043f464,(undefined4 *)&DAT_0043f468);
      if ((iVar5 != 0) && (puVar2 = FUN_00435120(8), puVar2 != (uint *)0x0)) {
        iVar5 = 0;
        uVar4 = *(undefined4 *)(param_1 + 4);
        pcVar3 = FUN_0040300c();
        FUN_004031c8(puVar2,pcVar3,uVar4,iVar5);
      }
      break;
    case 3:
      puVar2 = FUN_00435120(8);
      if (puVar2 != (uint *)0x0) {
        iVar5 = 1;
        uVar4 = *(undefined4 *)(param_1 + 4);
        pcVar3 = FUN_004030b4();
        FUN_004031c8(puVar2,pcVar3,uVar4,iVar5);
      }
      break;
    case 4:
      puVar2 = FUN_00435120(8);
      if (puVar2 != (uint *)0x0) {
        FUN_00403770(puVar2,*(undefined4 *)(param_1 + 4));
      }
      break;
    case 5:
      puVar2 = FUN_00435120(8);
      if (puVar2 != (uint *)0x0) {
        uVar4 = *(undefined4 *)(param_1 + 4);
        pcVar3 = FUN_00403068();
        FUN_0040339c(puVar2,pcVar3,uVar4);
      }
      break;
    case 6:
      PostMessageA(*(HWND *)(*(int *)(param_1 + 4) + 4),0x111,1,0);
    }
  }
  return;
}

