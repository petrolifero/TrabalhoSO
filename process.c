#include <stdio.h>
#include <unistd.h>

int main()
{
	pid_t pid;
	pid=fork();
	if(!pid)
	{
		printf("Processo filho\n");
	}
	else
	{
		sleep(2);
		printf("Processo pai : o pid do meu filho é %d\n", pid);
	}
	return 0;
}
