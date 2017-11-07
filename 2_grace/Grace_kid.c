#include <stdio.h>
/*da_comment*/
#define A(a) void func1(){}
#define B(b) void func2(){}
#define FT(x) int main() {FILE *fp = fopen("Grace_kid.c", "w");char *s = "#include <stdio.h>%c/*da_comment*/%c#define A(a) void func1(){}%c#define B(b) void func2(){}%c#define FT(x) int main() {FILE *fp = fopen(%cGrace_kid.c%c, %cw%c);char *s = %c%s%c;fprintf(fp, s, 10, 10, 10, 10, 34, 34, 34, 34, 34, s, 34, 10, 10);fclose(fp);}%cFT()%c";fprintf(fp, s, 10, 10, 10, 10, 34, 34, 34, 34, 34, s, 34, 10, 10);fclose(fp);}
FT()
