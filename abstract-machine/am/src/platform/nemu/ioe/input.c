#include <am.h>
#include <nemu.h>
#include <stdio.h>

#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  uint32_t temp = inl(KBD_ADDR);
  if (temp == AM_KEY_NONE) {
    kbd->keydown = false;
    kbd->keycode = AM_KEY_NONE;
  } else if (temp & KEYDOWN_MASK) {
    kbd->keydown = false;
    kbd->keycode = temp;
  } else {
    kbd->keydown = true;
    kbd->keycode = temp & ~KEYDOWN_MASK;
  }
}
