/*
 * Copyright (C) 2021 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libinit_dalvik_heap.h>
#include <libinit_variant.h>

#include "vendor_init.h"

static const variant_info_t global_info = {
    .sku_value = "XT2335-2",

    .model = "moto g53 5G",
    .name = "penang_g",
    .build_fingerprint = "motorola/penang_g/penang:13/T1TP33M.1-47-2/4b9ed:user/release-keys",
    .build_description = "penang_g-user 13 T1TP33M.1-47-2 4b9ed release-keys",
};

static const variant_info_t jp_info = {
    .sku_value = "XT2335-5",

    .model = "moto g53j 5G",
    .name = "penang_g",
    .build_fingerprint = "motorola/penang_g/penang:14/U1TP34M.29-83-9/05314:user/release-keys",
    .build_description = "penang_g-user 14 U1TP34M.29-83-9 05314 release-keys",
};

static const variant_info_t ym_info = {
    .sku_value = "XT2335-4",

    .model = "moto g53y 5G",
    .name = "penang_sb",
    .build_fingerprint = "motorola/penang_sb/penang:13/T1TPJ33M.75-17-3/9c2f6:user/release-keys",
    .build_description = "penang_sb-user 13 T1TPJ33M.75-17-3 9c2f6 release-keys",
};

static const variant_info_t cn_info = {
    .sku_value = "XT2335-3",

    .model = "moto g53",
    .name = "penang_cn",
    .build_fingerprint = "motorola/penang_cn/penang:13/T1TPC33M.1-73-3/907790:user/release-keys",
    .build_description = "penang_cn-user 13 T1TPC33M.1-73-3 907790 release-keys",
};

static const std::vector<variant_info_t> variants = {
    global_info,
    jp_info,
    ym_info,
    cn_info,
};

void vendor_load_properties() {
    search_variant(variants);
    set_dalvik_heap();
}
