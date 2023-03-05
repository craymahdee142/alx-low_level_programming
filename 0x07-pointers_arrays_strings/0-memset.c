  1 #include "main.h"
  2 
  3 /**
  4  * _memset - Entry point
  5  * @s: pointed destination
  6  * @b: constant byte
  7  * @n: bytes
  8  * Return: Always 0 (Success)
  9  */
 10 char *_memset(char *s, char b, unsigned int n)
 11 {
 12         unsigned int i;
 13 
 14         for (i = 0; i < n; i++)
 15                 s[i] = b;
 16         return (s);
 17 }
