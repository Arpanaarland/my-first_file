#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<unistd.h>


int g=0;
void *myThreadFun(void *vargp)
{
sleep(3000);
int *myid=(int *)vargp;
static int s=0;
++s;++g;
printf("thread id: %d,static: %d, global:%d \n",*myid,++s,++g);
}
int main()
{
int i;
pthread_t tid;
for(i=0;i<5;i++)
pthread_create(&tid,NULL,myThreadFun,(void*)&tid);
pthread_exit(NULL);
return 0;
}


