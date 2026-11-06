/* Ghidra address: 00406970; FUN_00406970 */

int __cdecl FUN_00406970(char *param_1)

{
  uint *puVar1;
  char *pcVar2;
  DWORD DVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 *in_FS_OFFSET;
  uint uVar7;
  undefined *puVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  byte *pbVar14;
  uint uVar15;
  byte *pbVar16;
  char local_54c [260];
  byte local_448 [3];
  uint local_445 [128];
  byte local_245 [256];
  byte local_145 [257];
  char *local_44;
  short *local_40;
  ushort local_3c;
  ushort local_3a;
  short *local_38;
  undefined **local_34;
  short local_30;
  uint local_2e;
  undefined4 local_28;
  undefined2 local_18;
  
  FUN_0042c8f0(0x438e2c);
  pbVar16 = local_145;
  pbVar14 = local_245;
  puVar12 = local_445;
  pbVar10 = local_448;
  puVar1 = (uint *)FUN_00432bf4(param_1);
  thunk_FUN_0042eb4c(puVar1,pbVar10,(undefined1 *)puVar12,pbVar14,pbVar16);
  pcVar2 = FUN_00432bf4(&DAT_00438e5f);
  FUN_0042d6f0(local_54c,(char *)local_448,local_445,(char *)local_245,pcVar2);
  FUN_0040cf10((int *)&local_34);
  DVar3 = FUN_0042fd2c(local_2e);
  local_38 = FUN_004235d4(DVar3);
  local_18 = 8;
  FUN_0040cfe4((int)&local_34,(char *)local_38,DVar3);
  thunk_FUN_004301bc(local_2e);
  local_30 = 0;
  if (local_38[2] == -0x50ee) {
    local_3a = local_38[4];
    local_3c = local_38[5];
    piVar4 = (int *)(local_38 + 0x40);
    while ((piVar6 = piVar4, (short)piVar6[1] != -0xe06 || (*(short *)((int)piVar6 + 6) != 0))) {
      if ((short)piVar6[1] == -0xe06) {
        piVar4 = piVar6 + 4;
        for (iVar5 = 0; iVar5 < (int)(uint)*(ushort *)((int)piVar6 + 6); iVar5 = iVar5 + 1) {
          if ((short)piVar4[1] == 0x10) {
            local_40 = (short *)((int)piVar4 + 6);
            piVar4 = (int *)((uint)local_3a * (uint)local_3c + (int)local_40);
          }
          else {
            piVar4 = (int *)((int)piVar4 + *piVar4);
          }
        }
      }
      else {
        piVar4 = (int *)((int)piVar6 + *piVar6);
      }
    }
  }
  else if (*local_38 == -0x6ee7) {
    local_3a = local_38[1];
    local_3c = local_38[2];
    local_40 = local_38 + 400;
  }
  else {
    uVar15 = 0;
    uVar13 = 0;
    uVar11 = 0;
    uVar9 = 0;
    puVar8 = (undefined *)0x0;
    uVar7 = 0;
    local_44 = FUN_00404d88(0x4c);
    FUN_0042b3bd((uint *)&DAT_00402f2c,&local_44,uVar7,puVar8,uVar9,uVar11,uVar13,uVar15);
  }
  local_18 = 0;
  iVar5 = FUN_004065e0(local_3a,local_3c,0);
  *(uint *)(iVar5 + 10) = (uint)local_3a * (uint)local_3c;
  FUN_00429f78(*(undefined4 **)(iVar5 + 0xe),(undefined4 *)local_40,(uint)local_3a * (uint)local_3c)
  ;
  FUN_0042361c(local_38);
  local_34 = &PTR_FUN_004382f8;
  if (local_30 != 0) {
    (*(code *)PTR_FUN_00438300)();
  }
  *in_FS_OFFSET = local_28;
  return iVar5;
}

