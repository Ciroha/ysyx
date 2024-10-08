#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int inttohex(unsigned int n, char *buf) {
	int i;
	if (n < 16) {
		if (n <= 9) {
			buf[0] = n + '0';
		} else {
			buf[0] = n - 10 + 'a';
		}
		buf[1] = '\0';
		return 0;
	}
	inttohex(n/16, buf);
	for (i = 0; buf[i] != '\0'; i++); //找到末尾的位置
	if ((n % 16) <= 9) {
		buf[i] = (n % 16) + '0';
	} else {
		buf[i] = (n % 16) - 10 + 'a';
	}
	// buf[i] = (n % 16) + '0';
	buf[i+1] = '\0';
	return 0;
}

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
	char c;
	int x;
	int long_flag = 0;

	va_start(ap, fmt);
	while(*fmt != '\0')
	{
		if (*fmt == '%' || in_format == true)
		{
			in_format = true;
			if (*fmt == '%') {
				memset(format, '\0', sizeof(format));
				format_cnt = 0;
				fmt++;
			}
			switch (*fmt)
			{
				case 'd':
				{
					assert(long_flag <= 2);
					if (long_flag == 2) {
						n = va_arg(ap, int64_t);
					} else {
						n = va_arg(ap, int32_t);
					}
					if (n < 0)
					{
						putch('-');
						cnt++;
						n = -n;
					}
					itoa(n, buf);
					if (format != NULL && (strlen(buf) < format[1])) {	//TODO 需要后续修改
						for (int k=0; k < (format[1]-'0')-strlen(buf); k++) {
							putch(format[0]);
						}
						// putch(format[0]);
						// putch(format[1]);
					}
					for (int i = 0; i < strlen(buf); i++)
					{
						putch(*(buf+i));
					}
					cnt += strlen(buf);
					in_format = false;
					long_flag = 0;
					break;
				}
				case 'u':
				{
					assert(long_flag <= 2);
					if (long_flag == 2) {
						n = va_arg(ap, uint64_t);
					} else {
						n = va_arg(ap, uint32_t);
					}
					itoa(n, buf);
					if (format != NULL && (strlen(buf) < format[1])) {	//TODO 需要后续修改
						for (int k=0; k < (format[1]-'0')-strlen(buf); k++) {
							putch(format[0]);
						}
					}
					for (int i = 0; i < strlen(buf); i++)
					{
						putch(*(buf+i));
					}
					cnt += strlen(buf);
					in_format = false;
					long_flag = 0;
					break;
				}
				case 'c':
				{
					c = va_arg(ap, int);
					putch(c);
					cnt ++;
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
				case 'x':
				{
					x = va_arg(ap, int);
					char x_buf[65];
					inttohex(x, x_buf);
					for (int i = 0; i < strlen(x_buf); i++) {
						putch(*(x_buf+i));
					}
					cnt += strlen(x_buf);
					in_format = false;
					break;
				}
				case 'l':
				{
					long_flag += 1;
					break;
				}
				default: {
					// assert(!((*fmt <= '9') && (*fmt >= '0')));
					if((*fmt <= '9') && (*fmt >= '0')) {
						format[format_cnt] = *fmt;
					// putch(format[0]);
					// putch('\n');
					// putch(format[1]);
					// putch('\n');
						format_cnt++;
						break;
					}else{
						putch('\n');
						putch(*fmt);
						putch('\n');
						assert(0);
					}
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
