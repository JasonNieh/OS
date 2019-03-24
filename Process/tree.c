#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main (int argc, char const *argv[])
{ 
 int p1,p2,p3,p4,p5;
 while((p1=fork())==-1);
 if(!p1)
 {
    while((p2=fork())==-1);
    if(!p2)
    {
        while((p4=fork())==-1);
        if(!p4)
        { 
          while(1)
          {
           printf("Node p4 with pid %d, its father pid %d\n",getpid(),getppid());sleep(1);}
           exit(0);
          }
        while((p5=fork())==-1);
        if(!p5)
        {
          while(1)
          {
           printf("Node p5 with pid %d, its father pid %d\n",getpid(),getppid());sleep(1);}
           exit(0);}
         for(int i=0;i<5;i++)
          { 
           printf("Node p2 with pid %d, its father pid %d\n",getpid(),getppid());sleep(1);}
          exit(0);
}
while((p3=fork())==-1);
if(!p3)
{
     while(1)
    {
      printf("Node p3 with pid %d, its father pid %d\n", getpid(),getppid());sleep(1);}
       
     exit(0);
}
      while(1)
      {printf("Node p1 with pid %d, its father pid %d\n",getpid(),getppid());sleep(1);}
}
return 0;
 }
     
           
