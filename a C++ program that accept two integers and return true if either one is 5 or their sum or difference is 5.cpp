#include <iostream>
#include <cstdlib>
using namespace std;
bool test(int n,int m){
	if((n==5)||(m==5) || (abs(n-m)==5) || (n+m==5)){
		return true;
	}
	else{
		return false;
	}
	
}
int main(){
	cout<<test(5,4)<<endl;
	cout<<test(4,3)<<endl;
	cout<<test(1,4)<<endl;
}
