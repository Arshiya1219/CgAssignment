#include<iostream>
#include<unistd.h>
#include<sys/wait.h>
using namespace std;

int main(int argc,char*argv[])
{
    cout<<"Enter the number of natural numbers"<<argc<<endl;
    cout<<"Here is the list of natural numbers"<<endl;
    for(int i=0;i<=argc;i++)
    {
        cout<<argv[i]<<endl;
    }
    return 0;
}
