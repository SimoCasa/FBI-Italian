#pragma once

#define ROP_SIZE 0x200
#define ROP_COUNT 8

const char* ropNames[ROP_COUNT] = {
        "Encrypted Gateway 4.x",
        "Decrypted Gateway 4.x",
        "N3DS Gateway 9.x",
        "rxTools2x 4.x",
        "rxTools3x 4.x",
        "MsetForBoss 4.x",
        "MsetForBoss 6.x",
        "Reinand N3DS 4.x"
};

unsigned char rops[ROP_COUNT][ROP_SIZE] = {
        {
                0xB9, 0xF2, 0x10, 0x00, 0xAE, 0x2B, 0x27, 0x00, 0xED, 0x0D, 0xDC, 0xBA, 0x9C, 0xF1, 0x18, 0x00,
                0x90, 0xB6, 0x10, 0x00, 0x00, 0xB0, 0xFA, 0x00, 0x00, 0x02, 0x20, 0x00, 0xB9, 0xF2, 0x10, 0x00,
                0x00, 0x90, 0x27, 0x00, 0x01, 0x00, 0x00, 0x00, 0xE1, 0x49, 0x15, 0x00, 0x38, 0x6F, 0x27, 0x00,
                0xAC, 0x82, 0x1B, 0x00, 0xDC, 0xD5, 0x18, 0x00, 0x40, 0x83, 0x27, 0x00, 0x00, 0x02, 0x10, 0x00,
                0xCC, 0x48, 0x00, 0x00, 0x60, 0x3D, 0x14, 0x00, 0xB9, 0xF2, 0x10, 0x00, 0x00, 0x90, 0x27, 0x00,
                0x00, 0x00, 0x2B, 0x00, 0xF9, 0x02, 0x10, 0x00, 0xF9, 0x02, 0x10, 0x00, 0xF9, 0x02, 0x10, 0x00,
                0xF9, 0x02, 0x10, 0x00, 0xF9, 0x02, 0x10, 0x00, 0xF9, 0x02, 0x10, 0x00, 0xE1, 0x49, 0x15, 0x00,
                0x51, 0x00, 0xCD, 0xC2, 0xE1, 0x49, 0x15, 0x00, 0x20, 0x90, 0x27, 0x00, 0x8C, 0x53, 0x10, 0x00,
                0x00, 0x90, 0x00, 0x00, 0x58, 0x39, 0x1B, 0x00, 0xE5, 0x04, 0x21, 0x00, 0x00, 0xDA, 0x19, 0x00,
                0x00, 0x75, 0x01, 0x00, 0x86, 0xDF, 0x21, 0x00, 0x00, 0xC1, 0x1A, 0x00, 0x22, 0xDA, 0x1D, 0x00,
                0x91, 0xFE, 0x16, 0x00, 0x00, 0x01, 0x10, 0x00, 0xBC, 0x4C, 0x14, 0x00, 0x00, 0x00, 0x2B, 0x00,
                0x00, 0x90, 0x00, 0x00, 0xE1, 0x49, 0x15, 0x00, 0xAC, 0xEF, 0x22, 0x00, 0x88, 0x5C, 0x10, 0x00,
                0x00, 0x00, 0x0E, 0x00, 0x90, 0x03, 0x25, 0x00, 0xC0, 0xFA, 0x1E, 0x00, 0x91, 0xFE, 0x16, 0x00,
                0x8C, 0x53, 0x10, 0x00, 0x24, 0x6B, 0x03, 0x00, 0x60, 0x3D, 0x14, 0x00, 0x00, 0x95, 0x27, 0x00,
                0x8C, 0x3D, 0x14, 0x00, 0x2F, 0x00, 0x00, 0x00, 0x90, 0xB6, 0x10, 0x00, 0xF0, 0x93, 0x27, 0x00,
                0xE8, 0x93, 0x27, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x09, 0xFB, 0x19, 0x00, 0x00, 0x00, 0x5E, 0xD3,
                0x05, 0x00, 0x0F, 0x05, 0x1D, 0x00, 0x4D, 0x00, 0x61, 0x00, 0x74, 0x00, 0x74, 0x00, 0x68, 0x00,
                0x65, 0x00, 0x77, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                0x6E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x22, 0x02, 0x19, 0x02, 0x19, 0x13, 0xF8, 0x0D,
                0xD6, 0x0D, 0xE6, 0xAC, 0x01, 0xFC, 0x00, 0x00, 0xC2, 0x23, 0xF8, 0x0E, 0x00, 0x00, 0x00, 0x00,
                0x52, 0x00, 0x43, 0x28, 0x01, 0x01, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00, 0xB9, 0xF2, 0x10, 0x00, 0x00, 0xFE, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00,
                0xE1, 0x49, 0x15, 0x00, 0x00, 0x94, 0x27, 0x00, 0xFC, 0x34, 0x13, 0x00, 0xD0, 0x8C, 0x1E, 0x00,
                0x8C, 0x53, 0x10, 0x00, 0x9C, 0x94, 0x27, 0xF0, 0x60, 0x3D, 0x14, 0x00, 0x00, 0x95, 0x27, 0x00,
                0x8C, 0x3D, 0x14, 0x00, 0x2F, 0x00, 0x00, 0x00, 0x90, 0xB6, 0x10, 0x00, 0xF0, 0x93, 0x27, 0x00,
                0xE8, 0x93, 0x27, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x09, 0xFB, 0x19, 0x00, 0x00, 0x00, 0xF0, 0xE8,
        },
        {
                0xB9, 0xF2, 0x10, 0x00, 0xAE, 0x2B, 0x27, 0x00, 0xED, 0x0D, 0xDC, 0xBA, 0x9C, 0xF1, 0x18, 0x00,
                0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB9, 0xF2, 0x10, 0x00,
                0x00, 0x90, 0x27, 0x00, 0x01, 0x00, 0x00, 0x00, 0xE1, 0x49, 0x15, 0x00, 0x38, 0x6F, 0x27, 0x00,
                0xAC, 0x82, 0x1B, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
                0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB9, 0xF2, 0x10, 0x00, 0x00, 0x90, 0x27, 0x00,
                0x00, 0x00, 0x2B, 0x00, 0x8C, 0x53, 0x10, 0x00, 0x00, 0x90, 0x00, 0x00, 0xE1, 0x49, 0x15, 0x00,
                0x20, 0x90, 0x27, 0x00, 0x58, 0x39, 0x1B, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
                0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
                0xF9, 0x02, 0x10, 0x00, 0xF9, 0x02, 0x10, 0x00, 0xF9, 0x02, 0x10, 0x00, 0xF9, 0x02, 0x10, 0x00,
                0xF9, 0x02, 0x10, 0x00, 0xF9, 0x02, 0x10, 0x00, 0xF9, 0x02, 0x10, 0x00, 0xF9, 0x02, 0x10, 0x00,
                0xF9, 0x02, 0x10, 0x00, 0xF9, 0x02, 0x10, 0x00, 0xF9, 0x02, 0x10, 0x00, 0xF9, 0x02, 0x10, 0x00,
                0xF9, 0x02, 0x10, 0x00, 0xF9, 0x02, 0x10, 0x00, 0xF9, 0x02, 0x10, 0x00, 0xF9, 0x02, 0x10, 0x00,
                0xF9, 0x02, 0x10, 0x00, 0xF9, 0x02, 0x10, 0x00, 0xF9, 0x02, 0x10, 0x00, 0xF9, 0x02, 0x10, 0x00,
                0xF9, 0x02, 0x10, 0x00, 0xF9, 0x02, 0x10, 0x00, 0xF9, 0x02, 0x10, 0x00, 0xF9, 0x02, 0x10, 0x00,
                0xF9, 0x02, 0x10, 0x00, 0x8C, 0x53, 0x10, 0x00, 0x28, 0x6B, 0x03, 0x00, 0x60, 0x3D, 0x14, 0x00,
                0x07, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
                0x05, 0x00, 0x0F, 0x05, 0x1D, 0x00, 0x4D, 0x00, 0x61, 0x00, 0x74, 0x00, 0x74, 0x00, 0x68, 0x00,
                0x65, 0x00, 0x77, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                0x6E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xDD, 0x01, 0x34, 0x02, 0x19, 0x13, 0xC0, 0x0D,
                0xEA, 0x0D, 0xE6, 0xAC, 0x01, 0xFC, 0x00, 0x00, 0xF0, 0xCD, 0x43, 0x18, 0x00, 0x00, 0x00, 0x00,
                0x52, 0x00, 0x1B, 0x7E, 0x01, 0x01, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00, 0xB9, 0xF2, 0x10, 0x00, 0x00, 0xFE, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00,
                0xC4, 0x4F, 0x1C, 0x00, 0x00, 0x95, 0x27, 0x00, 0xFC, 0x34, 0x13, 0x00, 0xFF, 0xFF, 0xFF, 0xFF,
                0xB1, 0x49, 0x15, 0x00, 0xF9, 0x02, 0x10, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x95, 0x27, 0x00,
                0x8C, 0x3D, 0x14, 0x00, 0x2F, 0x00, 0x00, 0x00, 0x90, 0xB6, 0x10, 0x00, 0xF0, 0x93, 0x27, 0x00,
                0xE8, 0x93, 0x27, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x09, 0xFB, 0x19, 0x00, 0x00, 0x00, 0x31, 0xF1,
        },
        {
                0x8C, 0x3D, 0x14, 0x00, 0xAE, 0x2B, 0x27, 0x00, 0x9C, 0xF1, 0x18, 0x00, 0x90, 0xB6, 0x10, 0x00,
                0x00, 0xB0, 0xFA, 0x00, 0x00, 0x02, 0x20, 0x00, 0xB9, 0xF2, 0x10, 0x00, 0x00, 0x90, 0x27, 0x00,
                0x01, 0x00, 0x00, 0x00, 0xE1, 0x49, 0x15, 0x00, 0x38, 0x6F, 0x27, 0x00, 0xAC, 0x82, 0x1B, 0x00,
                0xDC, 0xD5, 0x18, 0x00, 0x40, 0x83, 0x27, 0x00, 0x00, 0x02, 0x10, 0x00, 0xCC, 0x48, 0x00, 0x00,
                0x60, 0x3D, 0x14, 0x00, 0xB9, 0xF2, 0x10, 0x00, 0x04, 0x90, 0x27, 0x00, 0x00, 0x80, 0x04, 0x00,
                0x88, 0x11, 0x20, 0x00, 0xF0, 0xF0, 0xF0, 0xF0, 0xB9, 0xF2, 0x10, 0x00, 0x00, 0x90, 0x27, 0x00,
                0x00, 0x00, 0x2B, 0x00, 0x8C, 0x53, 0x10, 0x00, 0x00, 0x90, 0x00, 0x00, 0xE1, 0x49, 0x15, 0x00,
                0x51, 0x00, 0x94, 0x53, 0xE1, 0x49, 0x15, 0x00, 0x20, 0x90, 0x27, 0x00, 0x58, 0x39, 0x1B, 0x00,
                0xE5, 0x04, 0x21, 0x00, 0x00, 0xDA, 0x19, 0x00, 0x00, 0x75, 0x01, 0x00, 0x86, 0xDF, 0x21, 0x00,
                0x00, 0xC1, 0x1A, 0x00, 0x22, 0xDA, 0x1D, 0x00, 0x9B, 0x44, 0x1B, 0x00, 0x00, 0x01, 0x10, 0x00,
                0xBC, 0x4C, 0x14, 0x00, 0x00, 0x00, 0x2B, 0x00, 0x00, 0x90, 0x00, 0x00, 0xE1, 0x49, 0x15, 0x00,
                0xFE, 0xFE, 0xFE, 0xFE, 0xAC, 0xEF, 0x22, 0x00, 0x88, 0x5C, 0x10, 0x00, 0x00, 0x00, 0x0E, 0x00,
                0x90, 0x03, 0x25, 0x00, 0xC0, 0xFA, 0x1E, 0x00, 0x91, 0xFE, 0x16, 0x00, 0x8C, 0x53, 0x10, 0x00,
                0x28, 0x6B, 0x03, 0x00, 0x60, 0x3D, 0x14, 0x00, 0x60, 0x3D, 0x14, 0x00, 0x01, 0x00, 0x3F, 0x00,
                0x00, 0x00, 0x7E, 0x9A, 0x3A, 0x00, 0x2F, 0x00, 0x64, 0x00, 0x61, 0x00, 0x9C, 0xF1, 0x18, 0x00,
                0x1D, 0x00, 0x72, 0x00, 0x52, 0x00, 0x37, 0x3A, 0x00, 0x90, 0x27, 0x00, 0xAE, 0x2B, 0x33, 0x05,
                0x05, 0x00, 0x0F, 0x05, 0x1D, 0x00, 0x72, 0x00, 0x78, 0x00, 0x54, 0x00, 0x6F, 0x00, 0x6F, 0x00,
                0x6C, 0x00, 0x73, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x59, 0x00, 0x53, 0x00,
                0x3A, 0x00, 0x2F, 0x00, 0x72, 0x00, 0x78, 0x00, 0x54, 0x00, 0x6F, 0x00, 0x6F, 0x00, 0x6C, 0x00,
                0x73, 0x00, 0x2E, 0x00, 0x64, 0x00, 0x61, 0x00, 0x74, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                0x6E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF9, 0x01, 0xF2, 0x01, 0x19, 0x13, 0xF9, 0x0D,
                0xE6, 0x0D, 0xE6, 0xAC, 0x00, 0xFE, 0x00, 0x01, 0xA2, 0x40, 0xD1, 0x12, 0x00, 0x00, 0x00, 0x00,
                0x52, 0x00, 0xBB, 0xD8, 0x01, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00, 0xB9, 0xF2, 0x10, 0x00, 0x00, 0xFE, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00,
                0xE1, 0x49, 0x15, 0x00, 0x00, 0x94, 0x27, 0x00, 0xFC, 0x34, 0x13, 0x00, 0xD0, 0x8C, 0x1E, 0x00,
                0x8C, 0x53, 0x10, 0x00, 0x9C, 0x94, 0x27, 0xF0, 0x60, 0x3D, 0x14, 0x00, 0x01, 0x00, 0x3F, 0x00,
                0x00, 0x90, 0x00, 0x00, 0x3A, 0x00, 0x2F, 0x00, 0x64, 0x00, 0x61, 0x00, 0x9C, 0xF1, 0x18, 0x00,
                0x1D, 0x00, 0x72, 0x00, 0x52, 0x00, 0x37, 0x3A, 0x00, 0x90, 0x27, 0x00, 0xAE, 0x2B, 0x2F, 0xBF,
        },
        {
                0xB9, 0xF2, 0x10, 0x00, 0xAE, 0x2B, 0x27, 0x00, 0xEF, 0xBE, 0xAD, 0xDE, 0x9C, 0xF1, 0x18, 0x00,
                0xEF, 0xBE, 0xAD, 0xDE, 0xEF, 0xBE, 0xAD, 0xDE, 0xEF, 0xBE, 0xAD, 0xDE, 0xB9, 0xF2, 0x10, 0x00,
                0x00, 0x90, 0x27, 0x00, 0x01, 0x00, 0x00, 0x00, 0xE1, 0x49, 0x15, 0x00, 0x0C, 0x5E, 0x29, 0x00,
                0xAC, 0x82, 0x1B, 0x00, 0xEF, 0xBE, 0xAD, 0xDE, 0xEF, 0xBE, 0xAD, 0xDE, 0xEF, 0xBE, 0xAD, 0xDE,
                0xEF, 0xBE, 0xAD, 0xDE, 0xEF, 0xBE, 0xAD, 0xDE, 0xB9, 0xF2, 0x10, 0x00, 0x00, 0x90, 0x27, 0x00,
                0x00, 0x00, 0x2B, 0x00, 0xE1, 0x49, 0x15, 0x00, 0x20, 0x90, 0x27, 0x00, 0x8C, 0x53, 0x10, 0x00,
                0x00, 0x90, 0x00, 0x00, 0x58, 0x39, 0x1B, 0x00, 0xEF, 0xBE, 0xAD, 0xDE, 0xEF, 0xBE, 0xAD, 0xDE,
                0xEF, 0xBE, 0x1A, 0x83, 0xEF, 0xBE, 0xAD, 0xDE, 0xEF, 0xBE, 0xAD, 0xDE, 0xEF, 0xBE, 0xAD, 0xDE,
                0x91, 0xFE, 0x16, 0x00, 0xAC, 0xEF, 0x22, 0x00, 0xBC, 0x4C, 0x14, 0x00, 0x00, 0x00, 0x2B, 0x00,
                0x00, 0x90, 0x00, 0x00, 0xE1, 0x49, 0x15, 0x00, 0xAC, 0xEF, 0x22, 0x00, 0xAC, 0xEF, 0x22, 0x00,
                0x8C, 0x53, 0x10, 0x00, 0x60, 0x14, 0x00, 0x00, 0x60, 0x3D, 0x14, 0x00, 0x00, 0x90, 0x00, 0x00,
                0xF9, 0x02, 0x10, 0x00, 0x8C, 0x53, 0x10, 0x00, 0x40, 0x6B, 0x03, 0x00, 0x60, 0x3D, 0x14, 0x00,
                0xEF, 0xBE, 0xAD, 0xDE, 0xEF, 0xBE, 0xAD, 0xDE, 0xEF, 0xBE, 0xAD, 0xDE, 0xEF, 0xBE, 0xAD, 0xDE,
                0xEF, 0xBE, 0xAD, 0xDE, 0xEF, 0xBE, 0xAD, 0xDE, 0xEF, 0xBE, 0xAD, 0xDE, 0xEF, 0xBE, 0xAD, 0xDE,
                0xEF, 0xBE, 0xAD, 0xDE, 0xEF, 0xBE, 0xAD, 0xDE, 0xEF, 0xBE, 0xAD, 0xDE, 0xEF, 0xBE, 0xAD, 0xDE,
                0xEF, 0xBE, 0xAD, 0xDE, 0xEF, 0xBE, 0xAD, 0xDE, 0xEF, 0xBE, 0xAD, 0xDE, 0xEF, 0xBE, 0xF1, 0x8B,
                0x05, 0x00, 0x0F, 0x05, 0x1D, 0x00, 0x72, 0x00, 0x78, 0x00, 0x54, 0x00, 0x6F, 0x00, 0x6F, 0x00,
                0x6C, 0x00, 0x73, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x59, 0x00, 0x53, 0x00,
                0x3A, 0x00, 0x2F, 0x00, 0x72, 0x00, 0x78, 0x00, 0x54, 0x00, 0x6F, 0x00, 0x6F, 0x00, 0x6C, 0x00,
                0x73, 0x00, 0x2E, 0x00, 0x64, 0x00, 0x61, 0x00, 0x74, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                0x6E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1A, 0x02, 0x65, 0x02, 0x19, 0x13, 0xE0, 0x0D,
                0x11, 0x0E, 0xE6, 0xAC, 0x00, 0xFE, 0x00, 0x01, 0xA5, 0x4F, 0x4A, 0x12, 0x00, 0x00, 0x00, 0x00,
                0x52, 0x00, 0x6B, 0xC1, 0x01, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00, 0xB9, 0xF2, 0x10, 0x00, 0x00, 0xFE, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00,
                0xE1, 0x49, 0x15, 0x00, 0x00, 0x94, 0x27, 0x00, 0xFC, 0x34, 0x13, 0x00, 0xEF, 0xBE, 0xAD, 0xDE,
                0x8C, 0x53, 0x10, 0x00, 0x9C, 0x94, 0x27, 0xF0, 0x60, 0x3D, 0x14, 0x00, 0xEF, 0xBE, 0xAD, 0xDE,
                0xEF, 0xBE, 0xAD, 0xDE, 0xEF, 0xBE, 0xAD, 0xDE, 0xEF, 0xBE, 0xAD, 0xDE, 0xEF, 0xBE, 0xAD, 0xDE,
                0xEF, 0xBE, 0xAD, 0xDE, 0xEF, 0xBE, 0xAD, 0xDE, 0xEF, 0xBE, 0xAD, 0xDE, 0xEF, 0xBE, 0xE1, 0x37,
        },
        {
                0xB9, 0xF2, 0x10, 0x00, 0xAC, 0x94, 0x27, 0x00, 0xED, 0x0D, 0xDC, 0xBA, 0x9C, 0xF1, 0x18, 0x00,
                0x90, 0xB6, 0x10, 0x00, 0x00, 0xB0, 0xFA, 0x00, 0x00, 0x02, 0x20, 0x00, 0xB9, 0xF2, 0x10, 0x00,
                0x00, 0x90, 0x27, 0x00, 0x01, 0x00, 0x00, 0x00, 0xE1, 0x49, 0x15, 0x00, 0x0C, 0x5E, 0x29, 0x00,
                0xAC, 0x82, 0x1B, 0x00, 0xDC, 0xD5, 0x18, 0x00, 0x40, 0x83, 0x27, 0x00, 0x00, 0x02, 0x10, 0x00,
                0xCC, 0x48, 0x00, 0x00, 0x60, 0x3D, 0x14, 0x00, 0xE1, 0x49, 0x15, 0x00, 0x00, 0x40, 0x00, 0x00,
                0x8C, 0x3D, 0x14, 0x00, 0x04, 0x90, 0x27, 0x00, 0xBC, 0xCC, 0x10, 0x00, 0x44, 0x44, 0x44, 0x44,
                0xB9, 0xF2, 0x10, 0x00, 0x00, 0x90, 0x27, 0x00, 0x00, 0x00, 0x2B, 0x00, 0x8C, 0x53, 0x10, 0x00,
                0x51, 0x00, 0x3F, 0xD9, 0x8C, 0x53, 0x10, 0x00, 0x00, 0x04, 0x00, 0x00, 0xE1, 0x49, 0x15, 0x00,
                0x20, 0x90, 0x27, 0x00, 0x58, 0x39, 0x1B, 0x00, 0xE5, 0x04, 0x21, 0x00, 0x00, 0xDA, 0x19, 0x00,
                0x00, 0x75, 0x01, 0x00, 0x86, 0xDF, 0x21, 0x00, 0x00, 0xC1, 0x1A, 0x00, 0x22, 0xDA, 0x1D, 0x00,
                0x8C, 0x53, 0x10, 0x00, 0x54, 0x6B, 0x03, 0x00, 0x60, 0x3D, 0x14, 0x00, 0x59, 0x53, 0x3A, 0x00,
                0x00, 0x00, 0x00, 0x00, 0xB9, 0xF2, 0x10, 0x00, 0x00, 0xFE, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00,
                0xC4, 0x4F, 0x1C, 0x00, 0x00, 0x94, 0x27, 0x00, 0xFC, 0x34, 0x13, 0x00, 0xFE, 0xFF, 0xFF, 0xFF,
                0x8C, 0x53, 0x10, 0x00, 0x9C, 0x94, 0x27, 0xF0, 0x60, 0x3D, 0x14, 0x00, 0x00, 0x94, 0x27, 0x00,
                0x8C, 0x3D, 0x14, 0x00, 0x2D, 0x00, 0x00, 0x00, 0x90, 0xB6, 0x10, 0x00, 0xF0, 0x93, 0x27, 0x00,
                0xE8, 0x93, 0x27, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0xFB, 0x19, 0x00, 0x00, 0x00, 0xBF, 0x2D,
                0x05, 0x00, 0x0F, 0x07, 0x1E, 0x00, 0x53, 0x00, 0x6F, 0x00, 0x61, 0x00, 0x72, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x59, 0x00, 0x53, 0x00,
                0x3A, 0x00, 0x2F, 0x00, 0x72, 0x00, 0x78, 0x00, 0x54, 0x00, 0x6F, 0x00, 0x6F, 0x00, 0x6C, 0x00,
                0x73, 0x00, 0x2F, 0x00, 0x73, 0x00, 0x79, 0x00, 0x73, 0x00, 0x74, 0x00, 0x65, 0x00, 0x6D, 0x00,
                0x2F, 0x00, 0x63, 0x00, 0x6F, 0x00, 0x64, 0x00, 0x65, 0x00, 0x2E, 0x00, 0x62, 0x00, 0x69, 0x00,
                0x6E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC3, 0x01, 0xF8, 0x01, 0x19, 0x13, 0xF2, 0x0D,
                0x0F, 0x0E, 0xE6, 0xAC, 0x00, 0xFC, 0x00, 0x00, 0x81, 0xD7, 0x5F, 0x1B, 0x00, 0x00, 0x00, 0x00,
                0x52, 0x00, 0x0C, 0x71, 0x01, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00, 0xB9, 0xF2, 0x10, 0x00, 0x00, 0xFE, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00,
                0xC4, 0x4F, 0x1C, 0x00, 0x00, 0x94, 0x27, 0x00, 0xFC, 0x34, 0x13, 0x00, 0xFE, 0xFF, 0xFF, 0xFF,
                0x8C, 0x53, 0x10, 0x00, 0x9C, 0x94, 0x27, 0xF0, 0x60, 0x3D, 0x14, 0x00, 0x00, 0x94, 0x27, 0x00,
                0x8C, 0x3D, 0x14, 0x00, 0x2D, 0x00, 0x00, 0x00, 0x90, 0xB6, 0x10, 0x00, 0xF0, 0x93, 0x27, 0x00,
                0xE8, 0x93, 0x27, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0xFB, 0x19, 0x00, 0x00, 0x00, 0x28, 0x31,
        },
        {
                0xB9, 0xF2, 0x10, 0x00, 0xAE, 0x2B, 0x27, 0x00, 0xEF, 0xBE, 0xAD, 0xDE, 0x9C, 0xF1, 0x18, 0x00,
                0xEF, 0xBE, 0xAD, 0xDE, 0xEF, 0xBE, 0xAD, 0xDE, 0xEF, 0xBE, 0xAD, 0xDE, 0xB9, 0xF2, 0x10, 0x00,
                0x00, 0x90, 0x27, 0x00, 0x01, 0x00, 0x00, 0x00, 0xE1, 0x49, 0x15, 0x00, 0x64, 0x6F, 0x27, 0x00,
                0xAC, 0x82, 0x1B, 0x00, 0xEF, 0xBE, 0xAD, 0xDE, 0xEF, 0xBE, 0xAD, 0xDE, 0xEF, 0xBE, 0xAD, 0xDE,
                0xEF, 0xBE, 0xAD, 0xDE, 0xEF, 0xBE, 0xAD, 0xDE, 0xB9, 0xF2, 0x10, 0x00, 0x00, 0x90, 0x27, 0x00,
                0x00, 0x00, 0x2B, 0x00, 0xE1, 0x49, 0x15, 0x00, 0x20, 0x90, 0x27, 0x00, 0x8C, 0x53, 0x10, 0x00,
                0x00, 0x90, 0x00, 0x00, 0x58, 0x39, 0x1B, 0x00, 0xEF, 0xBE, 0xAD, 0xDE, 0xEF, 0xBE, 0xAD, 0xDE,
                0xED, 0x0D, 0xDC, 0xBA, 0xEF, 0xBE, 0xAD, 0xDE, 0xEF, 0xBE, 0xAD, 0xDE, 0xEF, 0xBE, 0xAD, 0xDE,
                0x8C, 0x53, 0x10, 0x00, 0x74, 0x6B, 0x03, 0x00, 0x60, 0x3D, 0x14, 0x00, 0xF9, 0x02, 0x10, 0x00,
                0xF9, 0x02, 0x10, 0x00, 0xF9, 0x02, 0x10, 0x00, 0xF9, 0x02, 0x10, 0x00, 0xF9, 0x02, 0x10, 0x00,
                0xF9, 0x02, 0x10, 0x00, 0xF9, 0x02, 0x10, 0x00, 0xF9, 0x02, 0x10, 0x00, 0xF9, 0x02, 0x10, 0x00,
                0xF9, 0x02, 0x10, 0x00, 0xF9, 0x02, 0x10, 0x00, 0xF9, 0x02, 0x10, 0x00, 0xF9, 0x02, 0x10, 0x00,
                0xF9, 0x02, 0x10, 0x00, 0xF9, 0x02, 0x10, 0x00, 0xF9, 0x02, 0x10, 0x00, 0xF9, 0x02, 0x10, 0x00,
                0xF9, 0x02, 0x10, 0x00, 0xF9, 0x02, 0x10, 0x00, 0xF9, 0x02, 0x10, 0x00, 0xF9, 0x02, 0x10, 0x00,
                0xF9, 0x02, 0x10, 0x00, 0xF9, 0x02, 0x10, 0x00, 0xF9, 0x02, 0x10, 0x00, 0xF9, 0x02, 0x10, 0x00,
                0xF9, 0x02, 0x10, 0x00, 0xF9, 0x02, 0x10, 0x00, 0xF9, 0x02, 0x10, 0x00, 0xF9, 0x02, 0x10, 0x00,
                0x05, 0x00, 0x0F, 0x05, 0x1D, 0x00, 0x4D, 0x00, 0x61, 0x00, 0x74, 0x00, 0x74, 0x00, 0x68, 0x00,
                0x65, 0x00, 0x77, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                0x6E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x16, 0x02, 0x47, 0x02, 0x19, 0x13, 0xEC, 0x0D,
                0x25, 0x0E, 0xE6, 0xAC, 0x01, 0xFC, 0x00, 0x00, 0xCA, 0x48, 0x2E, 0x0E, 0x00, 0x00, 0x00, 0x00,
                0x52, 0x00, 0x95, 0x60, 0x01, 0x01, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00, 0xB9, 0xF2, 0x10, 0x00, 0x00, 0xFE, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00,
                0xE1, 0x49, 0x15, 0x00, 0x00, 0x94, 0x27, 0x00, 0xFC, 0x34, 0x13, 0x00, 0xEF, 0xBE, 0xAD, 0xDE,
                0x8C, 0x53, 0x10, 0x00, 0x9C, 0x94, 0x27, 0xF0, 0x60, 0x3D, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC8, 0x59,
        },
        {
                0x49, 0x93, 0x1A, 0x00, 0x52, 0x02, 0x28, 0x00, 0x98, 0xB4, 0x19, 0x00, 0xAD, 0xDE, 0xAD, 0xDE,
                0xAD, 0xDE, 0xAD, 0xDE, 0xAD, 0xDE, 0xAD, 0xDE, 0x4D, 0xBE, 0x11, 0x00, 0xD8, 0x46, 0x28, 0x00,
                0x01, 0x00, 0x00, 0x00, 0xAD, 0xDE, 0xAD, 0xDE, 0x49, 0x93, 0x1A, 0x00, 0x00, 0x70, 0x28, 0x00,
                0xB8, 0x08, 0x1C, 0x00, 0xAD, 0xDE, 0xAD, 0xDE, 0xAD, 0xDE, 0xAD, 0xDE, 0xAD, 0xDE, 0xAD, 0xDE,
                0xAD, 0xDE, 0xAD, 0xDE, 0xAD, 0xDE, 0xAD, 0xDE, 0x4D, 0xBE, 0x11, 0x00, 0x20, 0x70, 0x28, 0x00,
                0x00, 0x00, 0x29, 0x00, 0x00, 0x70, 0x00, 0x00, 0x49, 0x93, 0x1A, 0x00, 0x00, 0x70, 0x28, 0x00,
                0x8C, 0xC1, 0x1B, 0x00, 0xAD, 0xDE, 0xAD, 0xDE, 0xAD, 0xDE, 0xAD, 0xDE, 0xAD, 0xDE, 0xAD, 0xDE,
                0xED, 0x0D, 0xDC, 0xBA, 0xAD, 0xDE, 0xAD, 0xDE, 0xAD, 0xDE, 0xAD, 0xDE, 0xA4, 0x4B, 0x14, 0x00,
                0x7C, 0x8F, 0xFF, 0xFF, 0xF9, 0x02, 0x10, 0x00, 0xF9, 0x02, 0x10, 0x00, 0xF9, 0x02, 0x10, 0x00,
                0xF9, 0x02, 0x10, 0x00, 0xF9, 0x02, 0x10, 0x00, 0xF9, 0x02, 0x10, 0x00, 0xF9, 0x02, 0x10, 0x00,
                0xF9, 0x02, 0x10, 0x00, 0xF9, 0x02, 0x10, 0x00, 0xF9, 0x02, 0x10, 0x00, 0xF9, 0x02, 0x10, 0x00,
                0xF9, 0x02, 0x10, 0x00, 0xF9, 0x02, 0x10, 0x00, 0xF9, 0x02, 0x10, 0x00, 0xF9, 0x02, 0x10, 0x00,
                0xF9, 0x02, 0x10, 0x00, 0xF9, 0x02, 0x10, 0x00, 0xF9, 0x02, 0x10, 0x00, 0xF9, 0x02, 0x10, 0x00,
                0xF9, 0x02, 0x10, 0x00, 0xF9, 0x02, 0x10, 0x00, 0xF9, 0x02, 0x10, 0x00, 0xF9, 0x02, 0x10, 0x00,
                0xF9, 0x02, 0x10, 0x00, 0x8C, 0x53, 0x10, 0x00, 0x28, 0x6B, 0x03, 0x00, 0x60, 0x3D, 0x14, 0x00,
                0x07, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
                0x05, 0x00, 0x0F, 0x05, 0x1D, 0x00, 0x4D, 0x00, 0x61, 0x00, 0x74, 0x00, 0x74, 0x00, 0x68, 0x00,
                0x65, 0x00, 0x77, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                0x6E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xDD, 0x01, 0x34, 0x02, 0x19, 0x13, 0xC0, 0x0D,
                0xEA, 0x0D, 0xE6, 0xAC, 0x01, 0xFC, 0x00, 0x00, 0xF0, 0xCD, 0x43, 0x18, 0x00, 0x00, 0x00, 0x00,
                0x52, 0x00, 0x1B, 0x7E, 0x01, 0x01, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00, 0x4D, 0xBE, 0x11, 0x00, 0x00, 0x70, 0x29, 0x00, 0x00, 0x01, 0x00, 0x00,
                0xAD, 0xDE, 0xAD, 0xDE, 0x49, 0x93, 0x1A, 0x00, 0x00, 0xFE, 0x01, 0x00, 0x38, 0x38, 0x13, 0x00,
                0xAD, 0xDE, 0xAD, 0xDE, 0xA4, 0x4B, 0x14, 0x00, 0x9C, 0x70, 0x29, 0xF0, 0x00, 0x95, 0x27, 0x00,
                0x8C, 0x3D, 0x14, 0x00, 0x2F, 0x00, 0x00, 0x00, 0x90, 0xB6, 0x10, 0x00, 0xF0, 0x93, 0x27, 0x00,
                0xE8, 0x93, 0x27, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x09, 0xFB, 0x19, 0x00, 0x00, 0x00, 0x31, 0xF1,
        },
        {
                0xB9, 0xF2, 0x10, 0x00, 0xAC, 0x94, 0x27, 0x00, 0xED, 0x0D, 0xDC, 0xBA, 0x9C, 0xF1, 0x18, 0x00,
                0x90, 0xB6, 0x10, 0x00, 0x00, 0xB0, 0xFA, 0x00, 0x00, 0x02, 0x20, 0x00, 0xB9, 0xF2, 0x10, 0x00,
                0x00, 0x90, 0x27, 0x00, 0x01, 0x00, 0x00, 0x00, 0xE1, 0x49, 0x15, 0x00, 0x0C, 0x5E, 0x29, 0x00,
                0xAC, 0x82, 0x1B, 0x00, 0xDC, 0xD5, 0x18, 0x00, 0x40, 0x83, 0x27, 0x00, 0x00, 0x02, 0x10, 0x00,
                0xCC, 0x48, 0x00, 0x00, 0x60, 0x3D, 0x14, 0x00, 0xE1, 0x49, 0x15, 0x00, 0x00, 0x48, 0x00, 0x00,
                0x8C, 0x3D, 0x14, 0x00, 0x04, 0x90, 0x27, 0x00, 0xBC, 0xCC, 0x10, 0x00, 0x44, 0x44, 0x44, 0x44,
                0xB9, 0xF2, 0x10, 0x00, 0x00, 0x90, 0x27, 0x00, 0x00, 0x00, 0x2B, 0x00, 0x8C, 0x53, 0x10, 0x00,
                0x51, 0x00, 0x56, 0x18, 0x8C, 0x53, 0x10, 0x00, 0x00, 0x04, 0x00, 0x00, 0xE1, 0x49, 0x15, 0x00,
                0x20, 0x90, 0x27, 0x00, 0x58, 0x39, 0x1B, 0x00, 0xE5, 0x04, 0x21, 0x00, 0x00, 0xDA, 0x19, 0x00,
                0x00, 0x75, 0x01, 0x00, 0x86, 0xDF, 0x21, 0x00, 0x00, 0xC1, 0x1A, 0x00, 0x22, 0xDA, 0x1D, 0x00,
                0x8C, 0x53, 0x10, 0x00, 0x54, 0x6B, 0x03, 0x00, 0x60, 0x3D, 0x14, 0x00, 0x59, 0x53, 0x3A, 0x00,
                0x00, 0x00, 0x00, 0x00, 0xB9, 0xF2, 0x10, 0x00, 0x00, 0xFE, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00,
                0xC4, 0x4F, 0x1C, 0x00, 0x00, 0x94, 0x27, 0x00, 0xFC, 0x34, 0x13, 0x00, 0xFE, 0xFF, 0xFF, 0xFF,
                0x8C, 0x53, 0x10, 0x00, 0x9C, 0x94, 0x27, 0xF0, 0x60, 0x3D, 0x14, 0x00, 0x00, 0x94, 0x27, 0x00,
                0x8C, 0x3D, 0x14, 0x00, 0x2D, 0x00, 0x00, 0x00, 0x90, 0xB6, 0x10, 0x00, 0xF0, 0x93, 0x27, 0x00,
                0xE8, 0x93, 0x27, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0xFB, 0x19, 0x00, 0x00, 0x00, 0xBF, 0x2D,
                0x05, 0x00, 0x0A, 0x03, 0x0F, 0x00, 0x4E, 0x00, 0x61, 0x00, 0x6D, 0x00, 0x65, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x59, 0x00, 0x53, 0x00,
                0x3A, 0x00, 0x2F, 0x00, 0x72, 0x00, 0x65, 0x00, 0x69, 0x00, 0x4E, 0x00, 0x61, 0x00, 0x6E, 0x00,
                0x64, 0x00, 0x2E, 0x00, 0x64, 0x00, 0x61, 0x00, 0x74, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                0x6E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE5, 0x01, 0x13, 0x02, 0x19, 0x13, 0xE1, 0x0D,
                0xD3, 0x0D, 0xE6, 0xAC, 0x00, 0xFE, 0x00, 0x01, 0xFD, 0xA5, 0xCE, 0x12, 0x00, 0x00, 0x00, 0x00,
                0x52, 0x00, 0x83, 0xF7, 0x01, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00, 0xB9, 0xF2, 0x10, 0x00, 0x00, 0xFE, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00,
                0xC4, 0x4F, 0x1C, 0x00, 0x00, 0x94, 0x27, 0x00, 0xFC, 0x34, 0x13, 0x00, 0xFE, 0xFF, 0xFF, 0xFF,
                0x8C, 0x53, 0x10, 0x00, 0x9C, 0x94, 0x27, 0xF0, 0x60, 0x3D, 0x14, 0x00, 0x00, 0x94, 0x27, 0x00,
                0x8C, 0x3D, 0x14, 0x00, 0x2D, 0x00, 0x00, 0x00, 0x90, 0xB6, 0x10, 0x00, 0xF0, 0x93, 0x27, 0x00,
                0xE8, 0x93, 0x27, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0xFB, 0x19, 0x00, 0x00, 0x00, 0x28, 0x31,
        }
};
