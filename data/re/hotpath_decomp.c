// ===== 0x18032a0d0 thunk_FUN_180138838 =====

undefined4
thunk_FUN_180138838(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStackX_8;
  
  uStackX_8 = param_1;
  FUN_180138894(param_1);
  FUN_180137050(&uStackX_8,param_2,param_3,param_4);
  return 0;
}


// ===== 0x180031510 thunk_FUN_180031520 =====

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void thunk_FUN_180031520(longlong param_1,uint param_2,int param_3,uint param_4,uint param_5,
                        uint param_6)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint *puVar9;
  undefined4 *puVar10;
  ulonglong *puVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  uint *puVar14;
  byte bVar15;
  uint uVar16;
  undefined4 uVar17;
  longlong lVar18;
  longlong lVar19;
  int *piVar20;
  byte bVar21;
  longlong lVar22;
  undefined8 *puVar23;
  uint *puVar24;
  longlong lVar25;
  ushort uVar26;
  uint uVar27;
  char *pcVar28;
  uint uVar29;
  undefined8 uVar30;
  longlong *plVar31;
  longlong lVar32;
  bool bVar33;
  undefined4 uVar34;
  undefined1 auStack_1b8 [32];
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined4 uStack_188;
  undefined8 uStack_180;
  undefined4 uStack_178;
  undefined8 *puStack_170;
  undefined1 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  ulonglong uStack_150;
  undefined8 uStack_148;
  undefined1 uStack_140;
  undefined1 uStack_138;
  undefined1 uStack_130;
  undefined8 uStack_128;
  uint uStack_120;
  uint *puStack_118;
  undefined1 uStack_110;
  undefined1 uStack_10f;
  undefined1 uStack_10e;
  undefined1 uStack_10d;
  undefined1 uStack_10c;
  undefined1 uStack_10b;
  undefined1 uStack_10a;
  undefined1 uStack_109;
  undefined1 uStack_108;
  undefined1 uStack_107;
  undefined1 uStack_106;
  undefined1 uStack_105;
  undefined1 uStack_104;
  undefined1 uStack_103;
  uint uStack_100;
  uint uStack_fc;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  uint uStack_d0;
  uint uStack_cc;
  ulonglong uStack_c8;
  longlong lStack_c0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  ulonglong uStack_38;
  
  uStack_38 = DAT_1818ba280 ^ (ulonglong)auStack_1b8;
  uStack_d0 = param_2;
  uStack_cc = param_4;
  lStack_c0 = param_1;
  if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x3f8) + 0x7b2) == '\0') {
LAB_180031589:
    *(undefined4 *)(param_1 + 0xc540) = 3;
  }
  else {
    lVar19 = param_1;
    if (param_1 == -0x28) {
      lVar19 = 0;
    }
    if (((*(int *)(lVar19 + 0x50) == 0) &&
        (*(char *)(*(longlong *)(param_1 + 0x48) + 0x1664a) == '\0')) ||
       (*(int *)(param_1 + 0xc540) - 2U < 2)) goto LAB_180031589;
    puVar10 = (undefined4 *)FUN_1800e3c2c(param_1);
    *puVar10 = 0x1a;
    puVar10[2] = param_2;
    puVar10[3] = param_3;
    puVar10[4] = param_4;
    puVar10[5] = param_5;
    puVar10[6] = param_6;
  }
  lVar19 = param_1 + 0x28;
  if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x3f8) + 0x7d3) != '\0') {
    FUN_180c47128(param_1,param_1 + 0xc1b0);
    *(undefined1 *)(param_1 + 0xc1d9) = 1;
  }
  puVar13 = *(undefined8 **)(param_1 + 0xc578);
  puVar23 = (undefined8 *)*puVar13;
  while (puVar23 != puVar13) {
    uStack_a8 = puVar23[2];
    uStack_a0 = puVar23[3];
    uStack_90 = puVar23[5];
    uStack_88 = puVar23[6];
    uStack_80 = puVar23[7];
    uStack_78 = puVar23[8];
    uStack_70 = puVar23[9];
    uStack_68 = puVar23[10];
    uStack_60 = puVar23[0xb];
    uStack_58 = *(undefined4 *)(puVar23 + 0xc);
    uStack_54 = *(undefined4 *)((longlong)puVar23 + 100);
    uStack_50 = *(undefined4 *)(puVar23 + 0xd);
    uStack_4c = *(undefined4 *)((longlong)puVar23 + 0x6c);
    uStack_48 = puVar23[0xe];
    uStack_98 = 0;
    lVar32 = param_1;
    if (param_1 == -0x28) {
      lVar32 = 0;
    }
    if (*(char *)(*(longlong *)(*(longlong *)(lVar32 + 0x48) + 0x3f8) + 0xb64) == '\0') {
      lVar25 = 0;
      if (lVar32 != -0x28) {
        lVar25 = lVar32;
      }
      uStack_140 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_158 = CONCAT71(uStack_158._1_7_,1);
      uStack_160 = 0;
      uStack_168 = 0;
      puStack_170 = &uStack_a0;
      uStack_178 = 1;
      uStack_180 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      uStack_198 = (ulonglong)uStack_198._4_4_ << 0x20;
      FUN_1800a8aa0(lVar25,0,0,0);
      puVar23 = (undefined8 *)*puVar23;
    }
    else {
      uStack_150 = uStack_150 & 0xffffffffffffff00;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_168 = 1;
      puStack_170 = &uStack_a0;
      uStack_178 = 1;
      uStack_180 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      uStack_198 = (ulonglong)uStack_198._4_4_ << 0x20;
      FUN_1800aaaa8(lVar32);
      puVar23 = (undefined8 *)*puVar23;
    }
  }
  if (*(ulonglong *)(param_1 + 0xc580) != 0) {
    if (*(ulonglong *)(param_1 + 0xc580) < *(ulonglong *)(param_1 + 0xc5b0) >> 3) {
      puVar9 = *(uint **)(param_1 + 0xc578);
      puVar14 = *(uint **)puVar9;
      puStack_118 = puVar14;
      if (puVar14 != puVar9) {
        uVar8 = *(ulonglong *)(param_1 + 0xc590);
        uStack_128 = *(uint **)(puVar14 + 2);
        uStack_e0 = uVar8;
        uVar7 = FUN_180033c2c(uStack_128,puVar14 + 4);
        uStack_f8 = (uint *)((uVar7 & *(ulonglong *)(param_1 + 0xc5a8)) * 0x10 + uVar8);
        uStack_f0 = *(uint **)uStack_f8;
        uStack_e8 = *(uint **)(uStack_f8 + 2);
LAB_180031655:
        puVar24 = *(uint **)puVar14;
        uStack_d8 = puVar24;
        uVar34 = (*(code *)(*(undefined8 **)(param_1 + 0xc570))[3])
                           (**(undefined8 **)(param_1 + 0xc570),puVar14);
        *(longlong *)(param_1 + 0xc580) = *(longlong *)(param_1 + 0xc580) + -1;
        if (puVar14 != uStack_e8) goto LAB_180031a8e;
        if (uStack_f0 == puStack_118) {
          *(uint **)uStack_f8 = puVar9;
          puVar14 = puVar9;
        }
        else {
          puVar14 = uStack_128;
        }
        *(uint **)(uStack_f8 + 2) = puVar14;
        while (puVar24 != puVar9) {
          uVar8 = FUN_180033c2c(uVar34,puVar24 + 4);
          uStack_f8 = (uint *)((uVar8 & *(ulonglong *)(param_1 + 0xc5a8)) * 0x10 + uStack_e0);
          uStack_f0 = *(uint **)(uStack_f8 + 2);
          puVar14 = puVar24;
          while( true ) {
            puVar24 = *(uint **)puVar14;
            puStack_118 = puVar24;
            uVar34 = (*(code *)(*(undefined8 **)(param_1 + 0xc570))[3])
                               (**(undefined8 **)(param_1 + 0xc570),puVar14);
            *(longlong *)(param_1 + 0xc580) = *(longlong *)(param_1 + 0xc580) + -1;
            if (puVar14 == uStack_f0) break;
            puVar14 = puVar24;
            if (puVar24 == puVar9) goto LAB_180031737;
          }
          *(uint **)uStack_f8 = puVar9;
          *(uint **)(uStack_f8 + 2) = puVar9;
        }
        *(uint **)uStack_128 = puVar24;
        *(uint **)(puVar24 + 2) = uStack_128;
      }
    }
    else {
      FUN_180033830(param_1 + 0xc570,*(undefined8 *)(param_1 + 0xc578));
      *(undefined8 *)*(undefined8 *)(param_1 + 0xc578) = *(undefined8 *)(param_1 + 0xc578);
      *(longlong *)(*(longlong *)(param_1 + 0xc578) + 8) = *(longlong *)(param_1 + 0xc578);
      *(undefined8 *)(param_1 + 0xc580) = 0;
      puVar13 = *(undefined8 **)(param_1 + 0xc590);
      uVar8 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0xc598) + (7 - (longlong)puVar13)) >>
              3;
      if (*(undefined8 **)(param_1 + 0xc598) < puVar13) {
        uVar8 = 0;
      }
      if (uVar8 != 0) {
        uVar30 = *(undefined8 *)(param_1 + 0xc578);
        for (; uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar13 = uVar30;
          puVar13 = puVar13 + 1;
        }
      }
    }
  }
  goto LAB_1800318a1;
LAB_180031a8e:
  puVar14 = puVar24;
  if (uStack_d8 == puVar9) goto code_r0x000180031a9c;
  goto LAB_180031655;
code_r0x000180031a9c:
  if (uStack_f0 == puStack_118) {
LAB_180031737:
    *(uint **)uStack_f8 = puVar24;
  }
  *(uint **)uStack_128 = puVar24;
  *(uint **)(puVar24 + 2) = uStack_128;
LAB_1800318a1:
  *(undefined1 *)(param_1 + 0x249) = 0;
  lVar32 = *(longlong *)(param_1 + 0xa128);
  if ((*(char *)(*(longlong *)(*(longlong *)(lVar32 + 0x48) + 0x3f8) + 0x87c) == '\0') &&
     (lVar25 = *(longlong *)(&DAT_000092f0 + lVar32), *(char *)(lVar25 + 0x265f) == '\0')) {
    if (*(char *)(param_1 + 0xa131) == '\0') {
      if ((*(int *)(param_1 + 0xa23c) == 0) && (*(char *)(lVar32 + 0x925b) == '\0')) {
        if ((*(uint *)(lVar25 + 0x678) & 0xdc0070) == 0) {
          cVar3 = *(char *)(lVar25 + 0x2610);
        }
        else {
          if ((*(char *)(lVar32 + 0x8ce6) != '\0') || (*(char *)(lVar32 + 0x8ce7) != '\0'))
          goto LAB_18003318e;
          cVar3 = *(char *)(lVar32 + 0x8ce8);
        }
        if (cVar3 == '\0') goto LAB_180032cb3;
      }
LAB_18003318e:
      if (*(char *)(param_1 + 0xa238) != '\0') {
        *(undefined1 *)(param_1 + 0xa238) = 0;
        goto LAB_1800331a8;
      }
    }
    else {
LAB_180032cb3:
      if (*(char *)(param_1 + 0xa238) != '\x02') {
        *(undefined1 *)(param_1 + 0xa238) = 2;
LAB_1800331a8:
        *(undefined1 *)(param_1 + 0xa135) = 1;
        *(uint *)(lVar32 + 0xa798) = *(uint *)(lVar32 + 0xa798) | 0x80;
        puVar9 = (uint *)(*(longlong *)(param_1 + 0xa128) + 0xa79c);
        *puVar9 = *puVar9 | 0x80;
      }
    }
  }
  if ((*(char *)(param_1 + 0x60) != '\0') && (*(char *)(param_1 + 0x80) != '\0')) {
    uStack_128 = *(uint **)(*(longlong *)(param_1 + 0x58) + 0x48);
    lVar25 = *(longlong *)(&DAT_0000a490 + *(longlong *)(param_1 + 0x58));
    lVar22 = *(longlong *)(lVar25 + 0x28);
    lVar18 = *(longlong *)(lVar22 + 0x10);
    lVar32 = lVar18 + 0x10;
    if (*(ulonglong *)(lVar22 + 0x18) < (ulonglong)(*(longlong *)(lVar22 + 0x1c8) + lVar32)) {
      FUN_180031210(lVar25,*(longlong *)(lVar22 + 0x1c8) + 0x10);
      lVar32 = *(longlong *)(lVar25 + 0x28);
      *(undefined8 *)(lVar32 + 0x10) = 0x10;
      puVar9 = *(uint **)(lVar32 + 0x28);
    }
    else {
      *(longlong *)(lVar22 + 0x10) = lVar32;
      puVar9 = (uint *)(*(longlong *)(lVar22 + 0x28) + lVar18);
    }
    uVar29 = uStack_128[0x25a1];
    uVar5 = uStack_128[0x25a2];
    uVar16 = uStack_128[0x25a3];
    *puVar9 = uStack_128[0x25a0];
    puVar9[1] = uVar29;
    puVar9[2] = uVar5;
    puVar9[3] = uVar16;
    *(undefined8 *)(puVar9 + 1) = *(undefined8 *)(param_1 + 0x68);
    *(undefined1 *)(param_1 + 0x80) = 0;
  }
  lVar32 = param_1;
  if (lVar19 == 0) {
    lVar32 = 0;
  }
  if ((*(uint *)(&DAT_0000a7a0 + param_1) & 6) == 0) {
    if (*(uint *)(&DAT_0000a7a0 + param_1) == 0x2000) {
      *(undefined8 *)(param_1 + 0xa860) = 0;
      *(undefined8 *)(param_1 + 0xa858) = 0;
      uVar29 = *(uint *)(&DAT_0000ad20 + param_1) | 0x7f;
      *(uint *)(&DAT_0000ad20 + param_1) = uVar29;
    }
    else {
      uVar29 = *(uint *)(&DAT_0000ad20 + param_1) | 0x10;
      *(uint *)(&DAT_0000ad20 + param_1) = uVar29;
      *(uint *)(&DAT_0000ad24 + param_1) = *(uint *)(&DAT_0000ad24 + param_1) | 0x10;
    }
    uVar26 = -(ushort)((uVar29 & 1) != 0) & 0x20;
    uVar5 = uVar29 & 0xfffffffe;
    if ((uVar29 & 1) == 0) {
      uVar5 = uVar29;
    }
    uVar4 = uVar26 | 0xc0;
    if ((uVar5 & 0xffffffef) == 0) {
      uVar4 = uVar26 | 0x40;
    }
    *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) | uVar4;
    *(undefined4 *)(param_1 + 0xa7a4) = 0;
    *(undefined2 *)(param_1 + 0xa7a8) = 0;
    *(undefined1 *)(param_1 + 0xa7aa) = 0;
    lVar25 = 0;
    if (lVar32 != -0x28) {
      lVar25 = lVar32;
    }
    if (*(int *)(lVar25 + 0x50) != 1) {
      lVar25 = 0;
      if (lVar32 != -0x28) {
        lVar25 = lVar32;
      }
      if (*(int *)(&DAT_0000a7a0 + lVar32) == 0x1000) {
        FUN_180c28ee8(*(undefined8 *)(lVar32 + 0x48),lVar25);
        *(undefined4 *)(&DAT_0000a7a0 + lVar32) = 2;
      }
    }
    *(undefined4 *)(&DAT_0000a7a0 + lVar32) = 2;
    plVar31 = (longlong *)(param_1 + 0x360);
    *(uint *)(param_1 + 0x8218) = *(uint *)(param_1 + 0x8218) | 0x7f;
    *(uint *)(param_1 + 0x8330) = *(uint *)(param_1 + 0x8330) | 0x7f;
    *(ushort *)(*plVar31 + 0x2a) = *(ushort *)(*plVar31 + 0x2a) | 0x200;
    *(ushort *)(*plVar31 + 0x2a) = *(ushort *)(*plVar31 + 0x2a) | 0x400;
    *(uint *)(param_1 + 0x8218) = *(uint *)(param_1 + 0x8218) | 0x10;
    *(ushort *)(*plVar31 + 0x2a) = *(ushort *)(*plVar31 + 0x2a) | 0x400;
    *(undefined1 *)(param_1 + 0x8228) = 1;
    *(uint *)(param_1 + 0xa79c) = *(uint *)(param_1 + 0xa79c) | *(uint *)(param_1 + 0xa798);
    *(undefined4 *)(param_1 + 0xa8b0) = 0;
    *(undefined1 *)(param_1 + 0xa8b4) = 0;
    FUN_180035b00(param_1);
    if ((*(byte *)(param_1 + 0xa79c) & 1) != 0) {
      FUN_18009f2e0(*(undefined8 *)(&DAT_000092f0 + param_1),lVar32);
      *(undefined8 *)(param_1 + 0xa858) = *(undefined8 *)(&DAT_000092f0 + param_1);
      if (*(int *)(param_1 + 0x54) == 0) {
        lVar25 = *(longlong *)(param_1 + 0x86d8);
        iVar6 = *(int *)(param_1 + 0x8714);
        if (lVar25 == 0) {
          if ((iVar6 != -1) && (*(char *)(param_1 + 0x8722) != '\0')) {
            lVar25 = *(longlong *)(param_1 + 0x8728 + (ulonglong)*(byte *)(param_1 + 0x8720) * 0x48)
            ;
            goto LAB_1800320ec;
          }
        }
        else {
          if (iVar6 == 0) {
            lVar25 = lVar25 + 0x2d0;
          }
          else {
            lVar25 = (ulonglong)(iVar6 - 1) * 0x240 + *(longlong *)(lVar25 + 0x510);
          }
          if (*(int *)(lVar25 + 0x120) != -1) {
            lVar25 = FUN_18001dbbc(param_1 + 0x86d0,*(undefined8 *)(param_1 + 0x86e0));
LAB_1800320ec:
            if (lVar25 != 0) {
              uStack_128 = *(uint **)(lVar25 + 0x78);
              plVar31 = (longlong *)
                        ((((((((((ulonglong)uStack_128 >> 8 & 0xff ^
                                ((ulonglong)uStack_128 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3)
                                * 0x100000001b3 ^ (ulonglong)uStack_128 >> 0x10 & 0xff) *
                               0x100000001b3 ^ (ulonglong)uStack_128 >> 0x18 & 0xff) * 0x100000001b3
                             ^ (ulonglong)uStack_128 >> 0x20 & 0xff) * 0x100000001b3 ^
                            (ulonglong)uStack_128 >> 0x28 & 0xff) * 0x100000001b3 ^
                           (ulonglong)uStack_128 >> 0x30 & 0xff) * 0x100000001b3 ^
                          (ulonglong)uStack_128 >> 0x38) * 0x100000001b3 &
                         *(ulonglong *)(param_1 + 0xc600)) * 0x10 + *(longlong *)(param_1 + 0xc5e8))
              ;
              lVar25 = plVar31[1];
              if (lVar25 == *(longlong *)(param_1 + 0xc5d0)) {
LAB_1800321d3:
                lVar25 = 0;
              }
              else {
                for (; uStack_128 != *(uint **)(lVar25 + 0x10); lVar25 = *(longlong *)(lVar25 + 8))
                {
                  if (lVar25 == *plVar31) goto LAB_1800321d3;
                }
              }
              if ((lVar25 != 0) && (lVar25 != *(longlong *)(param_1 + 0xc5d0))) {
                lVar22 = *(longlong *)(&DAT_000092f0 + param_1);
                if ((*(uint *)(lVar22 + 0x678) & 0xdc0070) == 0) {
                  if ((((*(char *)(lVar25 + 0x3d) == '\0') ||
                       (uVar29 = *(uint *)(lVar22 + 0x2c4d), (uVar29 & 8) == 0)) ||
                      (((uVar29 & 0x600) == 0 && ((uVar29 & 0x600000) == 0)))) &&
                     (((*(char *)(lVar25 + 0x3c) == '\0' || ((*(uint *)(lVar22 + 0x2c4d) & 2) == 0))
                      || ((*(uint *)(lVar22 + 0x2c4d) & 0xc0) == 0)))) goto LAB_180032217;
                }
                else if ((((*(char *)(lVar25 + 0x3d) == '\0') ||
                          (*(char *)(param_1 + 0x8ce8) == '\0')) ||
                         ((*(uint *)(param_1 + 0x8cec) < 2 && (*(uint *)(param_1 + 0x8d08) < 2))))
                        && (((*(char *)(lVar25 + 0x3c) == '\0' ||
                             (*(char *)(param_1 + 0x8ce6) == '\0')) ||
                            ((*(int *)(param_1 + 0x8ce0) == 0 || (*(int *)(param_1 + 0x8ce0) == 1)))
                            ))) {
LAB_180032217:
                  if (*(char *)(lVar22 + 0x104a) == '\0') goto LAB_180031c69;
                }
                FUN_18001db18(param_1 + 0xc5c0);
              }
            }
          }
        }
      }
    }
LAB_180031c69:
    bVar33 = (*(byte *)(param_1 + 0xa79c) & 0x10) != 0;
    if (bVar33) {
      FUN_1800396b4(*(undefined8 *)(param_1 + 0xa248),lVar32,*(undefined4 *)(param_1 + 0xa260));
    }
    if (((*(byte *)(param_1 + 0xa79c) & 0x20) != 0) || (bVar33)) {
      if (((*(int *)(param_1 + 0x54) == 0) && (*(longlong *)(param_1 + 0x86d8) != 0)) ||
         (cVar3 = FUN_18001cf60(param_1 + 0x86d0), cVar3 != '\0')) {
        uVar34 = *(undefined4 *)(param_1 + 0x86ec);
        puStack_118 = (uint *)CONCAT44(puStack_118._4_4_,*(undefined4 *)(param_1 + 0x86f0));
        iVar6 = FUN_18001cd8c(lVar32,uVar34,*(undefined4 *)(param_1 + 0x86f0));
        uVar17 = (uint)puStack_118;
      }
      else {
        iVar6 = 0;
        uVar17 = 0xffffffff;
        uVar34 = 0xffffffff;
      }
      if (iVar6 == 0) {
        FUN_18001ce60(*(undefined8 *)(param_1 + 0xa250));
      }
      else {
        uStack_190 = CONCAT44(uStack_190._4_4_,uVar17);
        uStack_198 = CONCAT44(uStack_198._4_4_,uVar34);
        FUN_18001cbc0(*(undefined8 *)(param_1 + 0xa250),lVar32,*(undefined4 *)(param_1 + 0xa264),
                      iVar6);
      }
    }
    if ((*(byte *)(lVar32 + 0xa79c) & 0x40) != 0) {
      lVar25 = lVar32;
      if (lVar32 == -0x28) {
        lVar25 = 0;
      }
      FUN_180c460b0(*(undefined8 *)(lVar32 + 0xa258),lVar25);
    }
    if ((*(byte *)(param_1 + 0xa79c) & 4) != 0) {
      uStack_128 = *(uint **)(&DAT_0000a490 + param_1);
      lVar22 = *(longlong *)(uStack_128 + 10);
      lVar18 = *(longlong *)(lVar22 + 0x10);
      lVar25 = lVar18 + 0x14;
      if (*(ulonglong *)(lVar22 + 0x18) < (ulonglong)(*(longlong *)(lVar22 + 0x1c8) + lVar25)) {
        FUN_180031210(uStack_128,*(longlong *)(lVar22 + 0x1c8) + 0x14);
        lVar25 = *(longlong *)(uStack_128 + 10);
        *(undefined8 *)(lVar25 + 0x10) = 0x14;
        puVar10 = *(undefined4 **)(lVar25 + 0x28);
      }
      else {
        *(longlong *)(lVar22 + 0x10) = lVar25;
        puVar10 = (undefined4 *)(*(longlong *)(lVar22 + 0x28) + lVar18);
      }
      uVar34 = *(undefined4 *)(param_1 + 0x9bf0);
      uVar30 = *(undefined8 *)(param_1 + 0x9be8);
      uVar29 = *(uint *)(*(longlong *)(param_1 + 0x9bd8) + 0x16614);
      uVar5 = *(uint *)(param_1 + 0x9bf8);
      *puVar10 = 0x780a0003;
      puVar10[1] = (uVar5 | 8) << 8 | uVar29;
      *(undefined8 *)(puVar10 + 2) = uVar30;
      puVar10[4] = uVar34;
      if (((*(char *)(*(longlong *)(param_1 + 0x9bd8) + 0x78a) == '\0') &&
          (puVar9 = *(uint **)(param_1 + 0x9be0), puVar9 != (uint *)0x0)) &&
         ((*(char *)(*(longlong *)(*(longlong *)(param_1 + 0xa278) + 0x3f8) + 0x7f0) != '\0' ||
          (*(char *)(*(longlong *)(param_1 + 0xa278) + 0x78a) == '\0')))) {
        if (*(longlong *)(puVar9 + 0x18) == 0) {
          uStack_128 = puVar9;
        }
        else {
          uStack_128 = *(uint **)(puVar9 + 0x70);
        }
        if (*(char *)((longlong)uStack_128 + 0x5a) == '\0') {
          puVar13 = *(undefined8 **)(param_1 + 0xa290);
          if (puVar13 == *(undefined8 **)(param_1 + 0xa298)) {
            FUN_1800a4c10(param_1 + 0xa280,puVar13,&uStack_128);
          }
          else {
            *puVar13 = uStack_128;
            *(longlong *)(param_1 + 0xa290) = *(longlong *)(param_1 + 0xa290) + 8;
          }
        }
      }
    }
    if (((*(byte *)(param_1 + 0xa79c) & 8) != 0) && (*(int *)(param_1 + 0x9f08) != 0)) {
      uStack_128 = *(uint **)(&DAT_0000a490 + param_1);
      lVar22 = *(longlong *)(uStack_128 + 10);
      lVar18 = *(longlong *)(lVar22 + 0x10);
      uVar29 = *(int *)(param_1 + 0x9f08) * 0x10 + 4;
      puStack_118 = (uint *)CONCAT44(puStack_118._4_4_,uVar29);
      uVar8 = (ulonglong)uVar29;
      lVar25 = lVar18 + (ulonglong)uVar29;
      if (*(ulonglong *)(lVar22 + 0x18) < (ulonglong)(*(longlong *)(lVar22 + 0x1c8) + lVar25)) {
        FUN_180031210(uStack_128,*(longlong *)(lVar22 + 0x1c8) + uVar8);
        lVar25 = *(longlong *)(uStack_128 + 10);
        uVar8 = (ulonglong)puStack_118 & 0xffffffff;
        *(ulonglong *)(lVar25 + 0x10) = (ulonglong)puStack_118 & 0xffffffff;
        pcVar28 = *(char **)(lVar25 + 0x28);
      }
      else {
        *(longlong *)(lVar22 + 0x10) = lVar25;
        pcVar28 = (char *)(lVar18 + *(longlong *)(lVar22 + 0x28));
      }
      FUN_180d81d00(pcVar28,param_1 + 0x9f10,uVar8);
      *pcVar28 = (char)((uint)puStack_118 >> 2) + -2;
      if (*(char *)(*(longlong *)(param_1 + 0x9c00) + 0x78a) == '\0') {
        uVar29 = *(uint *)(param_1 + 0x9f0c);
        while( true ) {
          uVar5 = 0;
          if (uVar29 != 0) {
            for (; (uVar29 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
            }
          }
          if ((uVar29 == 0) || (*(uint *)(param_1 + 0x9f08) <= uVar5)) break;
          uVar29 = uVar29 & ~(1 << (uVar5 & 0x1f));
          puVar9 = *(uint **)(param_1 + 0x9c08 + (ulonglong)uVar5 * 8);
          if ((puVar9 != (uint *)0x0) &&
             ((*(char *)(*(longlong *)(*(longlong *)(param_1 + 0xa278) + 0x3f8) + 0x7f0) != '\0' ||
              (*(char *)(*(longlong *)(param_1 + 0xa278) + 0x78a) == '\0')))) {
            if (*(longlong *)(puVar9 + 0x18) == 0) {
              uStack_128 = puVar9;
            }
            else {
              uStack_128 = *(uint **)(puVar9 + 0x70);
            }
            if (*(char *)((longlong)uStack_128 + 0x5a) == '\0') {
              puVar13 = *(undefined8 **)(param_1 + 0xa290);
              if (puVar13 == *(undefined8 **)(param_1 + 0xa298)) {
                FUN_1800a4c10(param_1 + 0xa280,puVar13,&uStack_128);
              }
              else {
                *puVar13 = uStack_128;
                *(longlong *)(param_1 + 0xa290) = *(longlong *)(param_1 + 0xa290) + 8;
              }
            }
          }
        }
      }
    }
    FUN_180033c60(param_1 + 0xa128,0);
    plVar31 = (longlong *)(param_1 + 0x360);
    uStack_f8 = *(uint **)(&DAT_000092f0 + *plVar31);
    uVar29 = *(uint *)(param_1 + 0x8330) & (uint)*(byte *)((longlong)uStack_f8 + 0x10d9);
    uVar16 = ~uVar29 & (uint)*(byte *)((longlong)uStack_f8 + 0x10d9) & *(uint *)(param_1 + 0x8334);
    uVar5 = uVar29 | uVar16;
    uStack_e8 = (uint *)CONCAT44(uStack_e8._4_4_,uVar5);
    uStack_100 = uVar29;
    if (uVar5 != 0) {
      if ((uVar29 == 0) || (uVar16 != 0)) {
        while( true ) {
          uStack_fc = 0;
          if (uVar5 != 0) {
            for (; (uVar5 >> uStack_fc & 1) == 0; uStack_fc = uStack_fc + 1) {
            }
          }
          if (uVar5 == 0) break;
          uVar16 = 1 << ((byte)uStack_fc & 0x1f);
          puStack_118 = (uint *)CONCAT44(puStack_118._4_4_,uVar16);
          lVar25 = *plVar31;
          if ((uVar16 & uVar29) == 0) {
            uStack_128 = *(uint **)(&DAT_0000a490 + lVar25);
            lVar22 = *(longlong *)(uStack_128 + 10);
            lVar18 = *(longlong *)(lVar22 + 0x10);
            lVar25 = lVar18 + 8;
            if (*(ulonglong *)(lVar22 + 0x18) < (ulonglong)(*(longlong *)(lVar22 + 0x1c8) + lVar25))
            {
              FUN_180031210(uStack_128,*(longlong *)(lVar22 + 0x1c8) + 8);
              lVar25 = *(longlong *)(uStack_128 + 10);
              *(undefined8 *)(lVar25 + 0x10) = 8;
              puVar13 = *(undefined8 **)(lVar25 + 0x28);
              uVar16 = (uint)puStack_118;
            }
            else {
              *(longlong *)(lVar22 + 0x10) = lVar25;
              puVar13 = (undefined8 *)(*(longlong *)(lVar22 + 0x28) + lVar18);
            }
            *puVar13 = *(undefined8 *)(param_1 + 0x8229 + (ulonglong)uStack_fc * 8);
          }
          else {
            uStack_120 = uStack_f8[(ulonglong)uStack_fc + 0x43e];
            lVar22 = *(longlong *)(lVar25 + 0xa4c0);
            if (*(ulonglong *)(lVar22 + 0x18) <
                (ulonglong)
                (uint)(*(int *)(*(longlong *)(&DAT_000092f0 + lVar25) + 0x2620 +
                               (ulonglong)uStack_fc * 4) << 4) +
                (*(longlong *)(lVar22 + 0x10) + 0x1fU & 0xffffffffffffffe0) +
                *(longlong *)(lVar22 + 0x1c8)) {
              FUN_18002e90c(lVar25 + 0xa498,0);
            }
            uStack_128 = (uint *)(*plVar31 + 0xa498);
            uStack_f0 = (uint *)(ulonglong)(uStack_120 << 4);
            lVar22 = *(longlong *)(*plVar31 + 0xa4c0);
            uVar8 = *(longlong *)(lVar22 + 0x10) + 0x1fU & 0xffffffffffffffe0;
            lVar25 = (uStack_120 << 4) + uVar8;
            if (*(ulonglong *)(lVar22 + 0x18) < (ulonglong)(*(longlong *)(lVar22 + 0x1c8) + lVar25))
            {
              FUN_18002e90c(uStack_128,
                            (undefined1 *)((longlong)uStack_f0 + *(longlong *)(lVar22 + 0x1c8)));
              lVar25 = *(longlong *)((longlong)uStack_128 + 0x28);
              *(uint **)(lVar25 + 0x10) = uStack_f0;
              lVar18 = *(longlong *)(lVar25 + 0x28);
              uStack_128 = *(uint **)(lVar25 + 0x20);
            }
            else {
              *(longlong *)(lVar22 + 0x10) = lVar25;
              lVar18 = *(longlong *)(lVar22 + 0x28) + uVar8;
              uStack_128 = (uint *)(*(longlong *)(lVar22 + 0x20) + uVar8);
            }
            puVar9 = (uint *)((ulonglong)uStack_120 << 4);
            if (uStack_f0 <= (uint *)((ulonglong)uStack_120 << 4)) {
              puVar9 = uStack_f0;
            }
            uVar8 = (ulonglong)uStack_fc;
            FUN_180d81d00(lVar18,*(undefined8 *)(param_1 + 0x8258 + (ulonglong)uStack_fc * 8),puVar9
                         );
            *(uint *)(param_1 + 0x830c + uVar8 * 4) = uStack_120;
            *(int *)(param_1 + 0x822d + uVar8 * 8) = (int)uStack_128;
            lVar22 = *(longlong *)(&DAT_0000a490 + *plVar31);
            lVar18 = *(longlong *)(lVar22 + 0x28);
            lVar1 = *(longlong *)(lVar18 + 0x10);
            lVar25 = lVar1 + 8;
            if (*(ulonglong *)(lVar18 + 0x18) < (ulonglong)(*(longlong *)(lVar18 + 0x1c8) + lVar25))
            {
              FUN_180031210(lVar22,*(longlong *)(lVar18 + 0x1c8) + 8);
              lVar25 = *(longlong *)(lVar22 + 0x28);
              *(undefined8 *)(lVar25 + 0x10) = 8;
              piVar20 = *(int **)(lVar25 + 0x28);
            }
            else {
              *(longlong *)(lVar18 + 0x10) = lVar25;
              piVar20 = (int *)(*(longlong *)(lVar18 + 0x28) + lVar1);
            }
            *piVar20 = (uStack_fc + 0x782b) * 0x10000;
            piVar20[1] = (int)uStack_128;
            uVar29 = uStack_100;
            uVar16 = (uint)puStack_118;
          }
          uVar16 = ~uVar16;
          uVar5 = (uint)uStack_e8 & uVar16;
          uStack_e8 = (uint *)CONCAT44(uStack_e8._4_4_,uVar5);
          *(uint *)(param_1 + 0x8330) = *(uint *)(param_1 + 0x8330) & uVar16;
          *(uint *)(param_1 + 0x8334) = *(uint *)(param_1 + 0x8334) & uVar16;
        }
      }
      else {
        while( true ) {
          uVar29 = 0;
          if (uStack_100 != 0) {
            for (; (uStack_100 >> uVar29 & 1) == 0; uVar29 = uVar29 + 1) {
            }
          }
          puStack_118 = (uint *)CONCAT44(puStack_118._4_4_,uVar29);
          if (uStack_100 == 0) break;
          uStack_120 = uStack_f8[(ulonglong)uVar29 + 0x43e];
          lVar25 = *plVar31;
          lVar22 = *(longlong *)(lVar25 + 0xa4c0);
          if (*(ulonglong *)(lVar22 + 0x18) <
              (ulonglong)
              (uint)(*(int *)(*(longlong *)(&DAT_000092f0 + lVar25) + 0x2620 + (ulonglong)uVar29 * 4
                             ) << 4) + (*(longlong *)(lVar22 + 0x10) + 0x1fU & 0xffffffffffffffe0) +
              *(longlong *)(lVar22 + 0x1c8)) {
            FUN_18002e90c(lVar25 + 0xa498,0);
          }
          uStack_128 = (uint *)(*plVar31 + 0xa498);
          uStack_f0 = (uint *)(ulonglong)(uStack_120 << 4);
          lVar22 = *(longlong *)(*plVar31 + 0xa4c0);
          uVar8 = *(longlong *)(lVar22 + 0x10) + 0x1fU & 0xffffffffffffffe0;
          lVar25 = (uStack_120 << 4) + uVar8;
          if (*(ulonglong *)(lVar22 + 0x18) < (ulonglong)(*(longlong *)(lVar22 + 0x1c8) + lVar25)) {
            FUN_18002e90c(uStack_128,
                          (undefined1 *)((longlong)uStack_f0 + *(longlong *)(lVar22 + 0x1c8)));
            lVar25 = *(longlong *)((longlong)uStack_128 + 0x28);
            *(uint **)(lVar25 + 0x10) = uStack_f0;
            lVar18 = *(longlong *)(lVar25 + 0x28);
            uStack_128 = *(uint **)(lVar25 + 0x20);
          }
          else {
            *(longlong *)(lVar22 + 0x10) = lVar25;
            lVar18 = *(longlong *)(lVar22 + 0x28) + uVar8;
            uStack_128 = (uint *)(*(longlong *)(lVar22 + 0x20) + uVar8);
          }
          puVar9 = (uint *)((ulonglong)uStack_120 << 4);
          if (uStack_f0 <= (uint *)((ulonglong)uStack_120 << 4)) {
            puVar9 = uStack_f0;
          }
          uVar8 = (ulonglong)puStack_118 & 0xffffffff;
          FUN_180d81d00(lVar18,*(undefined8 *)
                                (param_1 + 0x8258 + ((ulonglong)puStack_118 & 0xffffffff) * 8),
                        puVar9);
          *(uint *)(param_1 + 0x830c + uVar8 * 4) = uStack_120;
          *(int *)(param_1 + 0x822d + uVar8 * 8) = (int)uStack_128;
          lVar22 = *(longlong *)(&DAT_0000a490 + *plVar31);
          lVar18 = *(longlong *)(lVar22 + 0x28);
          lVar1 = *(longlong *)(lVar18 + 0x10);
          lVar25 = lVar1 + 8;
          if (*(ulonglong *)(lVar18 + 0x18) < (ulonglong)(*(longlong *)(lVar18 + 0x1c8) + lVar25)) {
            FUN_180031210(lVar22,*(longlong *)(lVar18 + 0x1c8) + 8);
            lVar25 = *(longlong *)(lVar22 + 0x28);
            *(undefined8 *)(lVar25 + 0x10) = 8;
            piVar20 = *(int **)(lVar25 + 0x28);
          }
          else {
            *(longlong *)(lVar18 + 0x10) = lVar25;
            piVar20 = (int *)(*(longlong *)(lVar18 + 0x28) + lVar1);
          }
          uVar29 = ~(1 << ((byte)puStack_118 & 0x1f));
          *piVar20 = ((uint)puStack_118 + 0x782b) * 0x10000;
          piVar20[1] = (int)uStack_128;
          *(uint *)(param_1 + 0x8330) = *(uint *)(param_1 + 0x8330) & uVar29;
          *(uint *)(param_1 + 0x8334) = *(uint *)(param_1 + 0x8334) & uVar29;
          uStack_100 = uStack_100 & uVar29;
        }
      }
    }
    FUN_1800367f0(plVar31);
    FUN_180036380(param_1 + 0x8640,0);
    FUN_180021060(param_1 + 0x8b38);
    if ((*(char *)(param_1 + 0x2e4) != '\0') &&
       (*(char *)(*(longlong *)(&DAT_000092f0 + param_1) + 0x107e) != '\0')) {
      FUN_1800982e4(param_1);
    }
    lVar25 = lVar32;
    if (lVar32 == -0x28) {
      lVar25 = 0;
    }
    lVar22 = 0;
    if (lVar25 != -0x28) {
      lVar22 = lVar25;
    }
    if (*(int *)(lVar22 + 0x50) == 1) {
      uVar29 = 0x3de7f;
      puStack_118 = (uint *)CONCAT44(puStack_118._4_4_,0x3de7f);
      if (*(longlong *)(&DAT_0000a490 + *(longlong *)(lVar25 + 0x90)) == lVar25 + 0x98)
      goto LAB_180031e72;
    }
    else {
LAB_180031e72:
      uVar29 = 0x7de7f;
      puStack_118 = (uint *)CONCAT44(puStack_118._4_4_,0x7de7f);
    }
    puVar9 = (uint *)(lVar32 + 0x2c0);
    bVar21 = *(byte *)(lVar32 + 0x2d8);
    uStack_128 = (uint *)(lVar32 + 0x48);
    if (bVar21 != 0) {
      if ((*(char *)(*(longlong *)(*(longlong *)uStack_128 + 0x3f8) + 0xb64) == '\0') &&
         ((*(byte *)(lVar32 + 0x2d0) & 8) != 0)) {
        if ((*(byte *)(lVar32 + 0x2d4) & 2) != 0) {
          bVar21 = bVar21 & 0xfe;
          *(byte *)(lVar32 + 0x2d8) = bVar21;
        }
        if ((*(byte *)(lVar32 + 0x2d4) & 4) != 0) {
          bVar21 = bVar21 & 0xfd;
          *(byte *)(lVar32 + 0x2d8) = bVar21;
        }
        if (bVar21 == 0) goto LAB_180031f16;
      }
      uVar5 = *puVar9 & uVar29;
      if (((uVar5 & 3) != 0) && (*(byte *)(lVar32 + 0x2d8) = bVar21 & 0xfe, uVar5 >> 0x12 != 0)) {
        *(byte *)(lVar32 + 0x2d8) = bVar21 & 0xfc;
      }
    }
LAB_180031f16:
    uVar5 = *(uint *)(lVar32 + 0x2e0);
    if (uVar5 != 0) {
      if (*(char *)(*(longlong *)(*(longlong *)uStack_128 + 0x3f8) + 0xb64) == '\0') {
        *(uint *)(lVar32 + 0x2e0) = ~*(uint *)(lVar32 + 0x2d0) & uVar5;
      }
      else {
        *(uint *)(lVar32 + 0x2e0) = ~(*puVar9 & uVar29) & uVar5;
      }
    }
    lVar22 = *(longlong *)(*(longlong *)(*(longlong *)(lVar32 + 0x86d0) + 0x48) + 0x3f8);
    if ((*(byte *)(lVar22 + 0x1640) & 3) != 0) {
      if (*(char *)(lVar22 + 0xb64) == '\0') {
        if ((*(byte *)(lVar32 + 0x2d5) & 0xa1) != 0) {
          if (*(int *)(lVar32 + 0x8714) == -1) goto LAB_18003289b;
          *(undefined4 *)(lVar32 + 0x8a90) = *(undefined4 *)(lVar32 + 0x8a94);
        }
      }
      else if ((*(byte *)(lVar32 + 0x2c4) & 10) != 0) {
        if (*(int *)(lVar32 + 0x8714) == -1) {
LAB_18003289b:
          uVar34 = 0;
        }
        else {
          uVar34 = *(undefined4 *)(lVar32 + 0x8a94);
        }
        *(undefined4 *)(lVar32 + 0x8a90) = uVar34;
      }
    }
    if ((*(char *)(*(longlong *)(*(longlong *)uStack_128 + 0x3f8) + 0xb64) == '\0') &&
       ((piVar20 = (int *)(lVar32 + 0x2d0), *piVar20 != 0 ||
        ((*(char *)(lVar32 + 0x2d4) != '\0' && (*(char *)(lVar32 + 0x2d5) != '\0')))))) {
      if ((*puVar9 != 0) || (*(char *)(lVar32 + 0x2c4) != '\0')) {
        FUN_180023284(lVar32,piVar20,puVar9);
      }
      bVar21 = *(byte *)(lVar32 + 0x2d4);
      if ((bVar21 & 2) == 0) {
        if ((char)bVar21 < '\0') {
          bVar15 = 0x80;
        }
        else if ((bVar21 & 0x40) == 0) {
          bVar15 = 0;
          if ((bVar21 & 0x10) != 0) {
            bVar15 = 0x10;
          }
        }
        else {
          bVar15 = 0x40;
        }
      }
      else {
        bVar15 = 2;
      }
      bVar2 = bVar15 | 4;
      if ((bVar21 & 4) == 0) {
        bVar2 = bVar15;
      }
      bVar21 = *(byte *)(lVar32 + 0x2d5);
      if ((bVar21 & 1) == 0) {
        if ((bVar21 & 0x20) == 0) {
          uVar30 = 0;
          if ((char)bVar21 < '\0') {
            uVar30 = 0x80;
          }
        }
        else {
          uVar30 = 0x20;
        }
      }
      else {
        uVar30 = 1;
      }
      uStack_190 = 0;
      uStack_198 = uStack_198 & 0xffffffffffffff00;
      FUN_18001d530(lVar25,*piVar20,bVar2,uVar30);
      *(undefined2 *)(lVar32 + 0x2d4) = 0;
      *piVar20 = 0;
    }
    puVar9 = uStack_128;
    uVar29 = (uint)puStack_118 & *(uint *)(lVar32 + 0x2c0);
    if ((uVar29 == 0) && ((*(byte *)(lVar32 + 0x2c4) & 0x1f) == 0)) {
      uVar8 = 0x800;
    }
    else {
      bVar21 = *(byte *)(lVar32 + 0x2c4) & 0x1f;
      lVar22 = 0;
      if (lVar25 != -0x28) {
        lVar22 = lVar25;
      }
      if ((*(int *)(lVar22 + 0x50) == 1) &&
         (*(longlong *)(&DAT_0000a490 + *(longlong *)(lVar25 + 0x90)) != lVar25 + 0x98)) {
        uVar5 = 0x40;
      }
      else {
        uVar5 = 0x60;
      }
      uStack_103 = (uVar29 & 0x8000) != 0;
      bVar33 = 1 < ((byte)uVar29 & 3);
      uStack_104 = ((byte)uVar29 & 7) == 7;
      uStack_105 = (uVar29 & 8) != 0;
      uStack_106 = (uVar29 & 0x10) != 0;
      uStack_f0 = (uint *)(CONCAT44(uStack_f0._4_4_,uVar29) & 0xffffffff00000010);
      uStack_107 = (uVar29 & 0x4000) != 0;
      uStack_f8 = (uint *)(CONCAT44(uStack_f8._4_4_,uVar29) & 0xffffffff00004000);
      uStack_108 = (uVar29 & 0x20) != 0;
      uStack_128 = (uint *)(CONCAT44(uStack_128._4_4_,uVar29) & 0xffffffff00000020);
      uStack_109 = (uVar5 & uVar29) == uVar5;
      uStack_fc = uVar29 & 0x20000;
      uStack_10a = uStack_fc != 0;
      uStack_100 = uVar29 & 0x40000;
      uStack_10b = uStack_100 != 0;
      uStack_120 = uVar29 & 0x200;
      uStack_10c = uStack_120 != 0;
      uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar29) & 0xffffffff00000400;
      uStack_10d = (uVar29 & 0x400) != 0;
      uStack_c8 = 0x800;
      uStack_d8 = (uint *)(CONCAT44(uStack_d8._4_4_,uVar29) & 0xffffffff00000800);
      uStack_10e = (uVar29 & 0x800) != 0;
      uStack_e8 = (uint *)(CONCAT44(uStack_e8._4_4_,uVar29) & 0xffffffff00001000);
      uStack_10f = (uVar29 & 0x1000) != 0;
      uStack_110 = (uVar29 & 0x10000) != 0;
      if (((((bVar21 != 0) || ((uVar29 & 0x8000) != 0)) || (bVar33)) ||
          (((uVar29 & 8) != 0 || ((int)uStack_f0 != 0)))) ||
         (((((int)uStack_f8 != 0 || (((int)uStack_128 != 0 || ((uVar5 & uVar29) == uVar5)))) ||
           (uStack_fc != 0)) ||
          ((((uStack_100 != 0 || (uStack_120 != 0)) || ((uVar29 & 0x400) != 0)) ||
           ((((uVar29 & 0x800) != 0 || ((uVar29 & 0x1000) != 0)) || ((uVar29 & 0x10000) != 0))))))))
      {
        lVar22 = lVar25;
        if (lVar25 == -0x28) {
          lVar22 = 0;
        }
        if ((*(int *)(lVar22 + 0x50) == 0) && (*(int *)(&DAT_0000a7a0 + lVar25) == 0x1000)) {
LAB_180032b32:
          bVar21 = bVar21 | 2;
        }
        else {
          lVar18 = 0;
          if (lVar22 != -0x28) {
            lVar18 = lVar22;
          }
          if ((*(int *)(lVar18 + 0x50) == 1) &&
             (*(longlong *)(&DAT_0000a490 + *(longlong *)(lVar22 + 0x90)) != lVar22 + 0x98))
          goto LAB_180032b32;
          piVar20 = (int *)(lVar25 + 0x50);
          if (lVar25 == -0x28) {
            piVar20 = (int *)&DAT_00000050;
          }
          if ((*piVar20 == 1) &&
             (*(longlong *)(&DAT_0000a490 + *(longlong *)(lVar25 + 0x90)) != lVar25 + 0x98))
          goto LAB_180032b32;
        }
        uStack_148 = CONCAT71(uStack_148._1_7_,uStack_10d);
        uStack_150 = CONCAT71(uStack_150._1_7_,uStack_10c);
        uStack_158 = CONCAT71(uStack_158._1_7_,uStack_10b);
        uStack_160 = CONCAT71(uStack_160._1_7_,uStack_10a);
        puStack_170 = (undefined8 *)CONCAT71(puStack_170._1_7_,uStack_108);
        uStack_178 = CONCAT31(uStack_178._1_3_,uStack_107);
        uStack_180 = CONCAT71(uStack_180._1_7_,uStack_106);
        uStack_188 = CONCAT31(uStack_188._1_3_,uStack_105);
        uStack_190 = CONCAT71(uStack_190._1_7_,uStack_104);
        uStack_198 = CONCAT71(uStack_198._1_7_,bVar33);
        uStack_168 = uStack_109;
        uStack_140 = uStack_10e;
        uStack_138 = uStack_10f;
        uStack_130 = uStack_110;
        FUN_180020c0c(*(undefined8 *)puVar9,lVar25,bVar21,uStack_103);
        if ((bVar21 & 2) != 0) {
          *(undefined1 *)(lVar25 + 0xc8be) = 0;
          FUN_18001dab8(lVar32);
        }
      }
      *(uint *)(lVar32 + 0x2c0) = *(uint *)(lVar32 + 0x2c0) & ~(uint)puStack_118;
      *(byte *)(lVar32 + 0x2c4) = *(byte *)(lVar32 + 0x2c4) & 0xe0;
      uVar8 = uStack_c8;
    }
    lVar32 = *(longlong *)(&DAT_000092f0 + param_1);
    if (*(char *)(lVar32 + 0x54) == '\0') {
      if (((*(byte *)(param_1 + 0xb9d0) & *(byte *)(lVar32 + 0x1097)) != 0) &&
         (*(int *)(param_1 + 0xb9d8) != *(int *)(lVar32 + 0x10ac))) {
        if (*(uint *)(param_1 + 0xb9c0) < uVar8) {
          uVar8 = (ulonglong)*(uint *)(param_1 + 0xb9c0);
        }
        FUN_180d81d00(param_1 + 0xb1b4,*(undefined8 *)(param_1 + 0xb9c8),uVar8);
        *(undefined4 *)(param_1 + 0xb9d0) = 0;
      }
      if (*(int *)(lVar32 + 0x184) < 4) {
        uStack_128 = (uint *)(&DAT_0000ad24 + param_1);
        uStack_f8 = (uint *)(&DAT_0000ad20 + param_1);
        if (lVar19 == 0) {
          uStack_128 = (uint *)&DAT_0000ad24;
          uStack_f8 = (uint *)&DAT_0000ad20;
        }
        uVar5 = (*uStack_128 | *uStack_f8) & 0x1f;
        plVar31 = (longlong *)(&DAT_000092f0 + param_1);
        uVar29 = uVar5;
        if (lVar19 == 0) {
          plVar31 = (longlong *)&DAT_000092f0;
        }
        while( true ) {
          uVar16 = 0;
          if (uVar29 != 0) {
            for (; (uVar29 >> uVar16 & 1) == 0; uVar16 = uVar16 + 1) {
            }
          }
          if (uVar29 == 0) break;
          uVar27 = ~(1 << ((byte)uVar16 & 0x1f));
          uVar29 = uVar29 & uVar27;
          uVar27 = uVar5 & uVar27;
          if (*(short *)(*plVar31 + 0x1098 + (ulonglong)uVar16 * 2) == 0) {
            uVar27 = uVar5;
          }
          uVar5 = uVar27;
        }
        if (uVar5 == 0) {
          if ((((&DAT_0000ad20)[param_1] & 1) != 0) || (((&DAT_0000ad24)[param_1] & 1) != 0)) {
            lVar25 = (longlong)
                     *(int *)(&DAT_1819a7d18 + (ulonglong)*(ushort *)(lVar32 + 0x1098) * 0x10) +
                     -0x28 + lVar19;
            if (lVar19 == 0) {
              lVar25 = (longlong)
                       *(int *)(&DAT_1819a7d18 + (ulonglong)*(ushort *)(lVar32 + 0x1098) * 0x10);
            }
            (*(code *)(&PTR_thunk_FUN_180ca9348_1819a7d10)
                      [(ulonglong)*(ushort *)(lVar32 + 0x1098) * 2])(lVar25);
          }
          for (uVar29 = 1; uVar29 < 4; uVar29 = uVar29 + 1) {
            uVar5 = 1 << ((byte)uVar29 & 0x1f);
            if (((*(uint *)(&DAT_0000ad20 + param_1) & uVar5) != 0) ||
               ((*(uint *)(&DAT_0000ad24 + param_1) & uVar5) != 0)) {
              lVar22 = (ulonglong)*(ushort *)(lVar32 + 0x1098 + (ulonglong)uVar29 * 2) +
                       (ulonglong)uVar29 * 0x20;
              lVar25 = (longlong)*(int *)(&DAT_1819a7d18 + lVar22 * 0x10) + -0x28 + lVar19;
              if (lVar19 == 0) {
                lVar25 = (longlong)*(int *)(&DAT_1819a7d18 + lVar22 * 0x10);
              }
              (*(code *)(&PTR_thunk_FUN_180ca9348_1819a7d10)[lVar22 * 2])(lVar25);
            }
          }
          if (((*(uint *)(&DAT_0000ad20 + param_1) & 0x10) != 0) ||
             (((&DAT_0000ad24)[param_1] & 0x10) != 0)) {
            lVar25 = (longlong)
                     *(int *)(&DAT_1819a8518 + (ulonglong)*(ushort *)(lVar32 + 0x10a0) * 0x10) +
                     -0x28 + lVar19;
            if (lVar19 == 0) {
              lVar25 = (longlong)
                       *(int *)(&DAT_1819a8518 + (ulonglong)*(ushort *)(lVar32 + 0x10a0) * 0x10);
            }
            (*(code *)(&PTR_thunk_FUN_180ca5b28_1819a8510)
                      [(ulonglong)*(ushort *)(lVar32 + 0x10a0) * 2])(lVar25);
          }
        }
        else {
          puVar11 = (ulonglong *)(&DAT_0000a490 + param_1);
          if (lVar19 == 0) {
            puVar11 = (ulonglong *)&DAT_0000a490;
          }
          uStack_c8 = *puVar11;
          lVar22 = *(longlong *)(uStack_c8 + 0x28);
          lVar18 = *(longlong *)(lVar22 + 0x10);
          lVar25 = lVar18 + 8;
          if (*(ulonglong *)(lVar22 + 0x18) < (ulonglong)(*(longlong *)(lVar22 + 0x1c8) + lVar25)) {
            FUN_180031210(uStack_c8,*(longlong *)(lVar22 + 0x1c8) + 8);
            lVar25 = *(longlong *)(uStack_c8 + 0x28);
            *(undefined8 *)(lVar25 + 0x10) = 8;
            piVar20 = *(int **)(lVar25 + 0x28);
          }
          else {
            *(longlong *)(lVar22 + 0x10) = lVar25;
            piVar20 = (int *)(lVar18 + *(longlong *)(lVar22 + 0x28));
          }
          plVar31 = (longlong *)(param_1 + 0x48);
          if (lVar19 == 0) {
            plVar31 = (longlong *)&DAT_00000048;
          }
          iVar6 = *(int *)(*plVar31 + 0x16610);
          *piVar20 = (uVar5 | 0x786d00) << 8;
          piVar20[1] = iVar6;
          *uStack_f8 = *uStack_f8 & ~uVar5;
          *uStack_128 = *uStack_128 & ~uVar5;
          puVar12 = &DAT_0000ad30 + param_1;
          if (lVar19 == 0) {
            puVar12 = &DAT_0000ad30;
          }
          *puVar12 = 1;
          for (uVar29 = 0; uVar29 < 5; uVar29 = uVar29 + 1) {
            uVar5 = 1 << ((byte)uVar29 & 0x1f);
            if (((*(uint *)(&DAT_0000ad20 + param_1) & uVar5) != 0) ||
               ((*(uint *)(&DAT_0000ad24 + param_1) & uVar5) != 0)) {
              lVar22 = (ulonglong)*(ushort *)(lVar32 + 0x1098 + (ulonglong)uVar29 * 2) +
                       (ulonglong)uVar29 * 0x20;
              lVar25 = (longlong)*(int *)(&DAT_1819a7d18 + lVar22 * 0x10) + -0x28 + lVar19;
              if (lVar19 == 0) {
                lVar25 = (longlong)*(int *)(&DAT_1819a7d18 + lVar22 * 0x10);
              }
              (*(code *)(&PTR_thunk_FUN_180ca9348_1819a7d10)[lVar22 * 2])(lVar25);
            }
          }
        }
      }
      else {
        if ((((&DAT_0000ad20)[param_1] & 0x10) != 0) || (((&DAT_0000ad24)[param_1] & 0x10) != 0)) {
          lVar25 = (longlong)
                   *(int *)(&DAT_1819a8518 + (ulonglong)*(ushort *)(lVar32 + 0x10a0) * 0x10) + -0x28
                   + lVar19;
          if (lVar19 == 0) {
            lVar25 = (longlong)
                     *(int *)(&DAT_1819a8518 + (ulonglong)*(ushort *)(lVar32 + 0x10a0) * 0x10);
          }
          (*(code *)(&PTR_thunk_FUN_180ca5b28_1819a8510)
                    [(ulonglong)*(ushort *)(lVar32 + 0x10a0) * 2])(lVar25);
        }
        lVar32 = lVar19;
        if (lVar19 == 0) {
          lVar32 = 0x28;
        }
        uVar8 = lVar32 - 0x28;
        puVar13 = (undefined8 *)(&DAT_000092f0 + param_1);
        if (lVar19 == 0) {
          puVar13 = (undefined8 *)&DAT_000092f0;
        }
        puVar9 = (uint *)*puVar13;
        uVar29 = 5;
        uStack_128 = puVar9;
        uStack_c8 = uVar8;
        while( true ) {
          puStack_118 = (uint *)CONCAT44(puStack_118._4_4_,uVar29);
          if (6 < uVar29) break;
          uVar5 = 1 << ((byte)uVar29 & 0x1f);
          puVar14 = (uint *)(&DAT_0000ad20 + param_1);
          if (lVar19 == 0) {
            puVar14 = (uint *)&DAT_0000ad20;
          }
          if ((*puVar14 & uVar5) == 0) {
            puVar14 = (uint *)(&DAT_0000ad24 + param_1);
            if (lVar19 == 0) {
              puVar14 = (uint *)&DAT_0000ad24;
            }
            if ((*puVar14 & uVar5) != 0) goto LAB_1800336e0;
          }
          else {
LAB_1800336e0:
            lVar32 = (ulonglong)*(ushort *)((longlong)puVar9 + (ulonglong)uVar29 * 2 + 0x1098) +
                     (ulonglong)uVar29 * 0x20;
            (*(code *)(&PTR_thunk_FUN_180ca9348_1819a7d10)[lVar32 * 2])
                      ((longlong)*(int *)(&DAT_1819a7d18 + lVar32 * 0x10) + uVar8);
            uVar8 = uStack_c8;
            puVar9 = uStack_128;
            uVar29 = (uint)puStack_118;
          }
          uVar29 = uVar29 + 1;
        }
      }
      *(undefined4 *)(&DAT_0000ad20 + param_1) = 0;
      *(undefined4 *)(&DAT_0000ad24 + param_1) = *(undefined4 *)(param_1 + 0xad28);
    }
    else {
      FUN_180414664(param_1);
    }
    *(undefined4 *)(param_1 + 0xa79c) = 0;
  }
  else {
    *(undefined4 *)(&DAT_0000a7a0 + lVar32) = 2;
    if (*(char *)(param_1 + 0xc218) != '\0') {
      bVar21 = *(byte *)(param_1 + 0xc214);
      if (*(uint *)(param_1 + 0xc210) != 0) {
        *(uint *)(lVar32 + 0x2c0) = *(uint *)(lVar32 + 0x2c0) | *(uint *)(param_1 + 0xc210);
      }
      if (bVar21 != 0) {
        *(byte *)(lVar32 + 0x2c4) = *(byte *)(lVar32 + 0x2c4) | bVar21;
      }
      *(ushort *)(lVar32 + 0x2a) = *(ushort *)(lVar32 + 0x2a) | 0x1000;
      *(undefined2 *)(param_1 + 0xc214) = 0;
      *(undefined4 *)(param_1 + 0xc210) = 0;
      *(undefined1 *)(param_1 + 0xc218) = 0;
      *(undefined8 *)(param_1 + 0xc220) = 0;
    }
    *(undefined1 *)(param_1 + 0xc22a) = 0;
    (*(code *)(&DAT_181ade2b0)[(ulonglong)*(ushort *)(param_1 + 0x2a) * 2])
              ((int)(&DAT_181ade2b8)[(ulonglong)*(ushort *)(param_1 + 0x2a) * 4] + lVar32);
  }
  uVar29 = 0x2000;
  *(undefined2 *)(param_1 + 0x2a) = *(undefined2 *)(param_1 + 0x2c);
  if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x3f8) + 0x138) != '\0') {
    lVar19 = param_1;
    if (param_1 == -0x28) {
      lVar19 = 0;
    }
    FUN_180c5c8c0(lVar19);
  }
  if (*(char *)(param_1 + 0xc499) != '\0') {
    uStack_198 = *(ulonglong *)(param_1 + 0xc480);
    *(ulonglong *)(param_1 + 0xc490) = uStack_198;
    *(undefined2 *)(param_1 + 0xc498) = 1;
    uStack_190 = CONCAT71(uStack_190._1_7_,1);
    FUN_180c3b8ac(*(undefined8 *)(param_1 + 0xc478),
                  *(undefined8 *)(&DAT_0000a490 + *(longlong *)(param_1 + 0xc470)),
                  *(undefined4 *)(*(longlong *)(param_1 + 0xc470) + 0x50),0x2000);
  }
  if (*(char *)(param_1 + 0xc4c5) != '\0') {
    *(undefined4 *)(param_1 + 0xc4c0) = *(undefined4 *)(param_1 + 0xc4b8);
    *(undefined2 *)(param_1 + 0xc4c4) = 1;
    uStack_190 = CONCAT71(uStack_190._1_7_,1);
    uStack_198 = CONCAT44(uStack_198._4_4_,*(undefined4 *)(param_1 + 0xc4b8));
    FUN_180c3b818(*(undefined8 *)(param_1 + 0xc4a0),
                  *(undefined8 *)(&DAT_0000a490 + *(longlong *)(param_1 + 0xc4a8)),
                  *(undefined4 *)(*(longlong *)(param_1 + 0xc4a8) + 0x50),0x2000);
  }
  if ((*(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x3f8) + 0x2048) & 0xf00) != 0) {
    piVar20 = (int *)(&DAT_0000c8b8 + param_1);
    if (param_1 == -0x28) {
      piVar20 = (int *)&DAT_0000c8b8;
    }
    *piVar20 = *piVar20 + 1;
  }
  lVar19 = *(longlong *)(&DAT_0000a490 + param_1);
  lVar32 = *(longlong *)(lVar19 + 0x28);
  lVar25 = *(longlong *)(lVar32 + 0x10);
  if (*(char *)(*(longlong *)(&DAT_000092f0 + param_1) + 0x2c6e) == '\0') {
    if (*(ulonglong *)(lVar32 + 0x18) < (ulonglong)(*(longlong *)(lVar32 + 0x1c8) + lVar25 + 0x1c))
    {
      FUN_180031210(lVar19,*(longlong *)(lVar32 + 0x1c8) + 0x1c);
      lVar19 = *(longlong *)(lVar19 + 0x28);
      *(undefined8 *)(lVar19 + 0x10) = 0x1c;
      puVar9 = *(uint **)(lVar19 + 0x28);
    }
    else {
      *(longlong *)(lVar32 + 0x10) = lVar25 + 0x1c;
      puVar9 = (uint *)(*(longlong *)(lVar32 + 0x28) + lVar25);
    }
    iVar6 = *(int *)(param_1 + 0x2e8);
    *puVar9 = (uint)*(byte *)(param_1 + 0x2e5) << 8 | 0x7b000005;
    puVar9[1] = 0x100;
    puVar9[2] = uStack_d0;
    puVar9[3] = uStack_cc;
    puVar9[4] = param_3 * iVar6;
    puVar9[5] = param_6;
    puVar9[6] = param_5;
    if (*(char *)(*(longlong *)(&DAT_000092f0 + *(longlong *)(param_1 + 0x58)) + 0x265e) != '\0') {
      cVar3 = *(char *)(param_1 + 0x61);
      goto joined_r0x00018003233f;
    }
  }
  else {
    if (*(ulonglong *)(lVar32 + 0x18) < (ulonglong)(*(longlong *)(lVar32 + 0x1c8) + lVar25 + 0x28))
    {
      FUN_180031210(lVar19,*(longlong *)(lVar32 + 0x1c8) + 0x28);
      lVar19 = *(longlong *)(lVar19 + 0x28);
      *(undefined8 *)(lVar19 + 0x10) = 0x28;
      puVar9 = *(uint **)(lVar19 + 0x28);
    }
    else {
      *(longlong *)(lVar32 + 0x10) = lVar25 + 0x28;
      puVar9 = (uint *)(*(longlong *)(lVar32 + 0x28) + lVar25);
    }
    iVar6 = *(int *)(param_1 + 0x2e8);
    *puVar9 = (uint)*(byte *)(param_1 + 0x2e5) << 8 | 0x7b000808;
    puVar9[1] = 0x100;
    puVar9[2] = uStack_d0;
    puVar9[3] = uStack_cc;
    puVar9[4] = param_3 * iVar6;
    puVar9[5] = param_6;
    puVar9[6] = param_5;
    puVar9[7] = 0;
    puVar9[8] = 0;
    puVar9[9] = 0;
    if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x3f8) + 0xc6d) != '\0') {
      if (*(char *)(param_1 + 0xc629) != '\0') {
        puVar9[7] = *(uint *)(param_1 + 0xc624);
      }
      if (*(char *)(param_1 + 0xc628) != '\0') {
        puVar9[9] = *(uint *)(param_1 + 0xc620);
      }
    }
    if (*(char *)(*(longlong *)(&DAT_000092f0 + *(longlong *)(param_1 + 0x58)) + 0x265e) != '\0') {
      cVar3 = *(char *)(param_1 + 0x61);
joined_r0x00018003233f:
      if (cVar3 != '\0') goto LAB_180031a4e;
    }
  }
  uVar29 = 0;
LAB_180031a4e:
  *puVar9 = *puVar9 & 0xffffdfff;
  *puVar9 = *puVar9 | uVar29;
  *(undefined4 *)(param_1 + 0x2f4) = 0xffffffff;
  return;
}


// ===== 0x1800dd420 thunk_FUN_1800dd430 =====

void thunk_FUN_1800dd430(longlong param_1,int param_2,longlong param_3,uint param_4,uint param_5,
                        longlong *param_6,undefined4 param_7,undefined8 param_8)

{
  uint *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  uint7 uVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 in_stack_ffffffffffffff88;
  undefined4 uVar12;
  undefined8 in_stack_ffffffffffffff98;
  undefined4 uVar13;
  undefined4 auStack_48 [2];
  undefined8 auStack_40 [3];
  
  uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  uVar6 = 0;
  if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x3f8) + 0x7b2) != '\0') {
    lVar4 = param_1;
    if (param_1 == -0x28) {
      lVar4 = 0;
    }
    if (((*(int *)(lVar4 + 0x50) != 0) ||
        (*(char *)(*(longlong *)(param_1 + 0x48) + 0x1664a) != '\0')) &&
       (1 < *(int *)(param_1 + 0xc540) - 2U)) {
      uVar2 = FUN_1800e3c2c(param_1);
      FUN_180350488(uVar2,param_2,param_3,(ulonglong)param_4,CONCAT44(uVar12,param_5),param_6,
                    CONCAT44(uVar13,param_7),param_8);
      goto LAB_1800dd48a;
    }
  }
  *(undefined4 *)(param_1 + 0xc540) = 3;
LAB_1800dd48a:
  if ((*(char *)(*(longlong *)(param_1 + 0x48) + 0x165f2) != '\0') &&
     (*(char *)(param_1 + 0xc68c) != '\0')) {
    lVar4 = param_1;
    if (param_1 == -0x28) {
      lVar4 = 0;
    }
    FUN_180c5f3f0(lVar4,*(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x1d728));
    *(undefined1 *)(param_1 + 0xc68c) = 0;
    *(undefined4 *)(param_1 + 0x84b8) = *(undefined4 *)(*(longlong *)(param_1 + 0x48) + 0x141c8);
  }
  if (param_5 == 1) {
    lVar4 = *param_6;
    if (lVar4 != 0) {
      if (0x3b9d4e87 < param_2) {
        param_2 = 2;
      }
      lVar10 = (longlong)param_2;
      plVar11 = (longlong *)(((ulonglong)param_4 + 0xb9f + lVar10 * 0x20) * 0x10 + param_1);
      lVar3 = param_1;
      if (param_1 == -0x28) {
        lVar3 = 0;
      }
      *(undefined4 *)(lVar3 + 0xc750) = *(undefined4 *)(param_3 + 0x620);
      uVar8 = *(uint *)(param_1 + 0xbff0 + lVar10 * 4);
      if (uVar8 <= param_4) {
        uVar8 = param_4 + 1;
        *(uint *)(param_1 + 0xbff0 + lVar10 * 4) = uVar8;
      }
      if (param_3 == *(longlong *)(param_1 + 0xc000 + lVar10 * 8)) {
        uVar8 = *(uint *)(param_1 + 0xc018 + lVar10 * 4);
      }
      else {
        uVar8 = ~(-1 << ((byte)uVar8 & 0x1f));
        *(uint *)(param_1 + 0xc018 + lVar10 * 4) = uVar8;
        *(longlong *)(param_1 + 0xc000 + lVar10 * 8) = param_3;
      }
      uVar9 = (uint7)(uint3)(uVar8 >> 8);
      if (((lVar4 == *plVar11) && (*(int *)(lVar4 + 0x58) == (int)plVar11[1])) &&
         (uVar5 = 1 << ((byte)param_4 & 0x1f), (uVar5 & uVar8) == 0)) {
        lVar3 = (ulonglong)uVar9 << 8;
      }
      else {
        lVar3 = CONCAT71(uVar9,1);
        uVar5 = 1 << ((byte)param_4 & 0x1f);
      }
      *(undefined4 *)(plVar11 + 1) = *(undefined4 *)(lVar4 + 0x58);
      puVar1 = (uint *)(param_1 + 0xc018 + lVar10 * 4);
      *puVar1 = *puVar1 & ~uVar5;
      if (*(char *)(lVar4 + 0x5d) == '\0') {
        FUN_180398b1c(param_1,lVar4,lVar3);
      }
      else {
        FUN_1800dd970();
      }
      if (((*(char *)(*(longlong *)(param_1 + 0x48) + 0x78) == '\0') &&
          (lVar3 = *(longlong *)(lVar4 + 0x60), lVar3 != 0)) && (*(longlong *)(lVar3 + 0x18) != 0))
      {
        plVar7 = *(longlong **)(lVar3 + 0x10);
        while (plVar7 = (longlong *)*plVar7,
              plVar7 != (longlong *)*(longlong *)(*(longlong *)(lVar4 + 0x60) + 0x10)) {
          lVar3 = plVar7[3];
          FUN_1800a3e30(param_1 + 0xa278,*(undefined8 *)(*(longlong *)(lVar3 + 0x78) + 0x4b8),
                        *(undefined4 *)(lVar3 + 0x5c),*(undefined4 *)(lVar3 + 0x60));
        }
      }
      *plVar11 = lVar4;
    }
  }
  else {
    if (0x3b9d4e87 < param_2) {
      param_2 = 2;
    }
    auStack_40[0] = param_8;
    auStack_48[0] = param_7;
    if (param_1 == -0x28) {
      param_1 = 0;
    }
    while (uVar8 = (uint)uVar6, uVar8 < param_5) {
      if (param_6[uVar6] != 0) {
        FUN_1800dd7c0(param_1,param_6[uVar6],uVar8 + param_4,param_2,param_3,auStack_48,auStack_40);
      }
      uVar6 = (ulonglong)(uVar8 + 1);
    }
  }
  return;
}


// ===== 0x180205820 thunk_FUN_180205828 =====

void thunk_FUN_180205828(ulonglong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                        undefined4 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
                        undefined4 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  
  if ((*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x3f8) + 0x7b2) == '\0') ||
     (((*(int *)((-(ulonglong)(param_1 != 0xffffffffffffffd8) & param_1) + 0x50) == 0 &&
       (*(char *)(*(longlong *)(param_1 + 0x48) + 0x1664a) == '\0')) ||
      (*(int *)(param_1 + 0xc540) - 2U < 2)))) {
    *(undefined4 *)(param_1 + 0xc540) = 3;
  }
  else {
    uVar1 = FUN_1800e3c2c(param_1);
    FUN_1807ced78(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  }
  FUN_1802059d0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,0,0
                ,0,0);
  return;
}


// ===== 0x180078f20 thunk_FUN_180078f30 =====

void thunk_FUN_180078f30(longlong param_1,int param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x3f8) + 0x7b2) != '\0') {
    lVar1 = param_1;
    if (param_1 == -0x28) {
      lVar1 = 0;
    }
    if (((*(int *)(lVar1 + 0x50) != 0) ||
        (*(char *)(*(longlong *)(param_1 + 0x48) + 0x1664a) != '\0')) &&
       (1 < *(int *)(param_1 + 0xc540) - 2U)) {
      puVar2 = (undefined4 *)FUN_1800e3c2c(param_1);
      *puVar2 = 9;
      puVar2[2] = param_2;
      *(longlong *)(puVar2 + 4) = param_3;
      goto LAB_180078f67;
    }
  }
  *(undefined4 *)(param_1 + 0xc540) = 3;
LAB_180078f67:
  if (param_2 == 0) {
    FUN_180079030(param_1,param_3,0);
  }
  else if (param_2 == 1) {
    FUN_1802b9cdc(param_1,param_3);
  }
  else if (param_2 == 0x3b9d4e88) {
    lVar1 = param_3 + 0x20;
    if (param_3 == 0) {
      lVar1 = 0;
    }
    if (lVar1 == 0) {
      lVar1 = 0;
      if (param_3 != 0) {
        lVar1 = param_3 + 0x20;
      }
    }
    else {
    }
    FUN_180c48078(param_1,lVar1);
  }
  return;
}


// ===== 0x1800a7eb0 thunk_FUN_1800a7ec0 =====

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void thunk_FUN_1800a7ec0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                        undefined4 param_5)

{
  ushort *puVar1;
  uint *puVar2;
  longlong *plVar3;
  byte bVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  bool bVar12;
  ushort uVar13;
  ulonglong uVar14;
  longlong *plVar15;
  undefined4 *puVar16;
  longlong lVar17;
  ushort uVar18;
  uint uVar19;
  undefined8 *puVar20;
  longlong *plVar21;
  longlong *plVar22;
  longlong lVar23;
  uint uVar24;
  undefined8 *puVar25;
  undefined4 uVar26;
  undefined1 auStack_178 [32];
  undefined8 uStack_158;
  ulonglong uStack_150;
  undefined4 uStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined8 *puStack_130;
  undefined1 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulonglong uStack_110;
  undefined8 uStack_108;
  undefined1 uStack_100;
  undefined4 uStack_f8;
  longlong *plStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  longlong lStack_e0;
  longlong *plStack_d8;
  longlong *plStack_d0;
  longlong *plStack_c8;
  longlong lStack_c0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  ulonglong uStack_38;
  
  uStack_38 = DAT_1818ba280 ^ (ulonglong)auStack_178;
  uStack_f8 = param_4;
  uStack_e8 = param_3;
  uStack_e4 = param_2;
  lStack_e0 = param_1;
  if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x3f8) + 0x7b2) == '\0') {
LAB_1800a7f31:
    *(undefined4 *)(param_1 + 0xc540) = 3;
  }
  else {
    lVar23 = param_1;
    if (param_1 == -0x28) {
      lVar23 = 0;
    }
    if (((*(int *)(lVar23 + 0x50) == 0) &&
        (*(char *)(*(longlong *)(param_1 + 0x48) + 0x1664a) == '\0')) ||
       (*(int *)(param_1 + 0xc540) - 2U < 2)) goto LAB_1800a7f31;
    puVar16 = (undefined4 *)FUN_1800e3c2c(param_1);
    *puVar16 = 0x19;
    puVar16[2] = param_2;
    puVar16[3] = param_3;
    puVar16[4] = param_4;
    puVar16[5] = param_5;
  }
  if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x3f8) + 0x7d3) != '\0') {
    FUN_180c47128(param_1,param_1 + 0xc1b0);
    *(undefined1 *)(param_1 + 0xc1d9) = 1;
  }
  puVar25 = *(undefined8 **)(param_1 + 0xc578);
  for (puVar20 = (undefined8 *)*puVar25; puVar20 != puVar25; puVar20 = (undefined8 *)*puVar20) {
    uStack_a8 = puVar20[2];
    uStack_a0 = puVar20[3];
    uStack_90 = puVar20[5];
    uStack_88 = puVar20[6];
    uStack_80 = puVar20[7];
    uStack_78 = puVar20[8];
    uStack_70 = puVar20[9];
    uStack_68 = puVar20[10];
    uStack_60 = puVar20[0xb];
    uStack_58 = *(undefined4 *)(puVar20 + 0xc);
    uStack_54 = *(undefined4 *)((longlong)puVar20 + 100);
    uStack_50 = *(undefined4 *)(puVar20 + 0xd);
    uStack_4c = *(undefined4 *)((longlong)puVar20 + 0x6c);
    uStack_48 = puVar20[0xe];
    uStack_98 = 0;
    lVar23 = param_1;
    if (param_1 == -0x28) {
      lVar23 = 0;
    }
    if (*(char *)(*(longlong *)(*(longlong *)(lVar23 + 0x48) + 0x3f8) + 0xb64) == '\0') {
      lVar17 = 0;
      if (lVar23 != -0x28) {
        lVar17 = lVar23;
      }
      uStack_100 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_118 = CONCAT71(uStack_118._1_7_,1);
      uStack_120 = 0;
      uStack_128 = 0;
      puStack_130 = &uStack_a0;
      uStack_138 = 1;
      uStack_140 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_158 = (ulonglong)uStack_158._4_4_ << 0x20;
      FUN_1800a8aa0(lVar17,0,0,0);
    }
    else {
      uStack_110 = uStack_110 & 0xffffffffffffff00;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_128 = 1;
      puStack_130 = &uStack_a0;
      uStack_138 = 1;
      uStack_140 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_158 = (ulonglong)uStack_158._4_4_ << 0x20;
      FUN_1800aaaa8(lVar23,0,0);
    }
  }
  uVar14 = *(ulonglong *)(param_1 + 0xc580);
  if (uVar14 != 0) {
    if (uVar14 < *(ulonglong *)(param_1 + 0xc5b0) >> 3) {
      plVar5 = *(longlong **)(param_1 + 0xc578);
      plVar15 = (longlong *)*plVar5;
      if (plVar15 != plVar5) {
        lVar23 = *(longlong *)(param_1 + 0xc590);
        plStack_f0 = (longlong *)plVar15[1];
        lStack_c0 = lVar23;
        uVar14 = FUN_180033c2c(uVar14,plVar15 + 2);
        plVar3 = (longlong *)(lVar23 + (uVar14 & *(ulonglong *)(param_1 + 0xc5a8)) * 0x10);
        plStack_d0 = (longlong *)*plVar3;
        plStack_c8 = (longlong *)plVar3[1];
        plVar21 = plVar15;
LAB_1800a7fef:
        plVar22 = (longlong *)*plVar21;
        plStack_d8 = plVar22;
        uVar26 = (*(code *)(*(undefined8 **)(param_1 + 0xc570))[3])
                           (**(undefined8 **)(param_1 + 0xc570),plVar21);
        *(longlong *)(param_1 + 0xc580) = *(longlong *)(param_1 + 0xc580) + -1;
        if (plVar21 != plStack_c8) goto LAB_1800a835f;
        if (plStack_d0 == plVar15) {
          *plVar3 = (longlong)plVar5;
          plVar15 = plVar5;
        }
        else {
          plVar15 = plStack_f0;
        }
        plVar3[1] = (longlong)plVar15;
        while (plVar22 != plVar5) {
          uVar14 = FUN_180033c2c(uVar26,plVar22 + 2);
          puVar25 = (undefined8 *)(lStack_c0 + (uVar14 & *(ulonglong *)(param_1 + 0xc5a8)) * 0x10);
          plStack_d8 = (longlong *)puVar25[1];
          plVar15 = plVar22;
          while( true ) {
            plVar22 = (longlong *)*plVar15;
            uVar26 = (*(code *)(*(undefined8 **)(param_1 + 0xc570))[3])
                               (**(undefined8 **)(param_1 + 0xc570),plVar15);
            *(longlong *)(param_1 + 0xc580) = *(longlong *)(param_1 + 0xc580) + -1;
            if (plVar15 == plStack_d8) break;
            plVar15 = plVar22;
            if (plVar22 == plVar5) {
              *puVar25 = plVar22;
              *plStack_f0 = (longlong)plVar22;
              plVar22[1] = (longlong)plStack_f0;
              param_4 = uStack_f8;
              goto LAB_1800a8233;
            }
          }
          *puVar25 = plVar5;
          puVar25[1] = plVar5;
        }
        goto LAB_1800a8050;
      }
      goto LAB_1800a8063;
    }
    FUN_180033830(param_1 + 0xc570,*(undefined8 *)(param_1 + 0xc578));
    *(undefined8 *)*(undefined8 *)(param_1 + 0xc578) = *(undefined8 *)(param_1 + 0xc578);
    *(longlong *)(*(longlong *)(param_1 + 0xc578) + 8) = *(longlong *)(param_1 + 0xc578);
    *(undefined8 *)(param_1 + 0xc580) = 0;
    puVar25 = *(undefined8 **)(param_1 + 0xc590);
    uVar14 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0xc598) + (7 - (longlong)puVar25)) >>
             3;
    if (*(undefined8 **)(param_1 + 0xc598) < puVar25) {
      uVar14 = 0;
    }
    if (uVar14 != 0) {
      uVar6 = *(undefined8 *)(param_1 + 0xc578);
      for (; uVar14 != 0; uVar14 = uVar14 - 1) {
        *puVar25 = uVar6;
        puVar25 = puVar25 + 1;
      }
    }
  }
  goto LAB_1800a8233;
LAB_1800a835f:
  plVar21 = plVar22;
  if (plStack_d8 == plVar5) goto code_r0x0001800a836d;
  goto LAB_1800a7fef;
code_r0x0001800a836d:
  if (plStack_d0 == plVar15) {
    *plVar3 = (longlong)plVar22;
  }
LAB_1800a8050:
  *plStack_f0 = (longlong)plVar22;
  plVar22[1] = (longlong)plStack_f0;
LAB_1800a8063:
  param_4 = uStack_f8;
LAB_1800a8233:
  *(undefined1 *)(param_1 + 0x249) = 0;
  lVar23 = *(longlong *)(param_1 + 0xa128);
  if ((*(char *)(*(longlong *)(*(longlong *)(lVar23 + 0x48) + 0x3f8) + 0x87c) != '\0') ||
     (lVar17 = *(longlong *)(&DAT_000092f0 + lVar23), *(char *)(lVar17 + 0x265f) != '\0'))
  goto LAB_1800a825e;
  if (*(char *)(param_1 + 0xa131) != '\0') {
    if (*(char *)(param_1 + 0xa238) != '\x02') {
      *(undefined1 *)(param_1 + 0xa238) = 2;
      *(undefined1 *)(param_1 + 0xa135) = 1;
      *(uint *)(lVar23 + 0xa798) = *(uint *)(lVar23 + 0xa798) | 0x80;
      puVar2 = (uint *)(*(longlong *)(param_1 + 0xa128) + 0xa79c);
      *puVar2 = *puVar2 | 0x80;
    }
    goto LAB_1800a825e;
  }
  if ((*(int *)(param_1 + 0xa23c) == 0) && (*(char *)(lVar23 + 0x925b) == '\0')) {
    bVar12 = true;
  }
  else {
    bVar12 = false;
  }
  if ((*(uint *)(lVar17 + 0x678) & 0xdc0070) == 0) {
    if ((bVar12) && (*(char *)(lVar17 + 0x2610) == '\0')) goto LAB_1800a8691;
LAB_1800a874f:
    if (*(char *)(param_1 + 0xa238) == '\0') goto LAB_1800a825e;
    *(undefined1 *)(param_1 + 0xa238) = 0;
  }
  else {
    if ((!bVar12) ||
       (((*(char *)(lVar23 + 0x8ce6) != '\0' || (*(char *)(lVar23 + 0x8ce7) != '\0')) ||
        (*(char *)(lVar23 + 0x8ce8) != '\0')))) goto LAB_1800a874f;
LAB_1800a8691:
    if (*(char *)(param_1 + 0xa238) == '\x02') goto LAB_1800a825e;
    *(undefined1 *)(param_1 + 0xa238) = 2;
  }
  *(undefined1 *)(param_1 + 0xa135) = 1;
  *(uint *)(lVar23 + 0xa798) = *(uint *)(lVar23 + 0xa798) | 0x80;
  puVar2 = (uint *)(*(longlong *)(param_1 + 0xa128) + 0xa79c);
  *puVar2 = *puVar2 | 0x80;
LAB_1800a825e:
  if ((*(char *)(param_1 + 0x60) != '\0') && (*(char *)(param_1 + 0x80) != '\0')) {
    lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x48);
    lVar7 = *(longlong *)(&DAT_0000a490 + *(longlong *)(param_1 + 0x58));
    lVar8 = *(longlong *)(lVar7 + 0x28);
    lVar9 = *(longlong *)(lVar8 + 0x10);
    lVar23 = lVar9 + 0x10;
    if (*(ulonglong *)(lVar8 + 0x18) < (ulonglong)(*(longlong *)(lVar8 + 0x1c8) + lVar23)) {
      FUN_180031210(lVar7,*(longlong *)(lVar8 + 0x1c8) + 0x10);
      lVar23 = *(longlong *)(lVar7 + 0x28);
      *(undefined8 *)(lVar23 + 0x10) = 0x10;
      puVar16 = *(undefined4 **)(lVar23 + 0x28);
    }
    else {
      *(longlong *)(lVar8 + 0x10) = lVar23;
      puVar16 = (undefined4 *)(*(longlong *)(lVar8 + 0x28) + lVar9);
    }
    uVar26 = *(undefined4 *)(lVar17 + 0x9684);
    uVar10 = *(undefined4 *)(lVar17 + 0x9688);
    uVar11 = *(undefined4 *)(lVar17 + 0x968c);
    *puVar16 = *(undefined4 *)(lVar17 + 0x9680);
    puVar16[1] = uVar26;
    puVar16[2] = uVar10;
    puVar16[3] = uVar11;
    *(undefined8 *)(puVar16 + 1) = *(undefined8 *)(param_1 + 0x68);
    *(undefined1 *)(param_1 + 0x80) = 0;
  }
  uVar19 = 0x10;
  lVar23 = param_1;
  if (param_1 == -0x28) {
    lVar23 = 0;
  }
  if ((*(uint *)(&DAT_0000a7a0 + param_1) & 6) == 0) {
    uVar24 = *(uint *)(&DAT_0000ad20 + param_1);
    if (*(uint *)(&DAT_0000a7a0 + param_1) == 0x2000) {
      *(undefined8 *)(param_1 + 0xa860) = 0;
      *(undefined8 *)(param_1 + 0xa858) = 0;
      uVar19 = 0x7f;
    }
    else {
      *(uint *)(&DAT_0000ad24 + param_1) = *(uint *)(&DAT_0000ad24 + param_1) | 0x10;
    }
    uVar24 = uVar24 | uVar19;
    *(uint *)(&DAT_0000ad20 + param_1) = uVar24;
    uVar18 = 0x60;
    if ((uVar24 & 1) == 0) {
      uVar18 = 0x40;
    }
    uVar19 = uVar24 & 0xfffffffe;
    if ((uVar24 & 1) == 0) {
      uVar19 = uVar24;
    }
    uVar13 = uVar18 | 0x80;
    if ((uVar19 & 0xffffffef) == 0) {
      uVar13 = uVar18;
    }
    *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) | uVar13;
    *(undefined4 *)(param_1 + 0xa7a4) = 0;
    *(undefined2 *)(param_1 + 0xa7a8) = 0;
    *(undefined1 *)(param_1 + 0xa7aa) = 0;
    lVar17 = 0;
    if (lVar23 != -0x28) {
      lVar17 = lVar23;
    }
    if (*(int *)(lVar17 + 0x50) != 1) {
      lVar17 = 0;
      if (lVar23 != -0x28) {
        lVar17 = lVar23;
      }
      if (*(int *)(&DAT_0000a7a0 + lVar23) == 0x1000) {
        FUN_180c28ee8(*(undefined8 *)(lVar23 + 0x48),lVar17);
        *(undefined4 *)(&DAT_0000a7a0 + lVar23) = 2;
      }
    }
    *(undefined4 *)(&DAT_0000a7a0 + lVar23) = 2;
    *(uint *)(param_1 + 0x8218) = *(uint *)(param_1 + 0x8218) | 0x7f;
    *(uint *)(param_1 + 0x8330) = *(uint *)(param_1 + 0x8330) | 0x7f;
    puVar1 = (ushort *)(*(longlong *)(param_1 + 0x360) + 0x2a);
    *puVar1 = *puVar1 | 0x200;
    puVar1 = (ushort *)(*(longlong *)(param_1 + 0x360) + 0x2a);
    *puVar1 = *puVar1 | 0x400;
    *(uint *)(param_1 + 0x8218) = *(uint *)(param_1 + 0x8218) | 0x10;
    puVar1 = (ushort *)(*(longlong *)(param_1 + 0x360) + 0x2a);
    *puVar1 = *puVar1 | 0x400;
    *(undefined1 *)(param_1 + 0x8228) = 1;
    *(uint *)(param_1 + 0xa79c) = *(uint *)(param_1 + 0xa79c) | *(uint *)(param_1 + 0xa798);
    *(undefined4 *)(param_1 + 0xa8b0) = 0;
    *(undefined1 *)(param_1 + 0xa8b4) = 0;
    FUN_180034050(param_1);
  }
  else {
    *(undefined4 *)(&DAT_0000a7a0 + lVar23) = 2;
    if (*(char *)(param_1 + 0xc218) != '\0') {
      bVar4 = *(byte *)(param_1 + 0xc214);
      if (*(uint *)(param_1 + 0xc210) != 0) {
        *(uint *)(lVar23 + 0x2c0) = *(uint *)(lVar23 + 0x2c0) | *(uint *)(param_1 + 0xc210);
      }
      if (bVar4 != 0) {
        *(byte *)(lVar23 + 0x2c4) = *(byte *)(lVar23 + 0x2c4) | bVar4;
      }
      *(ushort *)(lVar23 + 0x2a) = *(ushort *)(lVar23 + 0x2a) | 0x1000;
      *(undefined2 *)(param_1 + 0xc214) = 0;
      *(undefined4 *)(param_1 + 0xc210) = 0;
      *(undefined1 *)(param_1 + 0xc218) = 0;
      *(undefined8 *)(param_1 + 0xc220) = 0;
    }
    *(undefined1 *)(param_1 + 0xc22a) = 0;
    (*(code *)(&DAT_181ade2b0)[(ulonglong)*(ushort *)(param_1 + 0x2a) * 2])
              ((int)(&DAT_181ade2b8)[(ulonglong)*(ushort *)(param_1 + 0x2a) * 4] + lVar23);
  }
  *(undefined2 *)(param_1 + 0x2a) = *(undefined2 *)(param_1 + 0x2c);
  if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x3f8) + 0x138) != '\0') {
    FUN_180c5c8c0(lVar23);
  }
  if (*(char *)(param_1 + 0xc499) != '\0') {
    uStack_158 = *(longlong *)(param_1 + 0xc480);
    *(longlong *)(param_1 + 0xc490) = uStack_158;
    *(undefined2 *)(param_1 + 0xc498) = 1;
    uStack_150 = CONCAT71(uStack_150._1_7_,1);
    FUN_180c3b8ac(*(undefined8 *)(param_1 + 0xc478),
                  *(undefined8 *)(&DAT_0000a490 + *(longlong *)(param_1 + 0xc470)),
                  *(undefined4 *)(*(longlong *)(param_1 + 0xc470) + 0x50),0x2000);
  }
  if (*(char *)(param_1 + 0xc4c5) != '\0') {
    *(undefined4 *)(param_1 + 0xc4c0) = *(undefined4 *)(param_1 + 0xc4b8);
    *(undefined2 *)(param_1 + 0xc4c4) = 1;
    uStack_150 = CONCAT71(uStack_150._1_7_,1);
    uStack_158 = CONCAT44(uStack_158._4_4_,*(undefined4 *)(param_1 + 0xc4b8));
    FUN_180c3b818(*(undefined8 *)(param_1 + 0xc4a0),
                  *(undefined8 *)(&DAT_0000a490 + *(longlong *)(param_1 + 0xc4a8)),
                  *(undefined4 *)(*(longlong *)(param_1 + 0xc4a8) + 0x50),0x2000);
  }
  uStack_150 = uStack_150 & 0xffffffff00000000;
  uStack_158 = CONCAT44(uStack_158._4_4_,uStack_e8);
  FUN_1800a8880(param_1,param_4,uStack_e4,param_5);
  *(undefined4 *)(param_1 + 0x2f4) = 0xffffffff;
  return;
}


