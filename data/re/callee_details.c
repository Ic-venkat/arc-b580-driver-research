// ===== 0x1800a8aa0 FUN_1800a8aa0 =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800a8aa0(ulonglong param_1,ulonglong param_2,ulonglong param_3,undefined4 param_4,
                  uint param_5,ulonglong param_6,uint param_7,ulonglong **param_8,uint param_9,
                  ulonglong *param_10,char param_11,longlong param_12,char param_13,
                  ulonglong param_14,ulonglong *param_15,byte param_16)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  ulonglong uVar3;
  ulonglong **ppuVar4;
  char cVar5;
  DWORD DVar6;
  int *piVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;
  HANDLE hProcess;
  ulonglong *puVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  undefined1 *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined1 uVar19;
  byte bVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint7 uVar23;
  byte bVar24;
  byte bVar25;
  ulonglong uVar26;
  uint uVar27;
  ulonglong **ppuVar28;
  ulonglong uVar29;
  bool bVar30;
  bool bVar31;
  bool bVar32;
  double dVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined1 auStack_258 [32];
  ulonglong **local_238;
  ulonglong **local_230;
  ulonglong *local_228;
  undefined1 local_220;
  undefined1 local_218;
  byte local_208;
  byte local_207;
  byte local_206;
  byte local_205 [5];
  undefined8 local_200;
  ulonglong local_1f8;
  uint local_1f0 [2];
  ulonglong *local_1e8;
  ulonglong **local_1e0;
  uint local_1d8;
  ulonglong local_1d0;
  ulonglong local_1c8;
  ulonglong local_1c0;
  ulonglong *local_1b8;
  ulonglong *local_1b0;
  ulonglong *local_1a8;
  ulonglong local_1a0;
  ulonglong local_198;
  ulonglong *local_190;
  ulonglong local_188;
  ulonglong local_180;
  uint local_178;
  uint local_174;
  ulonglong **local_170;
  ulonglong **local_168;
  ulonglong *local_160;
  longlong local_158;
  longlong local_150;
  ulonglong *local_148;
  ulonglong *local_140 [2];
  undefined1 local_130 [8];
  undefined1 local_128 [16];
  ulonglong *local_118;
  ulonglong *puStack_110;
  ulonglong local_108;
  ulonglong uStack_100;
  ulonglong *local_f8;
  ulonglong *puStack_f0;
  undefined8 local_e8;
  int iStack_e0;
  int iStack_dc;
  undefined1 local_d8 [16];
  ulonglong local_c8;
  ulonglong uStack_c0;
  ulonglong local_b8;
  ulonglong *puStack_b0;
  ulonglong local_a8;
  ulonglong uStack_a0;
  ulonglong local_98;
  ulonglong uStack_90;
  ulonglong local_88;
  ulonglong uStack_80;
  ulonglong *local_78;
  ulonglong uStack_70;
  undefined1 local_68 [16];
  ulonglong local_58;
  
  local_58 = DAT_1818ba280 ^ (ulonglong)auStack_258;
  uVar17 = (ulonglong)param_7;
  uVar18 = -(ulonglong)(param_1 != 0xffffffffffffffd8) & param_1;
  local_190 = param_15;
  local_205[0] = param_16;
  local_200 = CONCAT44(local_200._4_4_,param_4);
  local_198 = param_14;
  uVar27 = 0;
  local_1c8 = param_6;
  local_174 = param_7;
  local_168 = param_8;
  local_178 = param_9;
  local_1b0 = param_10;
  local_1f0[0] = 0;
  local_1f8 = param_3;
  local_1d0 = param_1;
  local_1c0 = param_2;
  local_188 = param_2;
  local_180 = param_3;
  if (*(int *)((-(ulonglong)(uVar18 != 0xffffffffffffffd8) & uVar18) + 0x50) == 2) {
    uVar27 = 0;
    cVar5 = FUN_18006b670(*(undefined8 *)(*(longlong *)(uVar18 + 0x48) + 0x8ec0));
    if (cVar5 != '\0') {
      if (*(longlong *)(&DAT_0000a490 + *(longlong *)(param_1 + 0x90)) != param_1 + 0x98) {
        local_230 = (ulonglong **)CONCAT44(local_230._4_4_,param_9);
        local_238 = param_8;
        local_228 = param_10;
        FUN_180345478(uVar18,param_5,param_6,uVar17 & 0xffffffff);
        goto LAB_1800aa96e;
      }
      uVar27 = 0;
    }
  }
  local_207 = (byte)uVar27;
  local_1d8 = CONCAT31((int3)(param_9 >> 8),local_207);
  uVar29 = (ulonglong)local_1d8;
  local_206 = local_207;
  if (uVar27 < param_5) {
    do {
      param_10 = (ulonglong *)((ulonglong)uVar27 * 0x30);
      local_1e0 = (ulonglong **)(param_6 + 0x18 + (longlong)param_10);
      local_1b8 = param_10;
      if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x3f8) + 0x7d4) == '\0') {
        if (*local_1e0 != (ulonglong *)0x4000) goto LAB_1800a8c3b;
      }
      else {
LAB_1800a8c3b:
        uVar17 = *(ulonglong *)((longlong)param_10 + param_6 + 0x10);
        iVar11 = 0;
        uVar22 = *(ulonglong *)((longlong)param_10 + param_6 + 0x20);
        local_1c0 = param_2 | uVar17;
        uVar26 = (ulonglong)*local_1e0;
        local_1f8 = param_3 | uVar22;
        piVar7 = *(int **)((longlong)param_10 + param_6 + 8);
        local_1e8 = *(ulonglong **)((longlong)param_10 + param_6 + 0x28);
        if (piVar7 != (int *)0x0) {
          do {
            if (*piVar7 == 0x303270a9) {
              uVar29 = uVar29 & 0xff;
              if (piVar7[5] == 1) {
                uVar29 = 1;
              }
              if (iVar11 == 0) break;
              iVar11 = iVar11 + 1;
            }
            piVar7 = *(int **)(piVar7 + 2);
          } while (piVar7 != (int *)0x0);
          local_1d8 = (uint)uVar29;
        }
        uVar16 = -(ulonglong)(uVar18 != 0xffffffffffffffd8) & uVar18;
        if ((uVar17 == 0x2000) || ((uVar17 == 0x10000 && (uVar26 == 0)))) {
          local_1f0[0] = local_1f0[0] | *(uint *)(uVar18 + 0x2e0);
        }
        local_188 = local_1c0;
        local_180 = local_1f8;
        local_170 = (ulonglong **)FUN_180279a58(uVar18,uVar17,uVar26,local_1e8);
        uVar21 = uVar26 & 0xffffffffffffefff;
        uVar3 = uVar29 >> 8;
        uVar29 = uVar29 & 0xffffffffffffff00;
        local_1a8 = (ulonglong *)(ulonglong)((uint)uVar26 & 0x1000);
        if ((uVar26 & 0x1000) != 0) {
          local_208 = 3;
          FUN_1802bd2e0(uVar16,&local_208);
          uVar29 = CONCAT71((int7)uVar3,local_208);
        }
        bVar24 = (byte)uVar29;
        local_230 = (ulonglong **)CONCAT71(local_230._1_7_,bVar24);
        if (*(char *)(*(longlong *)(*(longlong *)(uVar16 + 0x48) + 0x3f8) + 0xb64) == '\0') {
          cVar5 = FUN_18021dd48(uVar16,uVar17,uVar22,uVar21);
          puVar10 = local_1e8;
          if (cVar5 == '\0') {
            local_230 = (ulonglong **)((ulonglong)local_230 & 0xffffffffffffff00);
            local_238 = (ulonglong **)local_1f0;
            cVar5 = FUN_180c564e0(-(ulonglong)(uVar16 != 0xffffffffffffffd8) & uVar16,uVar21,
                                  local_1e8,uVar29 & 0xff);
            if ((cVar5 == '\0') &&
               ((((bVar24 != 0 || ((uVar26 & 0x130304b08abf) == 0)) ||
                 (((ulonglong)puVar10 & 0x130304b08abf) == 0)) ||
                (((uVar26 & 0x20040a410540) != 0 || (((ulonglong)puVar10 & 0x20040a411540) != 0)))))
               ) goto LAB_1800a8eb1;
          }
        }
        else {
          cVar5 = FUN_18021dd48(uVar16,uVar17,uVar22,uVar21);
          puVar10 = local_1e8;
          if (cVar5 == '\0') {
LAB_1800a8eb1:
            param_14 = param_14 | uVar21;
            param_15 = (ulonglong *)((ulonglong)param_15 | (ulonglong)local_170);
            param_16 = param_16 | bVar24;
            local_205[0] = param_16;
            local_198 = param_14;
            local_190 = param_15;
          }
        }
        lVar14 = *(longlong *)(*(longlong *)(uVar16 + 0x48) + 0x3f8);
        param_10 = param_15;
        if ((*(char *)(lVar14 + 0xabd) == '\0') &&
           (((ulonglong)param_15 &
            ((ulonglong)(-(uint)(*(char *)(lVar14 + 0xabe) != '\0') & 0x20) | 0x8008)) != 0)) {
          param_10 = (ulonglong *)0x0;
          FUN_180d823d0(uVar16 + 0xa7b0,0);
        }
        if (*(char *)(*(longlong *)(*(longlong *)(uVar18 + 0x48) + 0x3f8) + 0x7d3) != '\0') {
          if ((((uVar26 >> 0x10 & 1) != 0) ||
              ((*(char *)(uVar18 + 0xc1d9) != '\0' && ((uVar26 & 0x40) != 0)))) ||
             ((*(char *)(uVar18 + 0xc1d8) != '\0' && (local_1a8 != (ulonglong *)0x0)))) {
            *(undefined2 *)(uVar18 + 0xc1d8) = 0;
            *(undefined1 *)(uVar18 + 0xc1da) = 0;
          }
          if (((ulonglong)puVar10 & 0x8820) != 0) {
            *(undefined1 *)(uVar18 + 0xc1da) = 1;
          }
        }
        if ((*(int *)(uVar18 + 0x54) == 0) && (((ulonglong)puVar10 & 0x130304b08abf) != 0)) {
          FUN_180068670(uVar18 + 0xc5c0);
        }
        local_207 = local_207 != 0;
        if ((char)local_1d8 == '\0') {
          bVar30 = false;
          if ((*(char *)(local_1d0 + 0x2c6) == '\0') && (((ulonglong)*local_1e0 >> 0xe & 1) != 0)) {
            bVar30 = true;
            *(undefined1 *)(local_1d0 + 0x2c6) = 1;
          }
          uVar29 = uVar29 & 0xffffffffffffff00;
          if (bVar30) goto LAB_1800a8f2b;
        }
        else {
LAB_1800a8f2b:
          uVar29 = CONCAT71((int7)(uVar29 >> 8),1);
        }
        local_1d8 = (uint)uVar29;
        if ((local_206 == 0) &&
           ((((ulonglong)*local_1e0 & 0x14000) == 0 ||
            ((*(uint *)((longlong)local_1b8 + local_1c8 + 0x28) & 0x8006) == 0)))) {
          local_206 = 0;
        }
        else {
          local_206 = 1;
        }
        param_3 = local_1f8;
        param_2 = local_1c0;
        param_6 = local_1c8;
        param_1 = local_1d0;
      }
      uVar27 = uVar27 + 1;
    } while (uVar27 < param_5);
    uVar17 = (ulonglong)local_174;
    param_8 = local_168;
  }
  ppuVar28 = param_8 + (uVar17 & 0xffffffff) * 10;
  local_1e0 = ppuVar28;
  for (; uVar27 = 0, param_8 != ppuVar28; param_8 = param_8 + 10) {
    if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x3f8) + 0x7d4) == '\0') {
      if (param_8[3] != (ulonglong *)0x4000) goto LAB_1800a8fca;
    }
    else {
LAB_1800a8fca:
      local_1c0 = param_2 | (ulonglong)param_8[2];
      local_1f8 = param_3 | (ulonglong)param_8[4];
      local_118 = *param_8;
      puStack_110 = param_8[1];
      lVar14 = SUB168(*(undefined1 (*) [16])(param_8 + 2),0);
      auVar2 = *(undefined1 (*) [16])(param_8 + 4);
      uVar34 = auVar2._0_4_;
      uVar35 = auVar2._4_4_;
      local_d8 = *(undefined1 (*) [16])(param_8 + 8);
      local_188 = local_1c0;
      local_180 = local_1f8;
      if (SUB164(*(undefined1 (*) [16])(param_8 + 6),0) ==
          SUB164(*(undefined1 (*) [16])(param_8 + 6),4)) {
        uVar29 = SUB168(*(undefined1 (*) [16])(param_8 + 2),8);
        uVar17 = -(ulonglong)(uVar18 != 0xffffffffffffffd8) & uVar18;
        if ((lVar14 == 0x2000) || ((lVar14 == 0x10000 && (uVar29 == 0)))) {
          local_1f0[0] = local_1f0[0] | *(uint *)(uVar18 + 0x2e0);
        }
        uVar26 = auVar2._8_8_;
        local_1e8 = (ulonglong *)FUN_180279a58(uVar18,lVar14,uVar29,uVar26);
        uVar22 = uVar29 & 0xffffffffffffefff;
        if ((uVar29 >> 0xc & 1) != 0) {
          local_208 = 1;
          FUN_1802bd2e0(uVar17,&local_208);
          uVar27 = (uint)local_208;
        }
        bVar24 = (byte)uVar27;
        local_230 = (ulonglong **)CONCAT71(local_230._1_7_,bVar24);
        if (*(char *)(*(longlong *)(*(longlong *)(uVar17 + 0x48) + 0x3f8) + 0xb64) == '\0') {
          cVar5 = FUN_18021dd48(uVar17,lVar14,CONCAT44(uVar35,uVar34),uVar22);
          if (cVar5 == '\0') {
            local_230 = (ulonglong **)((ulonglong)local_230 & 0xffffffffffffff00);
            local_238 = (ulonglong **)local_1f0;
            cVar5 = FUN_180c564e0(-(ulonglong)(uVar17 != 0xffffffffffffffd8) & uVar17,uVar22,uVar26,
                                  bVar24);
            if ((cVar5 == '\0') &&
               ((((bVar24 != 0 || ((uVar29 & 0x130304b08abf) == 0)) ||
                 ((uVar26 & 0x130304b08abf) == 0)) ||
                (((uVar29 & 0x20040a410540) != 0 || ((uVar26 & 0x20040a411540) != 0))))))
            goto LAB_1800a9212;
          }
        }
        else {
          cVar5 = FUN_18021dd48(uVar17,lVar14,CONCAT44(uVar35,uVar34),uVar22);
          if (cVar5 == '\0') {
LAB_1800a9212:
            param_14 = param_14 | uVar22;
            param_15 = (ulonglong *)((ulonglong)param_15 | (ulonglong)local_1e8);
            param_16 = param_16 | bVar24;
            local_205[0] = param_16;
            local_198 = param_14;
            local_190 = param_15;
          }
        }
        lVar14 = *(longlong *)(*(longlong *)(uVar17 + 0x48) + 0x3f8);
        param_10 = local_1e8;
        if ((*(char *)(lVar14 + 0xabd) == '\0') &&
           (((ulonglong)local_1e8 &
            ((ulonglong)(-(uint)(*(char *)(lVar14 + 0xabe) != '\0') & 0x20) | 0x8008)) != 0)) {
          param_10 = (ulonglong *)0x0;
          FUN_180d823d0(uVar17 + 0xa7b0,0);
        }
        ppuVar28 = local_1e0;
        param_1 = local_1d0;
        if (*(char *)(*(longlong *)(*(longlong *)(uVar18 + 0x48) + 0x3f8) + 0x7d3) != '\0') {
          if ((((uVar29 >> 0x10 & 1) != 0) ||
              ((*(char *)(uVar18 + 0xc1d9) != '\0' && ((uVar29 & 0x40) != 0)))) ||
             ((*(char *)(uVar18 + 0xc1d8) != '\0' && ((uVar29 >> 0xc & 1) != 0)))) {
            *(undefined2 *)(uVar18 + 0xc1d8) = 0;
            *(undefined1 *)(uVar18 + 0xc1da) = 0;
          }
          if ((uVar26 & 0x8820) != 0) {
            *(undefined1 *)(uVar18 + 0xc1da) = 1;
          }
        }
      }
      bVar30 = false;
      if ((char)local_1d8 == '\0') {
        if ((*(char *)(param_1 + 0x2c6) == '\0') && (((ulonglong)param_8[3] >> 0xe & 1) != 0)) {
          bVar30 = true;
          *(undefined1 *)(param_1 + 0x2c6) = 1;
        }
        local_1d8 = local_1d8 & 0xffffff00;
        if (bVar30) goto LAB_1800a92a0;
      }
      else {
LAB_1800a92a0:
        local_1d8 = CONCAT31(local_1d8._1_3_,1);
      }
      param_3 = local_1f8;
      param_2 = local_1c0;
      if ((local_206 == 0) &&
         ((((ulonglong)param_8[3] & 0x14000) == 0 || (((ulonglong)param_8[5] & 0x8006) == 0)))) {
        local_206 = 0;
      }
      else {
        local_206 = 1;
      }
    }
  }
  local_1b8 = (ulonglong *)((ulonglong)local_1b8 & 0xffffffff00000000);
  local_160 = local_1b0 + (ulonglong)local_178 * 0xc;
  if (local_1b0 == local_160) {
LAB_1800aa3e9:
    uVar17 = local_1c0;
  }
  else {
    do {
      puVar10 = local_1b0;
      puVar8 = (ulonglong *)0x0;
      if ((*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x3f8) + 0x7d4) != '\0') ||
         (local_1b0[3] != 0x4000)) {
        FUN_1800b41d0(&local_170,(int)local_1b0[6]);
        FUN_1800b41d0(&local_168,*(int *)((longlong)puVar10 + 0x34));
        ppuVar4 = local_168;
        ppuVar28 = local_170;
        local_118 = (ulonglong *)*local_1b0;
        puStack_110 = (ulonglong *)local_1b0[1];
        local_1c8 = local_1b0[8];
        iStack_dc = SUB164(*(undefined1 (*) [16])(local_1b0 + 6),0xc);
        local_108 = local_1b0[2];
        uStack_100 = local_1b0[3];
        local_f8 = (ulonglong *)local_1b0[4];
        puStack_f0 = (ulonglong *)local_1b0[5];
        local_e8 = SUB168(*(undefined1 (*) [16])(local_1b0 + 6),0);
        iStack_e0 = (int)local_1b0[7];
        uVar17 = -(ulonglong)(uVar18 != 0xffffffffffffffd8) & uVar18;
        local_c8 = local_1b0[10];
        uStack_c0 = local_1b0[0xb];
        local_d8 = *(undefined1 (*) [16])(local_1b0 + 8);
        puVar10 = local_d8._0_8_;
        iVar11 = (int)local_168;
        if ((int)local_1b0[7] == iStack_dc) {
          if (param_13 == '\0') {
            local_238 = local_168;
            param_10 = puVar10;
            cVar5 = FUN_180072f1c(uVar18,&local_118,puVar10,local_170);
            if (cVar5 != '\0') goto LAB_1800a96f1;
          }
          local_218 = 0;
          local_228 = puVar8;
          for (puVar9 = puStack_110; puVar9 != (ulonglong *)0x0; puVar9 = (ulonglong *)puVar9[1]) {
            if ((int)*puVar9 == 0x303241e0) {
              puVar8 = (ulonglong *)(ulonglong)((int)puVar8 + 1);
              if ((*(int *)((longlong)puVar9 + 0x14) != 1) || (local_218 = 1, iVar11 != 7)) {
                local_218 = 0;
              }
            }
            else if ((int)*puVar9 == 0x3b9cf898) {
              puVar8 = (ulonglong *)(ulonglong)((int)puVar8 + 1);
              local_228 = puVar9;
            }
            if ((int)puVar8 == 2) break;
          }
          local_220 = 1;
          local_230 = ppuVar4;
          param_10 = (ulonglong *)(local_d8 + 8);
          local_238 = ppuVar28;
          FUN_1800728e0(uVar18,puVar10,param_10,0);
        }
        else {
          local_b8 = *local_1b0;
          puStack_b0 = (ulonglong *)local_1b0[1];
          local_a8 = local_1b0[2];
          uStack_a0 = local_1b0[3];
          local_98 = local_1b0[4];
          uStack_90 = local_1b0[5];
          local_88 = local_1b0[6];
          uStack_80 = local_1b0[7];
          local_78 = (ulonglong *)local_1b0[8];
          uStack_70 = local_1b0[9];
          local_68 = *(undefined1 (*) [16])(local_1b0 + 10);
          if ((int)puVar10[0x32] != 0) {
            do {
              cVar5 = FUN_18031e0b4();
              if (cVar5 == '\0') goto LAB_1800a9574;
              uVar27 = (int)puVar8 + 1;
              puVar8 = (ulonglong *)(ulonglong)uVar27;
            } while (uVar27 != (uint)puVar10[0x32]);
          }
          param_10 = (ulonglong *)(ulonglong)(uint)puVar10[0x18];
          if (((((uint)puVar10[0x18] | *(uint *)((longlong)puVar10 + 0xc4)) & 3) != 0) &&
             (*(int *)(uVar17 + 0x50) != 2)) {
            cVar5 = FUN_1807afb1c();
            iVar12 = (int)ppuVar28;
            if (cVar5 == '\0') {
              cVar5 = FUN_1807afb1c();
              if ((((cVar5 != '\0') && (puVar10[0x1e6] != 0)) && (iVar12 != 0)) &&
                 (((iVar12 != 6 && (((ulonglong)param_10 & 2) != 0)) &&
                  ((cVar5 = FUN_18006be84(puVar10), cVar5 != '\0' ||
                   ((&DAT_18180c3d0)[(ulonglong)ppuVar4 & 0xffffffff] == '\0')))))) {
                param_10 = (ulonglong *)(local_d8 + 8);
                FUN_18014bc58();
                goto LAB_1800a9504;
              }
            }
            else if ((((puVar10[0x1e6] != 0) && (cVar5 = FUN_18006b534(), cVar5 == '\0')) &&
                     ((iVar12 != 0 && ((iVar12 != 6 && ((puVar10[0x18] & 1) != 0)))))) &&
                    ((cVar5 = FUN_18006be84(puVar10), cVar5 != '\0' ||
                     ((&DAT_18180c3d0)[(ulonglong)ppuVar28 & 0xffffffff] == '\0')))) {
              iVar12 = 0;
              for (puVar10 = puStack_110; puVar10 != (ulonglong *)0x0;
                  puVar10 = (ulonglong *)puVar10[1]) {
                if ((int)*puVar10 == 0x3b9cf898) {
                  iVar12 = iVar12 + 1;
                }
                if (iVar12 == 1) break;
              }
              param_10 = (ulonglong *)(local_d8 + 8);
              FUN_18014bdcc();
LAB_1800a9504:
              if ((local_d8[8] & 4) == 0) goto LAB_1800a96f1;
              uStack_70 = uStack_70 & 0xfffffffffffffffd;
            }
          }
LAB_1800a9574:
          if ((*(int *)(uVar17 + 0x50) == 0) ||
             ((*(int *)((-(ulonglong)(uVar17 != 0xffffffffffffffd8) & uVar17) + 0x50) == 2 &&
              (cVar5 = FUN_18006b670(), cVar5 == '\0')))) {
            puVar10 = local_78;
            if (param_13 == '\0') {
              local_238 = ppuVar4;
              param_10 = local_78;
              cVar5 = FUN_180072f1c();
              if (cVar5 != '\0') goto LAB_1800a96f1;
            }
            local_218 = 0;
            local_228 = (ulonglong *)0x0;
            iVar12 = 0;
            for (puVar8 = puStack_b0; puVar8 != (ulonglong *)0x0; puVar8 = (ulonglong *)puVar8[1]) {
              if ((int)*puVar8 == 0x303241e0) {
                iVar12 = iVar12 + 1;
                if ((*(int *)((longlong)puVar8 + 0x14) == 1) && (iVar11 == 7)) {
                  local_218 = 1;
                }
                else {
                  local_218 = 0;
                }
              }
              else if ((int)*puVar8 == 0x3b9cf898) {
                iVar12 = iVar12 + 1;
                local_228 = puVar8;
              }
              if (iVar12 == 2) break;
            }
            local_220 = 1;
            local_230 = ppuVar4;
            param_10 = &uStack_70;
            local_238 = ppuVar28;
            FUN_1800728e0(uVar18,puVar10,param_10,0);
          }
        }
LAB_1800a96f1:
        uVar17 = local_1c8;
        ppuVar28 = (ulonglong **)0x0;
        local_1c0 = local_1c0 | local_108;
        local_1f8 = local_1f8 | (ulonglong)local_f8;
        local_188 = local_1c0;
        local_180 = local_1f8;
        if (iVar11 == 7) {
          if (((*(char *)(local_1c8 + 0x1279) != '\0') ||
              ((((*(byte *)(*(longlong *)(*(longlong *)(local_1c8 + 0x188) + 0x3f8) + 0x1640) &
                 (byte)ppuVar4) != 0 && (*(longlong **)(local_1c8 + 0x1270) != (longlong *)0x0)) &&
               (*(char *)(**(longlong **)(local_1c8 + 0x1270) + 0x10a) != '\0')))) ||
             (*(char *)(*(longlong *)(*(longlong *)(uVar18 + 0x48) + 0x3f8) + 0xbf9) != '\0')) {
            *(uint *)(uVar18 + 0x2c0) = *(uint *)(uVar18 + 0x2c0) | 0x100;
          }
          *(undefined1 *)(uVar18 + 0xc521) = 0;
          if (*(char *)(*(longlong *)(*(longlong *)(uVar18 + 0x48) + 0x3f8) + 0x880) != '\0') {
            LOCK();
            plVar1 = (longlong *)(*(longlong *)(uVar18 + 0x48) + 0x16638);
            *plVar1 = *plVar1 + 1;
            UNLOCK();
          }
          if (*(char *)(*(longlong *)(*(longlong *)(uVar18 + 0x48) + 0x3f8) + 0xd00) != '\0') {
            uVar29 = *(ulonglong *)(*(longlong *)(uVar18 + 0x48) + 0x16640);
            auVar2._8_8_ = 0;
            auVar2._0_8_ = uVar29;
            lVar14 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar2,8);
            if (uVar29 == ((uVar29 - lVar14 >> 1) + lVar14 >> 6) * 100) {
              DVar6 = GetActiveProcessorCount(0xffff);
              dVar33 = (double)FUN_180634500(0x4000000000000000,(double)DVar6);
              dVar33 = dVar33 - 1.0;
              lVar14 = 0;
              if ((9.223372036854776e+18 <= dVar33) &&
                 (dVar33 = dVar33 - 9.223372036854776e+18, dVar33 < 9.223372036854776e+18)) {
                lVar14 = -0x8000000000000000;
              }
              hProcess = GetCurrentProcess();
              SetProcessAffinityMask(hProcess,(longlong)dVar33 + lVar14);
            }
            LOCK();
            plVar1 = (longlong *)(*(longlong *)(uVar18 + 0x48) + 0x16640);
            *plVar1 = *plVar1 + 1;
            UNLOCK();
          }
        }
        else {
          lVar14 = *(longlong *)(*(longlong *)(uVar18 + 0x48) + 0x3f8);
          if (((*(char *)(lVar14 + 0x8e2) != '\0') && ((*(byte *)(lVar14 + 0x6274) & 0x10) != 0)) &&
             ((*(char *)(local_1c8 + 0x1278) != '\0' && (iVar11 == 2)))) {
            *(undefined1 *)(uVar18 + 0xc521) = 1;
          }
        }
        if ((param_11 == '\0') && (param_13 == '\0')) {
          cVar5 = FUN_180223728();
          puVar10 = local_1a8;
          if (cVar5 != '\0') goto LAB_1800a9f07;
          bVar24 = 0;
          local_1e0 = (ulonglong **)0x0;
          local_1e8 = (ulonglong *)0x0;
          local_207 = 0;
          local_1a8 = (ulonglong *)((ulonglong)local_1a8 & 0xffffffff00000000);
          puVar8 = local_1a8;
          local_1a8._4_4_ = SUB84(puVar10,4);
          if (iStack_e0 == iStack_dc) {
            uVar29 = -(ulonglong)(uVar18 != 0xffffffffffffffd8) & uVar18;
            if ((local_108 == 0x2000) || ((local_108 == 0x10000 && (uStack_100 == 0)))) {
              local_1a8 = (ulonglong *)CONCAT44(local_1a8._4_4_,*(undefined4 *)(uVar18 + 0x2e0));
              puVar8 = local_1a8;
            }
            local_1a8 = puVar8;
            uVar22 = uStack_100;
            puVar10 = (ulonglong *)FUN_180279a58(uVar18,local_108,uStack_100,puStack_f0);
            ppuVar28 = (ulonglong **)(uVar22 & 0xffffffffffffefff);
            uVar19 = 1;
            if ((uVar22 >> 0xc & 1) != 0) {
              local_208 = 1;
              if ((*(byte *)(uVar17 + 0x276) & 1) == 0) {
                local_208 = 3;
              }
              FUN_1802bd2e0(uVar29,&local_208);
              bVar24 = local_208;
            }
            lVar14 = thunk_FUN_1805fb820(*(undefined8 *)(uVar29 + 0xc640),
                                         *(undefined8 *)(uVar29 + 0xc648),uVar17);
            puVar8 = puStack_f0;
            if (lVar14 == *(longlong *)(uVar29 + 0xc648)) {
              uVar19 = 0;
            }
            else if (*(longlong *)(uVar29 + 0xc640) != *(longlong *)(uVar29 + 0xc648)) {
              *(longlong *)(uVar29 + 0xc648) = *(longlong *)(uVar29 + 0xc640);
            }
            local_230 = (ulonglong **)CONCAT71(local_230._1_7_,bVar24);
            if (*(char *)(*(longlong *)(*(longlong *)(uVar29 + 0x48) + 0x3f8) + 0xb64) == '\0') {
              cVar5 = FUN_18021dd48(uVar29,local_108,local_f8,ppuVar28);
              if (cVar5 == '\0') {
                local_230 = (ulonglong **)CONCAT71(local_230._1_7_,uVar19);
                local_238 = &local_1a8;
                cVar5 = FUN_180c564e0(-(ulonglong)(uVar29 != 0xffffffffffffffd8) & uVar29,ppuVar28,
                                      puVar8,bVar24);
                if ((cVar5 == '\0') &&
                   ((((bVar24 != 0 || ((uVar22 & 0x130304b08abf) == 0)) ||
                     (((ulonglong)puVar8 & 0x130304b08abf) == 0)) ||
                    (((uVar22 & 0x20040a410540) != 0 || (((ulonglong)puVar8 & 0x20040a411540) != 0))
                    )))) goto LAB_1800a9ab3;
              }
LAB_1800a99c9:
            }
            else {
              cVar5 = FUN_18021dd48(uVar29,local_108,local_f8,ppuVar28);
              if (cVar5 != '\0') goto LAB_1800a99c9;
LAB_1800a9ab3:
              local_207 = bVar24;
              local_1e8 = puVar10;
              local_1e0 = ppuVar28;
            }
            uVar17 = uStack_100;
            ppuVar28 = local_1e0;
            bVar24 = local_207;
            if (*(char *)(*(longlong *)(*(longlong *)(uVar18 + 0x48) + 0x3f8) + 0x7d3) != '\0') {
              if ((((uStack_100 >> 0x10 & 1) != 0) ||
                  ((*(char *)(uVar18 + 0xc1d9) != '\0' && ((uStack_100 & 0x40) != 0)))) ||
                 ((*(char *)(uVar18 + 0xc1d8) != '\0' && ((uStack_100 >> 0xc & 1) != 0)))) {
                *(undefined2 *)(uVar18 + 0xc1d8) = 0;
                *(undefined1 *)(uVar18 + 0xc1da) = 0;
              }
              if (((ulonglong)puVar8 & 0x8820) != 0) {
                *(undefined1 *)(uVar18 + 0xc1da) = 1;
              }
            }
            if ((*(int *)(uVar18 + 0x54) == 0) && (((ulonglong)puVar8 & 0x130304b08abf) != 0)) {
              local_1a0 = local_1c8;
              FUN_180111b2c(uVar18 + 0xc5c0,&local_158,&local_1a0);
              if (local_158 != *(longlong *)(uVar18 + 0xc5d0)) {
                FUN_18001db18();
                puVar8 = local_1a8;
                goto LAB_1800a9b27;
              }
            }
LAB_1800a9e0d:
            ppuVar28 = local_1e0;
            bVar24 = local_207;
          }
          else if (*(int *)((-(ulonglong)(uVar18 != 0xffffffffffffffd8) & uVar18) + 0x50) == 1) {
LAB_1800a9b27:
            local_1a8 = puVar8;
            uVar17 = uStack_100;
          }
          else {
            uVar29 = -(ulonglong)(uVar18 != 0xffffffffffffffd8) & uVar18;
            if ((local_108 == 0x2000) || ((local_108 == 0x10000 && (uStack_100 == 0)))) {
              local_1a8 = (ulonglong *)CONCAT44(local_1a8._4_4_,*(undefined4 *)(uVar18 + 0x2e0));
              puVar8 = local_1a8;
            }
            local_1a8 = puVar8;
            uVar22 = uStack_100;
            puVar10 = (ulonglong *)FUN_180279a58(uVar18,local_108,uStack_100,puStack_f0);
            ppuVar28 = (ulonglong **)(uVar22 & 0xffffffffffffefff);
            uVar19 = 1;
            if ((uVar22 >> 0xc & 1) != 0) {
              local_208 = 1;
              if ((*(byte *)(uVar17 + 0x276) & 1) == 0) {
                local_208 = 3;
              }
              FUN_1802bd2e0(uVar29,&local_208);
              bVar24 = local_208;
            }
            lVar14 = thunk_FUN_1805fb820(*(undefined8 *)(uVar29 + 0xc640),
                                         *(undefined8 *)(uVar29 + 0xc648),uVar17);
            puVar8 = puStack_f0;
            if (lVar14 == *(longlong *)(uVar29 + 0xc648)) {
              uVar19 = 0;
            }
            else if (*(longlong *)(uVar29 + 0xc640) != *(longlong *)(uVar29 + 0xc648)) {
              *(longlong *)(uVar29 + 0xc648) = *(longlong *)(uVar29 + 0xc640);
            }
            local_230 = (ulonglong **)CONCAT71(local_230._1_7_,bVar24);
            if (*(char *)(*(longlong *)(*(longlong *)(uVar29 + 0x48) + 0x3f8) + 0xb64) == '\0') {
              cVar5 = FUN_18021dd48(uVar29,local_108,local_f8,ppuVar28);
              if (cVar5 == '\0') {
                local_230 = (ulonglong **)CONCAT71(local_230._1_7_,uVar19);
                local_238 = &local_1a8;
                cVar5 = FUN_180c564e0(-(ulonglong)(uVar29 != 0xffffffffffffffd8) & uVar29,ppuVar28,
                                      puVar8,bVar24);
                if ((cVar5 == '\0') &&
                   ((((bVar24 != 0 || ((uVar22 & 0x130304b08abf) == 0)) ||
                     (((ulonglong)puVar8 & 0x130304b08abf) == 0)) ||
                    (((uVar22 & 0x20040a410540) != 0 || (((ulonglong)puVar8 & 0x20040a411540) != 0))
                    )))) goto LAB_1800a9d9a;
              }
LAB_1800a9cab:
            }
            else {
              cVar5 = FUN_18021dd48(uVar29,local_108,local_f8,ppuVar28);
              if (cVar5 != '\0') goto LAB_1800a9cab;
LAB_1800a9d9a:
              local_207 = bVar24;
              local_1e8 = puVar10;
              local_1e0 = ppuVar28;
            }
            uVar17 = uStack_100;
            ppuVar28 = local_1e0;
            bVar24 = local_207;
            if (*(char *)(*(longlong *)(*(longlong *)(uVar18 + 0x48) + 0x3f8) + 0x7d3) != '\0') {
              if ((((uStack_100 >> 0x10 & 1) != 0) ||
                  ((*(char *)(uVar18 + 0xc1d9) != '\0' && ((uStack_100 & 0x40) != 0)))) ||
                 ((*(char *)(uVar18 + 0xc1d8) != '\0' && ((uStack_100 >> 0xc & 1) != 0)))) {
                *(undefined2 *)(uVar18 + 0xc1d8) = 0;
                *(undefined1 *)(uVar18 + 0xc1da) = 0;
              }
              if (((ulonglong)puVar8 & 0x8820) != 0) {
                *(undefined1 *)(uVar18 + 0xc1da) = 1;
              }
            }
            if (*(int *)(uVar18 + 0x54) == 0) {
              if (((ulonglong)puVar8 & 0x130304b08abf) != 0) {
                local_1a0 = local_1c8;
                FUN_180111b2c(uVar18 + 0xc5c0,&local_150,&local_1a0);
                if (local_150 != *(longlong *)(uVar18 + 0xc5d0)) {
                  FUN_180111b0c();
                  puVar8 = local_1a8;
                  goto LAB_1800a9b27;
                }
              }
              goto LAB_1800a9e0d;
            }
          }
          uVar29 = -(ulonglong)(uVar18 != 0xffffffffffffffd8) & uVar18;
          if ((*(int *)((-(ulonglong)(uVar29 != 0xffffffffffffffd8) & uVar29) + 0x50) == 1) &&
             (*(longlong *)(&DAT_0000a490 + *(longlong *)(uVar29 + 0x90)) != uVar29 + 0x98)) {
            bVar25 = 0;
            bVar20 = 0;
            bVar30 = false;
            uVar27 = 0;
LAB_1800a9b77:
            iVar11 = 0;
          }
          else {
            if (((((ulonglong)ppuVar28 & 0x11400) == 0) && (((ulonglong)local_1e8 & 0x8200) == 0))
               && ((bVar24 & 2) == 0)) {
              bVar25 = 0;
            }
            else {
              bVar25 = 1;
            }
            if (((((ulonglong)ppuVar28 & 0x11100) == 0) && (((ulonglong)local_1e8 & 0x8080) == 0))
               && ((bVar24 & 1) == 0)) {
              bVar20 = 0;
            }
            else {
              bVar20 = 1;
            }
            bVar30 = ((ulonglong)local_1e8 & 0x90) != 0;
            uVar27 = (uint)(((ulonglong)local_1e8 & 0x8006) != 0);
            if (((ulonglong)ppuVar28 & 0x10010000) == 0) goto LAB_1800a9b77;
            iVar11 = 1;
          }
          if ((((ulonglong)ppuVar28 & 0x200400411040) == 0) && ((bVar24 & 4) == 0)) {
            iVar12 = 0;
          }
          else {
            iVar12 = 1;
          }
          param_10 = (ulonglong *)((ulonglong)local_1e8 & 0x110200208828);
          if ((bVar30) || (uVar13 = 0, ((ulonglong)local_1e8 & 0x100008820) != 0)) {
            uVar13 = 0x10;
          }
          if ((-(uint)bVar20 & 4 | -(uint)bVar25 & 2 | uVar27 << 6 |
               (uint)(param_10 != (ulonglong *)0x0) | iVar12 << 3 | iVar11 << 7 | uVar13 |
              (uint)local_1a8) != 0x14) goto LAB_1800a9f0f;
          uVar27 = (uint)local_1b8 + 1;
          local_1b8 = (ulonglong *)CONCAT44(local_1b8._4_4_,uVar27);
        }
        else {
LAB_1800a9f07:
          uVar17 = uStack_100;
LAB_1800a9f0f:
          if (iStack_e0 == iStack_dc) {
            uVar22 = -(ulonglong)(uVar18 != 0xffffffffffffffd8) & uVar18;
            FUN_180268fec(uVar18,local_108,uVar17,local_1f0);
            uVar29 = FUN_180279a58();
            bVar24 = 0;
            if ((uVar17 >> 0xc & 1) != 0) {
              local_208 = 1;
              if ((*(byte *)(local_1c8 + 0x276) & 1) == 0) {
                local_208 = 3;
              }
              FUN_1802bd2e0(uVar22,&local_208);
              bVar24 = local_208;
            }
            lVar14 = thunk_FUN_1805fb820(*(undefined8 *)(uVar22 + 0xc640),
                                         *(undefined8 *)(uVar22 + 0xc648),local_1c8);
            puVar10 = puStack_f0;
            if (lVar14 == *(longlong *)(uVar22 + 0xc648)) {
              uVar19 = 0;
            }
            else {
              if (*(longlong *)(uVar22 + 0xc640) != *(longlong *)(uVar22 + 0xc648)) {
                *(longlong *)(uVar22 + 0xc648) = *(longlong *)(uVar22 + 0xc640);
              }
              uVar19 = 1;
            }
            local_230 = (ulonglong **)CONCAT71(local_230._1_7_,bVar24);
            param_10 = local_f8;
            if (*(char *)(*(longlong *)(*(longlong *)(uVar22 + 0x48) + 0x3f8) + 0xb64) == '\0') {
              cVar5 = FUN_18021dd48(uVar22,local_108);
              if (cVar5 == '\0') {
                local_230 = (ulonglong **)CONCAT71(local_230._1_7_,uVar19);
                local_238 = (ulonglong **)local_1f0;
                param_10 = puVar10;
                cVar5 = FUN_180c564e0(-(ulonglong)(uVar22 != 0xffffffffffffffd8) & uVar22,
                                      uVar17 & 0xffffffffffffefff);
                if ((cVar5 == '\0') &&
                   ((((bVar24 != 0 || ((uVar17 & 0x130304b08abf) == 0)) ||
                     (((ulonglong)puVar10 & 0x130304b08abf) == 0)) ||
                    (((uVar17 & 0x20040a410540) != 0 || (((ulonglong)puVar10 & 0x20040a411540) != 0)
                     ))))) goto LAB_1800aa067;
              }
            }
            else {
              cVar5 = FUN_18021dd48(uVar22,local_108);
              if (cVar5 == '\0') {
LAB_1800aa067:
                param_14 = param_14 | uVar17 & 0xffffffffffffefff;
                param_15 = (ulonglong *)((ulonglong)param_15 | uVar29);
                param_16 = param_16 | bVar24;
                local_205[0] = param_16;
                local_198 = param_14;
                local_190 = param_15;
              }
            }
            if (*(char *)(*(longlong *)(*(longlong *)(uVar18 + 0x48) + 0x3f8) + 0x7d3) != '\0') {
              if ((((uStack_100 >> 0x10 & 1) != 0) ||
                  ((*(char *)(uVar18 + 0xc1d9) != '\0' && ((uStack_100 & 0x40) != 0)))) ||
                 ((*(char *)(uVar18 + 0xc1d8) != '\0' && ((uStack_100 >> 0xc & 1) != 0)))) {
                *(undefined2 *)(uVar18 + 0xc1d8) = 0;
                *(undefined1 *)(uVar18 + 0xc1da) = 0;
              }
              if (((ulonglong)puVar10 & 0x8820) != 0) {
                *(undefined1 *)(uVar18 + 0xc1da) = 1;
              }
            }
            if ((*(int *)(uVar18 + 0x54) == 0) && (((ulonglong)puVar10 & 0x130304b08abf) != 0)) {
              local_1a0 = local_1c8;
              FUN_180111b2c(uVar18 + 0xc5c0,&local_148,&local_1a0);
              param_10 = local_148;
              if (local_148 != *(ulonglong **)(uVar18 + 0xc5d0)) {
                puVar15 = local_130;
LAB_1800aa397:
                FUN_180111b0c(uVar18 + 0xc5c0,puVar15);
              }
            }
          }
          else if (*(int *)((-(ulonglong)(uVar18 != 0xffffffffffffffd8) & uVar18) + 0x50) != 1) {
            uVar22 = -(ulonglong)(uVar18 != 0xffffffffffffffd8) & uVar18;
            FUN_180268fec(uVar18,local_108,uVar17,local_1f0);
            uVar29 = FUN_180279a58();
            bVar24 = 0;
            if ((uVar17 >> 0xc & 1) != 0) {
              local_208 = 1;
              if ((*(byte *)(local_1c8 + 0x276) & 1) == 0) {
                local_208 = 3;
              }
              FUN_1802bd2e0(uVar22,&local_208);
              bVar24 = local_208;
            }
            lVar14 = thunk_FUN_1805fb820(*(undefined8 *)(uVar22 + 0xc640),
                                         *(undefined8 *)(uVar22 + 0xc648),local_1c8);
            puVar10 = puStack_f0;
            if (lVar14 == *(longlong *)(uVar22 + 0xc648)) {
              uVar19 = 0;
            }
            else {
              if (*(longlong *)(uVar22 + 0xc640) != *(longlong *)(uVar22 + 0xc648)) {
                *(longlong *)(uVar22 + 0xc648) = *(longlong *)(uVar22 + 0xc640);
              }
              uVar19 = 1;
            }
            local_230 = (ulonglong **)CONCAT71(local_230._1_7_,bVar24);
            param_10 = local_f8;
            if (*(char *)(*(longlong *)(*(longlong *)(uVar22 + 0x48) + 0x3f8) + 0xb64) == '\0') {
              cVar5 = FUN_18021dd48(uVar22,local_108);
              if (cVar5 == '\0') {
                local_230 = (ulonglong **)CONCAT71(local_230._1_7_,uVar19);
                local_238 = (ulonglong **)local_1f0;
                param_10 = puVar10;
                cVar5 = FUN_180c564e0(-(ulonglong)(uVar22 != 0xffffffffffffffd8) & uVar22,
                                      uVar17 & 0xffffffffffffefff);
                if ((cVar5 == '\0') &&
                   ((((bVar24 != 0 || ((uVar17 & 0x130304b08abf) == 0)) ||
                     (((ulonglong)puVar10 & 0x130304b08abf) == 0)) ||
                    (((uVar17 & 0x20040a410540) != 0 || (((ulonglong)puVar10 & 0x20040a411540) != 0)
                     ))))) goto LAB_1800aa2b7;
              }
            }
            else {
              cVar5 = FUN_18021dd48(uVar22,local_108);
              if (cVar5 == '\0') {
LAB_1800aa2b7:
                param_14 = param_14 | uVar17 & 0xffffffffffffefff;
                param_15 = (ulonglong *)((ulonglong)param_15 | uVar29);
                param_16 = param_16 | bVar24;
                local_205[0] = param_16;
                local_198 = param_14;
                local_190 = param_15;
              }
            }
            if (*(char *)(*(longlong *)(*(longlong *)(uVar18 + 0x48) + 0x3f8) + 0x7d3) != '\0') {
              if ((((uStack_100 >> 0x10 & 1) != 0) ||
                  ((*(char *)(uVar18 + 0xc1d9) != '\0' && ((uStack_100 & 0x40) != 0)))) ||
                 ((*(char *)(uVar18 + 0xc1d8) != '\0' && ((uStack_100 >> 0xc & 1) != 0)))) {
                *(undefined2 *)(uVar18 + 0xc1d8) = 0;
                *(undefined1 *)(uVar18 + 0xc1da) = 0;
              }
              if (((ulonglong)puVar10 & 0x8820) != 0) {
                *(undefined1 *)(uVar18 + 0xc1da) = 1;
              }
            }
            if ((*(int *)(uVar18 + 0x54) == 0) && (((ulonglong)puVar10 & 0x130304b08abf) != 0)) {
              local_1a0 = local_1c8;
              FUN_180111b2c(uVar18 + 0xc5c0,local_140,&local_1a0);
              param_10 = local_140[0];
              if (local_140[0] != *(ulonglong **)(uVar18 + 0xc5d0)) {
                puVar15 = local_128;
                goto LAB_1800aa397;
              }
            }
          }
          uVar27 = (uint)local_1b8;
        }
        param_1 = local_1d0;
      }
      local_1b0 = local_1b0 + 0xc;
    } while (local_1b0 != local_160);
    if ((((uVar27 == 0) || (uVar27 != local_178)) || (param_5 != 0)) || (local_174 != 0))
    goto LAB_1800aa3e9;
    local_188 = 0;
    local_1f8 = 0;
    local_180 = 0;
    uVar17 = 0;
  }
  if (((((*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x3f8) + 0x7d3) != '\0') &&
        ((local_200 & 0x70000000) == 0)) &&
       ((param_13 == '\0' &&
        ((*(char *)(param_1 + 0xc1d8) != '\0' && (*(char *)(param_1 + 0xc1d9) == '\0')))))) &&
      (*(char *)(param_1 + 0xc1da) != '\0')) &&
     ((((param_16 != 0 || local_1f8 != 0) || uVar17 != 0) || param_15 != (ulonglong *)0x0) ||
      param_14 != 0)) {
    local_230 = (ulonglong **)local_205;
    local_238 = &local_190;
    param_10 = &local_180;
    FUN_1807b2d80(param_1 + 0xc1b0,&local_188,param_10,&local_198);
    param_14 = local_198;
    local_1f8 = local_180;
    uVar17 = local_188;
    param_15 = local_190;
    param_16 = local_205[0];
  }
  if ((((uVar17 & 0x537dbbfe) != 0) && ((local_1f8 & 0x53399df9) != 0)) ||
     (((ulonglong)param_15 & 0x100000200000) != 0)) {
    FUN_18009d518();
  }
  bVar30 = true;
  uVar29 = -(ulonglong)(uVar18 != 0xffffffffffffffd8) & uVar18;
  uVar23 = (uint7)((ulonglong)param_10 >> 8);
  if ((*(int *)((-(ulonglong)(uVar29 != 0xffffffffffffffd8) & uVar29) + 0x50) == 1) &&
     (*(longlong *)(&DAT_0000a490 + *(longlong *)(uVar29 + 0x90)) != uVar29 + 0x98)) {
    bVar24 = 0;
    uVar29 = (ulonglong)uVar23 << 8;
    bVar25 = 0;
    bVar31 = false;
    bVar32 = false;
LAB_1800aa53e:
    iVar11 = 0;
  }
  else {
    if ((((param_14 & 0x11400) == 0) && (((ulonglong)param_15 & 0x8200) == 0)) &&
       ((param_16 & 2) == 0)) {
      bVar24 = 0;
    }
    else {
      bVar24 = 1;
    }
    if ((((param_14 & 0x11100) == 0) && (((ulonglong)param_15 & 0x8080) == 0)) &&
       ((param_16 & 1) == 0)) {
      uVar29 = (ulonglong)uVar23 << 8;
      bVar25 = 0;
    }
    else {
      uVar29 = CONCAT71(uVar23,1);
      bVar25 = 1;
    }
    bVar31 = ((ulonglong)param_15 & 0x90) != 0;
    bVar32 = ((ulonglong)param_15 & 0x8006) != 0;
    if ((param_14 & 0x10010000) == 0) goto LAB_1800aa53e;
    iVar11 = 1;
  }
  if (((param_14 & 0x200400411040) == 0) && ((param_16 & 4) == 0)) {
    bVar20 = 0;
  }
  else {
    bVar20 = 1;
  }
  if ((bVar31) || (((ulonglong)param_15 & 0x100008820) != 0)) {
    uVar27 = 0x10;
  }
  else {
    uVar27 = 0;
  }
  puVar10 = (ulonglong *)(uVar29 & 0xffffffffffffff00);
  uVar27 = (uint)(((ulonglong)param_15 & 0x110200208828) != 0) | (uint)bVar32 << 6 |
           (uint)bVar20 << 3 | -(uint)bVar24 & 2 | -(uint)bVar25 & 4 | iVar11 << 7 | uVar27 |
           local_1f0[0];
  uVar22 = (ulonglong)uVar27;
  local_200 = (ulonglong)uVar27;
  FUN_18024b3c0(param_1,param_15);
  uVar29 = -(ulonglong)(uVar18 != 0xffffffffffffffd8) & uVar18;
  if (((int)uVar22 == 0) &&
     (((*(char *)(*(longlong *)(*(longlong *)(uVar18 + 0x48) + 0x3f8) + 0x7d2) != (char)uVar22 ||
       ((uVar17 & 0x537dbbfe) == 0)) || ((local_1f8 & 0x53399df9) == 0)))) {
    puVar10 = param_15;
    cVar5 = FUN_180275a9c();
    if (cVar5 != '\0') goto LAB_1800aa6a2;
    uVar17 = local_200 >> 0x28 & 0xff;
    bVar25 = local_200._4_1_;
  }
  else {
LAB_1800aa6a2:
    if ((*(int *)((-(ulonglong)(uVar29 != 0xffffffffffffffd8) & uVar29) + 0x50) == 1) &&
       (*(longlong *)(&DAT_0000a490 + *(longlong *)(uVar29 + 0x90)) != uVar29 + 0x98)) {
LAB_1800aa72c:
      bVar24 = local_200._4_1_;
    }
    else {
      if ((uVar17 == 0) || ((uVar17 & 0x100f0001b600) != 0)) {
        bVar24 = local_200._4_1_ | 2;
      }
      else if ((uVar17 & 0x400080) == 0) {
        if ((uVar17 >> 8 & 1) == 0) {
          if (((uVar17 & 0x700118007e) == 0) && ((uVar17 & 0x44001) == 0)) goto LAB_1800aa72c;
          bVar24 = local_200._4_1_ | 0x10;
        }
        else {
          bVar24 = local_200._4_1_ | 0x40;
        }
      }
      else {
        bVar24 = local_200._4_1_ | 0x80;
      }
      local_200._0_5_ = CONCAT14(bVar24,(undefined4)local_200);
    }
    if ((((uVar17 == 0) || ((uVar17 & 0x52212800) != 0)) ||
        ((*(int *)((-(ulonglong)(uVar29 != 0xffffffffffffffd8) & uVar29) + 0x50) == 1 &&
         (*(longlong *)(&DAT_0000a490 + *(longlong *)(uVar29 + 0x90)) != uVar29 + 0x98)))) ||
       ((bVar25 = bVar24, (*(byte *)(uVar18 + 0x2d8) & 2) != 0 && ((uVar17 & 0x100900013000) != 0)))
       ) {
      bVar25 = bVar24 | 4;
      local_200 = CONCAT35(local_200._5_3_,CONCAT14(bVar24,(undefined4)local_200)) | 0x400000000;
    }
    if ((local_1f8 == 0) || ((local_1f8 & 0x1070533dc87f) != 0)) {
LAB_1800aa848:
      uVar17 = local_200 >> 0x28 & 0xff;
LAB_1800aa84d:
      uVar17 = uVar17 | 1;
LAB_1800aa850:
      local_200._0_6_ = CONCAT15((char)uVar17,(undefined5)local_200);
    }
    else {
      lVar14 = *(longlong *)(uVar18 + 0x48);
      puVar10 = param_15;
      uVar17 = uVar29;
      cVar5 = FUN_180275a9c(lVar14,param_14);
      if (((cVar5 != '\0') ||
          ((*(int *)((-(ulonglong)(uVar29 != 0xffffffffffffffd8) & uVar17) + 0x50) == 1 &&
           (*(longlong *)(&DAT_0000a490 + *(longlong *)(uVar17 + 0x90)) != uVar17 + 0x98)))) ||
         ((*(char *)(*(longlong *)(lVar14 + 0x3f8) + 0xabd) == '\0' &&
          (((uint)uVar22 >> 8 & 1) != 0)))) goto LAB_1800aa848;
      uVar17 = local_200 >> 0x28 & 0xff;
      if ((local_1f8 & 0x400100) != 0) {
        uVar17 = uVar17 | 0x20;
        goto LAB_1800aa850;
      }
      if ((local_1f8 & 0x100f10003680) != 0) {
        if (*(char *)(uVar18 + 0xc8be) == '\0') {
          uVar17 = uVar17 | 0x80;
          goto LAB_1800aa850;
        }
        goto LAB_1800aa84d;
      }
    }
    if (((uVar17 & 1) == 0) && ((local_1f8 & 0x110001000) != 0)) {
      uVar27 = 0x80000000;
      if ((uint)uVar22 != 0) {
        uVar27 = (uint)uVar22;
      }
      *(uint *)(uVar18 + 0xc230) = *(uint *)(uVar18 + 0xc230) | uVar27;
    }
  }
  uVar23 = (uint7)((ulonglong)puVar10 >> 8);
  if ((((char)local_1d8 == '\0') && (((ulonglong)param_15 >> 0x1c & 1) == 0)) &&
     ((param_14 >> 0x1c & 1) == 0)) {
    uVar29 = (ulonglong)uVar23 << 8;
  }
  else {
    uVar29 = CONCAT71(uVar23,1);
  }
  if ((*(int *)((-(ulonglong)(uVar18 != 0xffffffffffffffd8) & uVar18) + 0x50) != 1) ||
     (*(longlong *)(&DAT_0000a490 + *(longlong *)(uVar18 + 0x90)) == uVar18 + 0x98)) {
    bVar30 = false;
  }
  uVar26 = *(ulonglong *)(*(longlong *)(param_1 + 0x48) + 0x16600);
  cVar5 = (char)uVar29;
  if (bVar30) {
    uVar13 = -(uint)((uVar26 & param_14) != 0) & 7;
    uVar27 = ((uint)uVar29 & 0xff) << 6;
  }
  else {
    uVar29 = uVar29 & 0xffffffffffffff00;
    uVar13 = -(uint)(((uVar26 | 0x8000000) & param_14) != 0) & 7 | -(uint)(cVar5 != '\0') & 0x60;
    bVar30 = local_206 != 0;
    local_206 = -local_206;
    uVar27 = -(uint)bVar30 & 0x10000;
  }
  if ((uVar13 | uVar27) != 0) {
    FUN_1800bf920(uVar18,uVar13 | uVar27,CONCAT71((int7)(uVar29 >> 8),2),uVar17);
  }
  if (param_11 == '\0') {
    FUN_180281ce8(param_1,&local_200);
  }
  else {
    cVar5 = FUN_18011f930(&local_200);
    if (cVar5 != '\0') {
      local_230 = *(ulonglong ***)(param_12 + 0x40);
      local_238 = (ulonglong **)CONCAT71(local_238._1_7_,param_11);
      FUN_18001d530(uVar18,uVar22 & 0xffffffff,bVar25);
    }
  }
LAB_1800aa96e:
  if (((ulonglong)param_15 & 0x8001) != 0) {
    FUN_18009d600(param_1);
    FUN_18009d838(param_1 + 0xc100);
    FUN_18009d288(param_1 + 0xc150);
  }
  FUN_1802905b8(param_1 + 0xa128,param_15);
  return;
}


// ===== 0x1800aaaa8 FUN_1800aaaa8 =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800aaaa8(ulonglong param_1,ulonglong param_2,ulonglong param_3,uint param_4,uint param_5,
                  ulonglong param_6,uint param_7,ulonglong *param_8,uint param_9,ulonglong *param_10
                  ,char param_11,ulonglong param_12,ulonglong param_13,byte param_14)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  uint3 uVar4;
  ulonglong *puVar5;
  char cVar6;
  byte bVar7;
  DWORD DVar8;
  int *piVar9;
  ulonglong *puVar10;
  HANDLE hProcess;
  int iVar11;
  ulonglong *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  byte bVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  int iVar19;
  ulonglong uVar20;
  byte bVar21;
  ulonglong uVar22;
  uint uVar23;
  byte bVar24;
  byte bVar25;
  undefined1 uVar26;
  int iVar27;
  bool bVar28;
  double dVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined1 auStack_258 [32];
  ulonglong *local_238;
  ulonglong *local_230;
  ulonglong *local_228;
  undefined1 local_220;
  undefined1 local_218;
  bool local_208;
  byte local_207;
  byte local_206;
  char local_205;
  byte local_204 [4];
  uint local_200;
  undefined1 local_1fc [12];
  ulonglong local_1f0;
  ulonglong *local_1e8;
  ulonglong local_1e0;
  ulonglong local_1d8;
  ulonglong local_1d0;
  ulonglong local_1c8;
  ulonglong local_1c0;
  ulonglong *local_1b8;
  ulonglong local_1b0;
  ulonglong local_1a8;
  ulonglong local_1a0;
  ulonglong local_198;
  ulonglong local_190;
  uint local_188;
  ulonglong *local_180;
  uint local_178;
  ulonglong *local_170;
  uint local_168;
  ulonglong *local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140 [5];
  ulonglong local_118;
  ulonglong *puStack_110;
  ulonglong local_108;
  ulonglong uStack_100;
  ulonglong local_f8;
  ulonglong uStack_f0;
  undefined1 local_e8 [16];
  ulonglong local_d8;
  ulonglong uStack_d0;
  ulonglong local_c8;
  ulonglong uStack_c0;
  ulonglong local_b8;
  ulonglong *puStack_b0;
  ulonglong local_a8;
  ulonglong uStack_a0;
  ulonglong local_98;
  ulonglong uStack_90;
  ulonglong local_88;
  ulonglong uStack_80;
  ulonglong local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  ulonglong uStack_60;
  ulonglong local_58;
  
  local_58 = DAT_1818ba280 ^ (ulonglong)auStack_258;
  uVar18 = -(ulonglong)(param_1 != 0xffffffffffffffd8) & param_1;
  local_1a0 = param_12;
  local_198 = param_13;
  local_204[0] = param_14;
  lVar13 = uVar18 + 0x28;
  local_1f0 = param_6;
  local_188 = param_7;
  local_1e8 = param_8;
  local_178 = param_9;
  local_170 = param_10;
  local_1fc._0_4_ = 0;
  local_1fc._4_8_ = param_1;
  local_1e0 = param_3;
  local_1d8 = param_2;
  local_1a8 = param_3;
  local_190 = param_2;
  local_168 = param_4;
  if (((*(int *)((-(ulonglong)(lVar13 != 0) & uVar18) + 0x50) == 2) &&
      (cVar6 = FUN_18006b670(*(undefined8 *)(*(longlong *)(uVar18 + 0x48) + 0x8ec0)), cVar6 != '\0')
      ) && (*(longlong *)(&DAT_0000a490 + *(longlong *)(param_1 + 0x90)) != param_1 + 0x98)) {
    local_230 = (ulonglong *)CONCAT44(local_230._4_4_,param_9);
    local_238 = param_8;
    local_228 = param_10;
    FUN_180345478(uVar18,param_5);
    goto LAB_1800acc60;
  }
  uVar4 = (uint3)(param_9 >> 8);
  local_200 = (uint)uVar4 << 8;
  uVar14 = (ulonglong)uVar4 << 8;
  cVar6 = false;
  local_205 = '\0';
  local_208 = false;
  if (param_5 != 0) {
    uVar22 = 0;
    do {
      local_1b0 = uVar22 * 0x30;
      local_1b8 = (ulonglong *)(param_6 + 0x18 + local_1b0);
      if ((*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x3f8) + 0x7d4) == '\0') &&
         (*local_1b8 == 0x4000)) {
      }
      else {
        uVar20 = *(ulonglong *)(local_1b0 + 0x10 + param_6);
        iVar11 = 0;
        piVar9 = *(int **)(local_1b0 + 8 + param_6);
        local_1d8 = param_2 | uVar20;
        uVar17 = *local_1b8;
        puVar12 = *(ulonglong **)(local_1b0 + 0x20 + param_6);
        local_1e0 = param_3 | (ulonglong)puVar12;
        uVar2 = *(ulonglong *)(local_1b0 + 0x28 + param_6);
        if (piVar9 != (int *)0x0) {
          do {
            if (*piVar9 == 0x303270a9) {
              iVar11 = iVar11 + 1;
              uVar14 = uVar14 & 0xff;
              if (piVar9[5] == 1) {
                uVar14 = 1;
              }
            }
            else if (*piVar9 == 0x3ba38c32) {
              iVar11 = iVar11 + 1;
            }
          } while ((iVar11 != 2) && (piVar9 = *(int **)(piVar9 + 2), piVar9 != (int *)0x0));
          local_200 = (uint)uVar14;
        }
        uVar16 = -(ulonglong)(uVar18 != 0xffffffffffffffd8) & uVar18;
        if ((uVar20 == 0x2000) || ((uVar20 == 0x10000 && (uVar17 == 0)))) {
          local_1fc._0_4_ = local_1fc._0_4_ | *(uint *)(uVar18 + 0x2e0);
        }
        local_1a8 = local_1e0;
        local_190 = local_1d8;
        local_180 = puVar12;
        local_1c0 = FUN_180279a58(uVar18,uVar20,uVar17,uVar2);
        uVar14 = uVar17 & 0xffffffffffffefff;
        local_1d0 = (ulonglong)((uint)uVar17 & 0x1000);
        bVar24 = 0;
        if ((uVar17 & 0x1000) != 0) {
          local_207 = 3;
          FUN_1802bd2e0(uVar16,&local_207);
          puVar12 = local_180;
          bVar24 = local_207;
        }
        local_230 = (ulonglong *)CONCAT71(local_230._1_7_,bVar24);
        if (*(char *)(*(longlong *)(*(longlong *)(uVar16 + 0x48) + 0x3f8) + 0xb64) == '\0') {
          cVar6 = FUN_18021dd48(uVar16,uVar20,puVar12);
          if (cVar6 == '\0') {
            local_230 = (ulonglong *)((ulonglong)local_230 & 0xffffffffffffff00);
            local_238 = (ulonglong *)local_1fc;
            cVar6 = FUN_180c564e0(-(ulonglong)(uVar16 != 0xffffffffffffffd8) & uVar16,uVar14,uVar2);
            if ((cVar6 == '\0') &&
               ((((bVar24 != 0 || ((uVar17 & 0x130304b08abf) == 0)) ||
                 ((uVar2 & 0x130304b08abf) == 0)) ||
                (((uVar17 & 0x20040a410540) != 0 || ((uVar2 & 0x20040a411540) != 0))))))
            goto LAB_1800aaeb2;
          }
        }
        else {
          cVar6 = FUN_18021dd48(uVar16,uVar20,puVar12);
          if (cVar6 == '\0') {
LAB_1800aaeb2:
            param_12 = param_12 | uVar14;
            param_13 = param_13 | local_1c0;
            param_14 = param_14 | bVar24;
            local_204[0] = param_14;
            local_1a0 = param_12;
            local_198 = param_13;
          }
        }
        lVar13 = *(longlong *)(*(longlong *)(uVar16 + 0x48) + 0x3f8);
        if ((*(char *)(lVar13 + 0xabd) == '\0') &&
           ((param_13 & ((ulonglong)(-(uint)(*(char *)(lVar13 + 0xabe) != '\0') & 0x20) | 0x8008))
            != 0)) {
          FUN_180d823d0(uVar16 + 0xa7b0,0,0xa8);
        }
        if (*(char *)(*(longlong *)(*(longlong *)(uVar18 + 0x48) + 0x3f8) + 0x7d3) != '\0') {
          if ((((uVar17 >> 0x10 & 1) != 0) ||
              ((*(char *)(uVar18 + 0xc1d9) != '\0' && ((uVar17 & 0x40) != 0)))) ||
             ((*(char *)(uVar18 + 0xc1d8) != '\0' && (local_1d0 != 0)))) {
            *(undefined2 *)(uVar18 + 0xc1d8) = 0;
            *(undefined1 *)(uVar18 + 0xc1da) = 0;
          }
          if ((uVar2 & 0x8820) != 0) {
            *(undefined1 *)(uVar18 + 0xc1da) = 1;
          }
        }
        if ((*(int *)(uVar18 + 0x54) == 0) && ((uVar2 & 0x130304b08abf) != 0)) {
          FUN_180068670(uVar18 + 0xc5c0);
        }
        local_208 = local_208 != false;
        if ((char)local_200 == '\0') {
          bVar28 = false;
          if ((*(char *)(local_1fc._4_8_ + 0x2c6) == '\0') && ((*local_1b8 >> 0xe & 1) != 0)) {
            bVar28 = true;
            *(undefined1 *)(local_1fc._4_8_ + 0x2c6) = 1;
          }
          uVar14 = uVar17 & 0xffffffffffffef00;
          if (bVar28) goto LAB_1800aaf74;
        }
        else {
LAB_1800aaf74:
          uVar14 = CONCAT71((int7)(uVar14 >> 8),1);
        }
        local_200 = (uint)uVar14;
        if ((local_205 == '\0') &&
           (((*local_1b8 & 0x14000) == 0 ||
            ((*(uint *)(local_1b0 + 0x28 + local_1f0) & 0x8006) == 0)))) {
          local_205 = '\0';
        }
        else {
          local_205 = '\x01';
        }
        param_6 = local_1f0;
        param_2 = local_1d8;
        param_3 = local_1e0;
        param_1 = local_1fc._4_8_;
        cVar6 = local_208;
      }
      uVar23 = (int)uVar22 + 1;
      uVar22 = (ulonglong)uVar23;
    } while (uVar23 < param_5);
    lVar13 = uVar18 + 0x28;
    param_8 = local_1e8;
  }
  puVar12 = param_8 + (ulonglong)local_188 * 10;
  local_1b8 = puVar12;
  for (; bVar24 = 1, param_8 != puVar12; param_8 = param_8 + 10) {
    if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x3f8) + 0x7d4) == '\0') {
      if (param_8[3] != 0x4000) goto LAB_1800aafde;
    }
    else {
LAB_1800aafde:
      local_1d8 = param_2 | param_8[2];
      local_1e0 = param_3 | param_8[4];
      local_118 = *param_8;
      puStack_110 = (ulonglong *)param_8[1];
      uVar14 = param_8[2];
      uVar22 = param_8[3];
      auVar3 = *(undefined1 (*) [16])(param_8 + 4);
      uVar30 = auVar3._0_4_;
      uVar31 = auVar3._4_4_;
      local_d8 = param_8[8];
      uStack_d0 = param_8[9];
      local_1a8 = local_1e0;
      local_190 = local_1d8;
      if (SUB164(*(undefined1 (*) [16])(param_8 + 6),0) ==
          SUB164(*(undefined1 (*) [16])(param_8 + 6),4)) {
        uVar20 = -(ulonglong)(lVar13 != 0) & uVar18;
        if ((uVar14 == 0x2000) || ((uVar14 == 0x10000 && (uVar22 == 0)))) {
          local_1fc._0_4_ = local_1fc._0_4_ | *(uint *)(uVar18 + 0x2e0);
        }
        uVar17 = auVar3._8_8_;
        local_1f0 = FUN_180279a58(uVar18,uVar14,uVar22,uVar17);
        bVar24 = 0;
        if ((uVar22 >> 0xc & 1) != 0) {
          local_207 = 1;
          FUN_1802bd2e0(uVar20,&local_207);
          bVar24 = local_207;
        }
        local_230 = (ulonglong *)CONCAT71(local_230._1_7_,bVar24);
        if (*(char *)(*(longlong *)(*(longlong *)(uVar20 + 0x48) + 0x3f8) + 0xb64) == '\0') {
          cVar6 = FUN_18021dd48(uVar20,uVar14,CONCAT44(uVar31,uVar30));
          if (cVar6 == '\0') {
            local_230 = (ulonglong *)((ulonglong)local_230 & 0xffffffffffffff00);
            local_238 = (ulonglong *)local_1fc;
            cVar6 = FUN_180c564e0(-(ulonglong)(uVar20 != 0xffffffffffffffd8) & uVar20,
                                  uVar22 & 0xffffffffffffefff,uVar17);
            if ((cVar6 == '\0') &&
               ((((bVar24 != 0 || ((uVar22 & 0x130304b08abf) == 0)) ||
                 ((uVar17 & 0x130304b08abf) == 0)) ||
                (((uVar22 & 0x20040a410540) != 0 || ((uVar17 & 0x20040a411540) != 0))))))
            goto LAB_1800ab236;
          }
        }
        else {
          cVar6 = FUN_18021dd48(uVar20,uVar14,CONCAT44(uVar31,uVar30));
          if (cVar6 == '\0') {
LAB_1800ab236:
            param_12 = param_12 | uVar22 & 0xffffffffffffefff;
            param_13 = param_13 | local_1f0;
            param_14 = param_14 | bVar24;
            local_204[0] = param_14;
            local_1a0 = param_12;
            local_198 = param_13;
          }
        }
        lVar13 = *(longlong *)(*(longlong *)(uVar20 + 0x48) + 0x3f8);
        if ((*(char *)(lVar13 + 0xabd) == '\0') &&
           ((local_1f0 & ((ulonglong)(-(uint)(*(char *)(lVar13 + 0xabe) != '\0') & 0x20) | 0x8008))
            != 0)) {
          FUN_180d823d0(uVar20 + 0xa7b0,0);
        }
        puVar12 = local_1b8;
        param_1 = local_1fc._4_8_;
        if (*(char *)(*(longlong *)(*(longlong *)(uVar18 + 0x48) + 0x3f8) + 0x7d3) != '\0') {
          if ((((uVar22 >> 0x10 & 1) != 0) ||
              ((*(char *)(uVar18 + 0xc1d9) != '\0' && ((uVar22 & 0x40) != 0)))) ||
             ((*(char *)(uVar18 + 0xc1d8) != '\0' && ((uVar22 >> 0xc & 1) != 0)))) {
            *(undefined2 *)(uVar18 + 0xc1d8) = 0;
            *(undefined1 *)(uVar18 + 0xc1da) = 0;
          }
          if ((uVar17 & 0x8820) != 0) {
            *(undefined1 *)(uVar18 + 0xc1da) = 1;
          }
        }
      }
      local_208 = local_208 != false;
      if ((char)local_200 == '\0') {
        bVar28 = false;
        if ((*(char *)(param_1 + 0x2c6) == '\0') && ((param_8[3] >> 0xe & 1) != 0)) {
          bVar28 = true;
          *(undefined1 *)(param_1 + 0x2c6) = 1;
        }
        local_200 = local_200 & 0xffffff00;
        if (bVar28) goto LAB_1800ab2d2;
      }
      else {
LAB_1800ab2d2:
        local_200 = CONCAT31(local_200._1_3_,1);
      }
      param_2 = local_1d8;
      param_3 = local_1e0;
      cVar6 = local_208;
      if ((local_205 == '\0') && (((param_8[3] & 0x14000) == 0 || ((param_8[5] & 0x8006) == 0)))) {
        local_205 = '\0';
      }
      else {
        local_205 = '\x01';
      }
    }
    lVar13 = uVar18 + 0x28;
  }
  local_1e8 = (ulonglong *)((ulonglong)local_1e8 & 0xffffffff00000000);
  local_160 = local_170 + (ulonglong)local_178 * 0xc;
  if (local_170 == local_160) {
LAB_1800ac8bc:
    uVar14 = local_1d8;
  }
  else {
    do {
      puVar10 = local_170;
      FUN_1800b41d0(&local_1b8,(int)local_170[6]);
      FUN_1800b41d0(&local_180);
      puVar5 = local_180;
      puVar12 = local_1b8;
      local_118 = *puVar10;
      puStack_110 = (ulonglong *)puVar10[1];
      local_108 = puVar10[2];
      uStack_100 = puVar10[3];
      local_e8 = *(undefined1 (*) [16])(puVar10 + 6);
      uVar14 = puVar10[8];
      uStack_d0 = puVar10[9];
      local_f8 = puVar10[4];
      uStack_f0 = puVar10[5];
      local_c8 = puVar10[10];
      uStack_c0 = puVar10[0xb];
      iVar19 = (int)local_180;
      iVar11 = (int)local_1b8;
      local_d8 = uVar14;
      if ((*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x3f8) + 0x7d4) == '\0') &&
         (puVar10[3] == 0x4000)) {
        uVar22 = -(ulonglong)(uVar18 != 0xffffffffffffffd8) & uVar18;
        if (local_e8._8_4_ == local_e8._12_4_) {
          if (param_11 == '\0') {
            local_238 = local_180;
            cVar6 = FUN_180072f1c();
            if (cVar6 == '\0') goto LAB_1800ab71a;
          }
          else {
LAB_1800ab71a:
            local_218 = 0;
            local_228 = (ulonglong *)0x0;
            iVar11 = 0;
            for (puVar10 = puStack_110; puVar10 != (ulonglong *)0x0;
                puVar10 = (ulonglong *)puVar10[1]) {
              if ((int)*puVar10 == 0x303241e0) {
                iVar11 = iVar11 + 1;
                if ((*(int *)((longlong)puVar10 + 0x14) == 1) && (iVar19 == 7)) {
                  local_218 = 1;
                }
                else {
                  local_218 = 0;
                }
              }
              else if ((int)*puVar10 == 0x3b9cf898) {
                iVar11 = iVar11 + 1;
                local_228 = puVar10;
              }
              if (iVar11 == 2) break;
            }
            local_220 = 1;
            local_230 = puVar5;
            local_238 = puVar12;
            FUN_1800728e0(uVar18);
          }
        }
        else {
          local_b8 = *puVar10;
          puStack_b0 = (ulonglong *)puVar10[1];
          iVar27 = 0;
          local_88 = puVar10[6];
          uStack_80 = puVar10[7];
          local_98 = puVar10[4];
          uStack_90 = puVar10[5];
          local_68 = puVar10[10];
          uStack_60 = puVar10[0xb];
          local_a8 = local_108;
          uStack_a0 = uStack_100;
          local_78 = uVar14;
          uStack_70 = uStack_d0;
          if (*(int *)(uVar14 + 400) != 0) {
            do {
              cVar6 = FUN_18031e0b4();
              if (cVar6 == '\0') goto LAB_1800ab5a7;
              iVar27 = iVar27 + 1;
            } while (iVar27 != *(int *)(uVar14 + 400));
          }
          uVar20 = (ulonglong)*(uint *)(uVar14 + 0xc0);
          if ((((*(uint *)(uVar14 + 0xc0) | *(uint *)(uVar14 + 0xc4)) & 3) == 0) ||
             (*(int *)(uVar22 + 0x50) == 2)) {
LAB_1800ab5a7:
            if ((*(int *)(uVar22 + 0x50) == 0) ||
               ((*(int *)((-(ulonglong)(uVar22 != 0xffffffffffffffd8) & uVar22) + 0x50) == 2 &&
                (cVar6 = FUN_18006b670(), cVar6 == '\0')))) {
              if (param_11 == '\0') {
                local_238 = puVar5;
                cVar6 = FUN_180072f1c();
                if (cVar6 != '\0') goto LAB_1800ab683;
              }
              local_218 = 0;
              local_228 = (ulonglong *)0x0;
              iVar11 = 0;
              for (puVar10 = puStack_b0; puVar10 != (ulonglong *)0x0;
                  puVar10 = (ulonglong *)puVar10[1]) {
                if ((int)*puVar10 == 0x303241e0) {
                  iVar11 = iVar11 + 1;
                  if ((*(int *)((longlong)puVar10 + 0x14) == 1) && (iVar19 == 7)) {
                    local_218 = 1;
                  }
                  else {
                    local_218 = 0;
                  }
                }
                else if ((int)*puVar10 == 0x3b9cf898) {
                  iVar11 = iVar11 + 1;
                  local_228 = puVar10;
                }
                if (iVar11 == 2) break;
              }
              local_220 = 1;
              local_230 = puVar5;
              local_238 = puVar12;
              FUN_1800728e0(uVar18);
            }
          }
          else {
            cVar6 = FUN_1807afb1c();
            if (cVar6 != '\0') {
              if ((((*(longlong *)(uVar14 + 0xf30) != 0) && (cVar6 = FUN_18006b534(), cVar6 == '\0')
                   ) && (iVar11 != 0)) &&
                 (((iVar11 != 6 && ((*(byte *)(uVar14 + 0xc0) & 1) != 0)) &&
                  ((cVar6 = FUN_18006be84(uVar14), cVar6 != '\0' ||
                   ((&DAT_18180c3d0)[(ulonglong)puVar12 & 0xffffffff] == '\0')))))) {
                iVar11 = 0;
                for (puVar10 = puStack_110; puVar10 != (ulonglong *)0x0;
                    puVar10 = (ulonglong *)puVar10[1]) {
                  if ((int)*puVar10 == 0x3b9cf898) {
                    iVar11 = iVar11 + 1;
                  }
                  if (iVar11 == 1) break;
                }
                FUN_18014bdcc();
                goto LAB_1800ab593;
              }
              goto LAB_1800ab5a7;
            }
            cVar6 = FUN_1807afb1c();
            if ((((cVar6 == '\0') || (*(longlong *)(uVar14 + 0xf30) == 0)) ||
                ((iVar11 == 0 || ((iVar11 == 6 || ((uVar20 & 2) == 0)))))) ||
               ((cVar6 = FUN_18006be84(uVar14), cVar6 == '\0' &&
                ((&DAT_18180c3d0)[(ulonglong)puVar5 & 0xffffffff] != '\0')))) goto LAB_1800ab5a7;
            FUN_18014bc58();
LAB_1800ab593:
            if ((uStack_d0 & 4) != 0) {
              uStack_70 = uStack_70 & 0xfffffffffffffffd;
              goto LAB_1800ab5a7;
            }
          }
LAB_1800ab683:
          param_1 = local_1fc._4_8_;
        }
        uVar23 = (uint)local_1e8;
LAB_1800ab68c:
      }
      else {
        local_1c0 = puVar10[8];
        local_1a8 = -(ulonglong)(uVar18 != 0xffffffffffffffd8) & uVar18;
        if (local_e8._8_4_ == local_e8._12_4_) {
          if (param_11 != '\0') {
LAB_1800aba87:
            local_218 = 0;
            local_228 = (ulonglong *)0x0;
            iVar11 = 0;
            for (puVar10 = puStack_110; puVar10 != (ulonglong *)0x0;
                puVar10 = (ulonglong *)puVar10[1]) {
              if ((int)*puVar10 == 0x303241e0) {
                iVar11 = iVar11 + 1;
                if ((*(int *)((longlong)puVar10 + 0x14) == 1) && (iVar19 == 7)) {
                  local_218 = 1;
                }
                else {
                  local_218 = 0;
                }
              }
              else if ((int)*puVar10 == 0x3b9cf898) {
                iVar11 = iVar11 + 1;
                local_228 = puVar10;
              }
              if (iVar11 == 2) break;
            }
            goto LAB_1800abae4;
          }
          local_238 = local_180;
          cVar6 = FUN_180072f1c();
          if (cVar6 == '\0') goto LAB_1800aba87;
LAB_1800abafc:
          uVar22 = uStack_100;
        }
        else {
          local_b8 = *puVar10;
          puStack_b0 = (ulonglong *)puVar10[1];
          iVar27 = 0;
          local_88 = puVar10[6];
          uStack_80 = puVar10[7];
          local_98 = puVar10[4];
          uStack_90 = puVar10[5];
          local_68 = puVar10[10];
          uStack_60 = puVar10[0xb];
          uVar22 = puVar10[3];
          local_a8 = local_108;
          uStack_a0 = uStack_100;
          local_78 = uVar14;
          uStack_70 = uStack_d0;
          if (*(int *)(uVar14 + 400) != 0) {
            do {
              cVar6 = FUN_18031e0b4(uVar14,iVar27);
              if (cVar6 == '\0') goto LAB_1800ab98b;
              iVar27 = iVar27 + 1;
            } while (iVar27 != *(int *)(uVar14 + 400));
            uVar22 = uStack_100;
          }
          uVar20 = (ulonglong)*(uint *)(uVar14 + 0xc0);
          if ((((*(uint *)(uVar14 + 0xc0) | *(uint *)(uVar14 + 0xc4)) & 3) != 0) &&
             (*(int *)(local_1a8 + 0x50) != 2)) {
            cVar6 = FUN_1807afb1c();
            if (cVar6 == '\0') {
              cVar6 = FUN_1807afb1c(*(undefined8 *)(uVar18 + 0x48),local_e8._8_4_);
              if ((((cVar6 != '\0') && (*(longlong *)(uVar14 + 0xf30) != 0)) && (iVar11 != 0)) &&
                 ((iVar11 != 6 && ((uVar20 & 2) != 0)))) {
                cVar6 = FUN_18006be84(uVar14);
                if ((cVar6 != '\0') || ((&DAT_18180c3d0)[(ulonglong)puVar5 & 0xffffffff] == '\0')) {
                  FUN_18014bc58();
                  goto LAB_1800ab977;
                }
                goto LAB_1800ab98b;
              }
            }
            else if (*(longlong *)(uVar14 + 0xf30) != 0) {
              cVar6 = FUN_18006b534();
              if ((((cVar6 == '\0') && (iVar11 != 0)) &&
                  ((iVar11 != 6 && ((*(byte *)(uVar14 + 0xc0) & 1) != 0)))) &&
                 ((cVar6 = FUN_18006be84(uVar14), cVar6 != '\0' ||
                  ((&DAT_18180c3d0)[(ulonglong)puVar12 & 0xffffffff] == '\0')))) {
                iVar11 = 0;
                for (puVar10 = puStack_110; puVar10 != (ulonglong *)0x0;
                    puVar10 = (ulonglong *)puVar10[1]) {
                  if ((int)*puVar10 == 0x3b9cf898) {
                    iVar11 = iVar11 + 1;
                  }
                  if (iVar11 == 1) break;
                }
                FUN_18014bdcc();
LAB_1800ab977:
                if ((uStack_d0 & 4) == 0) goto LAB_1800abafc;
                uStack_70 = uStack_70 & 0xfffffffffffffffd;
              }
LAB_1800ab98b:
              uVar22 = uStack_100;
            }
          }
          if (*(int *)(local_1a8 + 0x50) == 0) {
LAB_1800ab9c8:
            if (param_11 == '\0') {
              local_238 = puVar5;
              cVar6 = FUN_180072f1c();
              if (cVar6 != '\0') goto LAB_1800abafc;
            }
            local_218 = 0;
            local_228 = (ulonglong *)0x0;
            iVar11 = 0;
            for (puVar10 = puStack_b0; puVar10 != (ulonglong *)0x0;
                puVar10 = (ulonglong *)puVar10[1]) {
              if ((int)*puVar10 == 0x303241e0) {
                iVar11 = iVar11 + 1;
                if ((*(int *)((longlong)puVar10 + 0x14) == 1) && (iVar19 == 7)) {
                  local_218 = 1;
                }
                else {
                  local_218 = 0;
                }
              }
              else if ((int)*puVar10 == 0x3b9cf898) {
                iVar11 = iVar11 + 1;
                local_228 = puVar10;
              }
              if (iVar11 == 2) break;
            }
LAB_1800abae4:
            local_220 = 1;
            local_230 = puVar5;
            local_238 = puVar12;
            FUN_1800728e0(uVar18);
            goto LAB_1800abafc;
          }
          if (*(int *)((-(ulonglong)(local_1a8 != 0xffffffffffffffd8) & local_1a8) + 0x50) == 2) {
            cVar6 = FUN_18006b670();
            if (cVar6 == '\0') goto LAB_1800ab9c8;
          }
        }
        uVar14 = local_1c0;
        local_1d8 = local_1d8 | local_108;
        local_1e0 = local_1e0 | local_f8;
        local_208 = local_208 != false;
        local_1a8 = local_1e0;
        local_190 = local_1d8;
        if (iVar19 == 7) {
          if ((*(char *)(local_1c0 + 0x1279) != '\0') ||
             (((((*(byte *)(*(longlong *)(*(longlong *)(local_1c0 + 0x188) + 0x3f8) + 0x1640) &
                 (byte)puVar5) != 0 && (*(longlong **)(local_1c0 + 0x1270) != (longlong *)0x0)) &&
               (*(char *)(**(longlong **)(local_1c0 + 0x1270) + 0x10a) != '\0')) ||
              (*(char *)(*(longlong *)(*(longlong *)(uVar18 + 0x48) + 0x3f8) + 0xbf9) != '\0')))) {
            *(uint *)(uVar18 + 0x2c0) = *(uint *)(uVar18 + 0x2c0) | 0x100;
          }
          *(undefined1 *)(uVar18 + 0xc521) = 0;
          if (*(char *)(*(longlong *)(*(longlong *)(uVar18 + 0x48) + 0x3f8) + 0x880) != '\0') {
            LOCK();
            plVar1 = (longlong *)(*(longlong *)(uVar18 + 0x48) + 0x16638);
            *plVar1 = *plVar1 + 1;
            UNLOCK();
            uVar22 = uStack_100;
          }
          if (*(char *)(*(longlong *)(*(longlong *)(uVar18 + 0x48) + 0x3f8) + 0xd00) != '\0') {
            uVar22 = *(ulonglong *)(*(longlong *)(uVar18 + 0x48) + 0x16640);
            auVar3._8_8_ = 0;
            auVar3._0_8_ = uVar22;
            lVar13 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar3,8);
            if (uVar22 == ((uVar22 - lVar13 >> 1) + lVar13 >> 6) * 100) {
              DVar8 = GetActiveProcessorCount(0xffff);
              dVar29 = (double)FUN_180634500(0x4000000000000000,(double)DVar8);
              dVar29 = dVar29 - 1.0;
              lVar13 = 0;
              if ((9.223372036854776e+18 <= dVar29) &&
                 (dVar29 = dVar29 - 9.223372036854776e+18, dVar29 < 9.223372036854776e+18)) {
                lVar13 = -0x8000000000000000;
              }
              hProcess = GetCurrentProcess();
              SetProcessAffinityMask(hProcess,(longlong)dVar29 + lVar13);
            }
            LOCK();
            plVar1 = (longlong *)(*(longlong *)(uVar18 + 0x48) + 0x16640);
            *plVar1 = *plVar1 + 1;
            UNLOCK();
            uVar22 = uStack_100;
          }
        }
        else {
          lVar13 = *(longlong *)(*(longlong *)(uVar18 + 0x48) + 0x3f8);
          if (((*(char *)(lVar13 + 0x8e2) != '\0') && ((*(byte *)(lVar13 + 0x6274) & 0x10) != 0)) &&
             ((*(char *)(local_1c0 + 0x1278) != '\0' && (iVar19 == 2)))) {
            *(undefined1 *)(uVar18 + 0xc521) = 1;
          }
        }
        if ((param_11 == '\0') && (cVar6 = FUN_180223728(), cVar6 == '\0')) {
          uVar17 = 0;
          local_1f0 = 0;
          local_1d0 = 0;
          local_207 = 0;
          uVar20 = local_1b0 >> 0x20;
          local_1b0 = local_1b0 & 0xffffffff00000000;
          if (local_e8._8_4_ == local_e8._12_4_) {
            uVar17 = -(ulonglong)(uVar18 != 0xffffffffffffffd8) & uVar18;
            if ((local_108 == 0x2000) || ((local_108 == 0x10000 && (uVar22 == 0)))) {
              local_1b0 = CONCAT44((int)uVar20,*(undefined4 *)(uVar18 + 0x2e0));
            }
            local_1c8 = FUN_180279a58(uVar18,local_108,uVar22,uStack_f0);
            uVar20 = uVar22 & 0xffffffffffffefff;
            bVar25 = 0;
            if ((uVar22 >> 0xc & 1) != 0) {
              local_206 = 1;
              if ((*(byte *)(uVar14 + 0x276) & 1) == 0) {
                local_206 = 3;
              }
              FUN_1802bd2e0(uVar17,&local_206);
              bVar25 = local_206;
            }
            lVar13 = thunk_FUN_1805fb820(*(undefined8 *)(uVar17 + 0xc640),
                                         *(undefined8 *)(uVar17 + 0xc648),uVar14);
            if (lVar13 == *(longlong *)(uVar17 + 0xc648)) {
              uVar26 = 0;
            }
            else {
              if (*(longlong *)(uVar17 + 0xc640) != *(longlong *)(uVar17 + 0xc648)) {
                *(longlong *)(uVar17 + 0xc648) = *(longlong *)(uVar17 + 0xc640);
              }
              uVar26 = 1;
            }
            local_230 = (ulonglong *)CONCAT71(local_230._1_7_,bVar25);
            if (*(char *)(*(longlong *)(*(longlong *)(uVar17 + 0x48) + 0x3f8) + 0xb64) == '\0') {
              cVar6 = FUN_18021dd48(uVar17,local_108,local_f8,uVar20);
              uVar14 = uStack_f0;
              if (cVar6 == '\0') {
                local_230 = (ulonglong *)CONCAT71(local_230._1_7_,uVar26);
                local_238 = &local_1b0;
                cVar6 = FUN_180c564e0(-(ulonglong)(uVar17 != 0xffffffffffffffd8) & uVar17,uVar20,
                                      uStack_f0,bVar25);
                if ((cVar6 == '\0') &&
                   ((((bVar25 != 0 || ((uVar22 & 0x130304b08abf) == 0)) ||
                     ((uVar14 & 0x130304b08abf) == 0)) ||
                    (((uVar22 & 0x20040a410540) != 0 || ((uVar14 & 0x20040a411540) != 0))))))
                goto LAB_1800abec6;
              }
LAB_1800abde3:
            }
            else {
              cVar6 = FUN_18021dd48(uVar17,local_108,local_f8,uVar20);
              if (cVar6 != '\0') goto LAB_1800abde3;
LAB_1800abec6:
              local_1f0 = local_1c8;
              local_207 = bVar25;
              local_1d0 = uVar20;
            }
            uVar22 = uStack_100;
            uVar17 = local_1f0;
            if (*(char *)(*(longlong *)(*(longlong *)(uVar18 + 0x48) + 0x3f8) + 0x7d3) != '\0') {
              if ((((uStack_100 >> 0x10 & 1) != 0) ||
                  ((*(char *)(uVar18 + 0xc1d9) != '\0' && ((uStack_100 & 0x40) != 0)))) ||
                 ((*(char *)(uVar18 + 0xc1d8) != '\0' && ((uStack_100 >> 0xc & 1) != 0)))) {
                *(undefined2 *)(uVar18 + 0xc1d8) = 0;
                *(undefined1 *)(uVar18 + 0xc1da) = 0;
              }
              if ((uStack_f0 & 0x8820) != 0) {
                *(undefined1 *)(uVar18 + 0xc1da) = 1;
              }
            }
            if ((*(int *)(uVar18 + 0x54) == 0) && ((uStack_f0 & 0x130304b08abf) != 0)) {
              local_1c8 = local_1c0;
              FUN_180111b2c(uVar18 + 0xc5c0,&local_158,&local_1c8);
              if (local_158 != *(longlong *)(uVar18 + 0xc5d0)) goto LAB_1800abf32;
            }
          }
          else if (*(int *)((-(ulonglong)(uVar18 != 0xffffffffffffffd8) & uVar18) + 0x50) != 1) {
            uVar20 = -(ulonglong)(uVar18 != 0xffffffffffffffd8) & uVar18;
            FUN_180268fec(uVar18,local_108,uVar22,&local_1b0);
            local_1c8 = FUN_180279a58();
            uVar17 = uVar22 & 0xffffffffffffefff;
            bVar25 = 0;
            if ((uVar22 >> 0xc & 1) != 0) {
              local_206 = 1;
              if ((*(byte *)(uVar14 + 0x276) & 1) == 0) {
                local_206 = 3;
              }
              FUN_1802bd2e0(uVar20,&local_206);
              bVar25 = local_206;
            }
            lVar13 = thunk_FUN_1805fb820(*(undefined8 *)(uVar20 + 0xc640),
                                         *(undefined8 *)(uVar20 + 0xc648),uVar14);
            if (lVar13 == *(longlong *)(uVar20 + 0xc648)) {
              uVar26 = 0;
            }
            else {
              if (*(longlong *)(uVar20 + 0xc640) != *(longlong *)(uVar20 + 0xc648)) {
                *(longlong *)(uVar20 + 0xc648) = *(longlong *)(uVar20 + 0xc640);
              }
              uVar26 = 1;
            }
            local_230 = (ulonglong *)CONCAT71(local_230._1_7_,bVar25);
            if (*(char *)(*(longlong *)(*(longlong *)(uVar20 + 0x48) + 0x3f8) + 0xb64) == '\0') {
              cVar6 = FUN_18021dd48(uVar20,local_108,local_f8,uVar17);
              uVar14 = uStack_f0;
              if (cVar6 == '\0') {
                local_230 = (ulonglong *)CONCAT71(local_230._1_7_,uVar26);
                local_238 = &local_1b0;
                cVar6 = FUN_180c564e0(-(ulonglong)(uVar20 != 0xffffffffffffffd8) & uVar20,uVar17,
                                      uStack_f0,bVar25);
                if ((cVar6 == '\0') &&
                   ((((bVar25 != 0 || ((uVar22 & 0x130304b08abf) == 0)) ||
                     ((uVar14 & 0x130304b08abf) == 0)) ||
                    (((uVar22 & 0x20040a410540) != 0 || ((uVar14 & 0x20040a411540) != 0))))))
                goto LAB_1800ac19d;
              }
LAB_1800ac0ad:
            }
            else {
              cVar6 = FUN_18021dd48(uVar20,local_108,local_f8,uVar17);
              if (cVar6 != '\0') goto LAB_1800ac0ad;
LAB_1800ac19d:
              local_1f0 = local_1c8;
              local_207 = bVar25;
              local_1d0 = uVar17;
            }
            uVar22 = uStack_100;
            uVar17 = local_1f0;
            if (*(char *)(*(longlong *)(*(longlong *)(uVar18 + 0x48) + 0x3f8) + 0x7d3) != '\0') {
              if ((((uStack_100 >> 0x10 & 1) != 0) ||
                  ((*(char *)(uVar18 + 0xc1d9) != '\0' && ((uStack_100 & 0x40) != 0)))) ||
                 ((*(char *)(uVar18 + 0xc1d8) != '\0' && ((uStack_100 >> 0xc & 1) != 0)))) {
                *(undefined2 *)(uVar18 + 0xc1d8) = 0;
                *(undefined1 *)(uVar18 + 0xc1da) = 0;
              }
              if ((uStack_f0 & 0x8820) != 0) {
                *(undefined1 *)(uVar18 + 0xc1da) = 1;
              }
            }
            if ((*(int *)(uVar18 + 0x54) == 0) && ((uStack_f0 & 0x130304b08abf) != 0)) {
              local_1c8 = local_1c0;
              FUN_180111b2c(uVar18 + 0xc5c0,&local_150,&local_1c8);
              if (local_150 == *(longlong *)(uVar18 + 0xc5d0)) goto LAB_1800abf4b;
LAB_1800abf32:
              FUN_180111b0c();
              uVar22 = uStack_100;
            }
          }
LAB_1800abf4b:
          uVar14 = -(ulonglong)(uVar18 != 0xffffffffffffffd8) & uVar18;
          if ((*(int *)((-(ulonglong)(uVar14 != 0xffffffffffffffd8) & uVar14) + 0x50) == 1) &&
             (*(longlong *)(&DAT_0000a490 + *(longlong *)(uVar14 + 0x90)) != uVar14 + 0x98)) {
            if (((local_1d0 & 0x200000410040) == 0) &&
               (((local_207 & 4) == 0 && ((uVar17 >> 0x29 & 1) == 0)))) {
              bVar25 = 0;
              bVar21 = 0;
            }
            else {
              bVar25 = 1;
              bVar21 = local_207 & 4;
            }
            if (((local_1d0 & 0x10040) == 0) && (bVar21 == 0)) {
              uVar23 = 0;
            }
            else {
              uVar23 = 0x40000;
            }
            uVar23 = -(uint)((uVar17 & 0x20000008830) != 0) & 0x800 |
                     (uint)(uVar17 >> 0x1d) & 0x1000 | -(uint)((char)local_200 != '\0') & 0x40 |
                     -(uint)bVar25 & 3 |
                     -(uint)((local_1d0 & *(ulonglong *)(*(longlong *)(uVar18 + 0x48) + 0x16600)) !=
                            0) & 7 | uVar23;
          }
          else {
            if ((((local_1d0 & 0x200000410040) == 0) && ((local_207 & 4) == 0)) &&
               ((uVar17 & 0x20000000000) == 0)) {
              bVar25 = 0;
            }
            else {
              bVar25 = 1;
            }
            if ((((local_1d0 & 0x11100) == 0) && ((uVar17 & 0x20000008080) == 0)) &&
               ((local_207 & 1) == 0)) {
              bVar21 = 0;
            }
            else {
              bVar21 = 1;
            }
            if (((local_1d0 & 0x11400) == 0) && ((local_207 & 2) == 0)) {
              iVar11 = 0;
            }
            else {
              iVar11 = 1;
            }
            if (((local_1d0 & 0x10040) == 0) && ((local_207 & 4) == 0)) {
              uVar23 = 0;
            }
            else {
              uVar23 = 0x40000;
            }
            if ((((char)local_200 == '\0') && ((local_1f0 >> 0x1c & 1) == 0)) &&
               ((local_1d0 >> 0x1c & 1) == 0)) {
              bVar15 = 0;
LAB_1800ac377:
              bVar7 = 0;
            }
            else {
              bVar15 = 1;
              if ((local_1d0 >> 0x1c & 1) == 0) goto LAB_1800ac377;
              bVar7 = 1;
            }
            uVar23 = -(uint)((local_1f0 & 0x20000000000) != 0) & 0x1000 | (uint)bVar7 << 0x11 |
                     -(uint)bVar15 & 0x60 | iVar11 * 0x10 | -(uint)bVar25 & 3 | (uint)bVar21 << 3 |
                     -(uint)((local_1f0 & 0x20000008838) != 0) & 0x800 |
                     -(uint)((local_1f0 & 0x8004) != 0) & 0x200 |
                     -(uint)(((*(ulonglong *)(*(longlong *)(uVar18 + 0x48) + 0x16600) | 0x8000000) &
                             local_1d0) != 0) & 7 | uVar23;
          }
          if (((uint)local_1b0 | uVar23) == 0x808) {
            uVar23 = (uint)local_1e8 + 1;
            local_1e8 = (ulonglong *)CONCAT44(local_1e8._4_4_,uVar23);
            param_1 = local_1fc._4_8_;
            goto LAB_1800ab68c;
          }
        }
        if (local_e8._8_4_ == local_e8._12_4_) {
          uVar14 = -(ulonglong)(uVar18 != 0xffffffffffffffd8) & uVar18;
          FUN_180268fec(uVar18,local_108,uVar22,local_1fc);
          local_1c8 = FUN_180279a58();
          bVar25 = 0;
          if ((uVar22 >> 0xc & 1) != 0) {
            local_206 = 1;
            if ((*(byte *)(local_1c0 + 0x276) & 1) == 0) {
              local_206 = 3;
            }
            FUN_1802bd2e0(uVar14,&local_206);
            bVar25 = local_206;
          }
          lVar13 = thunk_FUN_1805fb820(*(undefined8 *)(uVar14 + 0xc640),
                                       *(undefined8 *)(uVar14 + 0xc648),local_1c0);
          uVar20 = uStack_f0;
          if (lVar13 == *(longlong *)(uVar14 + 0xc648)) {
            uVar26 = 0;
          }
          else {
            if (*(longlong *)(uVar14 + 0xc640) != *(longlong *)(uVar14 + 0xc648)) {
              *(longlong *)(uVar14 + 0xc648) = *(longlong *)(uVar14 + 0xc640);
            }
            uVar26 = 1;
          }
          local_230 = (ulonglong *)CONCAT71(local_230._1_7_,bVar25);
          if (*(char *)(*(longlong *)(*(longlong *)(uVar14 + 0x48) + 0x3f8) + 0xb64) == '\0') {
            cVar6 = FUN_18021dd48(uVar14);
            if (cVar6 == '\0') {
              local_230 = (ulonglong *)CONCAT71(local_230._1_7_,uVar26);
              local_238 = (ulonglong *)local_1fc;
              cVar6 = FUN_180c564e0(-(ulonglong)(uVar14 != 0xffffffffffffffd8) & uVar14);
              if ((cVar6 == '\0') &&
                 (((bVar25 != 0 || ((uVar22 & 0x130304b08abf) == 0)) ||
                  (((uVar20 & 0x130304b08abf) == 0 ||
                   (((uVar22 & 0x20040a410540) != 0 || ((uVar20 & 0x20040a411540) != 0))))))))
              goto LAB_1800ac56e;
            }
          }
          else {
            cVar6 = FUN_18021dd48();
            if (cVar6 == '\0') {
LAB_1800ac56e:
              param_12 = param_12 | uVar22 & 0xffffffffffffefff;
              param_13 = param_13 | local_1c8;
              param_14 = param_14 | bVar25;
              local_204[0] = param_14;
              local_1a0 = param_12;
              local_198 = param_13;
            }
          }
          if (*(char *)(*(longlong *)(*(longlong *)(uVar18 + 0x48) + 0x3f8) + 0x7d3) != '\0') {
            if ((((uStack_100 >> 0x10 & 1) != 0) ||
                ((*(char *)(uVar18 + 0xc1d9) != '\0' && ((uStack_100 & 0x40) != 0)))) ||
               ((*(char *)(uVar18 + 0xc1d8) != '\0' && ((uStack_100 >> 0xc & 1) != 0)))) {
              *(undefined2 *)(uVar18 + 0xc1d8) = 0;
              *(undefined1 *)(uVar18 + 0xc1da) = 0;
            }
            if ((uVar20 & 0x8820) != 0) {
              *(undefined1 *)(uVar18 + 0xc1da) = 1;
            }
          }
          if ((*(int *)(uVar18 + 0x54) == 0) && ((uVar20 & 0x130304b08abf) != 0)) {
            local_1c8 = local_1c0;
            FUN_180111b2c(uVar18 + 0xc5c0,&local_148,&local_1c8);
            if (local_148 != *(longlong *)(uVar18 + 0xc5d0)) {
LAB_1800ac64d:
              FUN_180111b0c(uVar18 + 0xc5c0);
            }
          }
        }
        else if (*(int *)((-(ulonglong)(uVar18 != 0xffffffffffffffd8) & uVar18) + 0x50) != 1) {
          uVar14 = -(ulonglong)(uVar18 != 0xffffffffffffffd8) & uVar18;
          FUN_180268fec(uVar18,local_108,uVar22,local_1fc);
          local_1c8 = FUN_180279a58();
          bVar25 = 0;
          if ((uVar22 >> 0xc & 1) != 0) {
            local_206 = 1;
            if ((*(byte *)(local_1c0 + 0x276) & 1) == 0) {
              local_206 = 3;
            }
            FUN_1802bd2e0(uVar14,&local_206);
            bVar25 = local_206;
          }
          lVar13 = thunk_FUN_1805fb820(*(undefined8 *)(uVar14 + 0xc640),
                                       *(undefined8 *)(uVar14 + 0xc648),local_1c0);
          uVar20 = uStack_f0;
          if (lVar13 == *(longlong *)(uVar14 + 0xc648)) {
            uVar26 = 0;
          }
          else {
            if (*(longlong *)(uVar14 + 0xc640) != *(longlong *)(uVar14 + 0xc648)) {
              *(longlong *)(uVar14 + 0xc648) = *(longlong *)(uVar14 + 0xc640);
            }
            uVar26 = 1;
          }
          local_230 = (ulonglong *)CONCAT71(local_230._1_7_,bVar25);
          if (*(char *)(*(longlong *)(*(longlong *)(uVar14 + 0x48) + 0x3f8) + 0xb64) == '\0') {
            cVar6 = FUN_18021dd48(uVar14);
            if (cVar6 == '\0') {
              local_230 = (ulonglong *)CONCAT71(local_230._1_7_,uVar26);
              local_238 = (ulonglong *)local_1fc;
              cVar6 = FUN_180c564e0(-(ulonglong)(uVar14 != 0xffffffffffffffd8) & uVar14);
              if ((cVar6 == '\0') &&
                 ((((bVar25 != 0 || ((uVar22 & 0x130304b08abf) == 0)) ||
                   ((uVar20 & 0x130304b08abf) == 0)) ||
                  (((uVar22 & 0x20040a410540) != 0 || ((uVar20 & 0x20040a411540) != 0))))))
              goto LAB_1800ac7c7;
            }
          }
          else {
            cVar6 = FUN_18021dd48();
            if (cVar6 == '\0') {
LAB_1800ac7c7:
              param_12 = param_12 | uVar22 & 0xffffffffffffefff;
              param_13 = param_13 | local_1c8;
              param_14 = param_14 | bVar25;
              local_204[0] = param_14;
              local_1a0 = param_12;
              local_198 = param_13;
            }
          }
          if (*(char *)(*(longlong *)(*(longlong *)(uVar18 + 0x48) + 0x3f8) + 0x7d3) != '\0') {
            if ((((uStack_100 >> 0x10 & 1) != 0) ||
                ((*(char *)(uVar18 + 0xc1d9) != '\0' && ((uStack_100 & 0x40) != 0)))) ||
               ((*(char *)(uVar18 + 0xc1d8) != '\0' && ((uStack_100 >> 0xc & 1) != 0)))) {
              *(undefined2 *)(uVar18 + 0xc1d8) = 0;
              *(undefined1 *)(uVar18 + 0xc1da) = 0;
            }
            if ((uVar20 & 0x8820) != 0) {
              *(undefined1 *)(uVar18 + 0xc1da) = 1;
            }
          }
          if ((*(int *)(uVar18 + 0x54) == 0) && ((uVar20 & 0x130304b08abf) != 0)) {
            local_1c8 = local_1c0;
            FUN_180111b2c(uVar18 + 0xc5c0,local_140,&local_1c8);
            if (local_140[0] != *(longlong *)(uVar18 + 0xc5d0)) goto LAB_1800ac64d;
          }
        }
        param_1 = local_1fc._4_8_;
        uVar23 = (uint)local_1e8;
      }
      local_170 = local_170 + 0xc;
    } while (local_170 != local_160);
    cVar6 = local_208;
    if ((((uVar23 == 0) || (uVar23 != local_178)) || (param_5 != 0)) || (local_188 != 0))
    goto LAB_1800ac8bc;
    local_1e0 = 0;
    local_190 = 0;
    local_1a8 = 0;
    uVar14 = 0;
  }
  uVar23 = 0x40000;
  if ((((((*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x3f8) + 0x7d3) != '\0') &&
         ((local_168 & 0x70000000) == 0)) &&
        ((param_11 == '\0' &&
         ((*(char *)(param_1 + 0xc1d8) != '\0' && (*(char *)(param_1 + 0xc1d9) == '\0')))))) &&
       (*(char *)(param_1 + 0xc1da) != '\0')) &&
      ((((char)local_200 == '\0' && (local_205 == '\0')) && (cVar6 == '\0')))) &&
     ((((param_14 != 0 || local_1e0 != 0) || uVar14 != 0) || param_13 != 0) || param_12 != 0)) {
    local_230 = (ulonglong *)local_204;
    local_238 = &local_198;
    FUN_1807b2d80(param_1 + 0xc1b0,&local_190,&local_1a8);
    local_1e0 = local_1a8;
    uVar14 = local_190;
    param_13 = local_198;
    param_12 = local_1a0;
    param_14 = local_204[0];
  }
  local_1d8 = (ulonglong)((uint)uVar14 & 0x537dbbfe);
  if ((((uVar14 & 0x537dbbfe) != 0) && ((local_1e0 & 0x53399df9) != 0)) ||
     ((param_13 & 0x100000200000) != 0)) {
    FUN_18009d518();
  }
  uVar14 = -(ulonglong)(uVar18 != 0xffffffffffffffd8) & uVar18;
  if ((*(int *)((-(ulonglong)(uVar14 != 0xffffffffffffffd8) & uVar14) + 0x50) == 1) &&
     (*(longlong *)(&DAT_0000a490 + *(longlong *)(uVar14 + 0x90)) != uVar14 + 0x98)) {
    if (((param_12 & 0x200000410040) == 0) &&
       (((param_14 & 4) == 0 && ((param_13 >> 0x29 & 1) == 0)))) {
      bVar24 = 0;
    }
    if (((param_12 & 0x10040) == 0) && ((param_14 & 4) == 0)) {
      uVar23 = 0;
    }
    bVar28 = (char)local_200 != '\0';
    local_200 = CONCAT31(local_200._1_3_,-(char)local_200);
    uVar23 = -(uint)((param_13 & 0x20000008830) != 0) & 0x800 | (uint)(param_13 >> 0x1d) & 0x1000 |
             -(uint)bVar24 & 3 | -(uint)bVar28 & 0x40 |
             -(uint)((param_12 & *(ulonglong *)(*(longlong *)(uVar18 + 0x48) + 0x16600)) != 0) & 7 |
             uVar23;
  }
  else {
    if ((((param_12 & 0x200000410040) == 0) && ((param_14 & 4) == 0)) &&
       ((param_13 & 0x20000000000) == 0)) {
      bVar25 = 0;
    }
    else {
      bVar25 = 1;
    }
    if ((((param_12 & 0x11100) == 0) && ((param_13 & 0x20000008080) == 0)) && ((param_14 & 1) == 0))
    {
      bVar21 = 0;
    }
    else {
      bVar21 = 1;
    }
    if (((param_12 & 0x11400) == 0) && ((param_14 & 2) == 0)) {
      bVar15 = 0;
    }
    else {
      bVar15 = 1;
    }
    if (((param_12 & 0x10040) == 0) && ((param_14 & 4) == 0)) {
      uVar23 = 0;
    }
    else {
      uVar23 = 0x40000;
    }
    if (((char)local_200 == '\0') && ((param_13 & 0x10000000) == 0)) {
      if ((param_12 & 0x10000000) == 0) {
        bVar24 = 0;
        goto LAB_1800acb8b;
      }
LAB_1800accd0:
      iVar11 = 1;
    }
    else {
      if ((param_12 & 0x10000000) != 0) goto LAB_1800accd0;
LAB_1800acb8b:
      iVar11 = 0;
    }
    bVar28 = local_205 != '\0';
    local_205 = -local_205;
    uVar23 = -(uint)((param_13 & 0x20000000000) != 0) & 0x1000 |
             -(uint)((param_13 & 0x20000008838) != 0) & 0x800 |
             -(uint)((param_13 & 0x8004) != 0) & 0x200 |
             -(uint)(((*(ulonglong *)(*(longlong *)(uVar18 + 0x48) + 0x16600) | 0x8000000) &
                     param_12) != 0) & 7 | iVar11 * 0x20000 | -(uint)(bVar24 != 0) & 0x60 |
             (uint)bVar15 << 4 | -(uint)bVar25 & 3 | (uint)bVar21 << 3 | -(uint)bVar28 & 0x10000 |
             uVar23;
  }
  FUN_18024b3c0(local_1fc._4_8_,param_13);
  uVar14 = (ulonglong)(uVar23 | local_1fc._0_4_);
  if (((uVar23 | local_1fc._0_4_) != 0) ||
     ((((*(char *)(*(longlong *)(*(longlong *)(uVar18 + 0x48) + 0x3f8) + 0x7d2) == '\0' &&
        (local_1d8 != 0)) && ((local_1e0 & 0x53399df9) != 0)) ||
      (cVar6 = FUN_180275a9c(*(longlong *)(uVar18 + 0x48),param_12,param_13), cVar6 != '\0')))) {
    FUN_1800bf920(uVar18,uVar14 & 0xffffffff,2);
  }
  param_1 = local_1fc._4_8_;
LAB_1800acc60:
  if ((param_13 & 0x8001) != 0) {
    FUN_18009d600(param_1);
    FUN_18009d838(param_1 + 0xc100);
    FUN_18009d288(param_1 + 0xc150);
  }
  FUN_1802905b8(param_1 + 0xa128,param_13);
  return;
}


// ===== 0x1802059d0 FUN_1802059d0 =====

void FUN_1802059d0(longlong param_1)

{
  if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x3f8) + 0xb64) == '\0') {
    if (param_1 == -0x28) {
      param_1 = 0;
    }
    FUN_18011d630(param_1);
  }
  else {
    FUN_180205b18();
  }
  return;
}


// ===== 0x1802c74b4 FUN_1802c74b4 =====

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

longlong FUN_1802c74b4(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 local_18 [4];
  
  lVar1 = (*(code *)param_1[1])(*param_1,param_3 << 4,8);
  if (lVar1 == 0) {
    local_18[0] = 0xc0000017;
                    /* WARNING: Subroutine does not return */
    FUN_18061b740(local_18,&DAT_1818b54a8);
  }
  FUN_1801e3048(lVar1,param_3);
  return lVar1;
}


