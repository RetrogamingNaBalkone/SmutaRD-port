/* Ghidra address: 0042ea88; FUN_0042ea88 */

byte * FUN_0042ea88(byte *param_1,undefined4 param_2,undefined4 param_3,byte *param_4,uint *param_5,
                   char *param_6)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  uint *puVar5;
  byte *pbVar6;
  
  if (param_4 != (byte *)0x0) {
    pcVar1 = FUN_0042a144(param_5);
    if (pcVar1 < param_6) {
      uVar2 = 0xffffffff;
      do {
        puVar5 = param_5;
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        puVar5 = (uint *)((int)param_5 + 1);
        uVar3 = *param_5;
        param_5 = puVar5;
      } while ((char)uVar3 != '\0');
      uVar2 = ~uVar2;
      pbVar4 = (byte *)((int)puVar5 - uVar2);
      pbVar6 = param_4;
      for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined4 *)pbVar6 = *(undefined4 *)pbVar4;
        pbVar4 = pbVar4 + 4;
        pbVar6 = pbVar6 + 4;
      }
      for (uVar2 = uVar2 & 3; param_1 = param_4, uVar2 != 0; uVar2 = uVar2 - 1) {
        *pbVar6 = *pbVar4;
        pbVar4 = pbVar4 + 1;
        pbVar6 = pbVar6 + 1;
      }
    }
    else {
      param_1 = FUN_00435014(param_4,(byte *)param_5,(uint)param_6);
      param_4[(int)param_6] = 0;
    }
  }
  return param_1;
}

