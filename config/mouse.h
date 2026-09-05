#pragma once

// they need to be defined before pointing.h
// src: https://zmk.dev/docs/keymaps/behaviors/mouse-emulation
#define ZMK_POINTING_DEFAULT_MOVE_VAL 1100
#define ZMK_POINTING_DEFAULT_SCRL_VAL 10

//defines things such as MOVE_UP, SCRL_UP, LCLK, RCLK, MB4
#include <dt-bindings/zmk/pointing.h>


&mmv {
    acceleration-exponent = <1>;
    time-to-max-speed-ms = <450>;
    delay-ms = <0>;
};

&msc {
    acceleration-exponent = <0>;
    time-to-max-speed-ms = <300>;
    delay-ms = <0>;
};

#define MOUSE_MOVE_SLOW    220
#define MOUSE_SCROLL_FAST  30

#define MOVE_UP_SLOW       MOVE_Y(-MOUSE_MOVE_SLOW)
#define MOVE_DOWN_SLOW     MOVE_Y(MOUSE_MOVE_SLOW)
#define MOVE_LEFT_SLOW     MOVE_X(-MOUSE_MOVE_SLOW)
#define MOVE_RIGHT_SLOW    MOVE_X(MOUSE_MOVE_SLOW)

#define SCROLL_UP_FAST     MOVE_Y(MOUSE_SCROLL_FAST)
#define SCROLL_DOWN_FAST   MOVE_Y(-MOUSE_SCROLL_FAST)
#define SCROLL_LEFT_FAST   MOVE_X(-MOUSE_SCROLL_FAST)
#define SCROLL_RIGHT_FAST  MOVE_X(MOUSE_SCROLL_FAST)