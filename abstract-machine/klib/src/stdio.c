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
	char format[65];	//后续可能需要调大
	int cnt = 0;
	int format_cnt = 0;
	bool in_format = false;
	char *s;

	va_start(ap, fmt);
	while(*fmt != '\0')
	{
		if (*fmt == '%' || in_format == true)
		{
			fmt++;
			in_format = true;
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
					if (format != NULL && strlen(buf) < format[1]) {
						// for (int k=0; k < (format[1]-'0')-strlen(buf); k++) {

						// 	putch(format[0]);
						// }
						putch(format[0]);
						putch(format[1]);
					}
					for (int i = 0; i < strlen(buf); i++)
					{
						putch(*(buf+i));
					}
					cnt += strlen(buf);
					in_format = false;
					break;
				}
				case 's':
				{
					s = va_arg(ap, char *);
					for (int j = 0; j < strlen(s); j++)
					{
						putch(*(s+j));
					}
					cnt += strlen(s);
					in_format = false;
					break;
				}
				default: {
					format[format_cnt] = *fmt;
					format_cnt++;
					break;
				}
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
