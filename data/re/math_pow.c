// ===== 0x180634500 FUN_180634500 =====

double FUN_180634500(void)

{
  sbyte sVar1;
  uint uVar2;
  double dVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  double dVar10;
  uint uVar11;
  double dVar12;
  undefined1 in_ZMM0 [64];
  double dVar13;
  undefined1 in_ZMM1 [64];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  
  if (((byte)DAT_1819edf64 & 3) != 3) {
    dVar12 = (double)FUN_180634520();
    return dVar12;
  }
  dVar3 = in_ZMM0._0_8_;
  uVar11 = in_ZMM0._4_4_;
  uVar5 = uVar11 >> 0x14;
  dVar10 = in_ZMM1._0_8_;
  uVar2 = in_ZMM1._4_4_;
  dVar12 = dVar3;
  if ((0x7fd < (uVar11 >> 0x14) - 1) || (uVar9 = 0, 0x7f < (uVar2 >> 0x14 & 0x7ff) - 0x3be)) {
    uVar9 = (longlong)dVar10 * 2;
    if (0xffdffffffffffffe < uVar9 - 1) {
      if ((uVar9 == 0) || (dVar12 = dVar10, dVar3 == 1.0)) {
        if (0xfff0000000000000 < ((ulonglong)dVar12 ^ 0x8000000000000) * 2) goto LAB_1806440fd;
      }
      else {
        uVar7 = (longlong)dVar3 * 2;
        if ((0xffe0000000000000 < uVar7) || (0xffe0000000000000 < uVar9)) {
LAB_1806440fd:
          return dVar3 + dVar10;
        }
        if (uVar7 != 0x7fe0000000000000) {
          if ((uint)(uVar7 < 0x7fe0000000000000) == (uVar2 >> 0x1f ^ 1)) {
            return 0.0;
          }
          return dVar10 * dVar10;
        }
      }
      return 1.0;
    }
    uVar9 = 0;
    if (0xffdffffffffffffe < (longlong)dVar3 * 2 - 1U) {
      dVar12 = dVar3 * dVar3;
      if ((((in_ZMM0[7] < '\0') && (uVar11 = uVar2 >> 0x14 & 0x7ff, uVar11 - 0x3ff < 0x35)) &&
          (uVar11 = 0x433 - uVar11, bVar4 = (byte)uVar11, sVar1 = (bVar4 < 0x41) * ('@' - bVar4),
          (ulonglong)((longlong)dVar10 << sVar1) >> sVar1 == 0)) &&
         (((ulonglong)dVar10 >> ((ulonglong)uVar11 & 0x3f) & 1) != 0)) {
        dVar12 = -dVar12;
        uVar9 = 1;
      }
      if (((longlong)dVar3 * 2 == 0) && (in_ZMM1[7] < '\0')) {
        dVar12 = (double)FUN_180644830(uVar9);
        return dVar12;
      }
      if (in_ZMM1[7] < '\0') {
        return 1.0 / dVar12;
      }
      return dVar12;
    }
    if (in_ZMM0[7] < '\0') {
      uVar5 = uVar2 >> 0x14 & 0x7ff;
      if (uVar5 < 0x3ff) {
LAB_18064431c:
        dVar12 = (double)FUN_180644890();
        return dVar12;
      }
      if (uVar5 < 0x434) {
        bVar4 = (byte)(0x433 - uVar5);
        sVar1 = (bVar4 < 0x41) * ('@' - bVar4);
        if ((ulonglong)((longlong)dVar10 << sVar1) >> sVar1 != 0) goto LAB_18064431c;
        iVar8 = 2 - (uint)((1L << ((ulonglong)(0x433 - uVar5) & 0x3f) & (ulonglong)dVar10) != 0);
      }
      else {
        iVar8 = 2;
      }
      dVar12 = ABS(dVar3);
      uVar5 = uVar11 >> 0x14 & 0x7ff;
      uVar11 = 0x80000;
      if (iVar8 != 1) {
        uVar11 = 0;
      }
      uVar9 = (ulonglong)uVar11;
    }
    uVar11 = uVar2 >> 0x14 & 0x7ff;
    if (0x7f < uVar11 - 0x3be) {
      if (dVar12 == 1.0) {
        return 1.0;
      }
      if (uVar11 < 0x3be) {
        if ((ulonglong)dVar12 < 0x3ff0000000000001) {
          return 1.0 - dVar10;
        }
        return dVar10 + 1.0;
      }
      if (0x3ff0000000000000 < (ulonglong)dVar12 == uVar2 >> 0x14 < 0x800) {
        dVar12 = (double)FUN_1806448d0(0);
        return dVar12;
      }
      dVar12 = (double)FUN_180644920(0);
      return dVar12;
    }
    if (uVar5 == 0) {
      dVar12 = (double)((longlong)ABS(dVar3 * 4503599627370496.0) + 0xfcc0000000000000);
    }
  }
  if (dVar10 == 1.0) {
    return dVar3;
  }
  if (dVar12 == 1.0) {
    auVar15._0_8_ = -(ulonglong)(uVar9 == 0);
    auVar15._8_8_ = 0xffffffffffffffff;
    auVar15 = vblendvpd_avx(ZEXT816(0xbff0000000000000),ZEXT816(0x3ff0000000000000),auVar15);
    return auVar15._0_8_;
  }
  uVar11 = (uint)((longlong)dVar12 + 0xc0196aab00000000U >> 0x20);
  lVar6 = (ulonglong)(uVar11 >> 0xd & 0x7f) * 0x20;
  dVar17 = (double)((int)uVar11 >> 0x14);
  dVar13 = dVar17 * 0.6931471805598903 + *(double *)(&DAT_181510b48 + lVar6);
  dVar19 = (double)((longlong)dVar12 - ((longlong)dVar12 + 0xc0196aab00000000U & 0xfff0000000000000)
                   ) * *(double *)(&DAT_181510b38 + lVar6) + -1.0;
  dVar3 = dVar19 * -0.5;
  dVar12 = dVar13 + dVar19;
  dVar16 = dVar3 * dVar19;
  dVar18 = dVar19 * dVar3 + dVar12;
  dVar16 = dVar16 * dVar19 *
           (dVar16 * (dVar16 * (dVar19 * 1.0000415263675542 + -1.142909628459501) +
                     dVar19 * -0.6666666663487739 + 0.7999999995323976) +
           dVar19 * 0.5000000000000007 + -0.6666666666666679) +
           dVar19 * dVar3 + -dVar16 +
           dVar17 * 5.497923018708371e-14 + *(double *)(&DAT_181510b50 + lVar6) +
           (dVar13 - dVar12) + dVar19 + dVar19 * dVar3 + (dVar12 - dVar18);
  dVar12 = dVar16 + dVar18;
  dVar3 = dVar12 * dVar10;
  uVar11 = (uint)((ulonglong)dVar3 >> 0x34) & 0x7ff;
  if (0x3e < uVar11 - 0x3c9) {
    if (0x7fffffff < uVar11 - 0x3c9) {
      dVar12 = dVar12 * dVar10 + 1.0;
      if ((int)uVar9 == 0) {
        return dVar12;
      }
      return -dVar12;
    }
    if (0x408 < uVar11) {
      if ((longlong)dVar3 < 0) {
        dVar12 = (double)FUN_180644920();
        return dVar12;
      }
      dVar12 = (double)FUN_1806448d0(uVar9);
      return dVar12;
    }
    uVar11 = 0;
  }
  dVar13 = dVar3 * 369.3299304675746 + 103079215104.5;
  uVar7 = (ulonglong)dVar13 >> 0x10;
  dVar13 = (double)(int)((ulonglong)dVar13 >> 0x10);
  dVar12 = dVar13 * 5.0411407304988844e-14 + dVar13 * -0.0027076061741126978 + dVar3 +
           dVar10 * ((dVar18 - dVar12) + dVar16) + dVar12 * dVar10 + -dVar3;
  dVar3 = dVar12 * dVar12;
  dVar10 = (double)((uVar9 + uVar7 << 0x2c) + *(longlong *)(&DAT_18150faf8 + (uVar7 & 0xff) * 0x10))
  ;
  dVar12 = dVar3 * dVar3 * (dVar12 * 0.008333335853047663 + 0.04166668084093659) +
           dVar3 * (dVar12 * 0.16666666666665886 + 0.49999999999996786) +
           dVar12 + *(double *)(&DAT_18150faf0 + (uVar7 & 0xff) * 0x10);
  if (uVar11 == 0) {
    if ((uVar7 & 0x80000000) == 0) {
      dVar10 = (double)FUN_1806447c0((dVar12 * (double)((longlong)dVar10 + -0x3f10000000000000) +
                                     (double)((longlong)dVar10 + -0x3f10000000000000)) *
                                     5.486124068793689e+303);
    }
    else {
      dVar10 = (double)((longlong)dVar10 + 0x3fe0000000000000);
      dVar3 = dVar10 * dVar12 + dVar10;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = dVar3;
      if (ABS(dVar3) < 1.0) {
        auVar15 = vcmpsd_avx(auVar14,ZEXT816(0),1);
        auVar15 = vblendvpd_avx(ZEXT816(0x3ff0000000000000),ZEXT816(0xbff0000000000000),auVar15);
        dVar16 = auVar15._0_8_;
        dVar3 = ((dVar10 - dVar3) + dVar10 * dVar12 + (dVar16 - (dVar3 + dVar16)) + dVar3 +
                dVar3 + dVar16) - dVar16;
        if (dVar3 == 0.0) {
          dVar3 = (double)((ulonglong)dVar10 & 0x8000000000000000);
        }
      }
      dVar10 = (double)FUN_180644800(dVar3 * 2.2250738585072014e-308);
    }
  }
  else {
    dVar10 = dVar10 * dVar12 + dVar10;
  }
  return dVar10;
}


