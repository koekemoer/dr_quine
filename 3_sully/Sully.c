/* SULLY - Polyglot Quine 
 When executed the program writes in a file named Sully_X.c. The X will be an
 interger given in the source. Once the file is created, the program compiles this file
 and then runs the new program (which will have the name of its source file). */
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
int i = 5;
int main()
{
if (i < 0) {return 0;}
char comp[1024];
char *s = "#include <stdio.h>%c#include <stdlib.h>%c#include <fcntl.h>%cint i = %d;%cint main()%c{%cif (i < 0) {return 0;}%cchar comp[1024];%cchar *s = %c%s%c;%csprintf(comp,%cSully_%cd.c%c,i);%cint fd = open(comp, O_WRONLY | O_CREAT | O_APPEND, S_IRUSR | S_IWUSR);%csprintf(comp,%cgcc -Wall -Werror -Wextra Sully_%cd.c -o Sully_%cd%c,i,i);%ci--;%cdprintf(fd,s,10,10,10,i,10,10,10,10,10,34,s,34,10,34,37,34,10,10,34,37,37,34,10,10,10,10,10,10);%csystem(comp);%creturn 0;%c}%c";
sprintf(comp,"Sully_%d.c",i);
int fd = open(comp, O_WRONLY | O_CREAT | O_APPEND, S_IRUSR | S_IWUSR);
sprintf(comp,"gcc -Wall -Werror -Wextra Sully_%d.c -o Sully_%d",i,i);
i--;
dprintf(fd,s,10,10,10,i,10,10,10,10,10,34,s,34,10,34,37,34,10,10,34,37,37,34,10,10,10,10,10,10);
system(comp);
return 0;
}
// 37 = %