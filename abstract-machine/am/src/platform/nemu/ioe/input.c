#include <am.h>
#include <nemu.h>

#define KEYDOWN_MASK 0x00008000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  kbd->keycode = inl(KBD_ADDR);
  if (kbd->keycode == AM_KEY_NONE || ~(kbd->keycode & KEYDOWN_MASK)) {
    kbd->keydown = false;
  } else {
    kbd->keydown = true;
    kbd->keycode = kbd->keycode & ~KEYDOWN_MASK;
  }
}
