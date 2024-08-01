#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int itoa(unsigned int n, char *buf)
{
  int i;
  if (n < 10)
  {
    buf[0] = n + '0';
    buf[1] = '\0';
    return 0;
  }
  itoa(n/10, buf);
  for (i = 0; buf[i] != '\0'; i++); //找到末尾的位置
  buf[i] = (n % 10) + '0';
  buf[i+1] = '\0';
  return 0;
}

int printf(const char *fmt, ...) {
  va_list ap;
  int n,j;
  char buf[65];
  char buf_out1[65];
  char *buf_out = buf_out1;
  char *s;

  va_start(ap, fmt);
  while(*fmt != '\0')
  {
    if (*fmt == '%')
    {
      fmt++;
      switch (*fmt)
      {
        case 'd':
        {
          n = va_arg(ap, int);
          if (n < 0)
          {
            *buf_out = '-';
            buf_out++;
            n = -n;
          }
          itoa(n, buf);
          memcpy(buf_out, buf, strlen(buf));
          buf_out += strlen(buf);
          break;
        }
        case 's':
        {
          s = va_arg(ap, char *);
          memcpy(buf_out, s, strlen(s));
          buf_out += strlen(s);
          break;
        }
        default:
          break;
      }
    }
    else
    {
      *buf_out = *fmt;
      buf_out++;
    }
    fmt++;
  }
  *buf_out = '\0';
  va_end(ap);
  j = strlen(buf_out);
  while (*buf_out != '\0') {
    putch(*buf_out);
    buf_out++;
  }
  return j;
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}

int sprintf(char *out, const char *fmt, ...) {
  va_list ap;
  int n,j;
  char buf[65];
  char *s;

  va_start(ap, fmt);
  while(*fmt != '\0')
  {
    if (*fmt == '%')
    {
      fmt++;
      switch (*fmt)
      {
        case 'd':
        {
          n = va_arg(ap, int);
          if (n < 0)
          {
            *out = '-';
            out++;
            n = -n;
          }
          itoa(n, buf);
          memcpy(out, buf, strlen(buf));
          out += strlen(buf);
          break;
        }
        case 's':
        {
          s = va_arg(ap, char *);
          memcpy(out, s, strlen(s));
          out += strlen(s);
          break;
        }
        default:
          break;
      }
    }
    else
    {
      *out = *fmt;
      out++;
    }
    fmt++;
  }
  *out = '\0';
  va_end(ap);
  j = strlen(out);
  return j;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
