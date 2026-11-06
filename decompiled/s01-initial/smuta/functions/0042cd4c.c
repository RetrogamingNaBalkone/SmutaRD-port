/* Ghidra address: 0042cd4c; FUN_0042cd4c */

char * FUN_0042cd4c(char *param_1,undefined4 param_2,undefined4 param_3,char *param_4,char *param_5,
                   uint param_6)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  byte bVar6;
  
  bVar6 = 0;
  if (param_4 != (char *)0x0) {
    uVar2 = FUN_00429114();
    if (uVar2 < param_6) {
      uVar2 = 0xffffffff;
      do {
        pcVar4 = param_5;
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        pcVar4 = param_5 + (uint)bVar6 * -2 + 1;
        cVar1 = *param_5;
        param_5 = pcVar4;
      } while (cVar1 != '\0');
      uVar2 = ~uVar2;
      pcVar4 = pcVar4 + -uVar2;
      pcVar5 = param_4;
      for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + (uint)bVar6 * -8 + 4;
        pcVar5 = pcVar5 + (uint)bVar6 * -8 + 4;
      }
      for (uVar2 = uVar2 & 3; param_1 = param_4, uVar2 != 0; uVar2 = uVar2 - 1) {
        *pcVar5 = *pcVar4;
        pcVar4 = pcVar4 + (uint)bVar6 * -2 + 1;
        pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
      }
    }
    else {
      param_1 = (char *)FUN_004291bc();
      param_4[param_6] = '\0';
    }
  }
  return param_1;
}

