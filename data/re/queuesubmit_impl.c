// ===== 0x180138894 FUN_180138894 =====

void FUN_180138894(longlong param_1)

{
  undefined4 local_res8 [8];
  
  if (*(char *)(*(longlong *)(&DAT_0000a410 + param_1) + 0x8d68) != '\0') {
    local_res8[0] = 0xc01e0200;
                    /* WARNING: Subroutine does not return */
    FUN_18061b740(local_res8,&DAT_1818b54a8);
  }
  return;
}


// ===== 0x180137050 FUN_180137050 =====

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180137050(longlong *param_1,uint param_2,longlong param_3,longlong param_4)

{
  byte bVar1;
  uint *puVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  DWORD DVar7;
  ulonglong uVar8;
  int *piVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  longlong *plVar15;
  longlong lVar16;
  uint *puVar17;
  longlong lVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  uint uVar22;
  undefined4 *puVar23;
  longlong lVar24;
  bool bVar25;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_338 [32];
  uint *local_318;
  longlong *local_310;
  longlong *local_308;
  longlong *local_2f8;
  byte local_2e8;
  char local_2e7;
  uint local_2e4;
  char local_2e0;
  uint local_2dc;
  uint local_2d8;
  int *local_2d0;
  longlong local_2c8;
  longlong local_2c0;
  longlong local_2b8;
  uint local_2b0;
  int local_2ac;
  longlong *local_2a8;
  longlong local_2a0;
  undefined8 local_298;
  longlong local_290;
  longlong lStack_288;
  int local_280;
  longlong local_278;
  longlong local_270;
  int *local_268;
  longlong local_260;
  ulonglong local_258;
  uint local_250;
  uint local_24c;
  uint local_248;
  undefined8 *local_240 [2];
  longlong local_230;
  uint local_224;
  longlong *local_220;
  uint local_218;
  undefined2 local_214;
  ulonglong local_210;
  ulonglong uStack_208;
  undefined1 *local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  int *local_1e0;
  ulonglong local_1d8;
  longlong local_1d0;
  undefined8 *local_1c8 [2];
  longlong local_1b8;
  uint local_1ac;
  undefined8 local_1a8;
  longlong local_1a0;
  longlong local_198;
  uint local_190;
  uint uStack_18c;
  undefined8 uStack_188;
  char local_180;
  LPCRITICAL_SECTION local_178;
  uint local_170;
  byte local_16c;
  char local_16b;
  ulonglong local_168;
  uint *local_140;
  undefined1 local_138 [240];
  ulonglong local_48;
  
  local_48 = DAT_1818ba280 ^ (ulonglong)auStack_338;
  lVar18 = *param_1;
  local_2e0 = *(char *)(lVar18 + 0xfa80);
  local_178 = (LPCRITICAL_SECTION)(lVar18 + 0xfa88);
  local_2e4 = param_2;
  local_2c0 = param_3;
  local_1a0 = lVar18;
  local_198 = param_4;
  local_180 = local_2e0;
  if (local_2e0 != '\0') {
    EnterCriticalSection(local_178);
  }
  if ((*(char *)(*(longlong *)(&DAT_0000a410 + lVar18) + 0x13a80) != '\0') && (param_2 != 0)) {
    FUN_1807dcf64(*(longlong *)(&DAT_0000a410 + lVar18) + 0x13a78,*(undefined8 *)(lVar18 + 0xf5a8));
  }
  FUN_18006df24(local_240,*(longlong *)(&DAT_0000a410 + lVar18) + 0x38);
  FUN_18006df24();
  local_290 = 0;
  lStack_288 = 0;
  local_280 = 0;
  local_2d8 = 0;
  uVar8 = 0;
  local_2a0 = local_230;
  local_2c8 = 0;
  lVar12 = 0;
  local_260 = 0;
  lVar21 = local_230;
LAB_18013713d:
  lVar24 = local_198;
  local_248 = (uint)uVar8;
  if (param_2 <= local_248) {
    lVar16 = local_2c8;
    if (local_198 != 0) {
      uVar22 = 1;
      if (1 < local_2d8) {
        uVar22 = local_2d8;
      }
      lVar12 = local_198 + 200;
      if (*(char *)(local_198 + 0x18) != '\0') {
        lVar12 = local_198 + 0x20;
      }
      local_310 = (longlong *)(**(longlong **)(local_198 + 0x138) + 1);
      local_2f8 = &local_290;
      local_308 = (longlong *)((ulonglong)local_308 & 0xffffffffffffff00);
      local_318 = (uint *)CONCAT44(local_318._4_4_,uVar22);
      FUN_180136d70(lVar12,lVar18 + 0x9cb8,lVar18 + 0x38,lVar18 + 0x138);
      **(longlong **)(lVar24 + 0x138) = **(longlong **)(lVar24 + 0x138) + 1;
      lVar16 = lStack_288;
      lVar12 = local_290;
    }
    if (lVar12 != 0) {
      *(undefined4 *)((ulonglong)*(uint *)(lVar16 + 200) + *(longlong *)(lVar16 + 8)) =
           DAT_1819afde0;
      *(int *)(lVar16 + 200) = *(int *)(lVar16 + 200) + 4;
      lVar24 = *(longlong *)(lVar12 + 0xc0);
      uVar22 = local_280 + DAT_1819afd50;
      if ((uint)(local_280 + DAT_1819afd50) <= *(uint *)(lVar24 + 0x28)) {
        uVar22 = *(uint *)(lVar24 + 0x28);
      }
      *(uint *)(lVar24 + 0x28) = uVar22;
      uVar22 = FUN_1800a3cac(lVar12);
      if (uVar22 != 0) {
        local_2e4 = uVar22;
                    /* WARNING: Subroutine does not return */
        FUN_18061b740(&local_2e4,&DAT_1818b54a8);
      }
    }
    if (*(char *)(*(longlong *)(*(longlong *)(&DAT_0000a410 + lVar18) + 0x3f8) + 0x8c1) != '\0') {
      if (*(longlong *)(*(longlong *)(&DAT_0000a410 + lVar18) + 0x350) == 0) {
        FUN_1801003fc();
        FUN_1800feee0(*(longlong *)(&DAT_0000a410 + lVar18) + 0x38);
      }
      else {
        FUN_18010048c(lVar18);
      }
    }
    FUN_1801384d0(*(longlong *)(&DAT_0000a410 + lVar18) + 0xfc38);
    if ((local_1c8[0] != (undefined8 *)0x0) && (local_1b8 != 0)) {
      (*(code *)local_1c8[0][3])(*local_1c8[0]);
    }
    if ((local_240[0] != (undefined8 *)0x0) && (lVar21 != 0)) {
      (*(code *)local_240[0][3])(*local_240[0],lVar21);
    }
    if (local_2e0 != '\0') {
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar18 + 0xfa88));
    }
    return;
  }
  local_2b8 = uVar8 * 9;
  lVar21 = 0;
  local_258 = 0;
  local_1d0 = 0;
  local_268 = (int *)0x0;
  local_1e0 = (int *)0x0;
  local_2dc = 0;
  local_2d0 = (int *)0x0;
  iVar4 = 0;
  piVar9 = *(int **)(param_3 + 8 + uVar8 * 0x48);
  if (piVar9 != (int *)0x0) {
    do {
      if (*piVar9 == 0x3b9bb465) {
        lVar21 = *(longlong *)(piVar9 + 6);
        local_258 = *(ulonglong *)(piVar9 + 10);
        local_1d0 = *(longlong *)(piVar9 + 0xe);
        goto LAB_180137c66;
      }
      if (*piVar9 == 0x3b9beef8) {
        local_2d0 = piVar9;
LAB_1801377c8:
        iVar4 = iVar4 + 1;
      }
      else {
        if (*piVar9 == 0x3b9bfab2) {
          local_1e0 = piVar9;
LAB_180137c66:
          goto LAB_1801377c8;
        }
        if (*piVar9 == 0x3b9c8f23) {
          local_2dc = piVar9[4];
          goto LAB_180137c66;
        }
        if (*piVar9 == 0x3b9df29b) {
          local_268 = piVar9;
          goto LAB_1801377c8;
        }
      }
    } while ((iVar4 != 5) && (piVar9 = *(int **)(piVar9 + 2), piVar9 != (int *)0x0));
    if (local_2d0 != (int *)0x0) {
      uVar22 = local_2d0[4];
      puVar10 = *(undefined8 **)(local_2d0 + 8);
      puVar23 = *(undefined4 **)(local_2d0 + 10);
      uVar8 = 0;
      if (uVar22 != 0) {
        do {
          FUN_180138274(*(longlong *)(*(longlong *)(local_2d0 + 6) + uVar8 * 8) + 0x20,
                        *(undefined4 *)(lVar18 + 0x38),*puVar10,*puVar23);
          puVar10 = puVar10 + 1;
          puVar23 = puVar23 + 1;
          uVar6 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar6;
        } while (uVar6 < uVar22);
      }
      lVar12 = local_260;
      param_3 = local_2c0;
    }
  }
  lVar24 = local_2b8;
  uVar8 = 0;
  if (*(int *)(param_3 + 0x10 + local_2b8 * 8) == 0) {
  }
  else {
    do {
      lVar12 = *(longlong *)(*(longlong *)(param_3 + 0x18 + lVar24 * 8) + uVar8 * 8);
      if (lVar21 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(lVar21 + uVar8 * 4);
      }
      local_318 = (uint *)&local_290;
      if (*(char *)(lVar12 + 0x180) == '\0') {
        FUN_18034d264(lVar12,lVar18,uVar5,0);
      }
      else {
        FUN_18013f440(lVar12,lVar18);
      }
      uVar22 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar22;
    } while (uVar22 < *(uint *)(param_3 + 0x10 + lVar24 * 8));
    local_2c8 = lStack_288;
    local_260 = local_290;
    lVar12 = local_290;
  }
  if (lVar12 != 0) {
    *(undefined4 *)((ulonglong)*(uint *)(local_2c8 + 200) + *(longlong *)(local_2c8 + 8)) =
         DAT_1819afde0;
    *(int *)(local_2c8 + 200) = *(int *)(local_2c8 + 200) + 4;
    lVar12 = *(longlong *)(lVar12 + 0xc0);
    uVar22 = local_280 + DAT_1819afd50;
    if ((uint)(local_280 + DAT_1819afd50) <= *(uint *)(lVar12 + 0x28)) {
      uVar22 = *(uint *)(lVar12 + 0x28);
    }
    *(uint *)(lVar12 + 0x28) = uVar22;
    uVar22 = FUN_1800a3cac();
    local_2c8 = 0;
    lStack_288 = 0;
    local_260 = 0;
    local_290 = 0;
    local_280 = 0;
    if (uVar22 != 0) {
      local_2e4 = uVar22;
                    /* WARNING: Subroutine does not return */
      FUN_18061b740(&local_2e4,&DAT_1818b54a8);
    }
  }
  uVar8 = 0;
LAB_18013719c:
  if (*(uint *)(param_3 + 0x28 + lVar24 * 8) <= (uint)uVar8) goto LAB_18013810d;
  if (*(char *)(*(longlong *)(*(longlong *)(param_3 + 0x30 + lVar24 * 8) + uVar8 * 8) + 0x249) !=
      '\0') goto LAB_180137694;
  local_224 = 0;
  lVar12 = *(longlong *)(&DAT_0000a410 + lVar18);
  if (*(char *)(lVar12 + 0x99c8) != '\0') {
    uVar22 = *(uint *)(&DAT_0000a41c + lVar18);
    if ((uVar22 < *(uint *)(lVar12 + 0x9a00)) &&
       (*(char *)(*(longlong *)(lVar12 + 0x99f8) + 0x14 + (ulonglong)uVar22 * 0x18) != '\0')) {
      LOCK();
      bVar25 = *(char *)(lVar12 + 0x99e0) == '\0';
      if (bVar25) {
        *(char *)(lVar12 + 0x99e0) = '\x01';
      }
      UNLOCK();
      if (bVar25) {
        DVar7 = GetCurrentThreadId();
        *(DWORD *)(lVar12 + 0x99e8) = DVar7;
        *(undefined1 *)(lVar12 + 0x99ec) = 0;
        *(uint *)(lVar12 + 0x99f0) = uVar22;
        uStack_18c = 0;
        FUN_18023ec64(&local_1a8);
        uStack_188 = local_1a8;
        uVar13 = uStack_188;
        local_190 = *(uint *)(lVar12 + 0x99e4);
        uStack_188._0_4_ = (uint)local_1a8;
        uStack_188._4_4_ = (uint)((ulonglong)local_1a8 >> 0x20);
        puVar17 = (uint *)(*(longlong *)(lVar12 + 0x99d0) +
                          ((ulonglong)local_190 % (ulonglong)*(uint *)(lVar12 + 0x99cc)) * 0x10);
        *puVar17 = local_190;
        puVar17[1] = uStack_18c;
        puVar17[2] = (uint)uStack_188;
        puVar17[3] = uStack_188._4_4_;
        uStack_188 = uVar13;
        if ((*(longlong *)(lVar12 + 0x9dd8) != 0) && (*(char *)(lVar12 + 0x96b4) == '\0')) {
          FUN_180947088(*(longlong *)(lVar12 + 0x9dd8),10);
        }
      }
    }
  }
  iVar4 = FUN_18013837c(*(longlong *)(&DAT_0000a410 + lVar18) + 0x96e8);
  if (iVar4 != 0) {
    FUN_1801381b4(local_240,iVar4);
    local_278 = 0;
    cVar3 = FUN_180949400(*(longlong *)(&DAT_0000a410 + lVar18) + 0x96e8,&local_278);
    lVar12 = local_278;
    if ((cVar3 != '\0') && (local_278 != 0)) {
      plVar11 = (longlong *)FUN_180137024(local_240);
      *plVar11 = lVar12;
      *(undefined4 *)(plVar11 + 1) = 1;
    }
  }
  if (*(int *)(*(longlong *)(&DAT_0000a410 + lVar18) + 0x96a0) != 0) {
    local_270 = lVar18;
    FUN_1807d7f50(*(undefined8 *)(*(longlong *)(&DAT_0000a410 + lVar18) + 0x9698),&local_270);
  }
  uVar22 = *(uint *)(lVar18 + 0xf5fc);
  if (uVar22 != 0) {
    FUN_1801381b4(local_240,uVar22);
    uVar8 = 0;
    do {
      puVar10 = (undefined8 *)FUN_180137024(local_240);
      *puVar10 = *(undefined8 *)(*(longlong *)(lVar18 + 0xf5f0) + uVar8 * 8);
      *(undefined4 *)(puVar10 + 1) = 1;
      uVar6 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar6;
    } while (uVar6 < uVar22);
    *(undefined4 *)(lVar18 + 0xf5fc) = 0;
  }
  lVar12 = local_2c0;
  FUN_1801381b4(local_240,*(undefined4 *)(local_2c0 + 0x28 + lVar24 * 8));
  uVar8 = 0;
  if (*(int *)(lVar12 + 0x28 + lVar24 * 8) != 0) {
    do {
      uVar13 = *(undefined8 *)(*(longlong *)(lVar12 + 0x30 + local_2b8 * 8) + uVar8 * 8);
      FUN_1801385ac(lVar18,uVar13);
      FUN_1801381b4(local_240,1);
      uVar14 = (ulonglong)local_224;
      local_2a0 = local_230;
      local_224 = local_224 + 1;
      *(undefined8 *)(local_230 + uVar14 * 0x10) = uVar13;
      if (local_258 == 0) {
        uVar5 = 1;
      }
      else {
        uVar5 = *(undefined4 *)(local_258 + uVar8 * 4);
      }
      *(undefined4 *)(local_230 + 8 + uVar14 * 0x10) = uVar5;
      uVar22 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar22;
      lVar12 = local_2c0;
    } while (uVar22 < *(uint *)(local_2c0 + 0x28 + local_2b8 * 8));
  }
  uVar22 = *(uint *)(lVar18 + 0xf61c);
  if (uVar22 != 0) {
    FUN_1801381b4(local_240,uVar22);
    uVar8 = 0;
    do {
      puVar10 = (undefined8 *)FUN_180137024(local_240);
      *puVar10 = *(undefined8 *)(*(longlong *)(lVar18 + 0xf610) + uVar8 * 8);
      *(undefined4 *)(puVar10 + 1) = 1;
      uVar6 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar6;
    } while (uVar6 < uVar22);
    *(undefined4 *)(lVar18 + 0xf61c) = 0;
  }
  uVar22 = local_224;
  lVar21 = local_230;
  local_2a0 = local_230;
  if ((*(char *)(*(longlong *)(*(longlong *)(&DAT_0000a410 + lVar18) + 0x3f8) + 0x7b2) == '\0') ||
     ((*(int *)(&DAT_0000a41c + lVar18) == 0 &&
      (*(char *)(*(longlong *)(&DAT_0000a410 + lVar18) + 0x1664a) == '\0')))) {
    plVar11 = &local_230;
  }
  else {
    FUN_1801381b4(local_1c8,local_224);
    local_1ac = 0;
    uVar6 = 0;
    if (uVar22 != 0) {
LAB_180137e6e:
      do {
        lVar12 = *(longlong *)(lVar21 + (ulonglong)uVar6 * 0x10);
        iVar4 = *(int *)(lVar21 + 8 + (ulonglong)uVar6 * 0x10);
        uVar6 = uVar6 + 1;
        if (*(char *)(lVar12 + 0xc544) != '\0') {
          *(undefined4 *)(lVar12 + 0xc540) = 2;
          do {
            if (uVar22 <= uVar6) {
              if (uVar6 == uVar22) {
                if (*(char *)(*(longlong *)(*(longlong *)(lVar12 + 0x48) + 0x3f8) + 0x7d3) != '\0')
                {
                  FUN_180c47128(lVar12,lVar12 + 0xc1b0);
                }
                FUN_180033880(lVar12);
                FUN_18009dba4(lVar12);
                plVar11 = (longlong *)FUN_180137024();
                *plVar11 = lVar12;
                *(int *)(plVar11 + 1) = iVar4;
              }
              goto LAB_180137bfb;
            }
            lVar24 = *(longlong *)(lVar21 + (ulonglong)uVar6 * 0x10);
            piVar9 = (int *)(lVar24 + 0xc540);
            if ((iVar4 == *(int *)(lVar21 + 8 + (ulonglong)uVar6 * 0x10)) && (*piVar9 == 1)) {
              FUN_1803bfce4();
            }
            else if ((*piVar9 != 0) || (*(char *)(lVar24 + 0x249) == '\0')) goto LAB_180137b7b;
            uVar6 = uVar6 + 1;
          } while( true );
        }
        plVar11 = (longlong *)FUN_180137024();
        *plVar11 = lVar12;
        *(int *)(plVar11 + 1) = iVar4;
      } while (uVar6 < uVar22);
    }
LAB_180137bfb:
    plVar11 = &local_1b8;
    uVar22 = local_1ac;
  }
  local_2a8 = plVar11;
  if ((*(char *)(*(longlong *)(*(longlong *)(&DAT_0000a410 + lVar18) + 0x3f8) + 0x7b3) != '\0') &&
     (*(int *)(&DAT_0000a41c + lVar18) == 0)) {
    cVar3 = FUN_1807af5e8();
    if (cVar3 != '\0') {
      *(longlong *)(lVar18 + 0xf640) = *(longlong *)(lVar18 + 0xf640) + 1;
    }
    *(longlong *)(lVar18 + 0xf648) = *(longlong *)(lVar18 + 0xf648) + 1;
    lVar12 = FUN_1800feb44();
    if (*(ulonglong *)(lVar18 + 0xf638) <= (ulonglong)(lVar12 - *(longlong *)(lVar18 + 0xf630))) {
      *(bool *)(*(longlong *)(&DAT_0000a410 + lVar18) + 0x1664a) =
           (ulonglong)(*(longlong *)(lVar18 + 0xf640) * 100) / *(ulonglong *)(lVar18 + 0xf648) <
           0x14;
      *(undefined8 *)(lVar18 + 0xf640) = 0;
      *(undefined8 *)(lVar18 + 0xf648) = 0;
      uVar13 = FUN_1800feb44();
      *(undefined8 *)(lVar18 + 0xf630) = uVar13;
    }
  }
  if (uVar22 == 1) {
    lVar12 = *(longlong *)*plVar11;
    uVar22 = *(uint *)((longlong *)*plVar11 + 1);
    if (*(int *)(lVar12 + 0x23c) != 4) {
      if (*(char *)(*(longlong *)(*(longlong *)(lVar12 + 0x48) + 0x3f8) + 0x7d3) != '\0') {
        FUN_180c47128(lVar12);
      }
      FUN_180033880(lVar12);
      FUN_18009dba4();
    }
    if (*(char *)(lVar12 + 0x249) == '\0') {
      cVar3 = FUN_18013877c(lVar12);
      if (cVar3 != '\0') {
        FUN_1807b8b10(**(undefined8 **)(lVar12 + 0xc468),local_2dc,
                      *(undefined8 **)(lVar12 + 0xc468) + 1);
      }
      FUN_18013871c(lVar12);
      FUN_18013874c(lVar12 + 0x88);
      FUN_1800a3db0((undefined1 *)(lVar12 + 0xa278));
      cVar3 = FUN_180138814(lVar12);
      if ((cVar3 == '\0') && (*(char *)(lVar12 + 0x2c5) == '\0')) {
        bVar1 = 1;
      }
      else {
        bVar1 = 0;
      }
      local_218 = *(uint *)(lVar12 + 0x2c0);
      local_214 = CONCAT11(*(undefined1 *)(lVar12 + 0xc61c),*(undefined1 *)(lVar12 + 0x2c4));
      uStack_208 = lVar12 + 0x2c8;
      local_210 = -(ulonglong)bVar1 & uStack_208;
      local_1f8 = 0;
      uStack_1f0 = 0;
      local_1e8 = *(undefined8 *)(lVar12 + 0x2d0);
      local_318 = &local_218;
      local_200 = (undefined1 *)(lVar12 + 0xa278);
      uVar6 = FUN_180135248();
      if (uVar6 != 0) {
        local_2e4 = uVar6;
                    /* WARNING: Subroutine does not return */
        FUN_18061b740(&local_2e4,&DAT_1818b54a8);
      }
    }
    local_2d8 = local_2d8 | uVar22;
  }
  else if (1 < uVar22) {
    uVar6 = 0;
    while (uVar6 < uVar22) {
      lVar12 = *plVar11;
      uVar8 = *(ulonglong *)(lVar12 + (ulonglong)uVar6 * 0x10);
      local_1d8 = uVar8;
      if (*(char *)(uVar8 + 0x249) == '\0') {
        local_2ac = 1;
        local_220 = (longlong *)0x0;
        FUN_18013ee68(local_138);
        local_218 = 0;
        local_214 = 0;
        local_210 = 0;
        uStack_208 = 0;
        local_200 = local_138;
        local_1f8 = 0;
        uStack_1f0 = 0;
        local_1e8 = 0;
        local_278 = uVar8 + 0x88;
        local_24c = *(uint *)(uVar8 + 0x244) & *(uint *)(lVar12 + 8 + (ulonglong)uVar6 * 0x10);
        plVar11 = local_220;
        local_270 = local_278;
LAB_180138049:
        plVar15 = local_2a8;
        local_258 = uVar8;
LAB_180138051:
        if (uVar6 < uVar22) goto LAB_18013790f;
        goto LAB_1801380e1;
      }
      uVar6 = uVar6 + 1;
LAB_180137906:
      plVar11 = local_2a8;
    }
    param_3 = local_2c0;
    lVar24 = local_2b8;
    goto LAB_18013810d;
  }
  param_3 = local_2c0;
  lVar24 = local_2b8;
  goto LAB_18013743a;
LAB_180137694:
  uVar8 = (ulonglong)((uint)uVar8 + 1);
  goto LAB_18013719c;
LAB_180137b7b:
  if (*(char *)(*(longlong *)(*(longlong *)(lVar12 + 0x48) + 0x3f8) + 0x7d3) != '\0') {
    FUN_180c47128(lVar12,lVar12 + 0xc1b0);
  }
  FUN_180033880(lVar12);
  FUN_18009dba4(lVar12);
  plVar11 = (longlong *)FUN_180137024();
  *plVar11 = lVar12;
  *(int *)(plVar11 + 1) = iVar4;
  goto LAB_180137e6e;
LAB_18013790f:
  lVar18 = *(longlong *)((ulonglong)uVar6 * 0x10 + *plVar15);
  local_2d8 = local_2d8 | *(uint *)((ulonglong)uVar6 * 0x10 + 8 + *plVar15);
  uVar6 = uVar6 + 1;
  if (*(int *)(lVar18 + 0x23c) != 4) {
    if (*(char *)(*(longlong *)(*(longlong *)(lVar18 + 0x48) + 0x3f8) + 0x7d3) != '\0') {
      FUN_180c47128(lVar18,lVar18 + 0xc1b0);
    }
    FUN_180033880(lVar18);
    FUN_18009dba4(lVar18);
  }
  FUN_180138794(lVar18);
  local_2b0 = local_170;
  local_218 = local_218 | local_170 & 0x180;
  if (*(char *)(lVar18 + 0x249) == '\0') {
    local_210 = local_168;
    if ((local_214._1_1_ != '\0') || (local_214 = local_214 & 0xff, local_16b != '\0')) {
      local_214 = CONCAT11(1,(undefined1)local_214);
    }
    FUN_18074f664(local_200);
    local_2e7 = '\x01';
    local_2e8 = local_16c;
    local_298 = local_140;
    puVar17 = local_140;
    for (local_250 = uVar6; local_250 < uVar22; local_250 = local_250 + 1) {
      if (local_2e7 == '\0') goto LAB_1801380e1;
      uVar8 = *(ulonglong *)((ulonglong)local_250 * 0x10 + *plVar15);
      uVar19 = *(uint *)(uVar8 + 0x244) & *(uint *)((ulonglong)local_250 * 0x10 + 8 + *plVar15);
      plVar15 = (longlong *)0x0;
      local_220 = (longlong *)0x0;
      cVar3 = FUN_18013877c(lVar18);
      if (cVar3 != '\0') {
        plVar15 = *(longlong **)
                   (*(longlong *)(*(longlong *)(**(longlong **)(lVar18 + 0xc468) + 0x78) + 0x38) +
                   (ulonglong)local_2dc * 8);
        local_220 = plVar15;
      }
      local_318 = (uint *)CONCAT44(local_318._4_4_,uVar19);
      local_310 = plVar11;
      local_308 = plVar15;
      cVar3 = FUN_180c48c44(lVar18,local_2ac);
      uVar13 = local_1e8;
      puVar2 = local_298;
      if (cVar3 == '\0') {
        FUN_180133db4();
        plVar11 = (longlong *)0x0;
        local_2e7 = '\0';
      }
      else {
        if (*(char *)(uVar8 + 0x249) == '\0') {
          FUN_180133db4(extraout_XMM0_Da,local_2dc);
          plVar11 = local_220;
          local_318 = puVar17;
          FUN_18028b038(local_258,uVar8,local_2b0);
          local_278 = FUN_180c48eb4(local_278);
          local_2ac = local_2ac + 1;
          goto LAB_180138049;
        }
        local_218 = local_218 | *(uint *)(uVar8 + 0x2c0) & 0x180;
        uVar19 = (uint)local_1e8 | *(uint *)(uVar8 + 0x2d0);
        local_1e8._4_1_ = local_1e8._4_1_ | *(byte *)(uVar8 + 0x2d4);
        local_1e8._0_5_ = CONCAT14(local_1e8._4_1_,uVar19);
        local_1e8._5_1_ = SUB81(uVar13,5);
        local_1e8._5_1_ = local_1e8._5_1_ | *(byte *)(uVar8 + 0x2d5);
        local_1e8._6_2_ = SUB82(uVar13,6);
        local_2b0 = local_2b0 | *(uint *)(uVar8 + 0x2c0);
        local_2e8 = local_2e8 | *(byte *)(uVar8 + 0x2c4);
        uVar19 = (uint)local_298 | *(uint *)(uVar8 + 0x2d0);
        local_298._4_1_ = local_298._4_1_ | *(byte *)(uVar8 + 0x2d4);
        local_298._0_5_ = CONCAT14(local_298._4_1_,uVar19);
        local_298._5_1_ = SUB81(puVar2,5);
        local_298._5_1_ = local_298._5_1_ | *(byte *)(uVar8 + 0x2d5);
        local_298._6_2_ = SUB82(puVar2,6);
        uVar6 = uVar6 + 1;
        puVar17 = local_298;
      }
      plVar15 = local_2a8;
    }
    if (local_2e7 == '\0') {
LAB_1801380e1:
      lVar18 = local_1a0;
      uVar8 = local_258;
      if (*(char *)(local_1d8 + 0x249) == '\0') {
        FUN_18013871c(local_258);
        FUN_18013874c(local_278);
        uStack_208 = uVar8 + 0x2c8;
        FUN_1800a3db0(local_200);
        local_318 = &local_218;
        uVar19 = FUN_180135248(lVar18);
        if (uVar19 != 0) {
          local_2e4 = uVar19;
                    /* WARNING: Subroutine does not return */
          FUN_18061b740(&local_2e4,&DAT_1818b54a8);
        }
      }
      FUN_1801f1d78();
      goto LAB_180137906;
    }
  }
  goto LAB_180138051;
LAB_18013810d:
  lVar21 = local_2a0;
LAB_18013743a:
  piVar9 = local_268;
  if (*(int *)(param_3 + 0x38 + lVar24 * 8) != 0) {
    uVar8 = 0;
    do {
      uVar14 = *(ulonglong *)(*(longlong *)(param_3 + 0x40 + lVar24 * 8) + uVar8 * 8);
      if (local_1d0 == 0) {
        uVar20 = 0;
      }
      else {
        uVar20 = (ulonglong)*(uint *)(local_1d0 + uVar8 * 4);
      }
      if (*(char *)(uVar14 + 0x180) == '\0') {
        FUN_18034df5c();
      }
      else if (piVar9 == (int *)0x0) {
        local_318 = (uint *)&local_290;
        FUN_18034dfbc();
      }
      else {
        local_310 = *(longlong **)(*(longlong *)(piVar9 + 10) + uVar8 * 8);
        local_308 = &local_290;
        local_318 = *(uint **)(lVar18 + 0x138 + uVar20 * 8);
        FUN_18013852c(uVar14 + 0x18);
        if (*(int *)(*(longlong *)(&DAT_0000a410 + lVar18) + 0x96a0) != 0) {
          local_270 = lVar18;
          local_1d8 = -(ulonglong)(uVar14 + 0x18 != 0) & uVar14;
          FUN_1807d6538();
        }
      }
      uVar22 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar22;
      param_3 = local_2c0;
      lVar24 = local_2b8;
    } while (uVar22 < *(uint *)(local_2c0 + 0x38 + local_2b8 * 8));
    local_2c8 = lStack_288;
    local_260 = local_290;
    lVar21 = local_2a0;
  }
  lVar12 = local_260;
  if (local_2d0 != (int *)0x0) {
    uVar22 = local_2d0[0xc];
    uVar6 = 0;
    if (uVar22 != 0) {
      do {
        FUN_1801383c0();
        uVar6 = uVar6 + 1;
        lVar21 = local_2a0;
      } while (uVar6 < uVar22);
    }
  }
  uVar8 = (ulonglong)(local_248 + 1);
  param_3 = local_2c0;
  param_2 = local_2e4;
  goto LAB_18013713d;
}


