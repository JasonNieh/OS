#include "stdio.h"
#include "sys/types.h"
#include "unistd.h"
#include "stdlib.h"

#define HASPRO -10
int main()
{
 pid_t p1,p2,p3,p4;
 int cnt=0;
 while ((p1=fork())==-1);
 if(!p1)
 {
   while ((p2=fork())==-1);
   if(!p2)
   {
     while((p3=fork())==-1);
     if(!p3)
    {
      while(1)
       { printf("Node p3 is p2's child with pid %d, its parent pid %d\n",getpid(),getppid());
          sleep(1);
        }
    }
     else 
    { 
      while((p4=fork())==-1);
        if(!p4)
        { 
         while(1)
          { printf("Node p4 is p2's child with pid %d, its parent pid %d\n",getpid(),getppid());
           sleep(1);
          }
         }
        else
        {
          ;
        }
}
      while(1)
      {
        printf("Node p2 is parent with pid %d,its parent pid is %d\n",getpid(),getppid());
        sleep(1);
       }
      }
    else
    { ; }
     while(1)
      { printf("Node p1 is parent with pid %d,its parent pid is %d\n",getpid(),getppid());
         sleep(1);
     }
}
    else{  ; }
return 0;
}
   
