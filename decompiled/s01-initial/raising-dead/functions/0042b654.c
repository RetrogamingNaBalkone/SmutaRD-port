/* Ghidra address: 0042b654; FUN_0042b654 */

void __cdecl FUN_0042b654(int param_1,int param_2,int param_3,int *param_4,int param_5)

{
  ushort uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  ushort uVar5;
  uint *puVar6;
  bool bVar7;
  int *local_8;
  
  if (*(int *)(param_3 + 0x28) != param_2) {
    FUN_004362c4(s_dscPtr_>xdERRaddr____errPtr_0043a6f1,s_XX_CPP_0043a70d,0x6b7);
  }
  if (*(int *)(param_3 + 0x2c) != param_1) {
    FUN_004362c4(s_dscPtr_>xdHtabAdr____hdtPtr_0043a714,s_XX_CPP_0043a730,0x6b8);
  }
  if (*(char *)(param_3 + 0x45) != '\0') {
    FUN_004362c4(s_dscPtr_>xdArgCopy____0_0043a737,s_XX_CPP_0043a74e,0x6ba);
  }
  puVar6 = *(uint **)(param_1 + 4);
  *(uint **)(param_3 + 0x3c) = puVar6;
  if ((puVar6 != (uint *)0x0) && ((*(byte *)(param_1 + 8) & 0x80) == 0)) {
    bVar7 = (*(byte *)(param_1 + 8) & 1) == 0;
    local_8 = (int *)(param_3 + 0x46);
    *(undefined1 *)(param_3 + 0x45) = 1;
    *(int *)(param_3 + 0x40) = *param_4 + param_5;
    uVar1 = (ushort)puVar6[1];
    uVar2 = *puVar6;
    uVar5 = uVar1;
    if ((uVar1 & 0x30) != 0) {
      puVar6 = (uint *)puVar6[2];
      uVar5 = (ushort)puVar6[1];
    }
    if (((uVar1 & 0x10) == 0) || ((*(byte *)(param_3 + 0xc) & 1) == 0)) {
      if (((uVar5 & 1) == 0) || ((uVar1 & 0x30) == 0)) {
        if ((*(byte *)(param_3 + 0x18) & 1) == 0) {
          if ((uVar1 & 0x20) == 0) {
            if (uVar2 != *(uint *)(param_3 + 0x10)) {
              FUN_004362c4(s_dscPtr_>xdSize____size_0043a7fc,s_XX_CPP_0043a813,0x78d);
            }
            FUN_00429f54(*(undefined4 **)(param_3 + 0x40),local_8,uVar2);
          }
          else {
            FUN_00429f54(*(undefined4 **)(param_3 + 0x40),&local_8,uVar2);
            bVar7 = true;
          }
        }
        else {
          if (*(int *)(param_3 + 4) != *(int *)(param_3 + 0x14)) {
            FUN_004362c4(s_dscPtr_>xdTypeID____dscPtr_>xdBa_0043a7b8,s_XX_CPP_0043a7db,0x74b);
          }
          iVar4 = FUN_0042c963(*(int **)(param_3 + 0x14),(int *)puVar6);
          if (iVar4 == 0) {
            local_8 = (int *)FUN_0042d258((int)local_8,*(int *)(param_3 + 0x14),(int *)puVar6);
          }
          bVar7 = iVar4 == 0 || bVar7;
          if ((puVar6[3] & 1) == 0) {
            FUN_00429f54(*(undefined4 **)(param_3 + 0x40),local_8,uVar2);
          }
          else {
            if (*(int *)(param_1 + 0xc) == 0) {
              FUN_004362c4(s_hdtPtr_>HDcctrAddr_0043a7e2,s_XX_CPP_0043a7f5,0x765);
            }
            FUN_0042ae24(*(undefined4 *)(param_3 + 0x40),local_8,*(undefined **)(param_1 + 0xc),
                         *(uint *)(param_1 + 0x10));
            bVar7 = true;
          }
        }
      }
      else {
        if ((uVar1 & 0x20) == 0) {
          if ((uVar1 & 0x10) == 0) {
            FUN_004362c4(s_mask___TM_IS_PTR_0043a77e,s_XX_CPP_0043a78f,0x72a);
          }
          if ((*(byte *)(param_3 + 0x18) & 0x10) == 0) {
            FUN_004362c4(s_dscPtr_>xdMask___TM_IS_PTR_0043a796,s_XX_CPP_0043a7b1,0x72b);
          }
          local_8 = (int *)*local_8;
        }
        else {
          if ((*(byte *)(param_3 + 0x18) & 0x10) != 0) {
            FUN_004362c4(s__dscPtr_>xdMask___TM_IS_PTR_____0_0043a755,s_XX_CPP_0043a777,0x717);
          }
          bVar7 = true;
        }
        iVar4 = FUN_0042c963(*(int **)(param_3 + 0x14),(int *)puVar6);
        piVar3 = local_8;
        if (iVar4 == 0) {
          local_8 = (int *)FUN_0042d258((int)local_8,*(int *)(param_3 + 0x14),(int *)puVar6);
          if (local_8 != piVar3) {
            bVar7 = true;
          }
        }
        FUN_00429f54(*(undefined4 **)(param_3 + 0x40),&local_8,uVar2);
      }
    }
    else {
      FUN_00429fc4(*(undefined4 **)(param_3 + 0x40),0,uVar2);
      bVar7 = true;
    }
    if (!bVar7) {
      if ((puVar6[3] & 2) != 0) {
        FUN_0042b47f(local_8,(int)puVar6,(undefined *)puVar6[10],(uint)(ushort)puVar6[0xb]);
      }
      *(undefined1 *)(param_3 + 0x44) = 0;
    }
  }
  return;
}

