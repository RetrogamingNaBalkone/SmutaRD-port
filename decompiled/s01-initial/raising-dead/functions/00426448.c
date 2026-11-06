/* Ghidra address: 00426448; FUN_00426448 */

undefined2 * __cdecl FUN_00426448(undefined2 *param_1,int param_2)

{
  short sVar1;
  undefined2 *puVar2;
  undefined4 uStack_8;
  
  sVar1 = 0;
  puVar2 = param_1;
  do {
    FUN_0040d474((undefined1 *)((int)&uStack_8 + 1),(ushort *)(sVar1 * 6 + param_2));
    *puVar2 = uStack_8._1_2_;
    *(undefined1 *)(puVar2 + 1) = uStack_8._3_1_;
    sVar1 = sVar1 + 1;
    puVar2 = (undefined2 *)((int)puVar2 + 3);
  } while (sVar1 < 0x100);
  return param_1;
}

