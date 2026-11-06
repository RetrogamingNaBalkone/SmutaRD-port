/* Ghidra address: 0042eb4c; FUN_0042eb4c */

uint __cdecl
FUN_0042eb4c(uint *param_1,byte *param_2,undefined1 *param_3,byte *param_4,byte *param_5)

{
  char *pcVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar4;
  uint *extraout_EDX;
  uint *extraout_EDX_00;
  uint *puVar5;
  uint *extraout_EDX_01;
  uint *extraout_EDX_02;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  undefined1 local_10b [263];
  
  uVar9 = 0;
  if (param_2 != (byte *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (byte *)0x0) {
    *param_4 = 0;
  }
  if (param_5 != (byte *)0x0) {
    *param_5 = 0;
  }
  pcVar1 = FUN_0042a144(param_1);
  if (0x104 < (int)pcVar1) {
    pcVar1 = (char *)0x104;
  }
  FUN_00435014(local_10b,(byte *)param_1,(uint)pcVar1);
  puVar6 = (uint *)(local_10b + (int)pcVar1);
  *(byte *)puVar6 = 0;
  iVar8 = 0;
LAB_0042ebc1:
  while (puVar7 = puVar6, iVar2 = FUN_00434fe4(local_10b,(int)puVar7 + (-1 - (int)local_10b)),
        iVar2 == 2) {
    puVar6 = (uint *)((int)puVar7 + -2);
  }
  puVar6 = (uint *)((int)puVar7 + -1);
  iVar2 = (int)*(char *)puVar6;
  puVar5 = extraout_EDX;
  if (iVar2 < 0x30) {
    if (iVar2 != 0x2f) {
      pbVar3 = (byte *)(iVar2 + -1);
      if (iVar2 == 0) goto LAB_0042ec82;
      if (iVar2 == 0x2a) goto LAB_0042ecec;
      if (pbVar3 == (byte *)0x2d) {
        uVar4 = extraout_ECX;
        if ((iVar8 == 0) && ((char)*puVar7 == '\0')) {
          iVar8 = FUN_0042eae0(local_10b,(int)puVar6);
          uVar4 = extraout_ECX_00;
          puVar5 = extraout_EDX_00;
        }
        if ((iVar8 == 0) && ((uVar9 & 2) == 0)) {
          uVar9 = uVar9 | 2;
          FUN_0042ea88(param_5,puVar5,uVar4,param_5,puVar6,(char *)0xff);
          *(undefined1 *)puVar6 = 0;
        }
      }
      goto LAB_0042ebc1;
    }
  }
  else if (iVar2 == 0x3a) {
    puVar5 = (uint *)(local_10b + 1);
    pbVar3 = (byte *)0x0;
    if (puVar6 != puVar5) goto LAB_0042ebc1;
LAB_0042ec82:
    if (iVar8 != 0) {
      if ((char)*puVar7 != '\0') {
        uVar9 = uVar9 | 8;
      }
      FUN_0042ea88(pbVar3,puVar5,param_3,param_3,puVar7,(char *)0xff);
      *(undefined1 *)puVar7 = 0;
      puVar5 = extraout_EDX_01;
LAB_0042ecfc:
      if (*(char *)((int)puVar7 + -1) == ':') {
        if (local_10b[0] != 0) {
          uVar9 = uVar9 | 0x10;
        }
        FUN_0042ea88(param_2,puVar5,local_10b,param_2,(uint *)local_10b,(char *)0x2);
      }
      return uVar9;
    }
  }
  else {
    if (iVar2 == 0x3f) {
LAB_0042ecec:
      if (iVar8 == 0) {
        uVar9 = uVar9 | 1;
      }
      goto LAB_0042ebc1;
    }
    if (iVar2 != 0x5c) goto LAB_0042ebc1;
  }
  if (iVar8 == 0) {
    iVar8 = 1;
    if ((char)*puVar7 != '\0') {
      uVar9 = uVar9 | 4;
    }
    FUN_0042ea88(param_4,puVar5,extraout_ECX,param_4,puVar7,(char *)0xff);
    *(undefined1 *)puVar7 = 0;
    puVar6 = (uint *)((int)puVar7 + -1);
    puVar5 = extraout_EDX_02;
    if ((*(char *)puVar6 == '\0') ||
       ((*(char *)puVar6 == ':' && (puVar5 = (uint *)(local_10b + 1), puVar6 == puVar5))))
    goto LAB_0042ecfc;
  }
  goto LAB_0042ebc1;
}

