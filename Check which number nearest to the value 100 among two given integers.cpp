#include <iostream>
#include <cstdlib>
using namespace std;
int test(int x,int y){
	const int n=100;

	int v1=abs(x - n);
	int v2=abs(y - n);
	if(v1>v2){
	   cout<<y<<endl;
	}
	else{
		 cout<<x<<endl;
	}
}
int main(){
	cout<<test(80,90)<<endl;
	//cout<<test(50,50)<<endl;
	cout<<test(2,3)<<endl;
}
