//clear_screen=\E[H\E[J
//cursor_address=\E[%i%p1%d;%p2%dH
//set_a_background=\E[4%p1%dm
//set_a_foreground=\E[3%p1%dm
//cursor_invisible=\E[?25l\E[?1c
//cursor_visible=\E[?25h\E[?8c

#include <stdio.h>

enum colors
{
  BLACK, RED, GREEN, ORANGE, INDIGO, PURPLE, BLUE, GRAY, WHITE
};

int mt_clrscr(void)
{
}

int mt_gotoXY (int, int)
{
}

int mt_getscreensize (int * rows, int * cols)
{
}

int mt_setfgcolor (enum colors)
{
}

int mt_setbgcolor (enum colors)
{
}
