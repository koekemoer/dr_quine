#include <stdio.h>

#define A(a) void func1(){}
#define B(b) void func2(){}
#define FT(x) int main() {FILE *fp = fopen("Grace_kid.c", "w"); char *s = "%c/*da_comment*/%c#include <stdio.h>%c#define A(a) void func1(){}%c#define B(b) void func2(){}%c#define FT(x)%cint main() {%cchar* s = %c%s%c;%cFILE *fp = fopen(%cGrace_kid.c%c, %cw%c);%cfprintf(fp, s, 10, 10, 10, 10, 10, 10, 10, 34, s, 34, 10, 34, 34, 34, 34,10, 10, 10, 10);%cfclose(fp);%c}%c";fprintf(fp, s, 10, 10, 10, 10, 10, 10, 10, 34, s, 34, 10, 34, 34, 34, 34, 10, 10, 10, 10);fclose(fp);}
FT()
