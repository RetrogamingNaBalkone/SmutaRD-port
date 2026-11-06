/* Ghidra address: 0042fb48; FUN_0042fb48 */

/* WARNING: Type propagation algorithm not settling */

int __cdecl FUN_0042fb48(char *param_1,int *param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  char *pcVar7;
  int local_14;
  
  iVar1 = *param_2;
  *param_2 = 0;
  local_14 = 0;
  puVar6 = param_3;
  pcVar7 = param_1;
  while( true ) {
    pcVar4 = param_1 + (iVar1 - (int)pcVar7);
    pcVar2 = FUN_00429f34(pcVar7,'\n',(int)pcVar4);
    if (pcVar2 != (char *)0x0) {
      pcVar4 = pcVar2 + -(int)pcVar7;
    }
    pcVar3 = (char *)((int)param_3 + (param_4 - (int)puVar6));
    if (pcVar3 < pcVar4) break;
    FUN_00429f54(puVar6,(undefined4 *)pcVar7,(uint)pcVar4);
    puVar5 = (undefined1 *)((int)puVar6 + (int)pcVar4);
    if ((pcVar2 == (char *)0x0) || ((int)param_3 + (param_4 - (int)puVar5) < 2)) {
      *param_2 = (int)(pcVar4 + *param_2);
LAB_0042fbf8:
      return local_14 + (int)pcVar4;
    }
    *puVar5 = 0xd;
    puVar5[1] = 10;
    puVar6 = (undefined4 *)(puVar5 + 2);
    local_14 = local_14 + (int)(pcVar4 + 2);
    pcVar7 = pcVar7 + (int)(pcVar4 + 1);
    *param_2 = (int)(pcVar4 + 1 + *param_2);
  }
  FUN_00429f54(puVar6,(undefined4 *)pcVar7,(uint)pcVar3);
  *param_2 = (int)(pcVar3 + *param_2);
  pcVar4 = pcVar3;
  goto LAB_0042fbf8;
}

