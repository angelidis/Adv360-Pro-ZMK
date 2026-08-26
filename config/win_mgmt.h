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

#define DESK_LEFT           LC(LG(LEFT))
#define DESK_RIGHT          LC(LG(RIGHT))

#define NEW_DESKTOP         LC(LG(D))
#define CLOSE_DESKTOP       LC(LG(F4))


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
 * Ctrl + Alt + Shift + F13..F21
 * ───────────────────────────────────────────── */

#define NEXT_MONITOR        LC(LA(LS(F13)))

#define GOTO_DESK_1         LC(LA(LS(F14)))
#define GOTO_DESK_2         LC(LA(LS(F15)))
#define GOTO_DESK_3         LC(LA(LS(F16)))

#define WIN_75              LC(LA(LS(F17)))
#define WIN_95              LC(LA(LS(F18)))
#define CENTER_WINDOW       LC(LA(LS(F19)))

#define MOVE_DESK_LEFT      LC(LA(LS(F20)))
#define MOVE_DESK_RIGHT     LC(LA(LS(F21)))
