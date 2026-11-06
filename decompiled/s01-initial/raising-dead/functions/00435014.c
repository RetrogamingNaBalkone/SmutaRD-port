/* Ghidra address: 00435014; FUN_00435014 */

byte * __cdecl FUN_00435014(byte *param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = param_1;
  do {
    if ((param_3 == 0) || (*param_2 == 0)) goto joined_r0x00435057;
    if (((&DAT_0053e30d)[*param_2] & 4) != 0) {
      if ((param_3 < 2) || (param_2[1] == 0)) {
joined_r0x00435057:
        for (; param_3 != 0; param_3 = param_3 - 1) {
          *pbVar2 = 0;
          pbVar2 = pbVar2 + 1;
        }
        return param_1;
      }
      bVar1 = *param_2;
      param_2 = param_2 + 1;
      *pbVar2 = bVar1;
      pbVar2 = pbVar2 + 1;
      param_3 = param_3 - 1;
    }
    bVar1 = *param_2;
    param_2 = param_2 + 1;
    *pbVar2 = bVar1;
    pbVar2 = pbVar2 + 1;
    param_3 = param_3 - 1;
  } while( true );
}

