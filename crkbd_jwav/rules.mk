# Build Options
#   change to "no" to disable the options, or define them in the Makefile in
#   the appropriate keymap folder that will get included automatically
#
BOOTMAGIC_ENABLE = no       # Virtual DIP switch configuration
MOUSEKEY_ENABLE = yes        # Mouse keys
EXTRAKEY_ENABLE = yes        # Audio control and System control

# ADDED TO LOG KEY
# CONSOLE_ENABLE = yes         # Console for debug
CONSOLE_ENABLE = no         # Console for debug

COMMAND_ENABLE = no         # Commands for debug and configuration
NKRO_ENABLE = no            # Nkey Rollover - if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
MIDI_ENABLE = no            # MIDI controls
AUDIO_ENABLE = no           # Audio output on port C6
UNICODE_ENABLE = no         # Unicode
BLUETOOTH_ENABLE = no       # Enable Bluetooth with the Adafruit EZ-Key HID
RGBLIGHT_ENABLE = no       # Enable WS2812 RGB underlight. 
SWAP_HANDS_ENABLE = yes      # Enable one-hand typing
OLED_DRIVER_ENABLE= no     # OLED display
COMBO_ENABLE = yes 
LEADER_ENABLE = yes
# TAP_DANCE_ENABLE = yes
# BOOTLOADER = caterina # set BLUETOOTH to caterina when compiling for the Pro Micro
LTO_ENABLE = yes # Enable Link Time Optimization if the firmware size gets too big

