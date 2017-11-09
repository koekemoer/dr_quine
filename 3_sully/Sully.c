/* SULLY */
#include <stdio.h>
#define Q 34
#define N 10
#define S 39

int main()
{
	FILE *fp;
	char name[10] = {'S','u','l','l','y','_','X','.','c','\0'};
	char *s1 = "/* SULLY */%c#include <stdio.h>%c#define Q 34%c#define N 10%c#define S 39%c%c";
	char *s2 = "int main(){%cFILE *fp;%cchar name[10] = {%cS%c,%cu%c,%cl%c,%cl%c,%cy%c,%c_%c,%cX%c,%c.%c,%cc%c}%c";
	char i = 5;
	while (i > 0){
		name[6] = i + '0';
		fp = fopen(name, "w");
		fprintf(fp,s1,N,N,N,N,N,N);
		fprintf(fp,s2,N,N,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,N);
		i--;
		fclose(fp);
	}
	return 0;
}


/*int	main() {
	FILE *fp;
	char i = 5;
	char *s = "#include <stdio.h>%c%cint main() {FILE *fp = fopen(%cSully_%d%c, %cw%c);}%c";
	while (i > 0){
		char tmp[] = 'S','u','l','l','y','_',i+'0','.','c';
		fp = fopen(tmp, "w");
		fprintf(fp, s, 10, 10, 34, 34, 34, 34, 10);
		i--;
		fclose(fp);
	}
	return 0;
}*/
