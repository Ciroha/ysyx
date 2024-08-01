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
    int n;
    char buf[65];
    int cnt = 0;
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
                        putch('-');
                        cnt++;
                        n = -n;
                    }
                    itoa(n, buf);
                    for (int i = 0; i < strlen(buf); i++)
                    {
                        putch(*(buf+i));
                    }
                    cnt += strlen(buf);
                    break;
                }
                case 's':
                {
                    s = va_arg(ap, char *);
                    putch(*s);
                    cnt += strlen(s);
                    break;
                }
                default:
                break;
            }
        }
        else
        {
            putch(*fmt);
            cnt++;
        }
        fmt++;
    }
    va_end(ap);

    return cnt;
    // panic("Not implemented");
}

int vsprintf(char *out, const char *fmt, va_list ap) {
    // panic("Not implemented");
    int n,j;
    char buf[65];
    char *s;

    while(*fmt != '\0') {
        if (*fmt == '%') {
            fmt++;
            switch (*fmt) {
                case 'd': {
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
                case 's': {
                    s = va_arg(ap, char *);
                    memcpy(out, s, strlen(s));
                    out += strlen(s);
                    break;
                }
                default:
                break;
            }
        }
        else {
            *out = *fmt;
            out++;
        }
        fmt++;
    }
    *out = '\0';
    // va_end(ap);
    j = strlen(out);
    return j;
}

int sprintf(char *out, const char *fmt, ...) {
    va_list ap;
    va_start(ap, fmt);
    vsprintf(out, fmt, ap);
    va_end(ap);
    int j = strlen(out);
    return j;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
