/* SULLY - Polyglot Quine 
 When executed the program writes in a file named Sully_X.c. The X will be an
 interger given in the source. Once the file is created, the program compiles this file
 and then runs the new program (which will have the name of its source file). */
#include <stdio.h>
#include <stdlib.h>
#define D 34
#define N 10
#define S 39

int main()
{
	FILE *fp;
	char name[10] = {'S','u','l','l','y','_','X','.','c','\0'};
	char *s1 = "/* SULLY */%c#include <stdio.h>%c#include <stdlib.h>%c#define Q 34%c#define N 10%c#define S 39%c%c";
	char *s2 = "int main()%c{%cFILE *fp;%cchar name[10] = {%cS%c,%cu%c,%cl%c,%cl%c,%cy%c,%c_%c,%cX%c,%c.%c,%cc%c};%c";
	char *s3 = "char *s1 = %c%s%c;%cchar *s2 = %c%s%c;%cchar *s3 = %c%s%c;%cchar *s4 = %c%s%c;%cchar i = 5;%cwhile (i > 0){%cname[6] = i + %c0%c;%cfp = fopen(name, %cw%c);%c";
	char *s4 = "fprintf(fp,s1,N,N,N,N,N,N,N);%cfprintf(fp,s2,N,N,N,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,N);%cfprintf(fp,s3,D,s1,D,N,D,s2,D,N,D,s3,D,N,D,s4,D,N,N,N,S,S,N,D,D,N);%ci--;%cfclose(fp);%c}%creturn 0;%c}%c";
	char i = 5;
	char test[500];
	sprintf(test, "BLABLABALBALBALBABLABLABLBLABLABLABLA\n");
	printf("%s", test);
	while (i > 0){
		name[6] = i + '0';
		fp = fopen(name, "w");
		fprintf(fp,s1,N,N,N,N,N,N,N);
		fprintf(fp,s2,N,N,N,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,N);
		fprintf(fp,s3,D,s1,D,N,D,s2,D,N,D,s3,D,N,D,s4,D,N,N,N,S,S,N,D,D,N);
		fprintf(fp,s4,N,N,N,N,N,N,N);
		fclose(fp);
		i--;
	}
	return 0;
}
