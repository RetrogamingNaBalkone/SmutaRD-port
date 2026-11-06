/* Targeted Ghidra research export; addresses use image base 0x00400000.
 * Not compilable or gameplay-verified source. Opaque types/names remain provisional.
 * x87 helper 0042fc2c: ST0 input, EDX:EAX signed 64-bit output.
 * IMPORTANT: helper sets x87 RC=11 (truncate toward zero), restores CW, pops ST0.
 * Ghidra ROUND(value) below does NOT express that control-word change.
 */

undefined4 __cdecl FUN_0041181c(short *arg1,int arg2,int arg3,short arg4,short *arg5,int arg6)

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
  
  sVar1 = *arg5;
  local_12 = (short)((arg3 - arg4) / (int)arg1[0x3a7]);
  local_14 = (short)((arg2 - arg4) / (int)arg1[0x3a7]);
  if (local_14 < 0) {
    local_14 = 0;
  }
  if (*arg1 + -1 < (int)local_14) {
    local_14 = *arg1 + -1;
  }
  if (local_12 < 0) {
    local_12 = 0;
  }
  if (arg1[2] + -1 < (int)local_12) {
    local_12 = arg1[2] + -1;
  }
  iVar3 = *(int *)(arg1 + (uint)(byte)(&DAT_0048e518)
                                      [(short)(local_12 * (short)*(undefined4 *)(arg1 + 0x25b6) +
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
    sVar1 = *arg5;
    local_26 = (short)((arg4 + arg3) / (int)arg1[0x3a7]);
    local_28 = (short)((arg2 - arg4) / (int)arg1[0x3a7]);
    if (local_28 < 0) {
      local_28 = 0;
    }
    if (*arg1 + -1 < (int)local_28) {
      local_28 = *arg1 + -1;
    }
    if (local_26 < 0) {
      local_26 = 0;
    }
    if (arg1[2] + -1 < (int)local_26) {
      local_26 = arg1[2] + -1;
    }
    iVar3 = *(int *)(arg1 + (uint)(byte)(&DAT_0048e518)
                                        [(short)(local_26 * (short)*(undefined4 *)(arg1 + 0x25b6) +
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
      sVar1 = *arg5;
      local_3a = (short)((arg3 - arg4) / (int)arg1[0x3a7]);
      local_3c = (short)((arg4 + arg2) / (int)arg1[0x3a7]);
      if (local_3c < 0) {
        local_3c = 0;
      }
      if (*arg1 + -1 < (int)local_3c) {
        local_3c = *arg1 + -1;
      }
      if (local_3a < 0) {
        local_3a = 0;
      }
      if (arg1[2] + -1 < (int)local_3a) {
        local_3a = arg1[2] + -1;
      }
      iVar3 = *(int *)(arg1 + (uint)(byte)(&DAT_0048e518)
                                          [(short)(local_3a * (short)*(undefined4 *)(arg1 + 0x25b6)
                                                  + local_3c)] * 2 + 0x187);
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
        sVar1 = *arg5;
        local_4e = (short)((arg4 + arg3) / (int)arg1[0x3a7]);
        local_50 = (short)((arg4 + arg2) / (int)arg1[0x3a7]);
        if (local_50 < 0) {
          local_50 = 0;
        }
        if (*arg1 + -1 < (int)local_50) {
          local_50 = *arg1 + -1;
        }
        if (local_4e < 0) {
          local_4e = 0;
        }
        if (arg1[2] + -1 < (int)local_4e) {
          local_4e = arg1[2] + -1;
        }
        iVar3 = *(int *)(arg1 + (uint)(byte)(&DAT_0048e518)
                                            [(short)(local_4e *
                                                     (short)*(undefined4 *)(arg1 + 0x25b6) +
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
          sVar1 = *arg5;
          local_66 = (short)((arg3 - arg4) / (int)arg1[0x3a7]);
          local_68 = (short)((arg2 - arg4) / (int)arg1[0x3a7]);
          if (local_68 < 0) {
            local_68 = 0;
          }
          if (*arg1 + -1 < (int)local_68) {
            local_68 = *arg1 + -1;
          }
          if (local_66 < 0) {
            local_66 = 0;
          }
          if (arg1[2] + -1 < (int)local_66) {
            local_66 = arg1[2] + -1;
          }
          iVar3 = *(int *)(arg1 + (uint)(byte)(&DAT_00490720)
                                              [(short)(local_66 *
                                                       (short)*(undefined4 *)(arg1 + 0x25b6) +
                                                      local_68)] * 2 + 0x187);
          if ((((*(ushort *)(iVar3 + 0x1b) & 0x10) == 0) ||
              (-(int)*(short *)(iVar3 + 0x1f) == (int)sVar1 ||
               -(int)sVar1 < (int)*(short *)(iVar3 + 0x1f))) ||
             ((int)*(short *)(iVar3 + 0x1f) + arg6 * 2 < -(int)sVar1)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            sVar1 = *arg5;
            local_7e = (short)((arg4 + arg3) / (int)arg1[0x3a7]);
            local_80 = (short)((arg2 - arg4) / (int)arg1[0x3a7]);
            if (local_80 < 0) {
              local_80 = 0;
            }
            if (*arg1 + -1 < (int)local_80) {
              local_80 = *arg1 + -1;
            }
            if (local_7e < 0) {
              local_7e = 0;
            }
            if (arg1[2] + -1 < (int)local_7e) {
              local_7e = arg1[2] + -1;
            }
            iVar3 = *(int *)(arg1 + (uint)(byte)(&DAT_00490720)
                                                [(short)(local_7e *
                                                         (short)*(undefined4 *)(arg1 + 0x25b6) +
                                                        local_80)] * 2 + 0x187);
            if ((((*(ushort *)(iVar3 + 0x1b) & 0x10) == 0) ||
                (-(int)*(short *)(iVar3 + 0x1f) == (int)sVar1 ||
                 -(int)sVar1 < (int)*(short *)(iVar3 + 0x1f))) ||
               ((int)*(short *)(iVar3 + 0x1f) + arg6 * 2 < -(int)sVar1)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              sVar1 = *arg5;
              local_96 = (short)((arg3 - arg4) / (int)arg1[0x3a7]);
              local_98 = (short)((arg4 + arg2) / (int)arg1[0x3a7]);
              if (local_98 < 0) {
                local_98 = 0;
              }
              if (*arg1 + -1 < (int)local_98) {
                local_98 = *arg1 + -1;
              }
              if (local_96 < 0) {
                local_96 = 0;
              }
              if (arg1[2] + -1 < (int)local_96) {
                local_96 = arg1[2] + -1;
              }
              iVar3 = *(int *)(arg1 + (uint)(byte)(&DAT_00490720)
                                                  [(short)(local_96 *
                                                           (short)*(undefined4 *)(arg1 + 0x25b6) +
                                                          local_98)] * 2 + 0x187);
              if ((((*(ushort *)(iVar3 + 0x1b) & 0x10) == 0) ||
                  (-(int)*(short *)(iVar3 + 0x1f) == (int)sVar1 ||
                   -(int)sVar1 < (int)*(short *)(iVar3 + 0x1f))) ||
                 ((int)*(short *)(iVar3 + 0x1f) + arg6 * 2 < -(int)sVar1)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (bVar2) {
                sVar1 = *arg5;
                local_ae = (short)((arg4 + arg3) / (int)arg1[0x3a7]);
                local_b0 = (short)((arg4 + arg2) / (int)arg1[0x3a7]);
                if (local_b0 < 0) {
                  local_b0 = 0;
                }
                if (*arg1 + -1 < (int)local_b0) {
                  local_b0 = *arg1 + -1;
                }
                if (local_ae < 0) {
                  local_ae = 0;
                }
                if (arg1[2] + -1 < (int)local_ae) {
                  local_ae = arg1[2] + -1;
                }
                iVar3 = *(int *)(arg1 + (uint)(byte)(&DAT_00490720)
                                                    [(short)(local_ae *
                                                             (short)*(undefined4 *)(arg1 + 0x25b6) +
                                                            local_b0)] * 2 + 0x187);
                if ((((*(ushort *)(iVar3 + 0x1b) & 0x10) == 0) ||
                    (-(int)*(short *)(iVar3 + 0x1f) == (int)sVar1 ||
                     -(int)sVar1 < (int)*(short *)(iVar3 + 0x1f))) ||
                   ((int)*(short *)(iVar3 + 0x1f) + arg6 * 2 < -(int)sVar1)) {
                  bVar2 = false;
                }
                else {
                  bVar2 = true;
                }
                if (bVar2) {
                  sVar1 = *arg5;
                  local_c2 = (short)((arg3 - arg4) / (int)arg1[0x3a7]);
                  local_c4 = (short)((arg2 - arg4) / (int)arg1[0x3a7]);
                  if (local_c4 < 0) {
                    local_c4 = 0;
                  }
                  if (*arg1 + -1 < (int)local_c4) {
                    local_c4 = *arg1 + -1;
                  }
                  if (local_c2 < 0) {
                    local_c2 = 0;
                  }
                  if (arg1[2] + -1 < (int)local_c2) {
                    local_c2 = arg1[2] + -1;
                  }
                  iVar3 = *(int *)(arg1 + (uint)(byte)(&DAT_0048f61c)
                                                      [(short)(local_c2 *
                                                               (short)*(undefined4 *)(arg1 + 0x25b6)
                                                              + local_c4)] * 2 + 0x187);
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
                    sVar1 = *arg5;
                    local_d6 = (short)((arg4 + arg3) / (int)arg1[0x3a7]);
                    local_d8 = (short)((arg2 - arg4) / (int)arg1[0x3a7]);
                    if (local_d8 < 0) {
                      local_d8 = 0;
                    }
                    if (*arg1 + -1 < (int)local_d8) {
                      local_d8 = *arg1 + -1;
                    }
                    if (local_d6 < 0) {
                      local_d6 = 0;
                    }
                    if (arg1[2] + -1 < (int)local_d6) {
                      local_d6 = arg1[2] + -1;
                    }
                    iVar3 = *(int *)(arg1 + (uint)(byte)(&DAT_0048f61c)
                                                        [(short)(local_d6 *
                                                                 (short)*(undefined4 *)
                                                                         (arg1 + 0x25b6) + local_d8)
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
                      sVar1 = *arg5;
                      local_ea = (short)((arg3 - arg4) / (int)arg1[0x3a7]);
                      local_ec = (short)((arg4 + arg2) / (int)arg1[0x3a7]);
                      if (local_ec < 0) {
                        local_ec = 0;
                      }
                      if (*arg1 + -1 < (int)local_ec) {
                        local_ec = *arg1 + -1;
                      }
                      if (local_ea < 0) {
                        local_ea = 0;
                      }
                      if (arg1[2] + -1 < (int)local_ea) {
                        local_ea = arg1[2] + -1;
                      }
                      iVar3 = *(int *)(arg1 + (uint)(byte)(&DAT_0048f61c)
                                                          [(short)(local_ea *
                                                                   (short)*(undefined4 *)
                                                                           (arg1 + 0x25b6) +
                                                                  local_ec)] * 2 + 0x187);
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
                        sVar1 = *arg5;
                        local_fe = (short)((arg3 + arg4) / (int)arg1[0x3a7]);
                        local_100 = (short)((arg2 + arg4) / (int)arg1[0x3a7]);
                        if (local_100 < 0) {
                          local_100 = 0;
                        }
                        if (*arg1 + -1 < (int)local_100) {
                          local_100 = *arg1 + -1;
                        }
                        if (local_fe < 0) {
                          local_fe = 0;
                        }
                        if (arg1[2] + -1 < (int)local_fe) {
                          local_fe = arg1[2] + -1;
                        }
                        iVar3 = *(int *)(arg1 + (uint)(byte)(&DAT_0048f61c)
                                                            [(short)(local_fe *
                                                                     (short)*(undefined4 *)
                                                                             (arg1 + 0x25b6) +
                                                                    local_100)] * 2 + 0x187);
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

