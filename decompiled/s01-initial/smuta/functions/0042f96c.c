/* Ghidra address: 0042f96c; FUN_0042f96c */

void FUN_0042f96c(void)

{
  ushort uVar1;
  byte bVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  undefined2 in_stack_00000008;
  double *in_stack_0000000c;
  
  *(byte *)((int)in_stack_0000000c + 7) = *(byte *)((int)in_stack_0000000c + 7) & 0x7f;
  fVar3 = (float10)*in_stack_0000000c;
  uVar1 = *(short *)((int)in_stack_0000000c + 6) * 2;
  bVar2 = (byte)in_stack_00000008;
  if (uVar1 == 0) {
    if (bVar2 != 0xff) {
      return;
    }
  }
  else {
    if (uVar1 < 0x7fe0) {
      fVar4 = SQRT((float10)1 - fVar3 * fVar3);
      fVar5 = fVar4;
      if (fVar4 < fVar3 || (fVar4 == fVar3) != 0) {
        if ((short)((ushort)(byte)((fVar4 < fVar3 |
                                   (byte)((ushort)((ushort)(fVar4 == fVar3) << 0xe) >> 8)) * '\x02')
                   << 8) < 0) {
          fscale((float10)3.141592653589793,(float10)-2);
          return;
        }
        bVar2 = ~bVar2;
        fVar5 = fVar3;
        fVar3 = fVar4;
      }
      fpatan(fVar3,fVar5);
      if (bVar2 == 0) {
        return;
      }
      fscale((float10)3.141592653589793,(float10)-1);
      return;
    }
    if ((0x7fe0 < uVar1) ||
       ((*(short *)((int)in_stack_0000000c + 4) != 0 || *(short *)((int)in_stack_0000000c + 2) != 0)
        || *(short *)in_stack_0000000c != 0)) {
      *(byte *)((int)in_stack_0000000c + 7) =
           *(byte *)((int)in_stack_0000000c + 7) |
           (byte)((ushort)in_stack_00000008 >> 9) |
           (*(short *)((int)in_stack_0000000c + 6) < 0) << 7;
      FUN_00430ac8();
      return;
    }
    if (bVar2 == 0xff) {
      return;
    }
  }
  fscale((float10)3.141592653589793,(float10)-1);
  return;
}

