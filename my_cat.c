
#include <sys/types.h>
#include <errno.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/*int my_cat(char *file)
{
 
	char buf[30000];
	int bs;
	char bq;
	size_t nbytes;
	ssize_t bytes_read;
	nbytes = sizeof(buf);
	//bytes_read = read(bs, buf, nbytes);
	int rd;

	if (file != NULL)
    {
      bs = open(file, O_RDONLY, 755);
      if (!bs)
        {
          write(2, "erreur", 7);
          exit (1);
        }
      while ((rd = read(bs, &bq, nbytes)))
        write(1, &bq, rd);
    }
  else
    while (read(0, &bq, 1))
      write(1, &bq, 1);
  
  return (0);
}*/



int main(int argc, char **argv)
{
	int fun, nuf;
for (int i=1;i<argc;i++){
fun =open (argv[i], O_RDONLY);
while (read(fun,&nuf, 1)==1){
    write(STDOUT_FILENO, &nuf,1 );
}
close(fun);
}
}