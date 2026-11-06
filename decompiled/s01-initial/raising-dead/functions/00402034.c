/* Ghidra address: 00402034; FUN_00402034 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __stdcall FUN_00402034(void)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  short *psVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint local_4c;
  short local_48 [6];
  short local_3c [23];
  short local_e;
  
  iVar3 = 0;
  if ((DAT_004385ac == 0) || (iVar3 = FUN_00404c88(), iVar3 != 0)) {
    if (DAT_004381be == 0) {
      if ((DAT_004381c0 < 1) || (iVar3 != 1)) {
        local_4c = thunk_FUN_00548000();
        if ((DAT_00438228 == 1) && (local_4c != 0)) {
          uVar4 = 10;
        }
        else {
          if ((local_4c & 0x100) != 0) {
            pcVar5 = FUN_00404d88(0x1a);
            FUN_00404d30(pcVar5);
          }
          FUN_00429e84(local_48);
          FUN_00429e84(local_3c);
          if (DAT_0043dc90 == 0) {
            DAT_0043dc94 = FUN_00429edc();
            DAT_0043dc90 = DAT_0043dc94 - DAT_0043dc8c;
            while (DAT_0043dc90 == 0) {
              DAT_0043dc94 = FUN_00429edc();
              DAT_0043dc90 = DAT_0043dc94 - DAT_0043dc8c;
            }
            DAT_0043dc8c = DAT_0043dc94;
          }
          DAT_0043dc90 = DAT_0043dc90 - 1;
          if (2 < DAT_0043dc90) {
            DAT_0043dc90 = 2;
          }
          FUN_00429e9c(local_48);
          FUN_00429e9c(local_3c);
          FUN_0040e3dc();
          DAT_0043dc6c = FUN_00429ebc(local_3c);
          FUN_00429ef0(local_3c);
          puVar7 = (undefined4 *)((int)DAT_0043dccc + 0x31);
          puVar8 = &DAT_0043dc98;
          for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
          FUN_00429e9c(local_3c);
          FUN_004209b8(DAT_00438218,&DAT_0043dc98,(undefined4 *)&DAT_004381c2);
          FUN_00429ef0(local_3c);
          DAT_0043dc60 = FUN_00429ebc(local_3c);
          if (DAT_0043dc90 == 0) {
            FUN_0040bbb4(0);
          }
          if ((DAT_0043dc90 == 0) || (DAT_0043822c == 5)) {
            FUN_0040b700();
          }
          if (DAT_0043822c == 5) {
            FUN_00422540((int)DAT_00438218,0);
          }
          else {
            if (DAT_0043dc90 == 0) {
              FUN_00429e9c(local_3c);
            }
            cVar2 = FUN_00412488((int)DAT_0043dccc);
            if (cVar2 == '\0') {
              if (DAT_004381f8 == 1) {
                DAT_004381f8 = 0;
                FUN_00402ff4(&DAT_0043d608);
              }
            }
            else {
              FUN_004013a8();
            }
            FUN_00422540((int)DAT_00438218,(short)DAT_0043dc90);
            if (DAT_0043dc90 == 0) {
              FUN_00429ef0(local_3c);
              DAT_0043dc64 = FUN_00429ebc(local_3c);
            }
          }
          if ((((*(int *)((int)DAT_0043dccc + *(short *)((int)DAT_0043dccc + 0x119) * 4 + 0xc9) != 0
                ) && ((local_4c & 0x2000000) == 0)) && (DAT_0043dc90 == 0)) && (DAT_00439394 != 0))
          {
            (**(code **)(*(int *)(*(int *)((int)DAT_0043dccc +
                                          *(short *)((int)DAT_0043dccc + 0x119) * 4 + 0xc9) + 0x14)
                        + 0x1c))();
          }
          if ((local_4c & 0x2000000) == 0) {
            if (DAT_00438234 != 0) {
              FUN_004224f8((int)DAT_00438218);
            }
            if ((DAT_0043dc90 == 0) && (DAT_00439394 != 0)) {
              FUN_004046b0(DAT_004385a0);
            }
            DAT_00438234 = 0;
          }
          else {
            DAT_00438218[0x25b9] = 1;
            local_4c = local_4c & 0xffffbfff;
            DAT_00438234 = 1;
          }
          if ((DAT_0043dc90 == 0) || (DAT_0043822c == 5)) {
            FUN_0040b7b4();
          }
          if ((DAT_0043dc90 == 0) && (*(int *)(DAT_004385a0 + 0x9d) != 0)) {
            *(undefined4 *)(DAT_004385a0 + 0x9d) = 0;
            FUN_0040bbf4(DAT_004c329a,2);
          }
          if (DAT_0043822c == 5) {
            DAT_0043822c = 6;
            if (DAT_00438228 == 0) {
              if (DAT_0043dc7c == 1) {
                pcVar5 = FUN_00404d88(0x1b);
                FUN_00404d30(pcVar5);
              }
              else if (DAT_0043dc7c == 2) {
                pcVar5 = FUN_00404d88(0x1c);
                FUN_00404d30(pcVar5);
              }
              else if (DAT_0043dc7c == 3) {
                pcVar5 = FUN_00404d88(0x1d);
                FUN_00404d30(pcVar5);
              }
              else if (DAT_0043dc7c == 4) {
                pcVar5 = FUN_00404d88(0x1e);
                FUN_00404d30(pcVar5);
              }
              else if (DAT_0043dc7c == 5) {
                pcVar5 = FUN_00404d88(0x1f);
                FUN_00404d30(pcVar5);
              }
              else if (DAT_0043dc7c == 6) {
                pcVar5 = FUN_00404d88(0x20);
                FUN_00404d30(pcVar5);
              }
              else if (DAT_0043dc7c == 7) {
                pcVar5 = FUN_00404d88(0x21);
                FUN_00404d30(pcVar5);
              }
              else if (DAT_0043dc7c == 8) {
                pcVar5 = FUN_00404d88(0x22);
                FUN_00404d30(pcVar5);
              }
              else if (DAT_0043dc7c == 9) {
                pcVar5 = FUN_00404d88(0x23);
                FUN_00404d30(pcVar5);
              }
              else if (DAT_0043dc7c == 10) {
                pcVar5 = FUN_00404d88(0x24);
                FUN_00404d30(pcVar5);
              }
              DAT_0043dc7c = DAT_0043dc7c + 1;
            }
          }
          else if (DAT_0043822c != 6) {
            DAT_0043a18c = 0;
            DAT_0043dc78 = 0;
            DAT_0043822c = DAT_0043822c + 1;
          }
          DAT_004398f8 = 0;
          if ((DAT_00438228 == 1) && ((local_4c & 0x4000) == 0)) {
            local_4c = FUN_00426e80(DAT_00438224);
          }
          if (local_4c == 0x80000000) {
            uVar4 = 2;
          }
          else if (((DAT_00438228 == 2) && ((local_4c & 0x4000) == 0)) &&
                  (iVar3 = FUN_00426e58(DAT_00438224,local_4c), iVar3 != 0)) {
            uVar4 = 10;
          }
          else {
            FUN_00429ef0(local_48);
            iVar3 = FUN_00429ebc(local_48);
            _DAT_0043dc5c = iVar3 + 1;
            DAT_0043820c = ((uint)((int)(1000 / (ulonglong)_DAT_0043dc5c) + DAT_0043820c) >> 1) + 1;
            if (DAT_0043820c < 4) {
              DAT_0043820c = 4;
            }
            DAT_0043da08 = FUN_00429ebc((short *)&DAT_0043db50);
            uVar4 = FUN_00411f60((int)DAT_0043dccc);
            DAT_0043dc88 = (int)(short)uVar4;
            if (0 < DAT_0043dc88) {
              DAT_0043822c = 1;
              FUN_00404940(DAT_004385a0,&DAT_004382ea);
              if (((DAT_0043dc88 == 2) && (DAT_00438214 < DAT_0043dc7c)) || (DAT_0043dc88 == 3)) {
                FUN_00429ef0((short *)&DAT_0043db50);
                if ((DAT_004381b8 == 1) && (DAT_0043dc7c <= DAT_00438214)) {
                  FUN_004016b4();
                }
                else {
                  FUN_00401668();
                }
                DAT_004381be = 1;
                return 1;
              }
              if (DAT_0043dc88 == 2) {
                return 0;
              }
            }
            if (DAT_0043da14 != 0) {
              DAT_0043a18c = DAT_0043a18c + (short)DAT_0043da14;
              if (((0 < DAT_0043a18c) && (0 < DAT_0043da14)) ||
                 ((DAT_0043a18c < 0 && (DAT_0043da14 < 0)))) {
                DAT_0043da14 = 0;
                DAT_0043a18c = 0;
                DAT_0043dc78 = 0;
              }
            }
            if ((DAT_004398ec == 1) && (DAT_004381b4 == 0)) {
              pcVar5 = FUN_00404d88(0x25);
              FUN_00404940(DAT_004385a0,pcVar5);
              DAT_004381b4 = 1;
            }
            else if (((local_4c & 0x2000) == 0) && (DAT_004381b4 == 1)) {
              pcVar5 = FUN_00404d88(0x26);
              FUN_00404940(DAT_004385a0,pcVar5);
              DAT_004381b4 = 0;
            }
            if (local_4c == 0) {
              uVar4 = 1;
            }
            else if ((local_4c & 0x400000) == 0) {
              psVar6 = FUN_0040f894(&local_e,DAT_0043dc78 >> 1);
              piVar1 = DAT_0043dccc;
              *(short *)((int)DAT_0043dccc + 0x43) = *psVar6;
              (**(code **)(piVar1[5] + 0x20))();
              if ((local_4c & 0x10000000) != 0) {
                FUN_004016c4((short)DAT_0043da18);
              }
              if ((local_4c & 0x8000000) != 0) {
                FUN_00401734((short)DAT_0043da18);
              }
              if ((local_4c & 0x20000000) != 0) {
                if (DAT_0043a18c < 1) {
                  if (DAT_0043a18c < 0) {
                    DAT_0043da14 = DAT_0043da18;
                  }
                }
                else {
                  DAT_0043da14 = -DAT_0043da18;
                }
              }
              if ((local_4c & 0x20000) != 0) {
                FUN_00401358(1);
              }
              if ((local_4c & 0x10000) != 0) {
                FUN_00401358(-1);
              }
              if ((local_4c & 0x4000) != 0) {
                DAT_004381c0 = 1;
                pcVar5 = FUN_00404d88(0x27);
                FUN_00404d30(pcVar5);
              }
              uVar4 = 1;
            }
            else {
              FUN_00412a7c(DAT_0043dccc,(ushort)local_4c & 0xf);
              uVar4 = 1;
            }
          }
        }
      }
      else {
        uVar4 = 10;
      }
    }
    else {
      uVar4 = 0xb;
    }
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}

