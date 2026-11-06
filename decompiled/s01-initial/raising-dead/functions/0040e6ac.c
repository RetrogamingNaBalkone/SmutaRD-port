/* Ghidra address: 0040e6ac; FUN_0040e6ac */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __cdecl FUN_0040e6ac(int *param_1,char *param_2,short *param_3)

{
  char cVar1;
  short sVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  undefined2 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int *piVar9;
  char *pcVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  char *pcVar14;
  short *psVar15;
  undefined4 *in_FS_OFFSET;
  byte bVar16;
  undefined2 *puVar17;
  undefined2 *puVar18;
  undefined2 *puVar19;
  undefined2 *puVar20;
  undefined2 local_4a;
  byte local_47;
  undefined2 local_46;
  int *local_44;
  byte local_3d;
  LPVOID local_3c;
  short *local_38;
  short *local_34;
  short *local_30;
  undefined2 local_2a;
  undefined4 local_28;
  
  bVar16 = 0;
  FUN_0042c8f0(0x4399d2);
  _DAT_004d0404 = 0;
  local_30 = param_3 + 0x3a8;
  _DAT_004d0417 = 0x18;
  local_34 = param_3 + 0xc2a;
  DAT_004d07a3 = '\0';
  local_38 = param_3 + 0x14ac;
  DAT_004d08cf = '\0';
  local_3c = (LPVOID)0x0;
  param_1[3] = 0;
  DAT_004381b8 = 0;
  uVar13 = 0;
  iVar3 = FUN_0040e5c4((int)param_1,param_2,(uint *)(param_1 + 1));
  *param_1 = iVar3;
  for (iVar3 = 0; iVar3 < param_1[1]; iVar3 = iVar3 + 1) {
    if (*(char *)(*param_1 + iVar3) == '\r') {
      *(undefined1 *)(*param_1 + iVar3) = 10;
    }
  }
  puVar4 = FUN_00435120(0x8a);
  if (puVar4 == (uint *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = FUN_004306dc((int *)puVar4,0,(uint *)*param_1,(char *)param_1[1]);
  }
  param_1[2] = (int)piVar5;
  do {
    do {
      while( true ) {
        uVar8 = FUN_0040f25c((int)param_1,&DAT_004d041f,299);
        sVar2 = (short)uVar8;
        if (sVar2 == 0) {
          FUN_00429f54((undefined4 *)&DAT_004d041f,(undefined4 *)&DAT_00439ab8,0x2e);
          puVar4 = FUN_00435120(0x8a);
          if (puVar4 == (uint *)0x0) {
            piVar5 = (int *)0x0;
          }
          else {
            piVar5 = FUN_004306dc((int *)puVar4,0,(uint *)&DAT_004d041f,(char *)0x12b);
          }
          puVar6 = &local_4a;
          puVar20 = (undefined2 *)&DAT_004d0409;
          puVar19 = (undefined2 *)&DAT_004d0407;
          puVar18 = (undefined2 *)&DAT_004d0417;
          puVar17 = (undefined2 *)&DAT_004d0404;
          if (piVar5 == (int *)0x0) {
            piVar9 = (int *)0x0;
          }
          else {
            piVar9 = (int *)((int)piVar5 + 0x3e);
          }
          piVar9 = FUN_00431288(piVar9,&local_47);
          piVar9 = FUN_00431258(piVar9,puVar17);
          piVar9 = FUN_00431324(piVar9,puVar18);
          piVar9 = FUN_00431258(piVar9,puVar19);
          piVar9 = FUN_00431258(piVar9,puVar20);
          FUN_00431324(piVar9,puVar6);
          _DAT_004d0419 = local_4a;
          if (local_47 == 0x5f) {
            local_47 = 0x20;
          }
          if (DAT_004d08cf == '\0') {
            DAT_004d040b = (LPVOID)0x0;
          }
          else {
            DAT_004d040b = FUN_0041606c(&DAT_004d08cf);
          }
          *(undefined2 *)((int)DAT_004d040b + 4) = local_2a;
          _DAT_004d040f = local_3c;
          if (DAT_004d07a3 == '\0') {
            _DAT_004d0413 = (undefined4 *)0x0;
          }
          else {
            _DAT_004d0413 = FUN_0041614c((uint *)&DAT_004d07a3);
          }
          DAT_004d0406 = local_47;
          if (*(int *)(param_3 + (uint)local_47 * 2 + 0x1a8) != 0) {
            pcVar10 = FUN_00404d88(0x13);
            FUN_0040e524(pcVar10);
          }
          puVar4 = FUN_0040fbe0((undefined2 *)&DAT_004d0404,piVar5,local_47);
          *(uint **)(param_3 + (uint)local_47 * 2 + 0x1a8) = puVar4;
          if (piVar5 != (int *)0x0) {
            (**(code **)piVar5[1])();
          }
          *in_FS_OFFSET = local_28;
          return param_1;
        }
        if (sVar2 != 1) break;
        pcVar10 = FUN_0042a144((uint *)s_Game_Ini_004399de);
        iVar3 = FUN_0042a318(&DAT_004d041f,s_Game_Ini_004399de,(int)pcVar10);
        if (iVar3 == 0) {
          uVar13 = 1;
        }
        else {
          pcVar10 = FUN_0042a144((uint *)s_Palette_004399e7);
          iVar3 = FUN_0042a318(&DAT_004d041f,s_Palette_004399e7,(int)pcVar10);
          if (iVar3 == 0) {
            uVar13 = 2;
          }
          else {
            pcVar10 = FUN_0042a144((uint *)s_Light_004399ef);
            iVar3 = FUN_0042a318(&DAT_004d041f,s_Light_004399ef,(int)pcVar10);
            if (iVar3 == 0) {
              uVar13 = 7;
            }
            else {
              pcVar10 = FUN_0042a144((uint *)s_Game_Object_004399f5);
              iVar3 = FUN_0042a318(&DAT_004d041f,s_Game_Object_004399f5,(int)pcVar10);
              if (iVar3 == 0) {
                uVar13 = 3;
              }
              else {
                pcVar10 = FUN_0042a144((uint *)&DAT_00439a01);
                iVar3 = FUN_0042a318(&DAT_004d041f,&DAT_00439a01,(int)pcVar10);
                if (iVar3 == 0) {
                  uVar13 = 5;
                }
                else {
                  pcVar10 = FUN_0042a144((uint *)&DAT_00439a06);
                  iVar3 = FUN_0042a318(&DAT_004d041f,&DAT_00439a06,(int)pcVar10);
                  if (iVar3 == 0) {
                    uVar13 = 4;
                  }
                  else {
                    pcVar10 = FUN_0042a144((uint *)s_FCMap_00439a0b);
                    iVar3 = FUN_0042a318(&DAT_004d041f,s_FCMap_00439a0b,(int)pcVar10);
                    if (iVar3 == 0) {
                      uVar13 = 6;
                    }
                  }
                }
              }
            }
          }
        }
      }
    } while (sVar2 != 2);
    switch(uVar13) {
    case 1:
      pcVar10 = FUN_0042a144((uint *)s_Level_Width_00439a11);
      iVar3 = FUN_0042a318(&DAT_004d041f,s_Level_Width_00439a11,(int)pcVar10);
      if (iVar3 == 0) {
        iVar3 = FUN_0040f320(param_1,&DAT_004d041f);
        *param_3 = (short)iVar3;
      }
      else {
        pcVar10 = FUN_0042a144((uint *)s_Level_Height_00439a1d);
        iVar3 = FUN_0042a318(&DAT_004d041f,s_Level_Height_00439a1d,(int)pcVar10);
        if (iVar3 == 0) {
          iVar3 = FUN_0040f320(param_1,&DAT_004d041f);
          param_3[1] = (short)iVar3;
        }
        else {
          pcVar10 = FUN_0042a144((uint *)s_Level_Length_00439a2a);
          iVar3 = FUN_0042a318(&DAT_004d041f,s_Level_Length_00439a2a,(int)pcVar10);
          if (iVar3 == 0) {
            iVar3 = FUN_0040f320(param_1,&DAT_004d041f);
            param_3[2] = (short)iVar3;
          }
          else {
            pcVar10 = FUN_0042a144((uint *)s_Cell_Side_00439a37);
            iVar3 = FUN_0042a318(&DAT_004d041f,s_Cell_Side_00439a37,(int)pcVar10);
            if (iVar3 == 0) {
              iVar3 = FUN_0040f320(param_1,&DAT_004d041f);
              param_3[3] = (short)iVar3;
            }
            else {
              pcVar10 = FUN_0042a144((uint *)s_Cell_Height_00439a41);
              iVar3 = FUN_0042a318(&DAT_004d041f,s_Cell_Height_00439a41,(int)pcVar10);
              if (iVar3 == 0) {
                iVar3 = FUN_0040f320(param_1,&DAT_004d041f);
                param_3[4] = (short)iVar3;
              }
              else {
                pcVar10 = FUN_0042a144((uint *)s_Floor_Color_00439a4d);
                iVar3 = FUN_0042a318(&DAT_004d041f,s_Floor_Color_00439a4d,(int)pcVar10);
                if (iVar3 == 0) {
                  iVar3 = FUN_0040f320(param_1,&DAT_004d041f);
                  param_3[5] = (short)iVar3;
                }
                else {
                  pcVar10 = FUN_0042a144((uint *)s_Ceiling_Color_00439a59);
                  iVar3 = FUN_0042a318(&DAT_004d041f,s_Ceiling_Color_00439a59,(int)pcVar10);
                  if (iVar3 == 0) {
                    iVar3 = FUN_0040f320(param_1,&DAT_004d041f);
                    param_3[6] = (short)iVar3;
                  }
                  else {
                    pcVar10 = FUN_0042a144((uint *)s_Min_Dis_00439a67);
                    iVar3 = FUN_0042a318(&DAT_004d041f,s_Min_Dis_00439a67,(int)pcVar10);
                    if (iVar3 == 0) {
                      iVar3 = FUN_0040f320(param_1,&DAT_004d041f);
                      param_3[7] = (short)iVar3;
                    }
                    else {
                      pcVar10 = FUN_0042a144((uint *)s_MaxLenTrace_00439a6f);
                      iVar3 = FUN_0042a318(&DAT_004d041f,s_MaxLenTrace_00439a6f,(int)pcVar10);
                      if (iVar3 == 0) {
                        iVar3 = FUN_0040f320(param_1,&DAT_004d041f);
                        DAT_004f142c = (int)(short)iVar3;
                      }
                      else {
                        pcVar10 = FUN_0042a144((uint *)s_LightEdge_00439a7b);
                        iVar3 = FUN_0042a318(&DAT_004d041f,s_LightEdge_00439a7b,(int)pcVar10);
                        if (iVar3 == 0) {
                          iVar3 = FUN_0040f320(param_1,&DAT_004d041f);
                          DAT_00438e98 = (int)(short)iVar3;
                        }
                        else {
                          pcVar10 = FUN_0042a144((uint *)s_LightStep_00439a85);
                          iVar3 = FUN_0042a318(&DAT_004d041f,s_LightStep_00439a85,(int)pcVar10);
                          if (iVar3 == 0) {
                            iVar3 = FUN_0040f320(param_1,&DAT_004d041f);
                            DAT_00438e9c = (int)(short)iVar3;
                          }
                          else {
                            pcVar10 = FUN_0042a144((uint *)s_EndLevel_00439a8f);
                            iVar3 = FUN_0042a318(&DAT_004d041f,s_EndLevel_00439a8f,(int)pcVar10);
                            if (iVar3 == 0) {
                              iVar3 = FUN_0040f320(param_1,&DAT_004d041f);
                              DAT_004381b8 = (int)(short)iVar3;
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
      pcVar10 = FUN_0042a144((uint *)s_Palette_00439a98);
      iVar3 = FUN_0042a318(&DAT_004d041f,s_Palette_00439a98,(int)pcVar10);
      if (iVar3 == 0) {
        FUN_0040f34c(param_1,&DAT_004d041f,&DAT_004d054b);
        uVar11 = 0xffffffff;
        pcVar10 = &DAT_004d054b;
        do {
          pcVar14 = pcVar10;
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          pcVar14 = pcVar10 + (uint)bVar16 * -2 + 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar14;
        } while (cVar1 != '\0');
        uVar11 = ~uVar11;
        pcVar10 = pcVar14 + -uVar11;
        psVar15 = param_3 + 0x188;
        for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined4 *)psVar15 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + ((uint)bVar16 * -2 + 1) * 4;
          psVar15 = psVar15 + (uint)bVar16 * -4 + 2;
        }
        for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(char *)psVar15 = *pcVar10;
          pcVar10 = pcVar10 + (uint)bVar16 * -2 + 1;
          psVar15 = (short *)((int)psVar15 + (uint)bVar16 * -2 + 1);
        }
        puVar6 = (undefined2 *)FUN_0042709c(DAT_0053d630,&DAT_004d054b);
        FUN_00426418(param_3 + 8,puVar6);
      }
      break;
    case 3:
      pcVar10 = FUN_0042a144((uint *)s_Sprite_00439aa6);
      iVar3 = FUN_0042a318(&DAT_004d041f,s_Sprite_00439aa6,(int)pcVar10);
      if (iVar3 == 0) {
        FUN_0040f34c(param_1,&DAT_004d041f,&DAT_004d054b);
        puVar4 = FUN_00435120(0x8a);
        if (puVar4 == (uint *)0x0) {
          piVar5 = (int *)0x0;
        }
        else {
          piVar5 = FUN_004306dc((int *)puVar4,0,(uint *)&DAT_004d054b,(char *)0x12b);
        }
        if (piVar5 == (int *)0x0) {
          piVar9 = (int *)0x0;
        }
        else {
          piVar9 = (int *)((int)piVar5 + 0x3e);
        }
        FUN_00430e00(piVar9,&DAT_004d08cf);
        if (piVar5 == (int *)0x0) {
          piVar9 = (int *)0x0;
        }
        else {
          piVar9 = (int *)((int)piVar5 + 0x3e);
        }
        FUN_00431258(piVar9,&local_2a);
        if (piVar5 != (int *)0x0) {
          (**(code **)piVar5[1])();
        }
      }
      else {
        pcVar10 = FUN_0042a144((uint *)&DAT_00439aad);
        iVar3 = FUN_0042a318(&DAT_004d041f,&DAT_00439aad,(int)pcVar10);
        if (iVar3 == 0) {
          FUN_0040f34c(param_1,&DAT_004d041f,&DAT_004d054b);
          local_3c = FUN_004160d8(&DAT_004d054b);
        }
        else {
          pcVar10 = FUN_0042a144((uint *)s_Sound_00439ab2);
          iVar3 = FUN_0042a318(&DAT_004d041f,s_Sound_00439ab2,(int)pcVar10);
          if (iVar3 == 0) {
            FUN_0040f34c(param_1,&DAT_004d041f,&DAT_004d07a3);
          }
          else {
            puVar4 = FUN_00435120(0x8a);
            if (puVar4 == (uint *)0x0) {
              local_44 = (int *)0x0;
            }
            else {
              local_44 = FUN_004306dc((int *)puVar4,0,(uint *)&DAT_004d041f,(char *)0x12b);
            }
            puVar6 = &local_46;
            puVar20 = (undefined2 *)&DAT_004d0409;
            puVar19 = (undefined2 *)&DAT_004d0407;
            puVar18 = (undefined2 *)&DAT_004d0417;
            puVar17 = (undefined2 *)&DAT_004d0404;
            if (local_44 == (int *)0x0) {
              piVar5 = (int *)0x0;
            }
            else {
              piVar5 = (int *)((int)local_44 + 0x3e);
            }
            piVar5 = FUN_00431288(piVar5,&local_3d);
            piVar5 = FUN_00431258(piVar5,puVar17);
            piVar5 = FUN_00431324(piVar5,puVar18);
            piVar5 = FUN_00431258(piVar5,puVar19);
            piVar5 = FUN_00431258(piVar5,puVar20);
            FUN_00431258(piVar5,puVar6);
            _DAT_004d0419 = local_46;
            if (local_3d == 0x5f) {
              local_3d = 0x20;
            }
            if (DAT_004d08cf == '\0') {
              DAT_004d040b = (LPVOID)0x0;
            }
            else {
              DAT_004d040b = FUN_0041606c(&DAT_004d08cf);
            }
            *(undefined2 *)((int)DAT_004d040b + 4) = local_2a;
            _DAT_004d040f = local_3c;
            if (DAT_004d07a3 == '\0') {
              _DAT_004d0413 = (undefined4 *)0x0;
            }
            else {
              _DAT_004d0413 = FUN_0041614c((uint *)&DAT_004d07a3);
            }
            DAT_004d0406 = local_3d;
            if (*(int *)(param_3 + (uint)local_3d * 2 + 0x1a8) != 0) {
              pcVar10 = FUN_00404d88(0x13);
              FUN_0040e524(pcVar10);
            }
            puVar4 = FUN_0040fbe0((undefined2 *)&DAT_004d0404,local_44,local_3d);
            *(uint **)(param_3 + (uint)local_3d * 2 + 0x1a8) = puVar4;
            if (local_44 != (int *)0x0) {
              (**(code **)local_44[1])();
            }
          }
        }
      }
      break;
    case 4:
      FUN_00429f54((undefined4 *)local_30,(undefined4 *)&DAT_004d041f,(int)*param_3);
      local_30 = (short *)((int)local_30 + (int)*param_3);
      break;
    case 5:
      FUN_00429f54((undefined4 *)local_34,(undefined4 *)&DAT_004d041f,(int)*param_3);
      local_34 = (short *)((int)local_34 + (int)*param_3);
      break;
    case 6:
      FUN_00429f54((undefined4 *)local_38,(undefined4 *)&DAT_004d041f,(int)*param_3);
      local_38 = (short *)((int)local_38 + (int)*param_3);
      break;
    case 7:
      pcVar10 = FUN_0042a144((uint *)s_Light_00439aa0);
      iVar3 = FUN_0042a318(&DAT_004d041f,s_Light_00439aa0,(int)pcVar10);
      if (iVar3 == 0) {
        FUN_0040f34c(param_1,&DAT_004d041f,&DAT_004d054b);
        uVar11 = 0xffffffff;
        pcVar10 = &DAT_004d054b;
        do {
          pcVar14 = pcVar10;
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          pcVar14 = pcVar10 + (uint)bVar16 * -2 + 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar14;
        } while (cVar1 != '\0');
        uVar11 = ~uVar11;
        pcVar10 = pcVar14 + -uVar11;
        psVar15 = param_3 + 0x198;
        for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined4 *)psVar15 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + ((uint)bVar16 * -2 + 1) * 4;
          psVar15 = psVar15 + (uint)bVar16 * -4 + 2;
        }
        for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(char *)psVar15 = *pcVar10;
          pcVar10 = pcVar10 + (uint)bVar16 * -2 + 1;
          psVar15 = (short *)((int)psVar15 + (uint)bVar16 * -2 + 1);
        }
        puVar7 = (undefined4 *)FUN_0042709c(DAT_0053d630,&DAT_004d054b);
        FUN_00422d58(DAT_0043da10,puVar7);
      }
    }
  } while( true );
}

