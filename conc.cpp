#include<iostream>
#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>

using namespace std;

int main()
{
    pid_t pid;
    int i = 1;
    for(;;)
    {
       	pid = fork();
		if(pid<0)
		    cout<<"\nMax concurrent processes:"<<i<<endl;
	
		if(pid==0)
		    i++;
		else;
		{
		    wait(0);
		    exit(0);
		}
	}
    return 0;
}
