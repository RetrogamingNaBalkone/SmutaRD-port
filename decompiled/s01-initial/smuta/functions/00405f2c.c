/* Ghidra address: 00405f2c; FUN_00405f2c */

undefined4 * FUN_00405f2c(void)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  byte bVar6;
  char local_40c [1028];
  
  bVar6 = 0;
  GetPrivateProfileStringA
            (s_Smuta_00434c90,s_CDPath_00434c96,&DAT_00434c9d,&DAT_00443e94,0x50,".\\smuta.ini");
  thunk_FUN_0042cddc();
  uVar2 = 0xffffffff;
  pcVar4 = local_40c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + (uint)bVar6 * -2 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)&DAT_00443ee4;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + ((uint)bVar6 * -2 + 1) * 4;
    pcVar5 = pcVar5 + ((uint)bVar6 * -2 + 1) * 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + (uint)bVar6 * -2 + 1;
    pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
  }
  return &DAT_00443ee4;
}

