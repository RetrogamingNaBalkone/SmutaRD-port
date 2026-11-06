/* Ghidra address: 00406c68; FUN_00406c68 */

undefined1 * __cdecl FUN_00406c68(short *param_1)

{
  undefined1 *puVar1;
  uint unaff_ESI;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 *local_10;
  short local_c;
  short local_a;
  short local_8;
  short local_6;
  
  uVar4 = *param_1 * 2;
  if (((int)param_1[2] & DAT_00438e48) == 0) {
    puVar1 = *(undefined1 **)(param_1 + 7);
  }
  else {
    iVar3 = *(int *)(param_1 + 7);
    if ((iVar3 == DAT_00438e44) && (param_1[4] == DAT_00438e40)) {
      puVar1 = &DAT_00442670;
    }
    else {
      DAT_00438e40 = (int)param_1[4];
      DAT_00438e44 = iVar3;
      if (((param_1[2] & 0x40U) == 0) && ((param_1[2] & 0x400U) == 0)) {
        if (((param_1[2] & 0x80U) == 0) && ((param_1[2] & 0x800U) == 0)) {
          if (((param_1[2] & 0x100U) == 0) && ((param_1[2] & 0x1000U) == 0)) {
            if (((param_1[2] & 0x200U) == 0) && ((param_1[2] & 0x2000U) == 0)) {
              if ((*(byte *)((int)param_1 + 5) & 0x40) == 0) {
                puVar1 = *(undefined1 **)(param_1 + 7);
              }
              else {
                if (param_1[4] != 0) {
                  unaff_ESI = ((int)uVar4 / (int)param_1[3]) * (int)param_1[4] & 0xfffffffe;
                }
                uVar4 = 0;
                puVar1 = &DAT_00442670;
                local_10 = *(undefined1 **)(param_1 + 7);
                for (iVar3 = 0; iVar3 < *(int *)(param_1 + 5); iVar3 = iVar3 + 1) {
                  if (unaff_ESI == uVar4) {
                    *puVar1 = *local_10;
                    uVar4 = 0;
                  }
                  else {
                    *puVar1 = 0;
                    uVar4 = uVar4 + 1;
                  }
                  puVar1 = puVar1 + 1;
                  local_10 = local_10 + 1;
                }
                puVar1 = &DAT_00442670;
              }
            }
            else {
              uVar4 = ((int)param_1[1] / (int)param_1[3]) * (int)param_1[4] * uVar4;
              FUN_00429f54((undefined4 *)&DAT_00442670,(undefined4 *)(*(int *)(param_1 + 7) + uVar4)
                           ,*(int *)(param_1 + 5) - uVar4);
              if ((*(byte *)((int)param_1 + 5) & 0x20) == 0) {
                FUN_00429fc4((undefined4 *)(&DAT_00442670 + (*(int *)(param_1 + 5) - uVar4)),0,uVar4
                            );
              }
              else {
                FUN_00429f54((undefined4 *)(&DAT_00442670 + (*(int *)(param_1 + 5) - uVar4)),
                             *(undefined4 **)(param_1 + 7),uVar4);
              }
              puVar1 = &DAT_00442670;
            }
          }
          else {
            if (param_1[4] == param_1[3]) {
              iVar3 = (int)param_1[1];
            }
            else {
              iVar3 = ((int)param_1[1] / (int)param_1[3]) * (int)param_1[4];
            }
            uVar4 = iVar3 * uVar4;
            FUN_00429f54((undefined4 *)(&DAT_00442670 + uVar4),*(undefined4 **)(param_1 + 7),
                         *(int *)(param_1 + 5) - uVar4);
            if ((*(byte *)((int)param_1 + 5) & 0x10) == 0) {
              FUN_00429fc4((undefined4 *)&DAT_00442670,0,uVar4);
            }
            else {
              FUN_00429f54((undefined4 *)&DAT_00442670,
                           (undefined4 *)((*(int *)(param_1 + 7) + *(int *)(param_1 + 5)) - uVar4),
                           uVar4);
            }
            puVar1 = &DAT_00442670;
          }
        }
        else {
          uVar2 = ((int)uVar4 / (int)param_1[3]) * (int)param_1[4] & 0xfffffffe;
          FUN_00429f54((undefined4 *)&DAT_00442670,(undefined4 *)(*(int *)(param_1 + 7) + uVar2),
                       *(int *)(param_1 + 5) - uVar2);
          if ((*(byte *)((int)param_1 + 5) & 8) == 0) {
            for (local_c = 0; local_c < param_1[1]; local_c = local_c + 1) {
              FUN_00429fc4((undefined4 *)(&DAT_00442670 + (int)local_c * uVar4 + (uVar4 - uVar2)),0,
                           uVar2);
            }
          }
          else {
            for (local_a = 0; local_a < param_1[1]; local_a = local_a + 1) {
              FUN_00429f54((undefined4 *)(&DAT_00442670 + (int)local_a * uVar4 + (uVar4 - uVar2)),
                           (undefined4 *)((int)local_a * uVar4 + *(int *)(param_1 + 7)),uVar2);
            }
          }
          puVar1 = &DAT_00442670;
        }
      }
      else {
        uVar2 = uVar4;
        if (param_1[4] != param_1[3]) {
          uVar2 = ((int)uVar4 / (int)param_1[3]) * (int)param_1[4] & 0xfffffffe;
        }
        FUN_00429f54((undefined4 *)(&DAT_00442670 + uVar2),*(undefined4 **)(param_1 + 7),
                     *(int *)(param_1 + 5) - uVar2);
        if ((*(byte *)((int)param_1 + 5) & 4) == 0) {
          for (local_8 = 0; local_8 < param_1[1]; local_8 = local_8 + 1) {
            FUN_00429fc4((undefined4 *)(&DAT_00442670 + (int)local_8 * uVar4),0,uVar2);
          }
        }
        else {
          for (local_6 = 0; local_6 < param_1[1]; local_6 = local_6 + 1) {
            FUN_00429f54((undefined4 *)(&DAT_00442670 + (int)local_6 * uVar4),
                         (undefined4 *)
                         (((int)local_6 * uVar4 + *(int *)(param_1 + 7) + uVar4) - uVar2),uVar2);
          }
        }
        puVar1 = &DAT_00442670;
      }
    }
  }
  return puVar1;
}

