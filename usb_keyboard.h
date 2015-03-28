#ifndef usb_serial_h__
#define usb_serial_h__

#include <stdint.h>

void usb_init(void);            // initialize everything
uint8_t usb_configured(void);       // is the USB port configured

int8_t usb_keyboard_press(uint8_t key, uint8_t modifier);
int8_t usb_keyboard_send(void);
extern uint8_t keyboard_modifier_keys;
extern uint8_t keyboard_keys[6];
extern volatile uint8_t keyboard_leds;

// This file does not include the HID debug functions, so these empty
// macros replace them with nothing, so users can compile code that
// has calls to these functions.
#define usb_debug_putchar(c)
#define usb_debug_flush_output()


#define ___NO_OP___     0x01
#define UNUSED_KEY_SHIFT    0x02
#define UNUSED_KEY_ALT      0x04
#define UNUSED_KEY_GUI      0x08
#define KEY_COMMAND  0x08
#define KEY_WINDOWS  0x08
#define KEY_LEFT_CTRL   0x01
#define KEY_LEFT_SHIFT  0x02
#define KEY_LEFT_ALT    0x04
#define KEY_LEFT_GUI    0x08
#define KEY_RIGHT_CTRL  0x10
#define KEY_RIGHT_SHIFT 0x20
#define KEY_RIGHT_ALT   0x40
#define KEY_RIGHT_GUI   0x80

#define _____A_____                      4
#define _____B_____                      5
#define _____C_____                      6
#define _____D_____                      7
#define _____E_____                      8
#define _____F_____                      9
#define _____G_____                     10
#define _____H_____                     11
#define _____I_____                     12
#define _____J_____                     13
#define _____K_____                     14
#define _____L_____                     15
#define _____M_____                     16
#define _____N_____                     17
#define _____O_____                     18
#define _____P_____                     19
#define _____Q_____                     20
#define _____R_____                     21
#define _____S_____                     22
#define _____T_____                     23
#define _____U_____                     24
#define _____V_____                     25
#define _____W_____                     26
#define _____X_____                     27
#define _____Y_____                     28
#define _____Z_____                     29
#define _____1_____                     30
#define _____2_____                     31
#define _____3_____                     32
#define _____4_____                     33
#define _____5_____                     34
#define _____6_____                     35
#define __6__                     35
#define _____7_____                     36
#define _____8_____                     37
#define _____9_____                     38
#define __9__                     38
#define _____0_____                     39
#define __0__                     39
#define ___ENTER___                     40
#define ____ESC____                     41
#define ___BKSP____                     42
#define ____TAB____                     43
#define _TAB_                           43
#define ___SPACE___                     44
#define ___MINUS___                     45
#define _MIN_                     45
#define ___EQUAL___                     46
#define _EQL_                            46
#define _L_SQ_BRKT_                     47
#define _LSB_                     47
#define _R_SQ_BRKT_                     48
#define _RSB_                     48
#define _BACKSLASH_                     49
#define _BKS_                     49
#define KEY_NUMBER                      50
#define _SEMICOLON_                     51
#define ___QUOTE___                     52
#define _QOT_                     52
#define ___TILDE___                     53
#define _TLD_                         53
#define ___COMMA___                     54
#define __PERIOD___                     55
#define ___SLASH___                     56
#define KEY_CAPS_LOCK                   57
#define ____F1_____                     58
#define ____F2_____                     59
#define ____F3_____                     60
#define ____F4_____                     61
#define ____F5_____                     62
#define ____F6_____                     63
#define ____F7_____                     64
#define ____F8_____                     65
#define ____F9_____                     66
#define ____F10____                     67
#define ____F11____                     68
#define ____F12____                     69
#define KEY_PRINTSCREEN                 70
#define KEY_SCROLL_LOCK                 71
#define KEY_PAUSE                       72
#define __INSERT___                     73
#define ___HOME____                     74
#define ___PG_UP___                     75
#define __DELETE___                     76
#define ____END____                     77
#define __PG_DOWN__                     78
#define ___RIGHT___                     79
#define ___LEFT____                     80
#define ___DOWN____                     81
#define ____UP_____                     82
#define KEY_NUM_LOCK                    83
#define KEYPAD_SLASH                    84
#define KEYPAD_ASTERIX                  85
#define KEYPAD_MINUS                    86
#define KEYPAD_PLUS                     87
#define KEYPAD_ENTER                    88
#define KEYPAD_1                        89
#define KEYPAD_2                        90
#define KEYPAD_3                        91
#define KEYPAD_4                        92
#define KEYPAD_5                        93
#define KEYPAD_6                        94
#define KEYPAD_7                        95
#define KEYPAD_8                        96
#define KEYPAD_9                        97
#define KEYPAD_0                        98
#define KEYPAD_PERIOD                   99
#define KEYBOARD_NON_US_SLASH_PIPE     100
#define KEYBOARD_APPLICATION           101
#define KEYBOARD_POWER                 102
#define KEYPAD_EQUAL                   103
#define KEYBOARD_F13                   104
#define KEYBOARD_F14                   105
#define KEYBOARD_F15                   106
#define KEYBOARD_F16                   107
#define KEYBOARD_F17                   108
#define KEYBOARD_F18                   109
#define KEYBOARD_F19                   110
#define KEYBOARD_F20                   111
#define KEYBOARD_F21                   112
#define KEYBOARD_F22                   113
#define KEYBOARD_F23                   114
#define KEYBOARD_F24                   115
#define KEYBOARD_EXECUTE               116
#define KEYBOARD_HELP                  117
#define KEYBOARD_MENU                  118
#define KEYBOARD_SELECT                119
#define KEYBOARD_STOP                  120
#define KEYBOARD_AGAIN                 121
#define KEYBOARD_UNDO                  122
#define KEYBOARD_CUT                   123
#define KEYBOARD_COPY                  124
#define KEYBOARD_PASTE                 125
#define KEYBOARD_FIND                  126
#define KEYBOARD_MUTE                  127
#define KEYBOARD_VOLUME_UP             128
#define KEYBOARD_VOLUME_DOWN           129
#define KEYBOARD_LOCKING_CAPS_LOCK     130
#define KEYBOARD_LOCKING_NUM_LOCK      131
#define KEYBOARD_LOCKING_SCROLL_LOCK   132
#define KEYPAD_COMMA                   133
#define KEYPAD_EQUAL_SIGN              134
#define KEYBOARD_INTERNATIONAL1        135
#define KEYBOARD_INTERNATIONAL2        136
#define KEYBOARD_INTERNATIONAL3        137
#define KEYBOARD_INTERNATIONAL4        138
#define KEYBOARD_INTERNATIONAL5        139
#define KEYBOARD_INTERNATIONAL6        140
#define KEYBOARD_INTERNATIONAL7        141
#define KEYBOARD_INTERNATIONAL8        142
#define KEYBOARD_INTERNATIONAL9        143
#define KEYBOARD_LANG1ONAL9            144
#define KEYBOARD_LANG2                 145
#define KEYBOARD_LANG3                 146
#define KEYBOARD_LANG4                 147
#define KEYBOARD_LANG5                 148
#define KEYBOARD_LANG6                 149
#define KEYBOARD_LANG7                 150
#define KEYBOARD_LANG8                 151
#define KEYBOARD_LANG9                 152
#define KEYBOARD_ALTERNATE_ERASE       153
#define KEYBOARD_SYSREQ_ATTENTION      154
#define KEYBOARD_CANCEL                155
#define KEYBOARD_CLEAR                 156
#define KEYBOARD_PRIOR                 157
#define KEYBOARD_RETURN                158
#define KEYBOARD_SEPARATOR             159
#define KEYBOARD_OUT                   160
#define KEYBOARD_OPER                  161
#define KEYBOARD_CLEAR_AGAIN           162
#define KEYBOARD_CRSEL_PROPS           163
#define KEYBOARD_EXSEL                 164

#define KEYPAD_00                      176
#define KEYPAD_000                     177
#define THOUSANDS_SEPARATOR            178
#define DECIMAL_SEPARATOR              179
#define CURRENCY_UNIT                  180
#define CURRENCY_SUBUNIT               181
#define KEYPAD_LEFT_PAREN              182
#define KEYPAD_RIGHT_PAREN             183
#define KEYPAD_LEFT_BRACE              184
#define KEYPAD_RIGHT_BRACE             185
#define KEYPAD_TAB                     186
#define KEYPAD_BACKSPACE               187
#define KEYPAD_A                       188
#define KEYPAD_B                       189
#define KEYPAD_C                       190
#define KEYPAD_D                       191
#define KEYPAD_E                       192
#define KEYPAD_F                       193
#define KEYPAD_XOR                     194
#define KEYPAD_CARET                   195
#define KEYPAD_PERCENT                 196
#define KEYPAD_LESS_THAN               197
#define KEYPAD_GREATER_THAN            198
#define KEYPAD_AMPERSAND               199
#define KEYPAD_DOUBLE_AMPERSAND        200
#define KEYPAD_PIPE                    201
#define KEYPAD_DOUBLE_PIPE             202
#define KEYPAD_COLON                   203
#define KEYPAD_POUND                   204
#define KEYPAD_SPACE                   205
#define KEYPAD_AT                      206
#define KEYPAD_BANG                    207
#define KEYPAD_MEM_STORE               208
#define KEYPAD_MEM_RECALL              209
#define KEYPAD_MEM_CLEAR               210
#define KEYPAD_MEM_ADD                 211
#define KEYPAD_MEM_SUBTRACT            212
#define KEYPAD_MEM_MULTIPLY            213
#define KEYPAD_MEM_DIVIDE              214
#define KEYPAD_PLUS_MINUS              215
#define KEYPAD_CLEAR                   216
#define KEYPAD_CLEAR_ENTRY             217
#define KEYPAD_BINARY                  218
#define KEYPAD_OCTAL                   219
#define KEYPAD_DECIMAL                 220
#define KEYPAD_HEXADECIMAL             221

#define M__CTRL___M                    224
#define M__SHIFT__M                    225
#define M___ALT___M                    226
#define M___CMD___M                    227
#define KEYBOARD_RIGHT_CTRL            228
#define KEYBOARD_RIGHT_SHIFT           229
#define KEYBOARD_RIGHT_ALT             230
#define KEYBOARD_RIGHT_GUI             231

#define USB_MIN_MODIFIER KEYBOARD_LEFT_CTRL
#define USB_MAX_MODIFIER KEYBOARD_RIGHT_GUI

#define USB_MAX_KEY KEYBOARD_RIGHT_GUI

// Everything below this point is only intended for usb_serial.c
#ifdef USB_SERIAL_PRIVATE_INCLUDE
#include <avr/io.h>
#include <avr/pgmspace.h>
#include <avr/interrupt.h>

#define EP_TYPE_CONTROL         0x00
#define EP_TYPE_BULK_IN         0x81
#define EP_TYPE_BULK_OUT        0x80
#define EP_TYPE_INTERRUPT_IN        0xC1
#define EP_TYPE_INTERRUPT_OUT       0xC0
#define EP_TYPE_ISOCHRONOUS_IN      0x41
#define EP_TYPE_ISOCHRONOUS_OUT     0x40

#define EP_SINGLE_BUFFER        0x02
#define EP_DOUBLE_BUFFER        0x06

#define EP_SIZE(s)  ((s) == 64 ? 0x30 :         \
                     ((s) == 32 ? 0x20 :        \
                      ((s) == 16 ? 0x10 :       \
                       0x00)))

#define MAX_ENDPOINT        4

#define LSB(n) (n & 255)
#define MSB(n) ((n >> 8) & 255)

#if defined(__AVR_AT90USB162__)
#define HW_CONFIG()
#define PLL_CONFIG() (PLLCSR = ((1<<PLLE)|(1<<PLLP0)))
#define USB_CONFIG() (USBCON = (1<<USBE))
#define USB_FREEZE() (USBCON = ((1<<USBE)|(1<<FRZCLK)))
#elif defined(__AVR_ATmega32U4__)
#define HW_CONFIG() (UHWCON = 0x01)
#define PLL_CONFIG() (PLLCSR = 0x12)
#define USB_CONFIG() (USBCON = ((1<<USBE)|(1<<OTGPADE)))
#define USB_FREEZE() (USBCON = ((1<<USBE)|(1<<FRZCLK)))
#elif defined(__AVR_AT90USB646__)
#define HW_CONFIG() (UHWCON = 0x81)
#define PLL_CONFIG() (PLLCSR = 0x1A)
#define USB_CONFIG() (USBCON = ((1<<USBE)|(1<<OTGPADE)))
#define USB_FREEZE() (USBCON = ((1<<USBE)|(1<<FRZCLK)))
#elif defined(__AVR_AT90USB1286__)
#define HW_CONFIG() (UHWCON = 0x81)
#define PLL_CONFIG() (PLLCSR = 0x16)
#define USB_CONFIG() (USBCON = ((1<<USBE)|(1<<OTGPADE)))
#define USB_FREEZE() (USBCON = ((1<<USBE)|(1<<FRZCLK)))
#endif

// standard control endpoint request types
#define GET_STATUS          0
#define CLEAR_FEATURE           1
#define SET_FEATURE         3
#define SET_ADDRESS         5
#define GET_DESCRIPTOR          6
#define GET_CONFIGURATION       8
#define SET_CONFIGURATION       9
#define GET_INTERFACE           10
#define SET_INTERFACE           11
// HID (human interface device)
#define HID_GET_REPORT          1
#define HID_GET_IDLE            2
#define HID_GET_PROTOCOL        3
#define HID_SET_REPORT          9
#define HID_SET_IDLE            10
#define HID_SET_PROTOCOL        11
// CDC (communication class device)
#define CDC_SET_LINE_CODING     0x20
#define CDC_GET_LINE_CODING     0x21
#define CDC_SET_CONTROL_LINE_STATE  0x22
#endif
#endif
