#include<test1.h>

using namespace std;
	   
int main(int argc,char**argv)
{
    int N;
    N=fork();
    if(N%2!=0)
    {
	    for(int i=0;i<5;i++)
		    cout<<"Odd numbers:"<<endl;
            cout<<"i="<<i<<endl;
	        exit(0);
    }
        else
        {
            if(N%2==0){
	        sleep(10); //For context switching
	        for(int j=0;j<5;j++)
                cout<<"Even numbers:"<<endl;
		        cout<<"j="<<j<<endl;
	           }
	    }
        waitpid(0);
	    return 0;
}
