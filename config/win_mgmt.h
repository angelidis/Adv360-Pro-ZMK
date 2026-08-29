#pragma once

/*
 * Windows Management
 *
 * Plain Windows shortcuts are emitted directly.
 * More advanced actions emit Ctrl+Alt+Shift+F13..F21
 * and are handled by AutoHotkey.
 */


/* ─────────────────────────────────────────────
 * Virtual desktops
 * ───────────────────────────────────────────── */

#define GOTO_DESK_LEFT      LC(LG(LEFT))
#define GOTO_DESK_RIGHT     LC(LG(RIGHT))

#define NEW_DESKTOP         LC(LG(D))
#define CLOSE_DESKTOP       LC(LG(F4))

// with 2 screens i don't need these yet.
#define MOVEW_MONITOR_LEFT  LG(LS(LEFT))
#define MOVEW_MONITOR_RIGHT LG(LS(RIGHT))

#define MOVEW_NEXT_MONITOR  MOVEW_MONITOR_LEFT

/* ─────────────────────────────────────────────
 * Window positioning
 * ───────────────────────────────────────────── */

#define SNAP_LEFT           LG(LEFT)
#define SNAP_RIGHT          LG(RIGHT)

#define MAXIMIZE_WINDOW     LG(UP)
#define MIN_RESTORE_WINDOW  LG(DOWN)


/* ─────────────────────────────────────────────
 * Windows overview
 * ───────────────────────────────────────────── */

#define TASK_VIEW           LG(TAB)


/* ─────────────────────────────────────────────
 * AutoHotkey signals
 *
 * Ctrl + Alt + Shift + F13..F24
 * ───────────────────────────────────────────── */

#define GOTO_DESK_1         LC(LA(LS(F13)))
#define GOTO_DESK_2         LC(LA(LS(F14)))
#define GOTO_DESK_3         LC(LA(LS(F15)))

#define WIN_75              LC(LA(LS(F16)))
#define WIN_95              LC(LA(LS(F17)))
#define CENTER_WINDOW       LC(LA(LS(F18)))

#define MOVEW_DESK_LEFT     LC(LA(LS(F19)))  // DESK_REL_PREV
#define MOVEW_DESK_RIGHT    LC(LA(LS(F20)))  // DESK_REL_NEXT

#define MOVEW_DESK_1        LC(LA(LS(F21)))
#define MOVEW_DESK_2        LC(LA(LS(F22)))
#define MOVEW_DESK_3        LC(LA(LS(F23)))
#define MOVEW_DESK_4        LC(LA(LS(F24)))


/* ─────────────────────────────────────────────
 * AutoHotkey signals
 *
 * Ctrl + Alt + F13..F21
 * ───────────────────────────────────────────── */

#define WIN_95_PDF           LC(LA(F13))

#define TOG_WIN_PIN          LC(LA(F14))
#define TOG_APP_PIN          LC(LA(F15))

#define STACK_WINDOWS        LC(LA(F16))
