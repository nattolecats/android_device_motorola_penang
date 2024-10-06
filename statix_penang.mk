#
# Copyright (C) 2024 The LineageOS Project
#
# SPDX-License-Identifier: Apache-2.0
#

# Inherit from those products. Most specific first.
$(call inherit-product, $(SRC_TARGET_DIR)/product/core_64_bit.mk)
$(call inherit-product, $(SRC_TARGET_DIR)/product/full_base_telephony.mk)

# Inherit from penang device
$(call inherit-product, device/motorola/penang/device.mk)

# Inherit some common StatiXOS stuff.
$(call inherit-product, vendor/statix/config/common.mk)
$(call inherit-product, vendor/statix/config/gsm.mk)

TARGET_BOOT_ANIMATION_RES := 720
INCLUDE_PIXEL_LAUNCHER := true
PRODUCT_NAME := statix_penang
PRODUCT_DEVICE := penang
PRODUCT_MANUFACTURER := motorola
PRODUCT_BRAND := motorola
PRODUCT_MODEL := moto g53j 5G

PRODUCT_GMS_CLIENTID_BASE := android-motorola
