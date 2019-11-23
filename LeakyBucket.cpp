#include<iostream>
#include<unistd.h>
#include<stdlib.h>
using namespace std;
#define bucketSize 512
void bktInput(int a,int b)
{
	if(a>bucketSize)
		cout<<"\n\t\t Bucket Overflow";
	else
	{
		usleep(500);
		while(a>b)
		{
			cout<<"\n\t\t"<<b<<"bytes outputted";
			a = a-b;
			usleep(500);
		}
		if(a>0)
			cout<<"\n\t\t Last"<<a<<"Bytes sent \t";
			cout<<"\n\t\t Bucket output successful";
	}
}
int main()
{
	int op,pktsize;
	
	cout<<"enter output rate :";
	cin>>op;
	for(int i=1;i<=5;i++)
	{
		usleep(rand()%(1000));
		pktsize = rand()%(1000);
		cout<<"\n Packet no "<<i<<"\t Packet size = "<<pktsize;
		bktInput(pktsize,op);
	}
return 0;
}
