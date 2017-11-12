#include <stdio.h>
#include <fcntl.h>
/* 2_Grace */
#define A(x) char *s1 = "#include <stdio.h>%c#include <fcntl.h>%c/* 2_Grace */%c#define A(x) char *s1 = %c%s%c;%c#define B(y) int fd = open(%cGrace_kid.c%c, O_WRONLY | O_CREAT | O_APPEND, S_IRUSR | S_IWUSR);%c#define C(z) int main() {A() B() dprintf(fd,s1,10,10,10,34,s1,34,10,34,34,10,10,10);}%cC()%c";
#define B(y) int fd = open("Grace_kid.c", O_WRONLY | O_CREAT | O_APPEND, S_IRUSR | S_IWUSR);
#define C(z) int main() {A() B() dprintf(fd,s1,10,10,10,34,s1,34,10,34,34,10,10,10);}
C()
