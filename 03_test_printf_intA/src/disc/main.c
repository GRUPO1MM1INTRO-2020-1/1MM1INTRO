/** src/main.c
 */
#include <header.h>
#define EAX_MAX	255

extern int printf(const char *__restrict __format, ...);

int A;

int
main(int argc,char *argv[])
{
  A=10;
  hola();
  hola2();
  printf("A=%d\n",A);
  return A%EAX_MAX;
}/*end main()*/

