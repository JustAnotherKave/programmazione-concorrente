#include <iostream>
#include <unistd.h>
using namespace std;

int main(){
	int x=5;
	int forkid;
	
	cout<<"1) prima della fork:"<<endl;
	cout<<x<<endl;
	forkid=fork();
	if(forkid==0){
		cout<<"X nel figlio:"<<x<<endl;
		cout<<"X+1:"<<endl;
		x++;
		cout<<x<<endl;
		cout<<"2)sono il figlio"<<endl;
		cout<<"3)termina il figlio"<<endl;
		cout<<"Il pid del figlio è:"<<getpid()<<endl;
		exit(1);	
	}	
	else{	
		cout<<"X nel padre:"<<x<<endl;
		cout<<"X-1"<<endl;
		x--;
		cout<<x<<endl;
		cout<<"2)sono il padre"<<endl;
		cout<<"3)fine padre"<<endl;
		cout<<"il pid del padre è:"<<getpid()<<endl;
		exit(2);	
	}
	



}
