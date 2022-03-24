#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int fork_result;
	printf("Process Type        PID       PPID        Time");
	fork_result = fork();
	fork_result = fork();
	fork_result = fork();
	if (fork_result >= 1) 
	{
	printf("Soy el proceso Padre\n");
	printf("System process %d %d\n", getpid(), getppid());
	wait(NULL);
	printf("Proceso padre finalizado\n");
} else if (fork_result ==0) {
	printf("Soy el Hijo\n");
	printf("System process %d %d\n", getpid(), getppid());
		printf("Proceso hijo finalizado\n");
} else {
	printf("Error al crear el proceso\n");
}
return 0;
}
