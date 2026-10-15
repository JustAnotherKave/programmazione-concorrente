#include <iostream>
#include <unistd.h>
using namespace std;

int main(){
	int forkid;
	
	cout<<"1) prima della fork:"<<endl;
	forkid=fork();
	if(forkid==0){
		cout<<"2)sono il figlio"<<endl;
		cout<<"3)termina il figlio"<<endl;
		exit(1);	
	}	
	else{
		cout<<"2)sono il padre"<<endl;
		cout<<"3)fine padre"<<endl;
		exit(2);	
	}
	



}