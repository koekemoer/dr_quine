#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
int i = 5;
int main()
{
if (i < 0) {return 0;}
char name[512],exec[64];
char *s = "#include <stdio.h>%c#include <stdlib.h>%c#include <fcntl.h>%cint i = %d;%cint main()%c{%cif (i < 0) {return 0;}%cchar name[512],exec[64];%cchar *s = %c%s%c;%csprintf(name,%cSully_%cd.c%c,i);sprintf(exec,%c./Sully_%cd%c,i);%cint fd = open(name, O_WRONLY | O_CREAT | O_APPEND, S_IRUSR | S_IWUSR);%csprintf(name,%cgcc -Wall -Werror -Wextra Sully_%cd.c -o Sully_%cd%c,i,i);%ci--;%cdprintf(fd,s,10,10,10,i,10,10,10,10,10,34,s,34,10,34,37,34,34,37,34,10,10,34,37,37,34,10,10,10,10,10,10);%csystem(name);system(exec);%creturn 0;%c}%c";
sprintf(name,"Sully_%d.c",i);sprintf(exec,"./Sully_%d",i);
int fd = open(name, O_WRONLY | O_CREAT | O_APPEND, S_IRUSR | S_IWUSR);
sprintf(name,"gcc -Wall -Werror -Wextra Sully_%d.c -o Sully_%d",i,i);
i--;
dprintf(fd,s,10,10,10,i,10,10,10,10,10,34,s,34,10,34,37,34,34,37,34,10,10,34,37,37,34,10,10,10,10,10,10);
system(name);system(exec);
return 0;
}