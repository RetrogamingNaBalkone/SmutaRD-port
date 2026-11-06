/* Ghidra address: 00426e8c; FUN_00426e8c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_00426e8c(void)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  undefined4 uVar6;
  undefined2 extraout_CX;
  undefined2 extraout_CX_00;
  undefined2 extraout_CX_01;
  undefined2 extraout_CX_02;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined2 uVar10;
  char *pcVar11;
  char *pcVar12;
  short *psVar13;
  undefined4 *in_FS_OFFSET;
  byte bVar14;
  int *in_stack_00000004;
  short *in_stack_0000000c;
  int in_stack_00000010;
  undefined2 *puVar15;
  undefined2 *puVar16;
  undefined2 *puVar17;
  undefined2 *puVar18;
  undefined2 *puVar19;
  undefined1 local_56 [2];
  uint *local_54;
  byte local_4d;
  LPVOID local_4c;
  short *local_48;
  short *local_44;
  short *local_40;
  undefined2 local_3a;
  undefined4 local_38;
  undefined2 local_28;
  uint *local_18;
  uint *local_14;
  uint *local_10;
  uint *local_c;
  uint *local_8;
  
  bVar14 = 0;
  FUN_0042b4b4(0x43748a);
  uVar10 = 0;
  _DAT_0049a468 = 0;
  local_40 = in_stack_0000000c + 0x3a8;
  _DAT_0049a47b = 0x18;
  local_44 = in_stack_0000000c + 0xc2a;
  DAT_0049a69e = '\0';
  local_48 = in_stack_0000000c + 0x14ac;
  DAT_0049a752 = '\0';
  local_4c = (LPVOID)0x0;
  *(undefined4 *)((int)in_stack_00000004 + 10) = 0;
  DAT_00436b94 = 0;
  if (in_stack_00000010 == 0) {
    iVar3 = FUN_0040d618();
    *in_stack_00000004 = iVar3;
  }
  else {
    iVar3 = FUN_00426d80();
    *in_stack_00000004 = iVar3;
  }
  for (sVar2 = 0; sVar2 < (short)in_stack_00000004[1]; sVar2 = sVar2 + 1) {
    if (*(char *)(*in_stack_00000004 + (int)sVar2) == '\r') {
      *(undefined1 *)(*in_stack_00000004 + (int)sVar2) = 10;
    }
  }
  local_8 = FUN_00431988();
  if (local_8 != (uint *)0x0) {
    local_28 = 0x14;
    FUN_0042e498();
    *DAT_0049aa2c = *DAT_0049aa2c + -6;
    local_28 = 8;
  }
  *(uint **)((int)in_stack_00000004 + 6) = local_8;
  do {
    do {
      while( true ) {
        uVar6 = FUN_004279bc();
        sVar2 = (short)uVar6;
        if (sVar2 == 0) {
          if (in_stack_00000010 == 0) {
            FUN_0040d524();
          }
          *DAT_0049aa2c = *DAT_0049aa2c + 1;
          *in_FS_OFFSET = local_38;
          return in_stack_00000004;
        }
        if (sVar2 != 1) break;
        FUN_00429114();
        iVar3 = FUN_0042920c();
        if (iVar3 == 0) {
          uVar10 = 1;
        }
        else {
          FUN_00429114();
          iVar3 = FUN_0042920c();
          if (iVar3 == 0) {
            uVar10 = 2;
          }
          else {
            FUN_00429114();
            iVar3 = FUN_0042920c();
            if (iVar3 == 0) {
              uVar10 = 7;
            }
            else {
              FUN_00429114();
              iVar3 = FUN_0042920c();
              if (iVar3 == 0) {
                uVar10 = 3;
              }
              else {
                FUN_00429114();
                iVar3 = FUN_0042920c();
                if (iVar3 == 0) {
                  uVar10 = 5;
                }
                else {
                  FUN_00429114();
                  iVar3 = FUN_0042920c();
                  if (iVar3 == 0) {
                    uVar10 = 4;
                  }
                  else {
                    FUN_00429114();
                    iVar3 = FUN_0042920c();
                    if (iVar3 == 0) {
                      uVar10 = 6;
                    }
                  }
                }
              }
            }
          }
        }
      }
    } while (sVar2 != 2);
    switch(uVar10) {
    case 1:
      FUN_00429114();
      iVar3 = FUN_0042920c();
      if (iVar3 == 0) {
        iVar3 = FUN_00427a80();
        *in_stack_0000000c = (short)iVar3;
      }
      else {
        FUN_00429114();
        iVar3 = FUN_0042920c();
        if (iVar3 == 0) {
          iVar3 = FUN_00427a80();
          in_stack_0000000c[1] = (short)iVar3;
        }
        else {
          FUN_00429114();
          iVar3 = FUN_0042920c();
          if (iVar3 == 0) {
            iVar3 = FUN_00427a80();
            in_stack_0000000c[2] = (short)iVar3;
          }
          else {
            FUN_00429114();
            iVar3 = FUN_0042920c();
            if (iVar3 == 0) {
              iVar3 = FUN_00427a80();
              in_stack_0000000c[3] = (short)iVar3;
            }
            else {
              FUN_00429114();
              iVar3 = FUN_0042920c();
              if (iVar3 == 0) {
                iVar3 = FUN_00427a80();
                in_stack_0000000c[4] = (short)iVar3;
              }
              else {
                FUN_00429114();
                iVar3 = FUN_0042920c();
                if (iVar3 == 0) {
                  iVar3 = FUN_00427a80();
                  in_stack_0000000c[5] = (short)iVar3;
                }
                else {
                  FUN_00429114();
                  iVar3 = FUN_0042920c();
                  if (iVar3 == 0) {
                    iVar3 = FUN_00427a80();
                    in_stack_0000000c[6] = (short)iVar3;
                  }
                  else {
                    FUN_00429114();
                    iVar3 = FUN_0042920c();
                    if (iVar3 == 0) {
                      iVar3 = FUN_00427a80();
                      in_stack_0000000c[7] = (short)iVar3;
                    }
                    else {
                      FUN_00429114();
                      iVar3 = FUN_0042920c();
                      if (iVar3 == 0) {
                        iVar3 = FUN_00427a80();
                        DAT_0048aaac = (int)(short)iVar3;
                      }
                      else {
                        FUN_00429114();
                        iVar3 = FUN_0042920c();
                        if (iVar3 == 0) {
                          iVar3 = FUN_00427a80();
                          DAT_0043408c = (int)(short)iVar3;
                        }
                        else {
                          FUN_00429114();
                          iVar3 = FUN_0042920c();
                          if (iVar3 == 0) {
                            iVar3 = FUN_00427a80();
                            DAT_00434090 = (int)(short)iVar3;
                          }
                          else {
                            FUN_00429114();
                            iVar3 = FUN_0042920c();
                            if (iVar3 == 0) {
                              iVar3 = FUN_00427a80();
                              DAT_00436b94 = (int)(short)iVar3;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      break;
    case 2:
      FUN_00429114();
      iVar3 = FUN_0042920c();
      if (iVar3 == 0) {
        FUN_00427aac();
        uVar7 = 0xffffffff;
        pcVar11 = &DAT_0049a536;
        do {
          pcVar12 = pcVar11;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar12 = pcVar11 + (uint)bVar14 * -2 + 1;
          cVar1 = *pcVar11;
          pcVar11 = pcVar12;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7;
        pcVar11 = pcVar12 + -uVar7;
        psVar13 = in_stack_0000000c + 0x188;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)psVar13 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + ((uint)bVar14 * -2 + 1) * 4;
          psVar13 = psVar13 + (uint)bVar14 * -4 + 2;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(char *)psVar13 = *pcVar11;
          pcVar11 = pcVar11 + (uint)bVar14 * -2 + 1;
          psVar13 = (short *)((int)psVar13 + (uint)bVar14 * -2 + 1);
        }
        FUN_0040d43c();
        FUN_00407db8();
      }
      break;
    case 3:
      FUN_00429114();
      iVar3 = FUN_0042920c();
      if (iVar3 == 0) {
        FUN_00427aac();
        local_c = FUN_00431988();
        if (local_c != (uint *)0x0) {
          local_28 = 0x2c;
          FUN_0042e498();
          *DAT_0049aa2c = *DAT_0049aa2c + -6;
          local_28 = 0x20;
        }
        puVar5 = local_c;
        piVar4 = FUN_0042e838();
        if (puVar5 == (uint *)0x0) {
          piVar9 = (int *)0x0;
        }
        else {
          piVar9 = (int *)((int)puVar5 + 0x3e);
        }
        FUN_0042ec88(piVar4,&local_3a,(short)piVar9,piVar9,&local_3a);
        local_10 = puVar5;
        if (puVar5 != (uint *)0x0) {
          iVar3 = FUN_0042b677();
          *DAT_0049aa2c = *DAT_0049aa2c + iVar3;
          local_28 = 0x44;
          (**(code **)local_10[1])();
          local_28 = 0x38;
        }
      }
      else {
        FUN_00429114();
        iVar3 = FUN_0042920c();
        if (iVar3 == 0) {
          FUN_00427aac();
          local_4c = FUN_0041d95a();
        }
        else {
          FUN_00429114();
          iVar3 = FUN_0042920c();
          if (iVar3 == 0) {
            FUN_00427aac();
          }
          else {
            local_14 = FUN_00431988();
            if (local_14 != (uint *)0x0) {
              local_28 = 0x5c;
              FUN_0042e498();
              *DAT_0049aa2c = *DAT_0049aa2c + -6;
              local_28 = 0x50;
            }
            puVar19 = (undefined2 *)local_56;
            puVar18 = (undefined2 *)&DAT_0049a46d;
            puVar17 = (undefined2 *)&DAT_0049a46b;
            puVar16 = (undefined2 *)&DAT_0049a47b;
            puVar15 = (undefined2 *)&DAT_0049a468;
            local_54 = local_14;
            piVar4 = FUN_0042ecb8();
            piVar4 = FUN_0042ec88(piVar4,extraout_EDX,extraout_CX,piVar4,puVar15);
            piVar4 = FUN_0042ed54(piVar4,extraout_EDX_00,extraout_ECX,piVar4,puVar16);
            piVar4 = FUN_0042ec88(piVar4,extraout_EDX_01,extraout_CX_00,piVar4,puVar17);
            piVar4 = FUN_0042ec88(piVar4,extraout_EDX_02,extraout_CX_01,piVar4,puVar18);
            FUN_0042ec88(piVar4,extraout_EDX_03,extraout_CX_02,piVar4,puVar19);
            DAT_0049a47d = local_56[0];
            if (local_4d == 0x5f) {
              local_4d = 0x20;
            }
            if (DAT_0049a752 == '\0') {
              DAT_0049a46f = (LPVOID)0x0;
            }
            else {
              DAT_0049a46f = FUN_0041d904();
            }
            *(undefined2 *)((int)DAT_0049a46f + 4) = local_3a;
            _DAT_0049a473 = local_4c;
            if (DAT_0049a69e == '\0') {
              _DAT_0049a477 = (uint *)0x0;
            }
            else {
              _DAT_0049a477 = FUN_0041d9de();
            }
            DAT_0049a46a = local_4d;
            if (*(int *)(in_stack_0000000c + (uint)local_4d * 2 + 0x1a8) != 0) {
              FUN_00427b9f();
            }
            puVar5 = FUN_0041ddc0();
            *(uint **)(in_stack_0000000c + (uint)local_4d * 2 + 0x1a8) = puVar5;
            local_18 = local_54;
            if (local_54 != (uint *)0x0) {
              iVar3 = FUN_0042b677();
              *DAT_0049aa2c = *DAT_0049aa2c + iVar3;
              local_28 = 0x74;
              (**(code **)local_18[1])();
              local_28 = 0x68;
            }
          }
        }
      }
      break;
    case 4:
      FUN_00428fe4();
      local_40 = (short *)((int)local_40 + (int)*in_stack_0000000c);
      break;
    case 5:
      FUN_00428fe4();
      local_44 = (short *)((int)local_44 + (int)*in_stack_0000000c);
      break;
    case 6:
      FUN_00428fe4();
      local_48 = (short *)((int)local_48 + (int)*in_stack_0000000c);
      break;
    case 7:
      FUN_00429114();
      iVar3 = FUN_0042920c();
      if (iVar3 == 0) {
        FUN_00427aac();
        uVar7 = 0xffffffff;
        pcVar11 = &DAT_0049a536;
        do {
          pcVar12 = pcVar11;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar12 = pcVar11 + (uint)bVar14 * -2 + 1;
          cVar1 = *pcVar11;
          pcVar11 = pcVar12;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7;
        pcVar11 = pcVar12 + -uVar7;
        psVar13 = in_stack_0000000c + 0x198;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)psVar13 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + ((uint)bVar14 * -2 + 1) * 4;
          psVar13 = psVar13 + (uint)bVar14 * -4 + 2;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(char *)psVar13 = *pcVar11;
          pcVar11 = pcVar11 + (uint)bVar14 * -2 + 1;
          psVar13 = (short *)((int)psVar13 + (uint)bVar14 * -2 + 1);
        }
        FUN_0040d43c();
        FUN_00410ea8();
      }
    }
  } while( true );
}

