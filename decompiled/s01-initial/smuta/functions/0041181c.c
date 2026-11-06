/* Ghidra address: 0041181c; FUN_0041181c */

undefined4 FUN_0041181c(void)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  short *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  short in_stack_00000010;
  short *in_stack_00000014;
  int in_stack_00000018;
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
  
  sVar1 = *in_stack_00000014;
  local_12 = (short)((in_stack_0000000c - in_stack_00000010) / (int)in_stack_00000004[0x3a7]);
  local_14 = (short)((in_stack_00000008 - in_stack_00000010) / (int)in_stack_00000004[0x3a7]);
  if (local_14 < 0) {
    local_14 = 0;
  }
  if (*in_stack_00000004 + -1 < (int)local_14) {
    local_14 = *in_stack_00000004 + -1;
  }
  if (local_12 < 0) {
    local_12 = 0;
  }
  if (in_stack_00000004[2] + -1 < (int)local_12) {
    local_12 = in_stack_00000004[2] + -1;
  }
  iVar3 = *(int *)(in_stack_00000004 +
                  (uint)(byte)(&DAT_0048e518)
                              [(short)(local_12 * (short)*(undefined4 *)(in_stack_00000004 + 0x25b6)
                                      + local_14)] * 2 + 0x187);
  if ((((*(ushort *)(iVar3 + 0x1b) & 0x10) == 0) ||
      (-(int)*(short *)(iVar3 + 0x1f) == (int)sVar1 || -(int)sVar1 < (int)*(short *)(iVar3 + 0x1f)))
     || (iVar3 = *(short *)(iVar3 + 0x1f) + 20000, -iVar3 != (int)sVar1 && iVar3 <= -(int)sVar1)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    sVar1 = *in_stack_00000014;
    local_26 = (short)((in_stack_00000010 + in_stack_0000000c) / (int)in_stack_00000004[0x3a7]);
    local_28 = (short)((in_stack_00000008 - in_stack_00000010) / (int)in_stack_00000004[0x3a7]);
    if (local_28 < 0) {
      local_28 = 0;
    }
    if (*in_stack_00000004 + -1 < (int)local_28) {
      local_28 = *in_stack_00000004 + -1;
    }
    if (local_26 < 0) {
      local_26 = 0;
    }
    if (in_stack_00000004[2] + -1 < (int)local_26) {
      local_26 = in_stack_00000004[2] + -1;
    }
    iVar3 = *(int *)(in_stack_00000004 +
                    (uint)(byte)(&DAT_0048e518)
                                [(short)(local_26 *
                                         (short)*(undefined4 *)(in_stack_00000004 + 0x25b6) +
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
      sVar1 = *in_stack_00000014;
      local_3a = (short)((in_stack_0000000c - in_stack_00000010) / (int)in_stack_00000004[0x3a7]);
      local_3c = (short)((in_stack_00000010 + in_stack_00000008) / (int)in_stack_00000004[0x3a7]);
      if (local_3c < 0) {
        local_3c = 0;
      }
      if (*in_stack_00000004 + -1 < (int)local_3c) {
        local_3c = *in_stack_00000004 + -1;
      }
      if (local_3a < 0) {
        local_3a = 0;
      }
      if (in_stack_00000004[2] + -1 < (int)local_3a) {
        local_3a = in_stack_00000004[2] + -1;
      }
      iVar3 = *(int *)(in_stack_00000004 +
                      (uint)(byte)(&DAT_0048e518)
                                  [(short)(local_3a *
                                           (short)*(undefined4 *)(in_stack_00000004 + 0x25b6) +
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
        sVar1 = *in_stack_00000014;
        local_4e = (short)((in_stack_00000010 + in_stack_0000000c) / (int)in_stack_00000004[0x3a7]);
        local_50 = (short)((in_stack_00000010 + in_stack_00000008) / (int)in_stack_00000004[0x3a7]);
        if (local_50 < 0) {
          local_50 = 0;
        }
        if (*in_stack_00000004 + -1 < (int)local_50) {
          local_50 = *in_stack_00000004 + -1;
        }
        if (local_4e < 0) {
          local_4e = 0;
        }
        if (in_stack_00000004[2] + -1 < (int)local_4e) {
          local_4e = in_stack_00000004[2] + -1;
        }
        iVar3 = *(int *)(in_stack_00000004 +
                        (uint)(byte)(&DAT_0048e518)
                                    [(short)(local_4e *
                                             (short)*(undefined4 *)(in_stack_00000004 + 0x25b6) +
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
          sVar1 = *in_stack_00000014;
          local_66 = (short)((in_stack_0000000c - in_stack_00000010) / (int)in_stack_00000004[0x3a7]
                            );
          local_68 = (short)((in_stack_00000008 - in_stack_00000010) / (int)in_stack_00000004[0x3a7]
                            );
          if (local_68 < 0) {
            local_68 = 0;
          }
          if (*in_stack_00000004 + -1 < (int)local_68) {
            local_68 = *in_stack_00000004 + -1;
          }
          if (local_66 < 0) {
            local_66 = 0;
          }
          if (in_stack_00000004[2] + -1 < (int)local_66) {
            local_66 = in_stack_00000004[2] + -1;
          }
          iVar3 = *(int *)(in_stack_00000004 +
                          (uint)(byte)(&DAT_00490720)
                                      [(short)(local_66 *
                                               (short)*(undefined4 *)(in_stack_00000004 + 0x25b6) +
                                              local_68)] * 2 + 0x187);
          if ((((*(ushort *)(iVar3 + 0x1b) & 0x10) == 0) ||
              (-(int)*(short *)(iVar3 + 0x1f) == (int)sVar1 ||
               -(int)sVar1 < (int)*(short *)(iVar3 + 0x1f))) ||
             ((int)*(short *)(iVar3 + 0x1f) + in_stack_00000018 * 2 < -(int)sVar1)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            sVar1 = *in_stack_00000014;
            local_7e = (short)((in_stack_00000010 + in_stack_0000000c) /
                              (int)in_stack_00000004[0x3a7]);
            local_80 = (short)((in_stack_00000008 - in_stack_00000010) /
                              (int)in_stack_00000004[0x3a7]);
            if (local_80 < 0) {
              local_80 = 0;
            }
            if (*in_stack_00000004 + -1 < (int)local_80) {
              local_80 = *in_stack_00000004 + -1;
            }
            if (local_7e < 0) {
              local_7e = 0;
            }
            if (in_stack_00000004[2] + -1 < (int)local_7e) {
              local_7e = in_stack_00000004[2] + -1;
            }
            iVar3 = *(int *)(in_stack_00000004 +
                            (uint)(byte)(&DAT_00490720)
                                        [(short)(local_7e *
                                                 (short)*(undefined4 *)(in_stack_00000004 + 0x25b6)
                                                + local_80)] * 2 + 0x187);
            if ((((*(ushort *)(iVar3 + 0x1b) & 0x10) == 0) ||
                (-(int)*(short *)(iVar3 + 0x1f) == (int)sVar1 ||
                 -(int)sVar1 < (int)*(short *)(iVar3 + 0x1f))) ||
               ((int)*(short *)(iVar3 + 0x1f) + in_stack_00000018 * 2 < -(int)sVar1)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              sVar1 = *in_stack_00000014;
              local_96 = (short)((in_stack_0000000c - in_stack_00000010) /
                                (int)in_stack_00000004[0x3a7]);
              local_98 = (short)((in_stack_00000010 + in_stack_00000008) /
                                (int)in_stack_00000004[0x3a7]);
              if (local_98 < 0) {
                local_98 = 0;
              }
              if (*in_stack_00000004 + -1 < (int)local_98) {
                local_98 = *in_stack_00000004 + -1;
              }
              if (local_96 < 0) {
                local_96 = 0;
              }
              if (in_stack_00000004[2] + -1 < (int)local_96) {
                local_96 = in_stack_00000004[2] + -1;
              }
              iVar3 = *(int *)(in_stack_00000004 +
                              (uint)(byte)(&DAT_00490720)
                                          [(short)(local_96 *
                                                   (short)*(undefined4 *)
                                                           (in_stack_00000004 + 0x25b6) + local_98)]
                              * 2 + 0x187);
              if ((((*(ushort *)(iVar3 + 0x1b) & 0x10) == 0) ||
                  (-(int)*(short *)(iVar3 + 0x1f) == (int)sVar1 ||
                   -(int)sVar1 < (int)*(short *)(iVar3 + 0x1f))) ||
                 ((int)*(short *)(iVar3 + 0x1f) + in_stack_00000018 * 2 < -(int)sVar1)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (bVar2) {
                sVar1 = *in_stack_00000014;
                local_ae = (short)((in_stack_00000010 + in_stack_0000000c) /
                                  (int)in_stack_00000004[0x3a7]);
                local_b0 = (short)((in_stack_00000010 + in_stack_00000008) /
                                  (int)in_stack_00000004[0x3a7]);
                if (local_b0 < 0) {
                  local_b0 = 0;
                }
                if (*in_stack_00000004 + -1 < (int)local_b0) {
                  local_b0 = *in_stack_00000004 + -1;
                }
                if (local_ae < 0) {
                  local_ae = 0;
                }
                if (in_stack_00000004[2] + -1 < (int)local_ae) {
                  local_ae = in_stack_00000004[2] + -1;
                }
                iVar3 = *(int *)(in_stack_00000004 +
                                (uint)(byte)(&DAT_00490720)
                                            [(short)(local_ae *
                                                     (short)*(undefined4 *)
                                                             (in_stack_00000004 + 0x25b6) + local_b0
                                                    )] * 2 + 0x187);
                if ((((*(ushort *)(iVar3 + 0x1b) & 0x10) == 0) ||
                    (-(int)*(short *)(iVar3 + 0x1f) == (int)sVar1 ||
                     -(int)sVar1 < (int)*(short *)(iVar3 + 0x1f))) ||
                   ((int)*(short *)(iVar3 + 0x1f) + in_stack_00000018 * 2 < -(int)sVar1)) {
                  bVar2 = false;
                }
                else {
                  bVar2 = true;
                }
                if (bVar2) {
                  sVar1 = *in_stack_00000014;
                  local_c2 = (short)((in_stack_0000000c - in_stack_00000010) /
                                    (int)in_stack_00000004[0x3a7]);
                  local_c4 = (short)((in_stack_00000008 - in_stack_00000010) /
                                    (int)in_stack_00000004[0x3a7]);
                  if (local_c4 < 0) {
                    local_c4 = 0;
                  }
                  if (*in_stack_00000004 + -1 < (int)local_c4) {
                    local_c4 = *in_stack_00000004 + -1;
                  }
                  if (local_c2 < 0) {
                    local_c2 = 0;
                  }
                  if (in_stack_00000004[2] + -1 < (int)local_c2) {
                    local_c2 = in_stack_00000004[2] + -1;
                  }
                  iVar3 = *(int *)(in_stack_00000004 +
                                  (uint)(byte)(&DAT_0048f61c)
                                              [(short)(local_c2 *
                                                       (short)*(undefined4 *)
                                                               (in_stack_00000004 + 0x25b6) +
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
                    sVar1 = *in_stack_00000014;
                    local_d6 = (short)((in_stack_00000010 + in_stack_0000000c) /
                                      (int)in_stack_00000004[0x3a7]);
                    local_d8 = (short)((in_stack_00000008 - in_stack_00000010) /
                                      (int)in_stack_00000004[0x3a7]);
                    if (local_d8 < 0) {
                      local_d8 = 0;
                    }
                    if (*in_stack_00000004 + -1 < (int)local_d8) {
                      local_d8 = *in_stack_00000004 + -1;
                    }
                    if (local_d6 < 0) {
                      local_d6 = 0;
                    }
                    if (in_stack_00000004[2] + -1 < (int)local_d6) {
                      local_d6 = in_stack_00000004[2] + -1;
                    }
                    iVar3 = *(int *)(in_stack_00000004 +
                                    (uint)(byte)(&DAT_0048f61c)
                                                [(short)(local_d6 *
                                                         (short)*(undefined4 *)
                                                                 (in_stack_00000004 + 0x25b6) +
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
                      sVar1 = *in_stack_00000014;
                      local_ea = (short)((in_stack_0000000c - in_stack_00000010) /
                                        (int)in_stack_00000004[0x3a7]);
                      local_ec = (short)((in_stack_00000010 + in_stack_00000008) /
                                        (int)in_stack_00000004[0x3a7]);
                      if (local_ec < 0) {
                        local_ec = 0;
                      }
                      if (*in_stack_00000004 + -1 < (int)local_ec) {
                        local_ec = *in_stack_00000004 + -1;
                      }
                      if (local_ea < 0) {
                        local_ea = 0;
                      }
                      if (in_stack_00000004[2] + -1 < (int)local_ea) {
                        local_ea = in_stack_00000004[2] + -1;
                      }
                      iVar3 = *(int *)(in_stack_00000004 +
                                      (uint)(byte)(&DAT_0048f61c)
                                                  [(short)(local_ea *
                                                           (short)*(undefined4 *)
                                                                   (in_stack_00000004 + 0x25b6) +
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
                        sVar1 = *in_stack_00000014;
                        local_fe = (short)((in_stack_0000000c + in_stack_00000010) /
                                          (int)in_stack_00000004[0x3a7]);
                        local_100 = (short)((in_stack_00000008 + in_stack_00000010) /
                                           (int)in_stack_00000004[0x3a7]);
                        if (local_100 < 0) {
                          local_100 = 0;
                        }
                        if (*in_stack_00000004 + -1 < (int)local_100) {
                          local_100 = *in_stack_00000004 + -1;
                        }
                        if (local_fe < 0) {
                          local_fe = 0;
                        }
                        if (in_stack_00000004[2] + -1 < (int)local_fe) {
                          local_fe = in_stack_00000004[2] + -1;
                        }
                        iVar3 = *(int *)(in_stack_00000004 +
                                        (uint)(byte)(&DAT_0048f61c)
                                                    [(short)(local_fe *
                                                             (short)*(undefined4 *)
                                                                     (in_stack_00000004 + 0x25b6) +
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

