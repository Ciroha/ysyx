#include <am.h>
#include <nemu.h>

#define SYNC_ADDR (VGACTL_ADDR + 4)
#define N 32
#define WIDTH 400
#define HIGH  300

// uint32_t screen, screen_h, screen_w;

void __am_gpu_init() {
  // int i;
  // int w = 400;  // TODO: get the correct width
  // int h = 300;  // TODO: get the correct height
  // uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  // for (i = 0; i < w * h; i ++) fb[i] = i;
  // outl(SYNC_ADDR, 1);
  // screen = inl(VGACTL_ADDR);
  // screen_h = screen & 0xffff;
  // screen_w = screen >> 16;
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  uint32_t screen, screen_h, screen_w;
  screen = inl(VGACTL_ADDR);
  screen_h = screen & 0xffff;
  screen_w = screen >> 16;
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = screen_w, .height = screen_h,
    .vmemsz = 0
  };
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  uint32_t screen, screen_w;
  screen = inl(VGACTL_ADDR);
  screen_w = screen >> 16;
  if (ctl->sync) {
    outl(SYNC_ADDR, 1);
  }
  uint32_t *p = (uint32_t *)ctl->pixels; 
  uint32_t *fb = (uint32_t *)(uintptr_t)(FB_ADDR + (ctl->y*screen_w + ctl->x) * sizeof(uint32_t));
  for(int i = 0;i < ctl->h;i++){
    for(int j = 0;j < ctl->w;j++)
      fb[j] = *p++;
    fb += WIDTH;
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
