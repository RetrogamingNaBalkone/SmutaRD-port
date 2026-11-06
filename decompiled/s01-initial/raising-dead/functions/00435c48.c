/* Ghidra address: 00435c48; FUN_00435c48 */

/* WARNING: Restarted to delay deadcode elimination for space: ram */

uint * __cdecl FUN_00435c48(uint param_1)

{
  undefined *puVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  if (param_1 == 0) {
    puVar2 = (uint *)0x0;
  }
  else {
    if (param_1 < 0xc) {
      uVar7 = 0xc;
    }
    else {
      uVar7 = param_1 + 3 & 0xfffffffc;
    }
    if (DAT_0043c86c == 0) {
      FUN_00435764(1);
    }
    puVar1 = PTR_DAT_0043c87c;
    puVar5 = (uint *)PTR_DAT_0043c87c;
    if (uVar7 < DAT_0043c858) {
      iVar3 = uVar7 * 2 + DAT_0043c86c;
      puVar2 = *(uint **)(iVar3 + -8);
      if ((uint *)(iVar3 + -0xc) != puVar2) {
        *puVar2 = *puVar2 & 0xfffffffe;
        puVar5 = (uint *)((int)puVar2 + (*puVar2 & 0xfffffffc) + 4);
        *puVar5 = *puVar5 & 0xfffffffd;
        uVar7 = puVar2[1];
        *(uint *)(uVar7 + 8) = puVar2[2];
        *(uint *)(puVar2[2] + 4) = uVar7;
        return puVar2 + 1;
      }
      if ((undefined4 *)PTR_DAT_0043c87c == &DAT_0043c870) {
        puVar5 = (uint *)PTR_DAT_0043c874;
      }
      if ((undefined4 *)PTR_DAT_0043c874 == &DAT_0043c870) {
        for (iVar3 = uVar7 * 2 + DAT_0043c86c + -4;
            (((iVar4 = iVar3, iVar3 == *(int *)(iVar3 + 4) &&
              (iVar4 = iVar3 + 8, iVar4 == *(int *)(iVar3 + 0xc))) &&
             ((iVar4 = iVar3 + 0x10, iVar4 == *(int *)(iVar3 + 0x14) &&
              ((((iVar4 = iVar3 + 0x18, iVar4 == *(int *)(iVar3 + 0x1c) &&
                 (iVar4 = iVar3 + 0x20, iVar4 == *(int *)(iVar3 + 0x24))) &&
                (iVar4 = iVar3 + 0x28, iVar4 == *(int *)(iVar3 + 0x2c))) &&
               ((iVar4 = iVar3 + 0x30, iVar4 == *(int *)(iVar3 + 0x34) &&
                (iVar4 = iVar3 + 0x38, iVar4 == *(int *)(iVar3 + 0x3c))))))))) &&
            (((iVar4 = iVar3 + 0x40, iVar4 == *(int *)(iVar3 + 0x44) &&
              ((iVar4 = iVar3 + 0x48, iVar4 == *(int *)(iVar3 + 0x4c) &&
               (iVar4 = iVar3 + 0x50, iVar4 == *(int *)(iVar3 + 0x54))))) &&
             (((iVar4 = iVar3 + 0x58, iVar4 == *(int *)(iVar3 + 0x5c) &&
               (((iVar4 = iVar3 + 0x60, iVar4 == *(int *)(iVar3 + 100) &&
                 (iVar4 = iVar3 + 0x68, iVar4 == *(int *)(iVar3 + 0x6c))) &&
                (iVar4 = iVar3 + 0x70, iVar4 == *(int *)(iVar3 + 0x74))))) &&
              (iVar4 = iVar3 + 0x78, iVar4 == *(int *)(iVar3 + 0x7c))))))); iVar3 = iVar3 + 0x80) {
        }
        puVar5 = (uint *)PTR_DAT_0043c87c;
        if (*(uint **)(iVar4 + 4) != (uint *)0x0) {
          puVar5 = *(uint **)(iVar4 + 4);
        }
      }
    }
    else {
      uVar9 = *(uint *)PTR_DAT_0043c87c;
      if (uVar9 < uVar7) {
        *(undefined4 *)PTR_DAT_0043c87c = 0xfffffffd;
        puVar5 = *(uint **)(puVar1 + 4);
        while ((((((*puVar5 < uVar7 && (puVar5 = (uint *)puVar5[1], *puVar5 < uVar7)) &&
                  (puVar5 = (uint *)puVar5[1], *puVar5 < uVar7)) &&
                 (((puVar5 = (uint *)puVar5[1], *puVar5 < uVar7 &&
                   (puVar5 = (uint *)puVar5[1], *puVar5 < uVar7)) &&
                  ((puVar5 = (uint *)puVar5[1], *puVar5 < uVar7 &&
                   ((puVar5 = (uint *)puVar5[1], *puVar5 < uVar7 &&
                    (puVar5 = (uint *)puVar5[1], *puVar5 < uVar7)))))))) &&
                ((puVar5 = (uint *)puVar5[1], *puVar5 < uVar7 &&
                 (((puVar5 = (uint *)puVar5[1], *puVar5 < uVar7 &&
                   (puVar5 = (uint *)puVar5[1], *puVar5 < uVar7)) &&
                  (puVar5 = (uint *)puVar5[1], *puVar5 < uVar7)))))) &&
               (((puVar5 = (uint *)puVar5[1], *puVar5 < uVar7 &&
                 (puVar5 = (uint *)puVar5[1], *puVar5 < uVar7)) &&
                ((puVar5 = (uint *)puVar5[1], *puVar5 < uVar7 &&
                 (puVar5 = (uint *)puVar5[1], *puVar5 < uVar7))))))) {
          puVar5 = (uint *)puVar5[1];
        }
        *(uint *)PTR_DAT_0043c87c = uVar9;
        if (puVar5 == (uint *)PTR_DAT_0043c87c) {
          puVar5 = &DAT_0043c870;
        }
      }
    }
    if (puVar5 == &DAT_0043c870) {
      iVar3 = FUN_00435764(param_1 + 0x40);
      if (iVar3 == 0) {
        puVar2 = FUN_00435c48(param_1);
      }
      else {
        puVar2 = (uint *)0x0;
      }
    }
    else {
      uVar9 = *puVar5;
      uVar8 = (uVar9 & 0xfffffffc) - uVar7;
      if (uVar8 < 0x10) {
        *puVar5 = *puVar5 & 0xfffffffe;
        puVar2 = (uint *)((int)puVar5 + (*puVar5 & 0xfffffffc) + 4);
        *puVar2 = *puVar2 & 0xfffffffd;
        if (DAT_0043c858 <= (uVar9 & 0xfffffffc)) {
          PTR_DAT_0043c87c = (undefined *)puVar5[1];
        }
        uVar7 = puVar5[1];
        *(uint *)(uVar7 + 8) = puVar5[2];
        puVar2 = puVar5 + 1;
        *(uint *)(puVar5[2] + 4) = uVar7;
      }
      else {
        uVar9 = uVar8 - 4;
        *puVar5 = uVar7;
        piVar6 = (int *)((int)puVar5 + uVar7 + 4);
        *piVar6 = uVar8 - 3;
        *(uint *)((int)piVar6 + uVar9) = uVar8;
        if (uVar9 < DAT_0043c858) {
          iVar3 = uVar9 * 2 + DAT_0043c86c;
          *(undefined4 *)((int)puVar5 + uVar7 + 8) = *(undefined4 *)(iVar3 + -8);
          *(int *)((int)puVar5 + uVar7 + 0xc) = iVar3 + -0xc;
          *(int **)(*(int *)((int)puVar5 + uVar7 + 8) + 8) = piVar6;
          *(int **)(iVar3 + -8) = piVar6;
          if (puVar5 == (uint *)PTR_DAT_0043c87c) {
            PTR_DAT_0043c87c = (undefined *)puVar5[1];
          }
          uVar7 = puVar5[1];
          *(uint *)(uVar7 + 8) = puVar5[2];
          *(uint *)(puVar5[2] + 4) = uVar7;
        }
        else {
          uVar9 = puVar5[2];
          *(int **)(uVar9 + 4) = piVar6;
          *(uint *)((int)puVar5 + uVar7 + 0xc) = uVar9;
          uVar9 = puVar5[1];
          *(int **)(uVar9 + 8) = piVar6;
          *(uint *)((int)puVar5 + uVar7 + 8) = uVar9;
          PTR_DAT_0043c87c = (undefined *)piVar6;
        }
        puVar2 = puVar5 + 1;
      }
    }
  }
  return puVar2;
}

