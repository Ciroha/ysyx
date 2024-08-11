#include <am.h>
#include <nemu.h>

#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  kbd->keydown = 0;
  kbd->keycode = AM_KEY_NONE;
  // if (kbd->keydown == true)
  //   kbd->keycode = kbd->keycode | KEYDOWN_MASK;
  // else
  //   kbd->keycode = AM_KEY_NONE;
}
