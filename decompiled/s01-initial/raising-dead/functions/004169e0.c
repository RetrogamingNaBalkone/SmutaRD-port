/* Ghidra address: 004169e0; FUN_004169e0 */

undefined4 __cdecl
FUN_004169e0(short *param_1,int param_2,int param_3,short param_4,short *param_5,int param_6)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  short local_100;
  short local_fe;
  short local_ec;
  short local_ea;
  short local_d8;
  short local_d6;
  short local_c4;
  short local_c2;
  short local_b0;
  short local_ae;
  short local_98;
  short local_96;
  short local_80;
  short local_7e;
  short local_68;
  short local_66;
  short local_50;
  short local_4e;
  short local_3c;
  short local_3a;
  short local_28;
  short local_26;
  short local_14;
  short local_12;
  
  sVar1 = *param_5;
  local_12 = (short)((param_3 - param_4) / (int)param_1[0x3a7]);
  local_14 = (short)((param_2 - param_4) / (int)param_1[0x3a7]);
  if (local_14 < 0) {
    local_14 = 0;
  }
  if (*param_1 + -1 < (int)local_14) {
    local_14 = *param_1 + -1;
  }
  if (local_12 < 0) {
    local_12 = 0;
  }
  if (param_1[2] + -1 < (int)local_12) {
    local_12 = param_1[2] + -1;
  }
  iVar3 = *(int *)(param_1 +
                  (uint)(byte)(&DAT_004f4e98)
                              [(short)(local_12 * (short)*(undefined4 *)(param_1 + 0x25b6) +
                                      local_14)] * 2 + 0x187);
  if ((((*(ushort *)(iVar3 + 0x1b) & 0x10) == 0) ||
      (-(int)*(short *)(iVar3 + 0x1f) == (int)sVar1 || -(int)sVar1 < (int)*(short *)(iVar3 + 0x1f)))
     || (iVar3 = *(short *)(iVar3 + 0x1f) + 20000, -iVar3 != (int)sVar1 && iVar3 <= -(int)sVar1)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    sVar1 = *param_5;
    local_26 = (short)((param_4 + param_3) / (int)param_1[0x3a7]);
    local_28 = (short)((param_2 - param_4) / (int)param_1[0x3a7]);
    if (local_28 < 0) {
      local_28 = 0;
    }
    if (*param_1 + -1 < (int)local_28) {
      local_28 = *param_1 + -1;
    }
    if (local_26 < 0) {
      local_26 = 0;
    }
    if (param_1[2] + -1 < (int)local_26) {
      local_26 = param_1[2] + -1;
    }
    iVar3 = *(int *)(param_1 +
                    (uint)(byte)(&DAT_004f4e98)
                                [(short)(local_26 * (short)*(undefined4 *)(param_1 + 0x25b6) +
                                        local_28)] * 2 + 0x187);
    if ((((*(ushort *)(iVar3 + 0x1b) & 0x10) == 0) ||
        (-(int)*(short *)(iVar3 + 0x1f) == (int)sVar1 || -(int)sVar1 < (int)*(short *)(iVar3 + 0x1f)
        )) || (iVar3 = *(short *)(iVar3 + 0x1f) + 20000,
              -iVar3 != (int)sVar1 && iVar3 <= -(int)sVar1)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      sVar1 = *param_5;
      local_3a = (short)((param_3 - param_4) / (int)param_1[0x3a7]);
      local_3c = (short)((param_4 + param_2) / (int)param_1[0x3a7]);
      if (local_3c < 0) {
        local_3c = 0;
      }
      if (*param_1 + -1 < (int)local_3c) {
        local_3c = *param_1 + -1;
      }
      if (local_3a < 0) {
        local_3a = 0;
      }
      if (param_1[2] + -1 < (int)local_3a) {
        local_3a = param_1[2] + -1;
      }
      iVar3 = *(int *)(param_1 +
                      (uint)(byte)(&DAT_004f4e98)
                                  [(short)(local_3a * (short)*(undefined4 *)(param_1 + 0x25b6) +
                                          local_3c)] * 2 + 0x187);
      if ((((*(ushort *)(iVar3 + 0x1b) & 0x10) == 0) ||
          (-(int)*(short *)(iVar3 + 0x1f) == (int)sVar1 ||
           -(int)sVar1 < (int)*(short *)(iVar3 + 0x1f))) ||
         (iVar3 = *(short *)(iVar3 + 0x1f) + 20000, -iVar3 != (int)sVar1 && iVar3 <= -(int)sVar1)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        sVar1 = *param_5;
        local_4e = (short)((param_4 + param_3) / (int)param_1[0x3a7]);
        local_50 = (short)((param_4 + param_2) / (int)param_1[0x3a7]);
        if (local_50 < 0) {
          local_50 = 0;
        }
        if (*param_1 + -1 < (int)local_50) {
          local_50 = *param_1 + -1;
        }
        if (local_4e < 0) {
          local_4e = 0;
        }
        if (param_1[2] + -1 < (int)local_4e) {
          local_4e = param_1[2] + -1;
        }
        iVar3 = *(int *)(param_1 +
                        (uint)(byte)(&DAT_004f4e98)
                                    [(short)(local_4e * (short)*(undefined4 *)(param_1 + 0x25b6) +
                                            local_50)] * 2 + 0x187);
        if ((((*(ushort *)(iVar3 + 0x1b) & 0x10) == 0) ||
            (-(int)*(short *)(iVar3 + 0x1f) == (int)sVar1 ||
             -(int)sVar1 < (int)*(short *)(iVar3 + 0x1f))) ||
           (iVar3 = *(short *)(iVar3 + 0x1f) + 20000, -iVar3 != (int)sVar1 && iVar3 <= -(int)sVar1))
        {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          sVar1 = *param_5;
          local_66 = (short)((param_3 - param_4) / (int)param_1[0x3a7]);
          local_68 = (short)((param_2 - param_4) / (int)param_1[0x3a7]);
          if (local_68 < 0) {
            local_68 = 0;
          }
          if (*param_1 + -1 < (int)local_68) {
            local_68 = *param_1 + -1;
          }
          if (local_66 < 0) {
            local_66 = 0;
          }
          if (param_1[2] + -1 < (int)local_66) {
            local_66 = param_1[2] + -1;
          }
          iVar3 = *(int *)(param_1 +
                          (uint)(byte)(&DAT_004f70a0)
                                      [(short)(local_66 * (short)*(undefined4 *)(param_1 + 0x25b6) +
                                              local_68)] * 2 + 0x187);
          if ((((*(ushort *)(iVar3 + 0x1b) & 0x10) == 0) ||
              (-(int)*(short *)(iVar3 + 0x1f) == (int)sVar1 ||
               -(int)sVar1 < (int)*(short *)(iVar3 + 0x1f))) ||
             ((int)*(short *)(iVar3 + 0x1f) + param_6 * 2 < -(int)sVar1)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            sVar1 = *param_5;
            local_7e = (short)((param_4 + param_3) / (int)param_1[0x3a7]);
            local_80 = (short)((param_2 - param_4) / (int)param_1[0x3a7]);
            if (local_80 < 0) {
              local_80 = 0;
            }
            if (*param_1 + -1 < (int)local_80) {
              local_80 = *param_1 + -1;
            }
            if (local_7e < 0) {
              local_7e = 0;
            }
            if (param_1[2] + -1 < (int)local_7e) {
              local_7e = param_1[2] + -1;
            }
            iVar3 = *(int *)(param_1 +
                            (uint)(byte)(&DAT_004f70a0)
                                        [(short)(local_7e * (short)*(undefined4 *)(param_1 + 0x25b6)
                                                + local_80)] * 2 + 0x187);
            if ((((*(ushort *)(iVar3 + 0x1b) & 0x10) == 0) ||
                (-(int)*(short *)(iVar3 + 0x1f) == (int)sVar1 ||
                 -(int)sVar1 < (int)*(short *)(iVar3 + 0x1f))) ||
               ((int)*(short *)(iVar3 + 0x1f) + param_6 * 2 < -(int)sVar1)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              sVar1 = *param_5;
              local_96 = (short)((param_3 - param_4) / (int)param_1[0x3a7]);
              local_98 = (short)((param_4 + param_2) / (int)param_1[0x3a7]);
              if (local_98 < 0) {
                local_98 = 0;
              }
              if (*param_1 + -1 < (int)local_98) {
                local_98 = *param_1 + -1;
              }
              if (local_96 < 0) {
                local_96 = 0;
              }
              if (param_1[2] + -1 < (int)local_96) {
                local_96 = param_1[2] + -1;
              }
              iVar3 = *(int *)(param_1 +
                              (uint)(byte)(&DAT_004f70a0)
                                          [(short)(local_96 *
                                                   (short)*(undefined4 *)(param_1 + 0x25b6) +
                                                  local_98)] * 2 + 0x187);
              if ((((*(ushort *)(iVar3 + 0x1b) & 0x10) == 0) ||
                  (-(int)*(short *)(iVar3 + 0x1f) == (int)sVar1 ||
                   -(int)sVar1 < (int)*(short *)(iVar3 + 0x1f))) ||
                 ((int)*(short *)(iVar3 + 0x1f) + param_6 * 2 < -(int)sVar1)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (bVar2) {
                sVar1 = *param_5;
                local_ae = (short)((param_4 + param_3) / (int)param_1[0x3a7]);
                local_b0 = (short)((param_4 + param_2) / (int)param_1[0x3a7]);
                if (local_b0 < 0) {
                  local_b0 = 0;
                }
                if (*param_1 + -1 < (int)local_b0) {
                  local_b0 = *param_1 + -1;
                }
                if (local_ae < 0) {
                  local_ae = 0;
                }
                if (param_1[2] + -1 < (int)local_ae) {
                  local_ae = param_1[2] + -1;
                }
                iVar3 = *(int *)(param_1 +
                                (uint)(byte)(&DAT_004f70a0)
                                            [(short)(local_ae *
                                                     (short)*(undefined4 *)(param_1 + 0x25b6) +
                                                    local_b0)] * 2 + 0x187);
                if ((((*(ushort *)(iVar3 + 0x1b) & 0x10) == 0) ||
                    (-(int)*(short *)(iVar3 + 0x1f) == (int)sVar1 ||
                     -(int)sVar1 < (int)*(short *)(iVar3 + 0x1f))) ||
                   ((int)*(short *)(iVar3 + 0x1f) + param_6 * 2 < -(int)sVar1)) {
                  bVar2 = false;
                }
                else {
                  bVar2 = true;
                }
                if (bVar2) {
                  sVar1 = *param_5;
                  local_c2 = (short)((param_3 - param_4) / (int)param_1[0x3a7]);
                  local_c4 = (short)((param_2 - param_4) / (int)param_1[0x3a7]);
                  if (local_c4 < 0) {
                    local_c4 = 0;
                  }
                  if (*param_1 + -1 < (int)local_c4) {
                    local_c4 = *param_1 + -1;
                  }
                  if (local_c2 < 0) {
                    local_c2 = 0;
                  }
                  if (param_1[2] + -1 < (int)local_c2) {
                    local_c2 = param_1[2] + -1;
                  }
                  iVar3 = *(int *)(param_1 +
                                  (uint)(byte)(&DAT_004f5f9c)
                                              [(short)(local_c2 *
                                                       (short)*(undefined4 *)(param_1 + 0x25b6) +
                                                      local_c4)] * 2 + 0x187);
                  if ((((*(ushort *)(iVar3 + 0x1b) & 0x10) == 0) ||
                      (-(int)*(short *)(iVar3 + 0x1f) == (int)sVar1 ||
                       -(int)sVar1 < (int)*(short *)(iVar3 + 0x1f))) ||
                     (iVar3 = *(short *)(iVar3 + 0x1f) + 20000,
                     -iVar3 != (int)sVar1 && iVar3 <= -(int)sVar1)) {
                    bVar2 = false;
                  }
                  else {
                    bVar2 = true;
                  }
                  if (bVar2) {
                    sVar1 = *param_5;
                    local_d6 = (short)((param_4 + param_3) / (int)param_1[0x3a7]);
                    local_d8 = (short)((param_2 - param_4) / (int)param_1[0x3a7]);
                    if (local_d8 < 0) {
                      local_d8 = 0;
                    }
                    if (*param_1 + -1 < (int)local_d8) {
                      local_d8 = *param_1 + -1;
                    }
                    if (local_d6 < 0) {
                      local_d6 = 0;
                    }
                    if (param_1[2] + -1 < (int)local_d6) {
                      local_d6 = param_1[2] + -1;
                    }
                    iVar3 = *(int *)(param_1 +
                                    (uint)(byte)(&DAT_004f5f9c)
                                                [(short)(local_d6 *
                                                         (short)*(undefined4 *)(param_1 + 0x25b6) +
                                                        local_d8)] * 2 + 0x187);
                    if ((((*(ushort *)(iVar3 + 0x1b) & 0x10) == 0) ||
                        (-(int)*(short *)(iVar3 + 0x1f) == (int)sVar1 ||
                         -(int)sVar1 < (int)*(short *)(iVar3 + 0x1f))) ||
                       (iVar3 = *(short *)(iVar3 + 0x1f) + 20000,
                       -iVar3 != (int)sVar1 && iVar3 <= -(int)sVar1)) {
                      bVar2 = false;
                    }
                    else {
                      bVar2 = true;
                    }
                    if (bVar2) {
                      sVar1 = *param_5;
                      local_ea = (short)((param_3 - param_4) / (int)param_1[0x3a7]);
                      local_ec = (short)((param_4 + param_2) / (int)param_1[0x3a7]);
                      if (local_ec < 0) {
                        local_ec = 0;
                      }
                      if (*param_1 + -1 < (int)local_ec) {
                        local_ec = *param_1 + -1;
                      }
                      if (local_ea < 0) {
                        local_ea = 0;
                      }
                      if (param_1[2] + -1 < (int)local_ea) {
                        local_ea = param_1[2] + -1;
                      }
                      iVar3 = *(int *)(param_1 +
                                      (uint)(byte)(&DAT_004f5f9c)
                                                  [(short)(local_ea *
                                                           (short)*(undefined4 *)(param_1 + 0x25b6)
                                                          + local_ec)] * 2 + 0x187);
                      if ((((*(ushort *)(iVar3 + 0x1b) & 0x10) == 0) ||
                          (-(int)*(short *)(iVar3 + 0x1f) == (int)sVar1 ||
                           -(int)sVar1 < (int)*(short *)(iVar3 + 0x1f))) ||
                         (iVar3 = *(short *)(iVar3 + 0x1f) + 20000,
                         -iVar3 != (int)sVar1 && iVar3 <= -(int)sVar1)) {
                        bVar2 = false;
                      }
                      else {
                        bVar2 = true;
                      }
                      if (bVar2) {
                        sVar1 = *param_5;
                        local_fe = (short)((param_3 + param_4) / (int)param_1[0x3a7]);
                        local_100 = (short)((param_2 + param_4) / (int)param_1[0x3a7]);
                        if (local_100 < 0) {
                          local_100 = 0;
                        }
                        if (*param_1 + -1 < (int)local_100) {
                          local_100 = *param_1 + -1;
                        }
                        if (local_fe < 0) {
                          local_fe = 0;
                        }
                        if (param_1[2] + -1 < (int)local_fe) {
                          local_fe = param_1[2] + -1;
                        }
                        iVar3 = *(int *)(param_1 +
                                        (uint)(byte)(&DAT_004f5f9c)
                                                    [(short)(local_fe *
                                                             (short)*(undefined4 *)
                                                                     (param_1 + 0x25b6) + local_100)
                                                    ] * 2 + 0x187);
                        if ((((*(ushort *)(iVar3 + 0x1b) & 0x10) == 0) ||
                            (-(int)*(short *)(iVar3 + 0x1f) == (int)sVar1 ||
                             -(int)sVar1 < (int)*(short *)(iVar3 + 0x1f))) ||
                           (iVar3 = *(short *)(iVar3 + 0x1f) + 20000,
                           -iVar3 != (int)sVar1 && iVar3 <= -(int)sVar1)) {
                          bVar2 = false;
                        }
                        else {
                          bVar2 = true;
                        }
                        if (bVar2) {
                          return 1;
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
  return 0;
}

