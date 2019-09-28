#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(int argc,char *argv[])
{
sleep(3000);
if(argc!=2) {
fprintf(stderr,"incorrect no. of arg.Pl pass integer\n");
return 1;
}

pid_t cpid;
int n= atoi(argv[1]);
int i;
for(i=1;i<=n;i++) {
fork();
}

fprintf(stderr,"PID=%ld,PPID=%ld\n",(long)getpid(),(long)getppid());
while(1);
return 0;
}

