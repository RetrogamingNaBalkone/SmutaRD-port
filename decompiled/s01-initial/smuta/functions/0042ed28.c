/* Ghidra address: 0042ed28; FUN_0042ed28 */

int * FUN_0042ed28(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4,
                  undefined4 *param_5)

{
  FUN_0042eacc();
  if ((*(byte *)(*param_4 + 0xc) & 0x86) == 0) {
    *param_5 = param_3;
  }
  return param_4;
}

