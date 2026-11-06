/* Ghidra address: 0042f924; FUN_0042f924 */

uint __cdecl FUN_0042f924(uint param_1)

{
  uint uVar1;
  DWORD DVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  if (param_1 < DAT_0043b4c0) {
    if (((&DAT_0043b4c4)[param_1] & 0x200) == 0) {
      if (((&DAT_0043b4c4)[param_1] & 0x2000) == 0) {
        DVar2 = FUN_00430250(param_1,0,1);
        if (DVar2 == 0xffffffff) {
          uVar1 = 0xffffffff;
        }
        else {
          DVar3 = FUN_00430250(param_1,0,2);
          if (DVar3 == 0xffffffff) {
            uVar1 = 0xffffffff;
          }
          else {
            DVar4 = FUN_00430250(param_1,DVar2,0);
            if (DVar4 == 0xffffffff) {
              uVar1 = 0xffffffff;
            }
            else {
              uVar1 = (uint)((int)DVar3 <= (int)DVar2);
            }
          }
        }
      }
      else {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = FUN_0043000c(-6);
  }
  return uVar1;
}

