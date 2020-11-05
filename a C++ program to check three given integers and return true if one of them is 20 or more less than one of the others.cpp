#include <iostream>
using namespace std;
int test(int n,int m,int a){
	if(((n==20)||(n>20))||((m==20)||(m>20))||((a==20)||(a>20))){
		return true;
	}else{
		return false;
	}
}
int main(){
	cout<<test(11,21,31)<<endl;
}
