/* Ghidra address: 0042fca8; FUN_0042fca8 */

ushort FUN_0042fca8(void)

{
  float10 fVar1;
  float10 fVar2;
  float10 *in_stack_00000004;
  
  fVar1 = *in_stack_00000004;
  fVar2 = (float10)0;
  return (ushort)NAN(fVar1) << 8 | (ushort)(fVar1 < fVar2) << 9 | (ushort)(fVar1 != fVar2) << 10 |
         (ushort)(fVar1 == fVar2) << 0xe;
}

