#include <stdio.h>

#define FT(x) int main() {FILE *fp = fopen("Grace_kid.c", "w"); char *s = "%c/*da_comment*/%c#include <stdio.h>%c#define FT(x) int main() {FILE *fp = fopen(%cGrace_kid.c%c, %cw%c);printf(s, 10, 10, 10, 34, 34);fclose(fp);}";printf(s, 10, 10, 10, 34, 34, 34, 34);fclose(fp);}
FT()

/*
	NO MAIN
	3 DEFINES
	1 COMMENT
*/

//printf(s, 10, 10, 10);
