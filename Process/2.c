#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{   
   pid_t fpid;
   printf("fork! pid number %d\n",getpid());
   fpid=fork();
   
      if(fpid<0)
        {printf("error fork!\n");}
      else if (fpid==0)
        {
          printf("child process id %d",getpid());
          int res=execl("/usr/bin/vi","vi",NULL);
          if(res==-1)
            {perror("execl");}
          else {}
          while(1);
        }
      else{while(1);}

       return 0;
}
       
