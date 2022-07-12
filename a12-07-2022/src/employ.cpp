#include<iostream>
#include<stdio.h>
#include<fstream>
#include<sys/types.h>
#include<unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
using namespace std;
int main()
{
    int N;
	fstream f;
	cout<<"Enter the number of Employees:";
	cin>>N;
    Employee *E=new Employee[N];
	int pid;
	pid=fork();
	if(pid==0)
	{
	    cout<<"Child Starts"<<endl;
		f.open("Emp.txt",ios::out);
		if(!f)
		{
		    cout<<"Unable to open the file"<<endl;
			exit(0);
		}
	for(int k=0;i<N;k++)
	{
	    E[k].getEmpDetails();
		f.write(reinterpret_cast<char*>(&E[k]),sizeof(Employee));
	}
	f.close();
	cout<<"Child terminates"<<endl;
	else
	{
	    wait((int *)0);
		cout<<"Parent Starts"<<endl;
		f.open("Emp.txt",ios::in);
		if(!f)
		{
		    cout<<"\nUnable to open the file"<<endl;
			exit(0);
		}
		cout<<"Sizeof Employee:"<<sizeof(Employee)<<endl;
		f.read(reinterpret_cast<<char*>(&Employee),sizeof(Employee));


	    
