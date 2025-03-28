#include <stdio.h>

#include <unistd.h>

int a = 1;

void main() {
	fork();
	printf("%d: 1.sleeping....\n", getpid());
	sleep(5);	
	fork();
	printf("%d: 2.sleeping....\n", getpid());
	sleep(5);
	fork();
	printf("%d: ----all sleeping done!...----\n", getpid());
	printf("Hello World, from: %d \n", getpid());
	fflush(stdout);
}
