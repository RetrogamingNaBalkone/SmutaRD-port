/* Ghidra address: 004253bc; FUN_004253bc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004253bc(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  short *psVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  byte bVar7;
  undefined *puVar8;
  uint local_50;
  
  bVar7 = 0;
  iVar2 = 0;
  if ((DAT_004351f0 != 0) && (iVar2 = FUN_00408aa0(), iVar2 == 0)) {
    return 1;
  }
  if (DAT_00436b9a == 0) {
    if ((DAT_00436b9c < 1) || (iVar2 != 1)) {
      local_50 = FUN_00427f4c();
      if ((DAT_00436c30 == 1) && (local_50 != 0)) {
        uVar3 = 10;
      }
      else {
        if ((local_50 & 0x100) != 0) {
          FUN_00408c74();
        }
        FUN_00409a20();
        FUN_00409a20();
        if (DAT_0049a34c == 0) {
          DAT_0049a350 = FUN_00409a78();
          DAT_0049a34c = DAT_0049a350 - DAT_0049a348;
          while (DAT_0049a34c == 0) {
            DAT_0049a350 = FUN_00409a78();
            DAT_0049a34c = DAT_0049a350 - DAT_0049a348;
          }
          DAT_0049a348 = DAT_0049a350;
        }
        DAT_0049a34c = DAT_0049a34c - 1;
        if (2 < DAT_0049a34c) {
          DAT_0049a34c = 2;
        }
        FUN_00409a38();
        FUN_00409a38();
        FUN_00427da7();
        DAT_0049a328 = FUN_00409a58();
        FUN_00409a8c();
        puVar5 = (undefined4 *)(DAT_0049a388 + 0x30);
        puVar6 = &DAT_0049a354;
        for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
          puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
        }
        FUN_00409a38();
        FUN_0041b890();
        FUN_00409a8c();
        DAT_0049a31c = FUN_00409a58();
        if (DAT_00436c34 == 5) {
          FUN_0041d5a0();
        }
        else {
          if (DAT_0049a34c == 0) {
            FUN_00409a38();
          }
          cVar1 = FUN_00420820();
          if (cVar1 == '\0') {
            if (DAT_00436bd8 == 1) {
              DAT_00436bd8 = 0;
              FUN_00405078();
            }
          }
          else {
            FUN_00424a1c();
          }
          FUN_0041d5a0();
          if (DAT_0049a34c == 0) {
            FUN_00409a8c();
            DAT_0049a320 = FUN_00409a58();
          }
        }
        if ((((*(int *)(DAT_0049a388 + 200 + *(short *)(DAT_0049a388 + 0x118) * 4) != 0) &&
             ((local_50 & 0x2000000) == 0)) && (DAT_0049a34c == 0)) && (DAT_0043427c != 0)) {
          (**(code **)(*(int *)(*(int *)(DAT_0049a388 + 200 + *(short *)(DAT_0049a388 + 0x118) * 4)
                               + 0x14) + 0x1c))();
        }
        if ((local_50 & 0x2000000) == 0) {
          if (DAT_00436c3c != 0) {
            FUN_0041d558();
          }
          if ((DAT_0049a34c == 0) && (DAT_0043427c != 0)) {
            FUN_00408534();
          }
          DAT_00436c3c = 0;
        }
        else {
          *(undefined2 *)(DAT_00436c20 + 0x4b72) = 1;
          local_50 = local_50 & 0xffffbfff;
          DAT_00436c3c = 1;
        }
        if ((DAT_0049a34c == 0) || (DAT_00436c34 == 5)) {
          (**(code **)(*DAT_0044f640 + 0x38))();
        }
        if (DAT_00436c34 == 5) {
          DAT_00436c34 = 6;
          if (DAT_00436c30 == 0) {
            if (DAT_0049a338 == 1) {
              FUN_00408c74();
            }
            else if (DAT_0049a338 == 2) {
              FUN_00408c74();
            }
            else if (DAT_0049a338 == 3) {
              FUN_00408c74();
            }
            else if (DAT_0049a338 == 4) {
              FUN_00408c74();
            }
            else if (DAT_0049a338 == 5) {
              FUN_00408c74();
            }
            else if (DAT_0049a338 == 6) {
              FUN_00408c74();
            }
            else if (DAT_0049a338 == 7) {
              FUN_00408c74();
            }
            else if (DAT_0049a338 == 8) {
              FUN_00408c74();
            }
            else if (DAT_0049a338 == 9) {
              FUN_00408c74();
            }
            else if (DAT_0049a338 == 10) {
              FUN_00408c74();
            }
            DAT_0049a338 = DAT_0049a338 + 1;
          }
        }
        else if (DAT_00436c34 != 6) {
          DAT_00435498 = 0;
          DAT_0049a334 = 0;
          DAT_00436c34 = DAT_00436c34 + 1;
        }
        _DAT_00437640 = 0;
        if ((DAT_00436c30 == 1) && ((local_50 & 0x4000) == 0)) {
          local_50 = FUN_0040d784();
        }
        if (local_50 == 0x80000000) {
          uVar3 = 2;
        }
        else {
          if (((DAT_00436c30 == 2) && ((local_50 & 0x4000) == 0)) &&
             (iVar2 = FUN_0040d768(), iVar2 != 0)) {
            return 10;
          }
          FUN_00409a8c();
          iVar2 = FUN_00409a58();
          _DAT_0049a318 = iVar2 + 1;
          DAT_00436c14 = ((uint)((int)(1000 / (ulonglong)_DAT_0049a318) + DAT_00436c14) >> 1) + 1;
          if (DAT_00436c14 < 4) {
            DAT_00436c14 = 4;
          }
          puVar8 = &DAT_0049a20c;
          DAT_0049a174 = FUN_00409a58();
          uVar3 = FUN_00420308(DAT_0049a174,DAT_0049a388,puVar8,DAT_0049a388);
          DAT_0049a344 = (int)(short)uVar3;
          if (0 < DAT_0049a344) {
            DAT_00436c34 = 1;
            FUN_0040886c();
            if (((DAT_0049a344 == 2) && (DAT_00436c1c < DAT_0049a338)) || (DAT_0049a344 == 3)) {
              FUN_00409a8c();
              if ((DAT_00436b94 == 1) && (DAT_0049a338 <= DAT_00436c1c)) {
                FUN_00424d14();
              }
              else {
                FUN_00424ccc();
              }
              DAT_00436b9a = 1;
              return 1;
            }
            if (DAT_0049a344 == 2) {
              return 0;
            }
          }
          if (DAT_0049a180 != 0) {
            DAT_00435498 = DAT_00435498 + (short)DAT_0049a180;
            if (((0 < DAT_00435498) && (0 < DAT_0049a180)) ||
               ((DAT_00435498 < 0 && (DAT_0049a180 < 0)))) {
              DAT_0049a180 = 0;
              DAT_00435498 = 0;
              DAT_0049a334 = 0;
            }
          }
          if ((DAT_0043764c == 1) && (DAT_00436b90 == 0)) {
            FUN_0040886c();
            DAT_00436b90 = 1;
          }
          else if (((local_50 & 0x2000) == 0) && (DAT_00436b90 == 1)) {
            FUN_0040886c();
            DAT_00436b90 = 0;
          }
          if (local_50 == 0) {
            uVar3 = 1;
          }
          else if ((local_50 & 0x400000) == 0) {
            psVar4 = FUN_0041da64();
            iVar2 = DAT_0049a388;
            *(short *)(DAT_0049a388 + 0x42) = *psVar4;
            (**(code **)(*(int *)(iVar2 + 0x14) + 0x20))();
            if ((local_50 & 0x10000000) != 0) {
              FUN_00424d20();
            }
            if ((local_50 & 0x8000000) != 0) {
              FUN_00424d90();
            }
            if ((local_50 & 0x20000000) != 0) {
              if (DAT_00435498 < 1) {
                if (DAT_00435498 < 0) {
                  DAT_0049a180 = DAT_0049a184;
                }
              }
              else {
                DAT_0049a180 = -DAT_0049a184;
              }
            }
            if ((local_50 & 0x4000) != 0) {
              DAT_00436b9c = 1;
              FUN_00408c74();
            }
            uVar3 = 1;
          }
          else {
            FUN_00420ed0();
            uVar3 = 1;
          }
        }
      }
    }
    else {
      uVar3 = 10;
    }
  }
  else {
    uVar3 = 0xb;
  }
  return uVar3;
}

