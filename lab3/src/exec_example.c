#include <stdio.h>

int main()
{
	int pid=fork();
	if (pid==0)
	{
		execlp("/home/runner/oslab2019/lab3/src/sequential_min_max",
		"sequential_min_max","3","300",NULL);
		printf("Error");
		return 1;
	}
	
	wait(NULL);
	return 0;
}