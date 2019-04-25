/** @file
  Certificate and signature constants for the EnrollDefaultKeys application.

  Copyright (C) 2014-2019, Red Hat, Inc.

  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#include "EnrollDefaultKeys.h"


//
// We'll use the certificate below as both Platform Key and as first Key
// Exchange Key.
//
// "Red Hat Secure Boot (PK/KEK key 1)/emailAddress=secalert@redhat.com"
// SHA1: fd:fc:7f:3c:7e:f3:e0:57:76:ad:d7:98:78:21:6c:9b:e0:e1:95:97
//
CONST UINT8 mRedHatPkKek1[] = {
  0x30, 0x82, 0x03, 0xa0, 0x30, 0x82, 0x02, 0x88, 0xa0, 0x03, 0x02, 0x01, 0x02,
  0x02, 0x09, 0x00, 0xfe, 0xf5, 0x88, 0xe8, 0xf3, 0x96, 0xc0, 0xf1, 0x30, 0x0d,
  0x06, 0x09, 0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d, 0x01, 0x01, 0x0b, 0x05, 0x00,
  0x30, 0x51, 0x31, 0x2b, 0x30, 0x29, 0x06, 0x03, 0x55, 0x04, 0x03, 0x13, 0x22,
  0x52, 0x65, 0x64, 0x20, 0x48, 0x61, 0x74, 0x20, 0x53, 0x65, 0x63, 0x75, 0x72,
  0x65, 0x20, 0x42, 0x6f, 0x6f, 0x74, 0x20, 0x28, 0x50, 0x4b, 0x2f, 0x4b, 0x45,
  0x4b, 0x20, 0x6b, 0x65, 0x79, 0x20, 0x31, 0x29, 0x31, 0x22, 0x30, 0x20, 0x06,
  0x09, 0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d, 0x01, 0x09, 0x01, 0x16, 0x13, 0x73,
  0x65, 0x63, 0x61, 0x6c, 0x65, 0x72, 0x74, 0x40, 0x72, 0x65, 0x64, 0x68, 0x61,
  0x74, 0x2e, 0x63, 0x6f, 0x6d, 0x30, 0x1e, 0x17, 0x0d, 0x31, 0x34, 0x31, 0x30,
  0x33, 0x31, 0x31, 0x31, 0x31, 0x35, 0x33, 0x37, 0x5a, 0x17, 0x0d, 0x33, 0x37,
  0x31, 0x30, 0x32, 0x35, 0x31, 0x31, 0x31, 0x35, 0x33, 0x37, 0x5a, 0x30, 0x51,
  0x31, 0x2b, 0x30, 0x29, 0x06, 0x03, 0x55, 0x04, 0x03, 0x13, 0x22, 0x52, 0x65,
  0x64, 0x20, 0x48, 0x61, 0x74, 0x20, 0x53, 0x65, 0x63, 0x75, 0x72, 0x65, 0x20,
  0x42, 0x6f, 0x6f, 0x74, 0x20, 0x28, 0x50, 0x4b, 0x2f, 0x4b, 0x45, 0x4b, 0x20,
  0x6b, 0x65, 0x79, 0x20, 0x31, 0x29, 0x31, 0x22, 0x30, 0x20, 0x06, 0x09, 0x2a,
  0x86, 0x48, 0x86, 0xf7, 0x0d, 0x01, 0x09, 0x01, 0x16, 0x13, 0x73, 0x65, 0x63,
  0x61, 0x6c, 0x65, 0x72, 0x74, 0x40, 0x72, 0x65, 0x64, 0x68, 0x61, 0x74, 0x2e,
  0x63, 0x6f, 0x6d, 0x30, 0x82, 0x01, 0x22, 0x30, 0x0d, 0x06, 0x09, 0x2a, 0x86,
  0x48, 0x86, 0xf7, 0x0d, 0x01, 0x01, 0x01, 0x05, 0x00, 0x03, 0x82, 0x01, 0x0f,
  0x00, 0x30, 0x82, 0x01, 0x0a, 0x02, 0x82, 0x01, 0x01, 0x00, 0x90, 0x1f, 0x84,
  0x7b, 0x8d, 0xbc, 0xeb, 0x97, 0x26, 0x82, 0x6d, 0x88, 0xab, 0x8a, 0xc9, 0x8c,
  0x68, 0x70, 0xf9, 0xdf, 0x4b, 0x07, 0xb2, 0x37, 0x83, 0x0b, 0x02, 0xc8, 0x67,
  0x68, 0x30, 0x9e, 0xe3, 0xf0, 0xf0, 0x99, 0x4a, 0xb8, 0x59, 0x57, 0xc6, 0x41,
  0xf6, 0x38, 0x8b, 0xfe, 0x66, 0x4c, 0x49, 0xe9, 0x37, 0x37, 0x92, 0x2e, 0x98,
  0x01, 0x1e, 0x5b, 0x14, 0x50, 0xe6, 0xa8, 0x8d, 0x25, 0x0d, 0xf5, 0x86, 0xe6,
  0xab, 0x30, 0xcb, 0x40, 0x16, 0xea, 0x8d, 0x8b, 0x16, 0x86, 0x70, 0x43, 0x37,
  0xf2, 0xce, 0xc0, 0x91, 0xdf, 0x71, 0x14, 0x8e, 0x99, 0x0e, 0x89, 0xb6, 0x4c,
  0x6d, 0x24, 0x1e, 0x8c, 0xe4, 0x2f, 0x4f, 0x25, 0xd0, 0xba, 0x06, 0xf8, 0xc6,
  0xe8, 0x19, 0x18, 0x76, 0x73, 0x1d, 0x81, 0x6d, 0xa8, 0xd8, 0x05, 0xcf, 0x3a,
  0xc8, 0x7b, 0x28, 0xc8, 0x36, 0xa3, 0x16, 0x0d, 0x29, 0x8c, 0x99, 0x9a, 0x68,
  0xdc, 0xab, 0xc0, 0x4d, 0x8d, 0xbf, 0x5a, 0xbb, 0x2b, 0xa9, 0x39, 0x4b, 0x04,
  0x97, 0x1c, 0xf9, 0x36, 0xbb, 0xc5, 0x3a, 0x86, 0x04, 0xae, 0xaf, 0xd4, 0x82,
  0x7b, 0xe0, 0xab, 0xde, 0x49, 0x05, 0x68, 0xfc, 0xf6, 0xae, 0x68, 0x1a, 0x6c,
  0x90, 0x4d, 0x57, 0x19, 0x3c, 0x64, 0x66, 0x03, 0xf6, 0xc7, 0x52, 0x9b, 0xf7,
  0x94, 0xcf, 0x93, 0x6a, 0xa1, 0x68, 0xc9, 0xaa, 0xcf, 0x99, 0x6b, 0xbc, 0xaa,
  0x5e, 0x08, 0xe7, 0x39, 0x1c, 0xf7, 0xf8, 0x0f, 0xba, 0x06, 0x7e, 0xf1, 0xcb,
  0xe8, 0x76, 0xdd, 0xfe, 0x22, 0xda, 0xad, 0x3a, 0x5e, 0x5b, 0x34, 0xea, 0xb3,
  0xc9, 0xe0, 0x4d, 0x04, 0x29, 0x7e, 0xb8, 0x60, 0xb9, 0x05, 0xef, 0xb5, 0xd9,
  0x17, 0x58, 0x56, 0x16, 0x60, 0xb9, 0x30, 0x32, 0xf0, 0x36, 0x4a, 0xc3, 0xf2,
  0x79, 0x8d, 0x12, 0x40, 0x70, 0xf3, 0x02, 0x03, 0x01, 0x00, 0x01, 0xa3, 0x7b,
  0x30, 0x79, 0x30, 0x09, 0x06, 0x03, 0x55, 0x1d, 0x13, 0x04, 0x02, 0x30, 0x00,
  0x30, 0x2c, 0x06, 0x09, 0x60, 0x86, 0x48, 0x01, 0x86, 0xf8, 0x42, 0x01, 0x0d,
  0x04, 0x1f, 0x16, 0x1d, 0x4f, 0x70, 0x65, 0x6e, 0x53, 0x53, 0x4c, 0x20, 0x47,
  0x65, 0x6e, 0x65, 0x72, 0x61, 0x74, 0x65, 0x64, 0x20, 0x43, 0x65, 0x72, 0x74,
  0x69, 0x66, 0x69, 0x63, 0x61, 0x74, 0x65, 0x30, 0x1d, 0x06, 0x03, 0x55, 0x1d,
  0x0e, 0x04, 0x16, 0x04, 0x14, 0x3c, 0xe9, 0x60, 0xe3, 0xff, 0x19, 0xa1, 0x0a,
  0x7b, 0xa3, 0x42, 0xf4, 0x8d, 0x42, 0x2e, 0xb4, 0xd5, 0x9c, 0x72, 0xec, 0x30,
  0x1f, 0x06, 0x03, 0x55, 0x1d, 0x23, 0x04, 0x18, 0x30, 0x16, 0x80, 0x14, 0x3c,
  0xe9, 0x60, 0xe3, 0xff, 0x19, 0xa1, 0x0a, 0x7b, 0xa3, 0x42, 0xf4, 0x8d, 0x42,
  0x2e, 0xb4, 0xd5, 0x9c, 0x72, 0xec, 0x30, 0x0d, 0x06, 0x09, 0x2a, 0x86, 0x48,
  0x86, 0xf7, 0x0d, 0x01, 0x01, 0x0b, 0x05, 0x00, 0x03, 0x82, 0x01, 0x01, 0x00,
  0x5c, 0x4d, 0x92, 0x88, 0xb4, 0x82, 0x5f, 0x1d, 0xad, 0x8b, 0x11, 0xec, 0xdf,
  0x06, 0xa6, 0x7a, 0xa5, 0x2b, 0x9f, 0x37, 0x55, 0x0c, 0x8d, 0x6e, 0x05, 0x00,
  0xad, 0xb7, 0x0c, 0x41, 0x89, 0x69, 0xcf, 0xd6, 0x65, 0x06, 0x9b, 0x51, 0x78,
  0xd2, 0xad, 0xc7, 0xbf, 0x9c, 0xdc, 0x05, 0x73, 0x7f, 0xe7, 0x1e, 0x39, 0x13,
  0xb4, 0xea, 0xb6, 0x30, 0x7d, 0x40, 0x75, 0xab, 0x9c, 0x43, 0x0b, 0xdf, 0xb0,
  0xc2, 0x1b, 0xbf, 0x30, 0xe0, 0xf4, 0xfe, 0xc0, 0xdb, 0x62, 0x21, 0x98, 0xf6,
  0xc5, 0xaf, 0xde, 0x3b, 0x4f, 0x49, 0x0a, 0xe6, 0x1e, 0xf9, 0x86, 0xb0, 0x3f,
  0x0d, 0xd6, 0xd4, 0x46, 0x37, 0xdb, 0x54, 0x74, 0x5e, 0xff, 0x11, 0xc2, 0x60,
  0xc6, 0x70, 0x58, 0xc5, 0x1c, 0x6f, 0xec, 0xb2, 0xd8, 0x6e, 0x6f, 0xc3, 0xbc,
  0x33, 0x87, 0x38, 0xa4, 0xf3, 0x44, 0x64, 0x9c, 0x34, 0x3b, 0x28, 0x94, 0x26,
  0x78, 0x27, 0x9f, 0x16, 0x17, 0xe8, 0x3b, 0x69, 0x0a, 0x25, 0xa9, 0x73, 0x36,
  0x7e, 0x9e, 0x37, 0x5c, 0xec, 0xe8, 0x3f, 0xdb, 0x91, 0xf9, 0x12, 0xb3, 0x3d,
  0xce, 0xe7, 0xdd, 0x15, 0xc3, 0xae, 0x8c, 0x05, 0x20, 0x61, 0x9b, 0x95, 0xde,
  0x9b, 0xaf, 0xfa, 0xb1, 0x5c, 0x1c, 0xe5, 0x97, 0xe7, 0xc3, 0x34, 0x11, 0x85,
  0xf5, 0x8a, 0x27, 0x26, 0xa4, 0x70, 0x36, 0xec, 0x0c, 0xf6, 0x83, 0x3d, 0x90,
  0xf7, 0x36, 0xf3, 0xf9, 0xf3, 0x15, 0xd4, 0x90, 0x62, 0xbe, 0x53, 0xb4, 0xaf,
  0xd3, 0x49, 0xaf, 0xef, 0xf4, 0x73, 0xe8, 0x7b, 0x76, 0xe4, 0x44, 0x2a, 0x37,
  0xba, 0x81, 0xa4, 0x99, 0x0c, 0x3a, 0x31, 0x24, 0x71, 0xa0, 0xe4, 0xe4, 0xb7,
  0x1a, 0xcb, 0x47, 0xe4, 0xaa, 0x22, 0xcf, 0xef, 0x75, 0x61, 0x80, 0xe3, 0x43,
  0xb7, 0x48, 0x57, 0x73, 0x11, 0x3d, 0x78, 0x9b, 0x69
};

CONST UINTN mSizeOfRedHatPkKek1 = sizeof mRedHatPkKek1;


//
// Second KEK: "Microsoft Corporation KEK CA 2011".
// SHA1: 31:59:0b:fd:89:c9:d7:4e:d0:87:df:ac:66:33:4b:39:31:25:4b:30
//
// "dbx" updates in "dbxtool" are signed with a key derived from this KEK.
//
CONST UINT8 mMicrosoftKek[] = {
  0x30, 0x82, 0x05, 0xe8, 0x30, 0x82, 0x03, 0xd0, 0xa0, 0x03, 0x02, 0x01, 0x02,
  0x02, 0x0a, 0x61, 0x0a, 0xd1, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x30,
  0x0d, 0x06, 0x09, 0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d, 0x01, 0x01, 0x0b, 0x05,
  0x00, 0x30, 0x81, 0x91, 0x31, 0x0b, 0x30, 0x09, 0x06, 0x03, 0x55, 0x04, 0x06,
  0x13, 0x02, 0x55, 0x53, 0x31, 0x13, 0x30, 0x11, 0x06, 0x03, 0x55, 0x04, 0x08,
  0x13, 0x0a, 0x57, 0x61, 0x73, 0x68, 0x69, 0x6e, 0x67, 0x74, 0x6f, 0x6e, 0x31,
  0x10, 0x30, 0x0e, 0x06, 0x03, 0x55, 0x04, 0x07, 0x13, 0x07, 0x52, 0x65, 0x64,
  0x6d, 0x6f, 0x6e, 0x64, 0x31, 0x1e, 0x30, 0x1c, 0x06, 0x03, 0x55, 0x04, 0x0a,
  0x13, 0x15, 0x4d, 0x69, 0x63, 0x72, 0x6f, 0x73, 0x6f, 0x66, 0x74, 0x20, 0x43,
  0x6f, 0x72, 0x70, 0x6f, 0x72, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x31, 0x3b, 0x30,
  0x39, 0x06, 0x03, 0x55, 0x04, 0x03, 0x13, 0x32, 0x4d, 0x69, 0x63, 0x72, 0x6f,
  0x73, 0x6f, 0x66, 0x74, 0x20, 0x43, 0x6f, 0x72, 0x70, 0x6f, 0x72, 0x61, 0x74,
  0x69, 0x6f, 0x6e, 0x20, 0x54, 0x68, 0x69, 0x72, 0x64, 0x20, 0x50, 0x61, 0x72,
  0x74, 0x79, 0x20, 0x4d, 0x61, 0x72, 0x6b, 0x65, 0x74, 0x70, 0x6c, 0x61, 0x63,
  0x65, 0x20, 0x52, 0x6f, 0x6f, 0x74, 0x30, 0x1e, 0x17, 0x0d, 0x31, 0x31, 0x30,
  0x36, 0x32, 0x34, 0x32, 0x30, 0x34, 0x31, 0x32, 0x39, 0x5a, 0x17, 0x0d, 0x32,
  0x36, 0x30, 0x36, 0x32, 0x34, 0x32, 0x30, 0x35, 0x31, 0x32, 0x39, 0x5a, 0x30,
  0x81, 0x80, 0x31, 0x0b, 0x30, 0x09, 0x06, 0x03, 0x55, 0x04, 0x06, 0x13, 0x02,
  0x55, 0x53, 0x31, 0x13, 0x30, 0x11, 0x06, 0x03, 0x55, 0x04, 0x08, 0x13, 0x0a,
  0x57, 0x61, 0x73, 0x68, 0x69, 0x6e, 0x67, 0x74, 0x6f, 0x6e, 0x31, 0x10, 0x30,
  0x0e, 0x06, 0x03, 0x55, 0x04, 0x07, 0x13, 0x07, 0x52, 0x65, 0x64, 0x6d, 0x6f,
  0x6e, 0x64, 0x31, 0x1e, 0x30, 0x1c, 0x06, 0x03, 0x55, 0x04, 0x0a, 0x13, 0x15,
  0x4d, 0x69, 0x63, 0x72, 0x6f, 0x73, 0x6f, 0x66, 0x74, 0x20, 0x43, 0x6f, 0x72,
  0x70, 0x6f, 0x72, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x31, 0x2a, 0x30, 0x28, 0x06,
  0x03, 0x55, 0x04, 0x03, 0x13, 0x21, 0x4d, 0x69, 0x63, 0x72, 0x6f, 0x73, 0x6f,
  0x66, 0x74, 0x20, 0x43, 0x6f, 0x72, 0x70, 0x6f, 0x72, 0x61, 0x74, 0x69, 0x6f,
  0x6e, 0x20, 0x4b, 0x45, 0x4b, 0x20, 0x43, 0x41, 0x20, 0x32, 0x30, 0x31, 0x31,
  0x30, 0x82, 0x01, 0x22, 0x30, 0x0d, 0x06, 0x09, 0x2a, 0x86, 0x48, 0x86, 0xf7,
  0x0d, 0x01, 0x01, 0x01, 0x05, 0x00, 0x03, 0x82, 0x01, 0x0f, 0x00, 0x30, 0x82,
  0x01, 0x0a, 0x02, 0x82, 0x01, 0x01, 0x00, 0xc4, 0xe8, 0xb5, 0x8a, 0xbf, 0xad,
  0x57, 0x26, 0xb0, 0x26, 0xc3, 0xea, 0xe7, 0xfb, 0x57, 0x7a, 0x44, 0x02, 0x5d,
  0x07, 0x0d, 0xda, 0x4a, 0xe5, 0x74, 0x2a, 0xe6, 0xb0, 0x0f, 0xec, 0x6d, 0xeb,
  0xec, 0x7f, 0xb9, 0xe3, 0x5a, 0x63, 0x32, 0x7c, 0x11, 0x17, 0x4f, 0x0e, 0xe3,
  0x0b, 0xa7, 0x38, 0x15, 0x93, 0x8e, 0xc6, 0xf5, 0xe0, 0x84, 0xb1, 0x9a, 0x9b,
  0x2c, 0xe7, 0xf5, 0xb7, 0x91, 0xd6, 0x09, 0xe1, 0xe2, 0xc0, 0x04, 0xa8, 0xac,
  0x30, 0x1c, 0xdf, 0x48, 0xf3, 0x06, 0x50, 0x9a, 0x64, 0xa7, 0x51, 0x7f, 0xc8,
  0x85, 0x4f, 0x8f, 0x20, 0x86, 0xce, 0xfe, 0x2f, 0xe1, 0x9f, 0xff, 0x82, 0xc0,
  0xed, 0xe9, 0xcd, 0xce, 0xf4, 0x53, 0x6a, 0x62, 0x3a, 0x0b, 0x43, 0xb9, 0xe2,
  0x25, 0xfd, 0xfe, 0x05, 0xf9, 0xd4, 0xc4, 0x14, 0xab, 0x11, 0xe2, 0x23, 0x89,
  0x8d, 0x70, 0xb7, 0xa4, 0x1d, 0x4d, 0xec, 0xae, 0xe5, 0x9c, 0xfa, 0x16, 0xc2,
  0xd7, 0xc1, 0xcb, 0xd4, 0xe8, 0xc4, 0x2f, 0xe5, 0x99, 0xee, 0x24, 0x8b, 0x03,
  0xec, 0x8d, 0xf2, 0x8b, 0xea, 0xc3, 0x4a, 0xfb, 0x43, 0x11, 0x12, 0x0b, 0x7e,
  0xb5, 0x47, 0x92, 0x6c, 0xdc, 0xe6, 0x04, 0x89, 0xeb, 0xf5, 0x33, 0x04, 0xeb,
  0x10, 0x01, 0x2a, 0x71, 0xe5, 0xf9, 0x83, 0x13, 0x3c, 0xff, 0x25, 0x09, 0x2f,
  0x68, 0x76, 0x46, 0xff, 0xba, 0x4f, 0xbe, 0xdc, 0xad, 0x71, 0x2a, 0x58, 0xaa,
  0xfb, 0x0e, 0xd2, 0x79, 0x3d, 0xe4, 0x9b, 0x65, 0x3b, 0xcc, 0x29, 0x2a, 0x9f,
  0xfc, 0x72, 0x59, 0xa2, 0xeb, 0xae, 0x92, 0xef, 0xf6, 0x35, 0x13, 0x80, 0xc6,
  0x02, 0xec, 0xe4, 0x5f, 0xcc, 0x9d, 0x76, 0xcd, 0xef, 0x63, 0x92, 0xc1, 0xaf,
  0x79, 0x40, 0x84, 0x79, 0x87, 0x7f, 0xe3, 0x52, 0xa8, 0xe8, 0x9d, 0x7b, 0x07,
  0x69, 0x8f, 0x15, 0x02, 0x03, 0x01, 0x00, 0x01, 0xa3, 0x82, 0x01, 0x4f, 0x30,
  0x82, 0x01, 0x4b, 0x30, 0x10, 0x06, 0x09, 0x2b, 0x06, 0x01, 0x04, 0x01, 0x82,
  0x37, 0x15, 0x01, 0x04, 0x03, 0x02, 0x01, 0x00, 0x30, 0x1d, 0x06, 0x03, 0x55,
  0x1d, 0x0e, 0x04, 0x16, 0x04, 0x14, 0x62, 0xfc, 0x43, 0xcd, 0xa0, 0x3e, 0xa4,
  0xcb, 0x67, 0x12, 0xd2, 0x5b, 0xd9, 0x55, 0xac, 0x7b, 0xcc, 0xb6, 0x8a, 0x5f,
  0x30, 0x19, 0x06, 0x09, 0x2b, 0x06, 0x01, 0x04, 0x01, 0x82, 0x37, 0x14, 0x02,
  0x04, 0x0c, 0x1e, 0x0a, 0x00, 0x53, 0x00, 0x75, 0x00, 0x62, 0x00, 0x43, 0x00,
  0x41, 0x30, 0x0b, 0x06, 0x03, 0x55, 0x1d, 0x0f, 0x04, 0x04, 0x03, 0x02, 0x01,
  0x86, 0x30, 0x0f, 0x06, 0x03, 0x55, 0x1d, 0x13, 0x01, 0x01, 0xff, 0x04, 0x05,
  0x30, 0x03, 0x01, 0x01, 0xff, 0x30, 0x1f, 0x06, 0x03, 0x55, 0x1d, 0x23, 0x04,
  0x18, 0x30, 0x16, 0x80, 0x14, 0x45, 0x66, 0x52, 0x43, 0xe1, 0x7e, 0x58, 0x11,
  0xbf, 0xd6, 0x4e, 0x9e, 0x23, 0x55, 0x08, 0x3b, 0x3a, 0x22, 0x6a, 0xa8, 0x30,
  0x5c, 0x06, 0x03, 0x55, 0x1d, 0x1f, 0x04, 0x55, 0x30, 0x53, 0x30, 0x51, 0xa0,
  0x4f, 0xa0, 0x4d, 0x86, 0x4b, 0x68, 0x74, 0x74, 0x70, 0x3a, 0x2f, 0x2f, 0x63,
  0x72, 0x6c, 0x2e, 0x6d, 0x69, 0x63, 0x72, 0x6f, 0x73, 0x6f, 0x66, 0x74, 0x2e,
  0x63, 0x6f, 0x6d, 0x2f, 0x70, 0x6b, 0x69, 0x2f, 0x63, 0x72, 0x6c, 0x2f, 0x70,
  0x72, 0x6f, 0x64, 0x75, 0x63, 0x74, 0x73, 0x2f, 0x4d, 0x69, 0x63, 0x43, 0x6f,
  0x72, 0x54, 0x68, 0x69, 0x50, 0x61, 0x72, 0x4d, 0x61, 0x72, 0x52, 0x6f, 0x6f,
  0x5f, 0x32, 0x30, 0x31, 0x30, 0x2d, 0x31, 0x30, 0x2d, 0x30, 0x35, 0x2e, 0x63,
  0x72, 0x6c, 0x30, 0x60, 0x06, 0x08, 0x2b, 0x06, 0x01, 0x05, 0x05, 0x07, 0x01,
  0x01, 0x04, 0x54, 0x30, 0x52, 0x30, 0x50, 0x06, 0x08, 0x2b, 0x06, 0x01, 0x05,
  0x05, 0x07, 0x30, 0x02, 0x86, 0x44, 0x68, 0x74, 0x74, 0x70, 0x3a, 0x2f, 0x2f,
  0x77, 0x77, 0x77, 0x2e, 0x6d, 0x69, 0x63, 0x72, 0x6f, 0x73, 0x6f, 0x66, 0x74,
  0x2e, 0x63, 0x6f, 0x6d, 0x2f, 0x70, 0x6b, 0x69, 0x2f, 0x63, 0x65, 0x72, 0x74,
  0x73, 0x2f, 0x4d, 0x69, 0x63, 0x43, 0x6f, 0x72, 0x54, 0x68, 0x69, 0x50, 0x61,
  0x72, 0x4d, 0x61, 0x72, 0x52, 0x6f, 0x6f, 0x5f, 0x32, 0x30, 0x31, 0x30, 0x2d,
  0x31, 0x30, 0x2d, 0x30, 0x35, 0x2e, 0x63, 0x72, 0x74, 0x30, 0x0d, 0x06, 0x09,
  0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d, 0x01, 0x01, 0x0b, 0x05, 0x00, 0x03, 0x82,
  0x02, 0x01, 0x00, 0xd4, 0x84, 0x88, 0xf5, 0x14, 0x94, 0x18, 0x02, 0xca, 0x2a,
  0x3c, 0xfb, 0x2a, 0x92, 0x1c, 0x0c, 0xd7, 0xa0, 0xd1, 0xf1, 0xe8, 0x52, 0x66,
  0xa8, 0xee, 0xa2, 0xb5, 0x75, 0x7a, 0x90, 0x00, 0xaa, 0x2d, 0xa4, 0x76, 0x5a,
  0xea, 0x79, 0xb7, 0xb9, 0x37, 0x6a, 0x51, 0x7b, 0x10, 0x64, 0xf6, 0xe1, 0x64,
  0xf2, 0x02, 0x67, 0xbe, 0xf7, 0xa8, 0x1b, 0x78, 0xbd, 0xba, 0xce, 0x88, 0x58,
  0x64, 0x0c, 0xd6, 0x57, 0xc8, 0x19, 0xa3, 0x5f, 0x05, 0xd6, 0xdb, 0xc6, 0xd0,
  0x69, 0xce, 0x48, 0x4b, 0x32, 0xb7, 0xeb, 0x5d, 0xd2, 0x30, 0xf5, 0xc0, 0xf5,
  0xb8, 0xba, 0x78, 0x07, 0xa3, 0x2b, 0xfe, 0x9b, 0xdb, 0x34, 0x56, 0x84, 0xec,
  0x82, 0xca, 0xae, 0x41, 0x25, 0x70, 0x9c, 0x6b, 0xe9, 0xfe, 0x90, 0x0f, 0xd7,
  0x96, 0x1f, 0xe5, 0xe7, 0x94, 0x1f, 0xb2, 0x2a, 0x0c, 0x8d, 0x4b, 0xff, 0x28,
  0x29, 0x10, 0x7b, 0xf7, 0xd7, 0x7c, 0xa5, 0xd1, 0x76, 0xb9, 0x05, 0xc8, 0x79,
  0xed, 0x0f, 0x90, 0x92, 0x9c, 0xc2, 0xfe, 0xdf, 0x6f, 0x7e, 0x6c, 0x0f, 0x7b,
  0xd4, 0xc1, 0x45, 0xdd, 0x34, 0x51, 0x96, 0x39, 0x0f, 0xe5, 0x5e, 0x56, 0xd8,
  0x18, 0x05, 0x96, 0xf4, 0x07, 0xa6, 0x42, 0xb3, 0xa0, 0x77, 0xfd, 0x08, 0x19,
  0xf2, 0x71, 0x56, 0xcc, 0x9f, 0x86, 0x23, 0xa4, 0x87, 0xcb, 0xa6, 0xfd, 0x58,
  0x7e, 0xd4, 0x69, 0x67, 0x15, 0x91, 0x7e, 0x81, 0xf2, 0x7f, 0x13, 0xe5, 0x0d,
  0x8b, 0x8a, 0x3c, 0x87, 0x84, 0xeb, 0xe3, 0xce, 0xbd, 0x43, 0xe5, 0xad, 0x2d,
  0x84, 0x93, 0x8e, 0x6a, 0x2b, 0x5a, 0x7c, 0x44, 0xfa, 0x52, 0xaa, 0x81, 0xc8,
  0x2d, 0x1c, 0xbb, 0xe0, 0x52, 0xdf, 0x00, 0x11, 0xf8, 0x9a, 0x3d, 0xc1, 0x60,
  0xb0, 0xe1, 0x33, 0xb5, 0xa3, 0x88, 0xd1, 0x65, 0x19, 0x0a, 0x1a, 0xe7, 0xac,
  0x7c, 0xa4, 0xc1, 0x82, 0x87, 0x4e, 0x38, 0xb1, 0x2f, 0x0d, 0xc5, 0x14, 0x87,
  0x6f, 0xfd, 0x8d, 0x2e, 0xbc, 0x39, 0xb6, 0xe7, 0xe6, 0xc3, 0xe0, 0xe4, 0xcd,
  0x27, 0x84, 0xef, 0x94, 0x42, 0xef, 0x29, 0x8b, 0x90, 0x46, 0x41, 0x3b, 0x81,
  0x1b, 0x67, 0xd8, 0xf9, 0x43, 0x59, 0x65, 0xcb, 0x0d, 0xbc, 0xfd, 0x00, 0x92,
  0x4f, 0xf4, 0x75, 0x3b, 0xa7, 0xa9, 0x24, 0xfc, 0x50, 0x41, 0x40, 0x79, 0xe0,
  0x2d, 0x4f, 0x0a, 0x6a, 0x27, 0x76, 0x6e, 0x52, 0xed, 0x96, 0x69, 0x7b, 0xaf,
  0x0f, 0xf7, 0x87, 0x05, 0xd0, 0x45, 0xc2, 0xad, 0x53, 0x14, 0x81, 0x1f, 0xfb,
  0x30, 0x04, 0xaa, 0x37, 0x36, 0x61, 0xda, 0x4a, 0x69, 0x1b, 0x34, 0xd8, 0x68,
  0xed, 0xd6, 0x02, 0xcf, 0x6c, 0x94, 0x0c, 0xd3, 0xcf, 0x6c, 0x22, 0x79, 0xad,
  0xb1, 0xf0, 0xbc, 0x03, 0xa2, 0x46, 0x60, 0xa9, 0xc4, 0x07, 0xc2, 0x21, 0x82,
  0xf1, 0xfd, 0xf2, 0xe8, 0x79, 0x32, 0x60, 0xbf, 0xd8, 0xac, 0xa5, 0x22, 0x14,
  0x4b, 0xca, 0xc1, 0xd8, 0x4b, 0xeb, 0x7d, 0x3f, 0x57, 0x35, 0xb2, 0xe6, 0x4f,
  0x75, 0xb4, 0xb0, 0x60, 0x03, 0x22, 0x53, 0xae, 0x91, 0x79, 0x1d, 0xd6, 0x9b,
  0x41, 0x1f, 0x15, 0x86, 0x54, 0x70, 0xb2, 0xde, 0x0d, 0x35, 0x0f, 0x7c, 0xb0,
  0x34, 0x72, 0xba, 0x97, 0x60, 0x3b, 0xf0, 0x79, 0xeb, 0xa2, 0xb2, 0x1c, 0x5d,
  0xa2, 0x16, 0xb8, 0x87, 0xc5, 0xe9, 0x1b, 0xf6, 0xb5, 0x97, 0x25, 0x6f, 0x38,
  0x9f, 0xe3, 0x91, 0xfa, 0x8a, 0x79, 0x98, 0xc3, 0x69, 0x0e, 0xb7, 0xa3, 0x1c,
  0x20, 0x05, 0x97, 0xf8, 0xca, 0x14, 0xae, 0x00, 0xd7, 0xc4, 0xf3, 0xc0, 0x14,
  0x10, 0x75, 0x6b, 0x34, 0xa0, 0x1b, 0xb5, 0x99, 0x60, 0xf3, 0x5c, 0xb0, 0xc5,
  0x57, 0x4e, 0x36, 0xd2, 0x32, 0x84, 0xbf, 0x9e
};

CONST UINTN mSizeOfMicrosoftKek = sizeof mMicrosoftKek;


//
// First DB entry: "Microsoft Windows Production PCA 2011"
// SHA1: 58:0a:6f:4c:c4:e4:b6:69:b9:eb:dc:1b:2b:3e:08:7b:80:d0:67:8d
//
// Windows 8 and Windows Server 2012 R2 boot loaders are signed with a chain
// rooted in this certificate.
//
CONST UINT8 mMicrosoftPca[] = {
  0x30, 0x82, 0x05, 0xd7, 0x30, 0x82, 0x03, 0xbf, 0xa0, 0x03, 0x02, 0x01, 0x02,
  0x02, 0x0a, 0x61, 0x07, 0x76, 0x56, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x30,
  0x0d, 0x06, 0x09, 0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d, 0x01, 0x01, 0x0b, 0x05,
  0x00, 0x30, 0x81, 0x88, 0x31, 0x0b, 0x30, 0x09, 0x06, 0x03, 0x55, 0x04, 0x06,
  0x13, 0x02, 0x55, 0x53, 0x31, 0x13, 0x30, 0x11, 0x06, 0x03, 0x55, 0x04, 0x08,
  0x13, 0x0a, 0x57, 0x61, 0x73, 0x68, 0x69, 0x6e, 0x67, 0x74, 0x6f, 0x6e, 0x31,
  0x10, 0x30, 0x0e, 0x06, 0x03, 0x55, 0x04, 0x07, 0x13, 0x07, 0x52, 0x65, 0x64,
  0x6d, 0x6f, 0x6e, 0x64, 0x31, 0x1e, 0x30, 0x1c, 0x06, 0x03, 0x55, 0x04, 0x0a,
  0x13, 0x15, 0x4d, 0x69, 0x63, 0x72, 0x6f, 0x73, 0x6f, 0x66, 0x74, 0x20, 0x43,
  0x6f, 0x72, 0x70, 0x6f, 0x72, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x31, 0x32, 0x30,
  0x30, 0x06, 0x03, 0x55, 0x04, 0x03, 0x13, 0x29, 0x4d, 0x69, 0x63, 0x72, 0x6f,
  0x73, 0x6f, 0x66, 0x74, 0x20, 0x52, 0x6f, 0x6f, 0x74, 0x20, 0x43, 0x65, 0x72,
  0x74, 0x69, 0x66, 0x69, 0x63, 0x61, 0x74, 0x65, 0x20, 0x41, 0x75, 0x74, 0x68,
  0x6f, 0x72, 0x69, 0x74, 0x79, 0x20, 0x32, 0x30, 0x31, 0x30, 0x30, 0x1e, 0x17,
  0x0d, 0x31, 0x31, 0x31, 0x30, 0x31, 0x39, 0x31, 0x38, 0x34, 0x31, 0x34, 0x32,
  0x5a, 0x17, 0x0d, 0x32, 0x36, 0x31, 0x30, 0x31, 0x39, 0x31, 0x38, 0x35, 0x31,
  0x34, 0x32, 0x5a, 0x30, 0x81, 0x84, 0x31, 0x0b, 0x30, 0x09, 0x06, 0x03, 0x55,
  0x04, 0x06, 0x13, 0x02, 0x55, 0x53, 0x31, 0x13, 0x30, 0x11, 0x06, 0x03, 0x55,
  0x04, 0x08, 0x13, 0x0a, 0x57, 0x61, 0x73, 0x68, 0x69, 0x6e, 0x67, 0x74, 0x6f,
  0x6e, 0x31, 0x10, 0x30, 0x0e, 0x06, 0x03, 0x55, 0x04, 0x07, 0x13, 0x07, 0x52,
  0x65, 0x64, 0x6d, 0x6f, 0x6e, 0x64, 0x31, 0x1e, 0x30, 0x1c, 0x06, 0x03, 0x55,
  0x04, 0x0a, 0x13, 0x15, 0x4d, 0x69, 0x63, 0x72, 0x6f, 0x73, 0x6f, 0x66, 0x74,
  0x20, 0x43, 0x6f, 0x72, 0x70, 0x6f, 0x72, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x31,
  0x2e, 0x30, 0x2c, 0x06, 0x03, 0x55, 0x04, 0x03, 0x13, 0x25, 0x4d, 0x69, 0x63,
  0x72, 0x6f, 0x73, 0x6f, 0x66, 0x74, 0x20, 0x57, 0x69, 0x6e, 0x64, 0x6f, 0x77,
  0x73, 0x20, 0x50, 0x72, 0x6f, 0x64, 0x75, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x20,
  0x50, 0x43, 0x41, 0x20, 0x32, 0x30, 0x31, 0x31, 0x30, 0x82, 0x01, 0x22, 0x30,
  0x0d, 0x06, 0x09, 0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d, 0x01, 0x01, 0x01, 0x05,
  0x00, 0x03, 0x82, 0x01, 0x0f, 0x00, 0x30, 0x82, 0x01, 0x0a, 0x02, 0x82, 0x01,
  0x01, 0x00, 0xdd, 0x0c, 0xbb, 0xa2, 0xe4, 0x2e, 0x09, 0xe3, 0xe7, 0xc5, 0xf7,
  0x96, 0x69, 0xbc, 0x00, 0x21, 0xbd, 0x69, 0x33, 0x33, 0xef, 0xad, 0x04, 0xcb,
  0x54, 0x80, 0xee, 0x06, 0x83, 0xbb, 0xc5, 0x20, 0x84, 0xd9, 0xf7, 0xd2, 0x8b,
  0xf3, 0x38, 0xb0, 0xab, 0xa4, 0xad, 0x2d, 0x7c, 0x62, 0x79, 0x05, 0xff, 0xe3,
  0x4a, 0x3f, 0x04, 0x35, 0x20, 0x70, 0xe3, 0xc4, 0xe7, 0x6b, 0xe0, 0x9c, 0xc0,
  0x36, 0x75, 0xe9, 0x8a, 0x31, 0xdd, 0x8d, 0x70, 0xe5, 0xdc, 0x37, 0xb5, 0x74,
  0x46, 0x96, 0x28, 0x5b, 0x87, 0x60, 0x23, 0x2c, 0xbf, 0xdc, 0x47, 0xa5, 0x67,
  0xf7, 0x51, 0x27, 0x9e, 0x72, 0xeb, 0x07, 0xa6, 0xc9, 0xb9, 0x1e, 0x3b, 0x53,
  0x35, 0x7c, 0xe5, 0xd3, 0xec, 0x27, 0xb9, 0x87, 0x1c, 0xfe, 0xb9, 0xc9, 0x23,
  0x09, 0x6f, 0xa8, 0x46, 0x91, 0xc1, 0x6e, 0x96, 0x3c, 0x41, 0xd3, 0xcb, 0xa3,
  0x3f, 0x5d, 0x02, 0x6a, 0x4d, 0xec, 0x69, 0x1f, 0x25, 0x28, 0x5c, 0x36, 0xff,
  0xfd, 0x43, 0x15, 0x0a, 0x94, 0xe0, 0x19, 0xb4, 0xcf, 0xdf, 0xc2, 0x12, 0xe2,
  0xc2, 0x5b, 0x27, 0xee, 0x27, 0x78, 0x30, 0x8b, 0x5b, 0x2a, 0x09, 0x6b, 0x22,
  0x89, 0x53, 0x60, 0x16, 0x2c, 0xc0, 0x68, 0x1d, 0x53, 0xba, 0xec, 0x49, 0xf3,
  0x9d, 0x61, 0x8c, 0x85, 0x68, 0x09, 0x73, 0x44, 0x5d, 0x7d, 0xa2, 0x54, 0x2b,
  0xdd, 0x79, 0xf7, 0x15, 0xcf, 0x35, 0x5d, 0x6c, 0x1c, 0x2b, 0x5c, 0xce, 0xbc,
  0x9c, 0x23, 0x8b, 0x6f, 0x6e, 0xb5, 0x26, 0xd9, 0x36, 0x13, 0xc3, 0x4f, 0xd6,
  0x27, 0xae, 0xb9, 0x32, 0x3b, 0x41, 0x92, 0x2c, 0xe1, 0xc7, 0xcd, 0x77, 0xe8,
  0xaa, 0x54, 0x4e, 0xf7, 0x5c, 0x0b, 0x04, 0x87, 0x65, 0xb4, 0x43, 0x18, 0xa8,
  0xb2, 0xe0, 0x6d, 0x19, 0x77, 0xec, 0x5a, 0x24, 0xfa, 0x48, 0x03, 0x02, 0x03,
  0x01, 0x00, 0x01, 0xa3, 0x82, 0x01, 0x43, 0x30, 0x82, 0x01, 0x3f, 0x30, 0x10,
  0x06, 0x09, 0x2b, 0x06, 0x01, 0x04, 0x01, 0x82, 0x37, 0x15, 0x01, 0x04, 0x03,
  0x02, 0x01, 0x00, 0x30, 0x1d, 0x06, 0x03, 0x55, 0x1d, 0x0e, 0x04, 0x16, 0x04,
  0x14, 0xa9, 0x29, 0x02, 0x39, 0x8e, 0x16, 0xc4, 0x97, 0x78, 0xcd, 0x90, 0xf9,
  0x9e, 0x4f, 0x9a, 0xe1, 0x7c, 0x55, 0xaf, 0x53, 0x30, 0x19, 0x06, 0x09, 0x2b,
  0x06, 0x01, 0x04, 0x01, 0x82, 0x37, 0x14, 0x02, 0x04, 0x0c, 0x1e, 0x0a, 0x00,
  0x53, 0x00, 0x75, 0x00, 0x62, 0x00, 0x43, 0x00, 0x41, 0x30, 0x0b, 0x06, 0x03,
  0x55, 0x1d, 0x0f, 0x04, 0x04, 0x03, 0x02, 0x01, 0x86, 0x30, 0x0f, 0x06, 0x03,
  0x55, 0x1d, 0x13, 0x01, 0x01, 0xff, 0x04, 0x05, 0x30, 0x03, 0x01, 0x01, 0xff,
  0x30, 0x1f, 0x06, 0x03, 0x55, 0x1d, 0x23, 0x04, 0x18, 0x30, 0x16, 0x80, 0x14,
  0xd5, 0xf6, 0x56, 0xcb, 0x8f, 0xe8, 0xa2, 0x5c, 0x62, 0x68, 0xd1, 0x3d, 0x94,
  0x90, 0x5b, 0xd7, 0xce, 0x9a, 0x18, 0xc4, 0x30, 0x56, 0x06, 0x03, 0x55, 0x1d,
  0x1f, 0x04, 0x4f, 0x30, 0x4d, 0x30, 0x4b, 0xa0, 0x49, 0xa0, 0x47, 0x86, 0x45,
  0x68, 0x74, 0x74, 0x70, 0x3a, 0x2f, 0x2f, 0x63, 0x72, 0x6c, 0x2e, 0x6d, 0x69,
  0x63, 0x72, 0x6f, 0x73, 0x6f, 0x66, 0x74, 0x2e, 0x63, 0x6f, 0x6d, 0x2f, 0x70,
  0x6b, 0x69, 0x2f, 0x63, 0x72, 0x6c, 0x2f, 0x70, 0x72, 0x6f, 0x64, 0x75, 0x63,
  0x74, 0x73, 0x2f, 0x4d, 0x69, 0x63, 0x52, 0x6f, 0x6f, 0x43, 0x65, 0x72, 0x41,
  0x75, 0x74, 0x5f, 0x32, 0x30, 0x31, 0x30, 0x2d, 0x30, 0x36, 0x2d, 0x32, 0x33,
  0x2e, 0x63, 0x72, 0x6c, 0x30, 0x5a, 0x06, 0x08, 0x2b, 0x06, 0x01, 0x05, 0x05,
  0x07, 0x01, 0x01, 0x04, 0x4e, 0x30, 0x4c, 0x30, 0x4a, 0x06, 0x08, 0x2b, 0x06,
  0x01, 0x05, 0x05, 0x07, 0x30, 0x02, 0x86, 0x3e, 0x68, 0x74, 0x74, 0x70, 0x3a,
  0x2f, 0x2f, 0x77, 0x77, 0x77, 0x2e, 0x6d, 0x69, 0x63, 0x72, 0x6f, 0x73, 0x6f,
  0x66, 0x74, 0x2e, 0x63, 0x6f, 0x6d, 0x2f, 0x70, 0x6b, 0x69, 0x2f, 0x63, 0x65,
  0x72, 0x74, 0x73, 0x2f, 0x4d, 0x69, 0x63, 0x52, 0x6f, 0x6f, 0x43, 0x65, 0x72,
  0x41, 0x75, 0x74, 0x5f, 0x32, 0x30, 0x31, 0x30, 0x2d, 0x30, 0x36, 0x2d, 0x32,
  0x33, 0x2e, 0x63, 0x72, 0x74, 0x30, 0x0d, 0x06, 0x09, 0x2a, 0x86, 0x48, 0x86,
  0xf7, 0x0d, 0x01, 0x01, 0x0b, 0x05, 0x00, 0x03, 0x82, 0x02, 0x01, 0x00, 0x14,
  0xfc, 0x7c, 0x71, 0x51, 0xa5, 0x79, 0xc2, 0x6e, 0xb2, 0xef, 0x39, 0x3e, 0xbc,
  0x3c, 0x52, 0x0f, 0x6e, 0x2b, 0x3f, 0x10, 0x13, 0x73, 0xfe, 0xa8, 0x68, 0xd0,
  0x48, 0xa6, 0x34, 0x4d, 0x8a, 0x96, 0x05, 0x26, 0xee, 0x31, 0x46, 0x90, 0x61,
  0x79, 0xd6, 0xff, 0x38, 0x2e, 0x45, 0x6b, 0xf4, 0xc0, 0xe5, 0x28, 0xb8, 0xda,
  0x1d, 0x8f, 0x8a, 0xdb, 0x09, 0xd7, 0x1a, 0xc7, 0x4c, 0x0a, 0x36, 0x66, 0x6a,
  0x8c, 0xec, 0x1b, 0xd7, 0x04, 0x90, 0xa8, 0x18, 0x17, 0xa4, 0x9b, 0xb9, 0xe2,
  0x40, 0x32, 0x36, 0x76, 0xc4, 0xc1, 0x5a, 0xc6, 0xbf, 0xe4, 0x04, 0xc0, 0xea,
  0x16, 0xd3, 0xac, 0xc3, 0x68, 0xef, 0x62, 0xac, 0xdd, 0x54, 0x6c, 0x50, 0x30,
  0x58, 0xa6, 0xeb, 0x7c, 0xfe, 0x94, 0xa7, 0x4e, 0x8e, 0xf4, 0xec, 0x7c, 0x86,
  0x73, 0x57, 0xc2, 0x52, 0x21, 0x73, 0x34, 0x5a, 0xf3, 0xa3, 0x8a, 0x56, 0xc8,
  0x04, 0xda, 0x07, 0x09, 0xed, 0xf8, 0x8b, 0xe3, 0xce, 0xf4, 0x7e, 0x8e, 0xae,
  0xf0, 0xf6, 0x0b, 0x8a, 0x08, 0xfb, 0x3f, 0xc9, 0x1d, 0x72, 0x7f, 0x53, 0xb8,
  0xeb, 0xbe, 0x63, 0xe0, 0xe3, 0x3d, 0x31, 0x65, 0xb0, 0x81, 0xe5, 0xf2, 0xac,
  0xcd, 0x16, 0xa4, 0x9f, 0x3d, 0xa8, 0xb1, 0x9b, 0xc2, 0x42, 0xd0, 0x90, 0x84,
  0x5f, 0x54, 0x1d, 0xff, 0x89, 0xea, 0xba, 0x1d, 0x47, 0x90, 0x6f, 0xb0, 0x73,
  0x4e, 0x41, 0x9f, 0x40, 0x9f, 0x5f, 0xe5, 0xa1, 0x2a, 0xb2, 0x11, 0x91, 0x73,
  0x8a, 0x21, 0x28, 0xf0, 0xce, 0xde, 0x73, 0x39, 0x5f, 0x3e, 0xab, 0x5c, 0x60,
  0xec, 0xdf, 0x03, 0x10, 0xa8, 0xd3, 0x09, 0xe9, 0xf4, 0xf6, 0x96, 0x85, 0xb6,
  0x7f, 0x51, 0x88, 0x66, 0x47, 0x19, 0x8d, 0xa2, 0xb0, 0x12, 0x3d, 0x81, 0x2a,
  0x68, 0x05, 0x77, 0xbb, 0x91, 0x4c, 0x62, 0x7b, 0xb6, 0xc1, 0x07, 0xc7, 0xba,
  0x7a, 0x87, 0x34, 0x03, 0x0e, 0x4b, 0x62, 0x7a, 0x99, 0xe9, 0xca, 0xfc, 0xce,
  0x4a, 0x37, 0xc9, 0x2d, 0xa4, 0x57, 0x7c, 0x1c, 0xfe, 0x3d, 0xdc, 0xb8, 0x0f,
  0x5a, 0xfa, 0xd6, 0xc4, 0xb3, 0x02, 0x85, 0x02, 0x3a, 0xea, 0xb3, 0xd9, 0x6e,
  0xe4, 0x69, 0x21, 0x37, 0xde, 0x81, 0xd1, 0xf6, 0x75, 0x19, 0x05, 0x67, 0xd3,
  0x93, 0x57, 0x5e, 0x29, 0x1b, 0x39, 0xc8, 0xee, 0x2d, 0xe1, 0xcd, 0xe4, 0x45,
  0x73, 0x5b, 0xd0, 0xd2, 0xce, 0x7a, 0xab, 0x16, 0x19, 0x82, 0x46, 0x58, 0xd0,
  0x5e, 0x9d, 0x81, 0xb3, 0x67, 0xaf, 0x6c, 0x35, 0xf2, 0xbc, 0xe5, 0x3f, 0x24,
  0xe2, 0x35, 0xa2, 0x0a, 0x75, 0x06, 0xf6, 0x18, 0x56, 0x99, 0xd4, 0x78, 0x2c,
  0xd1, 0x05, 0x1b, 0xeb, 0xd0, 0x88, 0x01, 0x9d, 0xaa, 0x10, 0xf1, 0x05, 0xdf,
  0xba, 0x7e, 0x2c, 0x63, 0xb7, 0x06, 0x9b, 0x23, 0x21, 0xc4, 0xf9, 0x78, 0x6c,
  0xe2, 0x58, 0x17, 0x06, 0x36, 0x2b, 0x91, 0x12, 0x03, 0xcc, 0xa4, 0xd9, 0xf2,
  0x2d, 0xba, 0xf9, 0x94, 0x9d, 0x40, 0xed, 0x18, 0x45, 0xf1, 0xce, 0x8a, 0x5c,
  0x6b, 0x3e, 0xab, 0x03, 0xd3, 0x70, 0x18, 0x2a, 0x0a, 0x6a, 0xe0, 0x5f, 0x47,
  0xd1, 0xd5, 0x63, 0x0a, 0x32, 0xf2, 0xaf, 0xd7, 0x36, 0x1f, 0x2a, 0x70, 0x5a,
  0xe5, 0x42, 0x59, 0x08, 0x71, 0x4b, 0x57, 0xba, 0x7e, 0x83, 0x81, 0xf0, 0x21,
  0x3c, 0xf4, 0x1c, 0xc1, 0xc5, 0xb9, 0x90, 0x93, 0x0e, 0x88, 0x45, 0x93, 0x86,
  0xe9, 0xb1, 0x20, 0x99, 0xbe, 0x98, 0xcb, 0xc5, 0x95, 0xa4, 0x5d, 0x62, 0xd6,
  0xa0, 0x63, 0x08, 0x20, 0xbd, 0x75, 0x10, 0x77, 0x7d, 0x3d, 0xf3, 0x45, 0xb9,
  0x9f, 0x97, 0x9f, 0xcb, 0x57, 0x80, 0x6f, 0x33, 0xa9, 0x04, 0xcf, 0x77, 0xa4,
  0x62, 0x1c, 0x59, 0x7e
};

CONST UINTN mSizeOfMicrosoftPca = sizeof mMicrosoftPca;


//
// Second DB entry: "Microsoft Corporation UEFI CA 2011"
// SHA1: 46:de:f6:3b:5c:e6:1c:f8:ba:0d:e2:e6:63:9c:10:19:d0:ed:14:f3
//
// To verify the "shim" binary and PCI expansion ROMs with.
//
CONST UINT8 mMicrosoftUefiCa[] = {
  0x30, 0x82, 0x06, 0x10, 0x30, 0x82, 0x03, 0xf8, 0xa0, 0x03, 0x02, 0x01, 0x02,
  0x02, 0x0a, 0x61, 0x08, 0xd3, 0xc4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x30,
  0x0d, 0x06, 0x09, 0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d, 0x01, 0x01, 0x0b, 0x05,
  0x00, 0x30, 0x81, 0x91, 0x31, 0x0b, 0x30, 0x09, 0x06, 0x03, 0x55, 0x04, 0x06,
  0x13, 0x02, 0x55, 0x53, 0x31, 0x13, 0x30, 0x11, 0x06, 0x03, 0x55, 0x04, 0x08,
  0x13, 0x0a, 0x57, 0x61, 0x73, 0x68, 0x69, 0x6e, 0x67, 0x74, 0x6f, 0x6e, 0x31,
  0x10, 0x30, 0x0e, 0x06, 0x03, 0x55, 0x04, 0x07, 0x13, 0x07, 0x52, 0x65, 0x64,
  0x6d, 0x6f, 0x6e, 0x64, 0x31, 0x1e, 0x30, 0x1c, 0x06, 0x03, 0x55, 0x04, 0x0a,
  0x13, 0x15, 0x4d, 0x69, 0x63, 0x72, 0x6f, 0x73, 0x6f, 0x66, 0x74, 0x20, 0x43,
  0x6f, 0x72, 0x70, 0x6f, 0x72, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x31, 0x3b, 0x30,
  0x39, 0x06, 0x03, 0x55, 0x04, 0x03, 0x13, 0x32, 0x4d, 0x69, 0x63, 0x72, 0x6f,
  0x73, 0x6f, 0x66, 0x74, 0x20, 0x43, 0x6f, 0x72, 0x70, 0x6f, 0x72, 0x61, 0x74,
  0x69, 0x6f, 0x6e, 0x20, 0x54, 0x68, 0x69, 0x72, 0x64, 0x20, 0x50, 0x61, 0x72,
  0x74, 0x79, 0x20, 0x4d, 0x61, 0x72, 0x6b, 0x65, 0x74, 0x70, 0x6c, 0x61, 0x63,
  0x65, 0x20, 0x52, 0x6f, 0x6f, 0x74, 0x30, 0x1e, 0x17, 0x0d, 0x31, 0x31, 0x30,
  0x36, 0x32, 0x37, 0x32, 0x31, 0x32, 0x32, 0x34, 0x35, 0x5a, 0x17, 0x0d, 0x32,
  0x36, 0x30, 0x36, 0x32, 0x37, 0x32, 0x31, 0x33, 0x32, 0x34, 0x35, 0x5a, 0x30,
  0x81, 0x81, 0x31, 0x0b, 0x30, 0x09, 0x06, 0x03, 0x55, 0x04, 0x06, 0x13, 0x02,
  0x55, 0x53, 0x31, 0x13, 0x30, 0x11, 0x06, 0x03, 0x55, 0x04, 0x08, 0x13, 0x0a,
  0x57, 0x61, 0x73, 0x68, 0x69, 0x6e, 0x67, 0x74, 0x6f, 0x6e, 0x31, 0x10, 0x30,
  0x0e, 0x06, 0x03, 0x55, 0x04, 0x07, 0x13, 0x07, 0x52, 0x65, 0x64, 0x6d, 0x6f,
  0x6e, 0x64, 0x31, 0x1e, 0x30, 0x1c, 0x06, 0x03, 0x55, 0x04, 0x0a, 0x13, 0x15,
  0x4d, 0x69, 0x63, 0x72, 0x6f, 0x73, 0x6f, 0x66, 0x74, 0x20, 0x43, 0x6f, 0x72,
  0x70, 0x6f, 0x72, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x31, 0x2b, 0x30, 0x29, 0x06,
  0x03, 0x55, 0x04, 0x03, 0x13, 0x22, 0x4d, 0x69, 0x63, 0x72, 0x6f, 0x73, 0x6f,
  0x66, 0x74, 0x20, 0x43, 0x6f, 0x72, 0x70, 0x6f, 0x72, 0x61, 0x74, 0x69, 0x6f,
  0x6e, 0x20, 0x55, 0x45, 0x46, 0x49, 0x20, 0x43, 0x41, 0x20, 0x32, 0x30, 0x31,
  0x31, 0x30, 0x82, 0x01, 0x22, 0x30, 0x0d, 0x06, 0x09, 0x2a, 0x86, 0x48, 0x86,
  0xf7, 0x0d, 0x01, 0x01, 0x01, 0x05, 0x00, 0x03, 0x82, 0x01, 0x0f, 0x00, 0x30,
  0x82, 0x01, 0x0a, 0x02, 0x82, 0x01, 0x01, 0x00, 0xa5, 0x08, 0x6c, 0x4c, 0xc7,
  0x45, 0x09, 0x6a, 0x4b, 0x0c, 0xa4, 0xc0, 0x87, 0x7f, 0x06, 0x75, 0x0c, 0x43,
  0x01, 0x54, 0x64, 0xe0, 0x16, 0x7f, 0x07, 0xed, 0x92, 0x7d, 0x0b, 0xb2, 0x73,
  0xbf, 0x0c, 0x0a, 0xc6, 0x4a, 0x45, 0x61, 0xa0, 0xc5, 0x16, 0x2d, 0x96, 0xd3,
  0xf5, 0x2b, 0xa0, 0xfb, 0x4d, 0x49, 0x9b, 0x41, 0x80, 0x90, 0x3c, 0xb9, 0x54,
  0xfd, 0xe6, 0xbc, 0xd1, 0x9d, 0xc4, 0xa4, 0x18, 0x8a, 0x7f, 0x41, 0x8a, 0x5c,
  0x59, 0x83, 0x68, 0x32, 0xbb, 0x8c, 0x47, 0xc9, 0xee, 0x71, 0xbc, 0x21, 0x4f,
  0x9a, 0x8a, 0x7c, 0xff, 0x44, 0x3f, 0x8d, 0x8f, 0x32, 0xb2, 0x26, 0x48, 0xae,
  0x75, 0xb5, 0xee, 0xc9, 0x4c, 0x1e, 0x4a, 0x19, 0x7e, 0xe4, 0x82, 0x9a, 0x1d,
  0x78, 0x77, 0x4d, 0x0c, 0xb0, 0xbd, 0xf6, 0x0f, 0xd3, 0x16, 0xd3, 0xbc, 0xfa,
  0x2b, 0xa5, 0x51, 0x38, 0x5d, 0xf5, 0xfb, 0xba, 0xdb, 0x78, 0x02, 0xdb, 0xff,
  0xec, 0x0a, 0x1b, 0x96, 0xd5, 0x83, 0xb8, 0x19, 0x13, 0xe9, 0xb6, 0xc0, 0x7b,
  0x40, 0x7b, 0xe1, 0x1f, 0x28, 0x27, 0xc9, 0xfa, 0xef, 0x56, 0x5e, 0x1c, 0xe6,
  0x7e, 0x94, 0x7e, 0xc0, 0xf0, 0x44, 0xb2, 0x79, 0x39, 0xe5, 0xda, 0xb2, 0x62,
  0x8b, 0x4d, 0xbf, 0x38, 0x70, 0xe2, 0x68, 0x24, 0x14, 0xc9, 0x33, 0xa4, 0x08,
  0x37, 0xd5, 0x58, 0x69, 0x5e, 0xd3, 0x7c, 0xed, 0xc1, 0x04, 0x53, 0x08, 0xe7,
  0x4e, 0xb0, 0x2a, 0x87, 0x63, 0x08, 0x61, 0x6f, 0x63, 0x15, 0x59, 0xea, 0xb2,
  0x2b, 0x79, 0xd7, 0x0c, 0x61, 0x67, 0x8a, 0x5b, 0xfd, 0x5e, 0xad, 0x87, 0x7f,
  0xba, 0x86, 0x67, 0x4f, 0x71, 0x58, 0x12, 0x22, 0x04, 0x22, 0x22, 0xce, 0x8b,
  0xef, 0x54, 0x71, 0x00, 0xce, 0x50, 0x35, 0x58, 0x76, 0x95, 0x08, 0xee, 0x6a,
  0xb1, 0xa2, 0x01, 0xd5, 0x02, 0x03, 0x01, 0x00, 0x01, 0xa3, 0x82, 0x01, 0x76,
  0x30, 0x82, 0x01, 0x72, 0x30, 0x12, 0x06, 0x09, 0x2b, 0x06, 0x01, 0x04, 0x01,
  0x82, 0x37, 0x15, 0x01, 0x04, 0x05, 0x02, 0x03, 0x01, 0x00, 0x01, 0x30, 0x23,
  0x06, 0x09, 0x2b, 0x06, 0x01, 0x04, 0x01, 0x82, 0x37, 0x15, 0x02, 0x04, 0x16,
  0x04, 0x14, 0xf8, 0xc1, 0x6b, 0xb7, 0x7f, 0x77, 0x53, 0x4a, 0xf3, 0x25, 0x37,
  0x1d, 0x4e, 0xa1, 0x26, 0x7b, 0x0f, 0x20, 0x70, 0x80, 0x30, 0x1d, 0x06, 0x03,
  0x55, 0x1d, 0x0e, 0x04, 0x16, 0x04, 0x14, 0x13, 0xad, 0xbf, 0x43, 0x09, 0xbd,
  0x82, 0x70, 0x9c, 0x8c, 0xd5, 0x4f, 0x31, 0x6e, 0xd5, 0x22, 0x98, 0x8a, 0x1b,
  0xd4, 0x30, 0x19, 0x06, 0x09, 0x2b, 0x06, 0x01, 0x04, 0x01, 0x82, 0x37, 0x14,
  0x02, 0x04, 0x0c, 0x1e, 0x0a, 0x00, 0x53, 0x00, 0x75, 0x00, 0x62, 0x00, 0x43,
  0x00, 0x41, 0x30, 0x0b, 0x06, 0x03, 0x55, 0x1d, 0x0f, 0x04, 0x04, 0x03, 0x02,
  0x01, 0x86, 0x30, 0x0f, 0x06, 0x03, 0x55, 0x1d, 0x13, 0x01, 0x01, 0xff, 0x04,
  0x05, 0x30, 0x03, 0x01, 0x01, 0xff, 0x30, 0x1f, 0x06, 0x03, 0x55, 0x1d, 0x23,
  0x04, 0x18, 0x30, 0x16, 0x80, 0x14, 0x45, 0x66, 0x52, 0x43, 0xe1, 0x7e, 0x58,
  0x11, 0xbf, 0xd6, 0x4e, 0x9e, 0x23, 0x55, 0x08, 0x3b, 0x3a, 0x22, 0x6a, 0xa8,
  0x30, 0x5c, 0x06, 0x03, 0x55, 0x1d, 0x1f, 0x04, 0x55, 0x30, 0x53, 0x30, 0x51,
  0xa0, 0x4f, 0xa0, 0x4d, 0x86, 0x4b, 0x68, 0x74, 0x74, 0x70, 0x3a, 0x2f, 0x2f,
  0x63, 0x72, 0x6c, 0x2e, 0x6d, 0x69, 0x63, 0x72, 0x6f, 0x73, 0x6f, 0x66, 0x74,
  0x2e, 0x63, 0x6f, 0x6d, 0x2f, 0x70, 0x6b, 0x69, 0x2f, 0x63, 0x72, 0x6c, 0x2f,
  0x70, 0x72, 0x6f, 0x64, 0x75, 0x63, 0x74, 0x73, 0x2f, 0x4d, 0x69, 0x63, 0x43,
  0x6f, 0x72, 0x54, 0x68, 0x69, 0x50, 0x61, 0x72, 0x4d, 0x61, 0x72, 0x52, 0x6f,
  0x6f, 0x5f, 0x32, 0x30, 0x31, 0x30, 0x2d, 0x31, 0x30, 0x2d, 0x30, 0x35, 0x2e,
  0x63, 0x72, 0x6c, 0x30, 0x60, 0x06, 0x08, 0x2b, 0x06, 0x01, 0x05, 0x05, 0x07,
  0x01, 0x01, 0x04, 0x54, 0x30, 0x52, 0x30, 0x50, 0x06, 0x08, 0x2b, 0x06, 0x01,
  0x05, 0x05, 0x07, 0x30, 0x02, 0x86, 0x44, 0x68, 0x74, 0x74, 0x70, 0x3a, 0x2f,
  0x2f, 0x77, 0x77, 0x77, 0x2e, 0x6d, 0x69, 0x63, 0x72, 0x6f, 0x73, 0x6f, 0x66,
  0x74, 0x2e, 0x63, 0x6f, 0x6d, 0x2f, 0x70, 0x6b, 0x69, 0x2f, 0x63, 0x65, 0x72,
  0x74, 0x73, 0x2f, 0x4d, 0x69, 0x63, 0x43, 0x6f, 0x72, 0x54, 0x68, 0x69, 0x50,
  0x61, 0x72, 0x4d, 0x61, 0x72, 0x52, 0x6f, 0x6f, 0x5f, 0x32, 0x30, 0x31, 0x30,
  0x2d, 0x31, 0x30, 0x2d, 0x30, 0x35, 0x2e, 0x63, 0x72, 0x74, 0x30, 0x0d, 0x06,
  0x09, 0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d, 0x01, 0x01, 0x0b, 0x05, 0x00, 0x03,
  0x82, 0x02, 0x01, 0x00, 0x35, 0x08, 0x42, 0xff, 0x30, 0xcc, 0xce, 0xf7, 0x76,
  0x0c, 0xad, 0x10, 0x68, 0x58, 0x35, 0x29, 0x46, 0x32, 0x76, 0x27, 0x7c, 0xef,
  0x12, 0x41, 0x27, 0x42, 0x1b, 0x4a, 0xaa, 0x6d, 0x81, 0x38, 0x48, 0x59, 0x13,
  0x55, 0xf3, 0xe9, 0x58, 0x34, 0xa6, 0x16, 0x0b, 0x82, 0xaa, 0x5d, 0xad, 0x82,
  0xda, 0x80, 0x83, 0x41, 0x06, 0x8f, 0xb4, 0x1d, 0xf2, 0x03, 0xb9, 0xf3, 0x1a,
  0x5d, 0x1b, 0xf1, 0x50, 0x90, 0xf9, 0xb3, 0x55, 0x84, 0x42, 0x28, 0x1c, 0x20,
  0xbd, 0xb2, 0xae, 0x51, 0x14, 0xc5, 0xc0, 0xac, 0x97, 0x95, 0x21, 0x1c, 0x90,
  0xdb, 0x0f, 0xfc, 0x77, 0x9e, 0x95, 0x73, 0x91, 0x88, 0xca, 0xbd, 0xbd, 0x52,
  0xb9, 0x05, 0x50, 0x0d, 0xdf, 0x57, 0x9e, 0xa0, 0x61, 0xed, 0x0d, 0xe5, 0x6d,
  0x25, 0xd9, 0x40, 0x0f, 0x17, 0x40, 0xc8, 0xce, 0xa3, 0x4a, 0xc2, 0x4d, 0xaf,
  0x9a, 0x12, 0x1d, 0x08, 0x54, 0x8f, 0xbd, 0xc7, 0xbc, 0xb9, 0x2b, 0x3d, 0x49,
  0x2b, 0x1f, 0x32, 0xfc, 0x6a, 0x21, 0x69, 0x4f, 0x9b, 0xc8, 0x7e, 0x42, 0x34,
  0xfc, 0x36, 0x06, 0x17, 0x8b, 0x8f, 0x20, 0x40, 0xc0, 0xb3, 0x9a, 0x25, 0x75,
  0x27, 0xcd, 0xc9, 0x03, 0xa3, 0xf6, 0x5d, 0xd1, 0xe7, 0x36, 0x54, 0x7a, 0xb9,
  0x50, 0xb5, 0xd3, 0x12, 0xd1, 0x07, 0xbf, 0xbb, 0x74, 0xdf, 0xdc, 0x1e, 0x8f,
  0x80, 0xd5, 0xed, 0x18, 0xf4, 0x2f, 0x14, 0x16, 0x6b, 0x2f, 0xde, 0x66, 0x8c,
  0xb0, 0x23, 0xe5, 0xc7, 0x84, 0xd8, 0xed, 0xea, 0xc1, 0x33, 0x82, 0xad, 0x56,
  0x4b, 0x18, 0x2d, 0xf1, 0x68, 0x95, 0x07, 0xcd, 0xcf, 0xf0, 0x72, 0xf0, 0xae,
  0xbb, 0xdd, 0x86, 0x85, 0x98, 0x2c, 0x21, 0x4c, 0x33, 0x2b, 0xf0, 0x0f, 0x4a,
  0xf0, 0x68, 0x87, 0xb5, 0x92, 0x55, 0x32, 0x75, 0xa1, 0x6a, 0x82, 0x6a, 0x3c,
  0xa3, 0x25, 0x11, 0xa4, 0xed, 0xad, 0xd7, 0x04, 0xae, 0xcb, 0xd8, 0x40, 0x59,
  0xa0, 0x84, 0xd1, 0x95, 0x4c, 0x62, 0x91, 0x22, 0x1a, 0x74, 0x1d, 0x8c, 0x3d,
  0x47, 0x0e, 0x44, 0xa6, 0xe4, 0xb0, 0x9b, 0x34, 0x35, 0xb1, 0xfa, 0xb6, 0x53,
  0xa8, 0x2c, 0x81, 0xec, 0xa4, 0x05, 0x71, 0xc8, 0x9d, 0xb8, 0xba, 0xe8, 0x1b,
  0x44, 0x66, 0xe4, 0x47, 0x54, 0x0e, 0x8e, 0x56, 0x7f, 0xb3, 0x9f, 0x16, 0x98,
  0xb2, 0x86, 0xd0, 0x68, 0x3e, 0x90, 0x23, 0xb5, 0x2f, 0x5e, 0x8f, 0x50, 0x85,
  0x8d, 0xc6, 0x8d, 0x82, 0x5f, 0x41, 0xa1, 0xf4, 0x2e, 0x0d, 0xe0, 0x99, 0xd2,
  0x6c, 0x75, 0xe4, 0xb6, 0x69, 0xb5, 0x21, 0x86, 0xfa, 0x07, 0xd1, 0xf6, 0xe2,
  0x4d, 0xd1, 0xda, 0xad, 0x2c, 0x77, 0x53, 0x1e, 0x25, 0x32, 0x37, 0xc7, 0x6c,
  0x52, 0x72, 0x95, 0x86, 0xb0, 0xf1, 0x35, 0x61, 0x6a, 0x19, 0xf5, 0xb2, 0x3b,
  0x81, 0x50, 0x56, 0xa6, 0x32, 0x2d, 0xfe, 0xa2, 0x89, 0xf9, 0x42, 0x86, 0x27,
  0x18, 0x55, 0xa1, 0x82, 0xca, 0x5a, 0x9b, 0xf8, 0x30, 0x98, 0x54, 0x14, 0xa6,
  0x47, 0x96, 0x25, 0x2f, 0xc8, 0x26, 0xe4, 0x41, 0x94, 0x1a, 0x5c, 0x02, 0x3f,
  0xe5, 0x96, 0xe3, 0x85, 0x5b, 0x3c, 0x3e, 0x3f, 0xbb, 0x47, 0x16, 0x72, 0x55,
  0xe2, 0x25, 0x22, 0xb1, 0xd9, 0x7b, 0xe7, 0x03, 0x06, 0x2a, 0xa3, 0xf7, 0x1e,
  0x90, 0x46, 0xc3, 0x00, 0x0d, 0xd6, 0x19, 0x89, 0xe3, 0x0e, 0x35, 0x27, 0x62,
  0x03, 0x71, 0x15, 0xa6, 0xef, 0xd0, 0x27, 0xa0, 0xa0, 0x59, 0x37, 0x60, 0xf8,
  0x38, 0x94, 0xb8, 0xe0, 0x78, 0x70, 0xf8, 0xba, 0x4c, 0x86, 0x87, 0x94, 0xf6,
  0xe0, 0xae, 0x02, 0x45, 0xee, 0x65, 0xc2, 0xb6, 0xa3, 0x7e, 0x69, 0x16, 0x75,
  0x07, 0x92, 0x9b, 0xf5, 0xa6, 0xbc, 0x59, 0x83, 0x58
};

CONST UINTN mSizeOfMicrosoftUefiCa = sizeof mMicrosoftUefiCa;


//
// The Microsoft.UefiSecureBootLogo.Tests.OutOfBoxConfirmDBXisPresent test case
// of the Secure Boot Logo Test in the Microsoft Hardware Certification Kit
// expects that the "dbx" variable exist.
//
// The article at <https://technet.microsoft.com/en-us/library/dn747883.aspx>
// writes (excerpt):
//
//    Windows 8.1 Secure Boot Key Creation and Management Guidance
//    1. Secure Boot, Windows 8.1 and Key Management
//    1.4 Signature Databases (Db and Dbx)
//    1.4.3 Forbidden Signature Database (dbx)
//
//    The contents of EFI_IMAGE_SIGNATURE_DATABASE1 dbx must be checked when
//    verifying images before checking db and any matches must prevent the
//    image from executing. The database may contain multiple certificates,
//    keys, and hashes in order to identify forbidden images. The Windows
//    Hardware Certification Requirements state that a dbx must be present, so
//    any dummy value, such as the SHA-256 hash of 0, may be used as a safe
//    placeholder until such time as Microsoft begins delivering dbx updates.
//
// The byte array below captures the SHA256 checksum of the empty file,
// blacklisting it for loading & execution. This qualifies as a dummy, since
// the empty file is not a valid UEFI binary anyway.
//
// Technically speaking, we could also capture an official (although soon to be
// obsolete) dbx update from <http://www.uefi.org/revocationlistfile>. However,
// the terms and conditions on distributing that binary aren't exactly light
// reading, so let's best steer clear of it, and follow the "dummy entry"
// practice recommended -- in natural English langauge -- in the
// above-referenced TechNet article.
//
CONST UINT8 mSha256OfDevNull[] = {
  0xe3, 0xb0, 0xc4, 0x42, 0x98, 0xfc, 0x1c, 0x14, 0x9a, 0xfb, 0xf4, 0xc8, 0x99,
  0x6f, 0xb9, 0x24, 0x27, 0xae, 0x41, 0xe4, 0x64, 0x9b, 0x93, 0x4c, 0xa4, 0x95,
  0x99, 0x1b, 0x78, 0x52, 0xb8, 0x55
};

CONST UINTN mSizeOfSha256OfDevNull = sizeof mSha256OfDevNull;


//
// The following test cases of the Secure Boot Logo Test in the Microsoft
// Hardware Certification Kit:
//
// - Microsoft.UefiSecureBootLogo.Tests.OutOfBoxVerifyMicrosoftKEKpresent
// - Microsoft.UefiSecureBootLogo.Tests.OutOfBoxConfirmMicrosoftSignatureInDB
//
// expect the EFI_SIGNATURE_DATA.SignatureOwner GUID to be
// 77FA9ABD-0359-4D32-BD60-28F4E78F784B, when the
// EFI_SIGNATURE_DATA.SignatureData field carries any of the following X509
// certificates:
//
// - "Microsoft Corporation KEK CA 2011" (in KEK)
// - "Microsoft Windows Production PCA 2011" (in db)
// - "Microsoft Corporation UEFI CA 2011" (in db)
//
// This is despite the fact that the UEFI specification requires
// EFI_SIGNATURE_DATA.SignatureOwner to reflect the agent (i.e., OS,
// application or driver) that enrolled and therefore owns
// EFI_SIGNATURE_DATA.SignatureData, and not the organization that issued
// EFI_SIGNATURE_DATA.SignatureData.
//
CONST EFI_GUID mMicrosoftOwnerGuid = {
  0x77fa9abd, 0x0359, 0x4d32,
  { 0xbd, 0x60, 0x28, 0xf4, 0xe7, 0x8f, 0x78, 0x4b },
};
