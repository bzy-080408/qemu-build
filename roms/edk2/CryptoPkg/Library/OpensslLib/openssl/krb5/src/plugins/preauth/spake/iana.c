/* -*- mode: c; c-basic-offset: 4; indent-tabs-mode: nil -*- */
/* plugins/preauth/spake/iana.c - SPAKE IANA registry contents */
/*
 * Copyright (C) 2015 by the Massachusetts Institute of Technology.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * * Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 *
 * * Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in
 *   the documentation and/or other materials provided with the
 *   distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
 * INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include "iana.h"

static uint8_t edwards25519_M[] = {
    0xD0, 0x48, 0x03, 0x2C, 0x6E, 0xA0, 0xB6, 0xD6, 0x97, 0xDD, 0xC2, 0xE8,
    0x6B, 0xDA, 0x85, 0xA3, 0x3A, 0xDA, 0xC9, 0x20, 0xF1, 0xBF, 0x18, 0xE1,
    0xB0, 0xC6, 0xD1, 0x66, 0xA5, 0xCE, 0xCD, 0xAF
};

static uint8_t edwards25519_N[] = {
    0xD3, 0xBF, 0xB5, 0x18, 0xF4, 0x4F, 0x34, 0x30, 0xF2, 0x9D, 0x0C, 0x92,
    0xAF, 0x50, 0x38, 0x65, 0xA1, 0xED, 0x32, 0x81, 0xDC, 0x69, 0xB3, 0x5D,
    0xD8, 0x68, 0xBA, 0x85, 0xF8, 0x86, 0xC4, 0xAB
};

static uint8_t P256_M[] = {
    0x02, 0x88, 0x6E, 0x2F, 0x97, 0xAC, 0xE4, 0x6E, 0x55, 0xBA, 0x9D, 0xD7,
    0x24, 0x25, 0x79, 0xF2, 0x99, 0x3B, 0x64, 0xE1, 0x6E, 0xF3, 0xDC, 0xAB,
    0x95, 0xAF, 0xD4, 0x97, 0x33, 0x3D, 0x8F, 0xA1, 0x2F
};

static uint8_t P256_N[] = {
    0x03, 0xD8, 0xBB, 0xD6, 0xC6, 0x39, 0xC6, 0x29, 0x37, 0xB0, 0x4D, 0x99,
    0x7F, 0x38, 0xC3, 0x77, 0x07, 0x19, 0xC6, 0x29, 0xD7, 0x01, 0x4D, 0x49,
    0xA2, 0x4B, 0x4F, 0x98, 0xBA, 0xA1, 0x29, 0x2B, 0x49
};

static uint8_t P384_M[] = {
    0x03, 0x0F, 0xF0, 0x89, 0x5A, 0xE5, 0xEB, 0xF6, 0x18, 0x70, 0x80, 0xA8,
    0x2D, 0x82, 0xB4, 0x2E, 0x27, 0x65, 0xE3, 0xB2, 0xF8, 0x74, 0x9C, 0x7E,
    0x05, 0xEB, 0xA3, 0x66, 0x43, 0x4B, 0x36, 0x3D, 0x3D, 0xC3, 0x6F, 0x15,
    0x31, 0x47, 0x39, 0x07, 0x4D, 0x2E, 0xB8, 0x61, 0x3F, 0xCE, 0xEC, 0x28,
    0x53
};

static uint8_t P384_N[] = {
    0x02, 0xC7, 0x2C, 0xF2, 0xE3, 0x90, 0x85, 0x3A, 0x1C, 0x1C, 0x4A, 0xD8,
    0x16, 0xA6, 0x2F, 0xD1, 0x58, 0x24, 0xF5, 0x60, 0x78, 0x91, 0x8F, 0x43,
    0xF9, 0x22, 0xCA, 0x21, 0x51, 0x8F, 0x9C, 0x54, 0x3B, 0xB2, 0x52, 0xC5,
    0x49, 0x02, 0x14, 0xCF, 0x9A, 0xA3, 0xF0, 0xBA, 0xAB, 0x4B, 0x66, 0x5C,
    0x10
};

static uint8_t P521_M[] = {
    0x02, 0x00, 0x3F, 0x06, 0xF3, 0x81, 0x31, 0xB2, 0xBA, 0x26, 0x00, 0x79,
    0x1E, 0x82, 0x48, 0x8E, 0x8D, 0x20, 0xAB, 0x88, 0x9A, 0xF7, 0x53, 0xA4,
    0x18, 0x06, 0xC5, 0xDB, 0x18, 0xD3, 0x7D, 0x85, 0x60, 0x8C, 0xFA, 0xE0,
    0x6B, 0x82, 0xE4, 0xA7, 0x2C, 0xD7, 0x44, 0xC7, 0x19, 0x19, 0x35, 0x62,
    0xA6, 0x53, 0xEA, 0x1F, 0x11, 0x9E, 0xEF, 0x93, 0x56, 0x90, 0x7E, 0xDC,
    0x9B, 0x56, 0x97, 0x99, 0x62, 0xD7, 0xAA
};

static uint8_t P521_N[] = {
    0x02, 0x00, 0xC7, 0x92, 0x4B, 0x9E, 0xC0, 0x17, 0xF3, 0x09, 0x45, 0x62,
    0x89, 0x43, 0x36, 0xA5, 0x3C, 0x50, 0x16, 0x7B, 0xA8, 0xC5, 0x96, 0x38,
    0x76, 0x88, 0x05, 0x42, 0xBC, 0x66, 0x9E, 0x49, 0x4B, 0x25, 0x32, 0xD7,
    0x6C, 0x5B, 0x53, 0xDF, 0xB3, 0x49, 0xFD, 0xF6, 0x91, 0x54, 0xB9, 0xE0,
    0x04, 0x8C, 0x58, 0xA4, 0x2E, 0x8E, 0xD0, 0x4C, 0xEF, 0x05, 0x2A, 0x3B,
    0xC3, 0x49, 0xD9, 0x55, 0x75, 0xCD, 0x25
};

const spake_iana spake_iana_edwards25519 = {
    SPAKE_GROUP_EDWARDS25519, "edwards25519", 32, 32,
    edwards25519_M, edwards25519_N, 32
};

const spake_iana spake_iana_p256 = {
    SPAKE_GROUP_P256, "P-256", 32, 33, P256_M, P256_N, 32
};

const spake_iana spake_iana_p384 = {
    SPAKE_GROUP_P384, "P-384", 48, 49, P384_M, P384_N, 48
};

const spake_iana spake_iana_p521 = {
    SPAKE_GROUP_P521, "P-521", 66, 67, P521_M, P521_N, 64
};