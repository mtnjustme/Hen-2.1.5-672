#ifndef __OFFSETS_H__
#define __OFFSETS_H__
#pragma once

// 6.72
#define	XFAST_SYSCALL_addr              0x00001C0

// Names - Data
#define PRISON0_addr                    0x113E518
#define ROOTVNODE_addr                  0x2300320
#define PMAP_STORE_addr                 0x1BB7880
#define DT_HASH_SEGMENT_addr            0x0D09FB0

// Functions
#define pmap_protect_addr               0x050F50
#define pmap_protect_p_addr             0x050F9C

// Patches
// debug menu error
#define debug_menu_error_patch1         0x0504A94
#define debug_menu_error_patch2         0x0504C77
#define debug_menu_error_patch3         0x0507A01
#define debug_menu_error_patch4         0x0507B09
#define debug_menu_error_patch5         0x0507BB8
#define debug_menu_error_patch6         0x0507ECF
#define debug_menu_error_patch7         0x0508D5C
#define debug_menu_error_patch8         0x0510423
#define debug_menu_error_patch9         0x05108E3
#define debug_menu_error_patch10        0x0510BFA
#define debug_menu_error_patch11        0x05115E1
#define debug_menu_error_patch12        0x0511B4D
#define debug_menu_error_patch13        0x0512002
#define debug_menu_error_patch14        0x0512191
#define debug_menu_error_patch15        0x05140A8
#define debug_menu_error_patch16        0x0514293
#define debug_menu_error_patch17        0x0515E71
#define debug_menu_error_patch18        0x0515EE7
#define debug_menu_error_patch19        0x0515F71
#define debug_menu_error_patch20        0x0515F8D
#define debug_menu_error_patch21        0x051F123

// disable signature check
#define disable_signature_check_patch   0x06A8EB0

// enable debug RIFs
#define enable_debug_rifs_patch1        0x066AEB0
#define enable_debug_rifs_patch2        0x066AEE0

// allow sys_dynlib_dlsym in all processes
#define sys_dynlib_dlsym_patch          0x01D895A

// sdk version spoof - enable all VR fws
#define sdk_version_patch               0x044C79B
#define sdk_version_patch1              0x044D719
#define sdk_version_patch2              0x044D7BA
#define sdk_version_patch3              0x0666158
#define sdk_version_patch4              0x06A9DB2
#define sdk_version_patch5              0x077A5B4
#define sdk_version_patch6              0x078315D
#define sdk_version_patch7              0x1A84248
#define sdk_version_patch8              0x22C0718
#define sdk_version_patch9              0x2926C81

#define sdk_version_patch10              0x096B3EC
#define sdk_version_patch11              0x0987153
#define sdk_version_patch12              0x09C577C
#define sdk_version_patch13              0x09ECD0C
#define sdk_version_patch14              0x0A6122B
#define sdk_version_patch15              0x0A74D97
#define sdk_version_patch16              0x0A845F3
#define sdk_version_patch17              0x16D67E1
#define sdk_version_patch18              0x2258825

// enable debug log
#define enable_debug_log_patch          0x0123367

// enable uart output
#define enable_uart_patch               0x1A6EB18

#endif