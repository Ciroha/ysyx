#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  panic("Not implemented");
}

char *strcpy(char *dst, const char *src) {  //const用于保护源字符串不被修改
  if (dst == NULL || src == NULL)
    return NULL;
  if (dst == src)
    return dst;
  char *tmp = dst;
  while ((*dst++ = *src++) != '\0');  //结合方向为从右到左，所以先计算++
  return tmp;  
}

char *strncpy(char *dst, const char *src, size_t n) { //该函数不会加终止符
  if (dst == NULL || src == NULL)
    return NULL;
  if (dst == src)
    return dst;
  char *tmp = dst;
  while (n--) {
    if ((*dst++ = *src++) == '\0')
      break;
  }
  while (n--) {
    *dst++ = '\0';
  }
  return tmp;  
}

char *strcat(char *dst, const char *src) {
  char *tmp = dst;
  while (*dst != '\0') {
    dst++;
  } //寻找dst的终止符
  while ((*dst++ = *src++) != '\0');
  return tmp;
}

int strcmp(const char *s1, const char *s2) {
  const unsigned char *temp1 = (const unsigned char *)s1;  //转换成无符号数，防止最后结果负值字符比正值大
  const unsigned char *temp2 = (const unsigned char *)s2;
  while (*temp1 && (*temp1 == *temp2))
  {
    temp1++;
    temp2++;
  }
  return *temp1 - *temp2;  
}

int strncmp(const char *s1, const char *s2, size_t n) {
  panic("Not implemented");
}

void *memset(void *s, int c, size_t n) {
  unsigned char* p = s;
  while (n--)
    *p++ = (unsigned char)c;
  return s;
}

void *memmove(void *dst, const void *src, size_t n) {
  panic("Not implemented");
}

void *memcpy(void *out, const void *in, size_t n) {
  char *tmp = out;
  const char *tmp2 = in;
  while (n--)
    *tmp++ = *tmp2++;
  return out; 
}

int memcmp(const void *s1, const void *s2, size_t n) {
  const unsigned char *tmp1 = s1;
  const unsigned char *tmp2 = s2;
  if(!n)
    return 0;
  while (--n) { //这里如果使用n--会导致数组的越界访问，即访问到了s1[n]和s2[n]
    if (*tmp1 == *tmp2)
    {
      tmp1++;
      tmp2++;
    }else break;
  }
  return *tmp1-*tmp2; //这里使用--n会导致最后一个tmp不进行比较，直接相减，不过从逻辑上来说是正确的
}

#endif
