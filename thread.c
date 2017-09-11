#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

void* helloWorld(void* arg)
{
	int i=(int)arg;
	printf("Hello World, sou a thread %d\n", i);
	printf("SOu o trabalho mais facil da faculdade\n");
	return NULL;
}

int main()
{
	pthread_t thread1,thread2;
	int i=1,d=2;
	pthread_create(&thread1,NULL,helloWorld,(void*)&i);
	pthread_create(&thread2,NULL,helloWorld,(void*)&d);
	pthread_join(thread1,NULL);
	pthread_join(thread2,NULL);
	return 0;
}
