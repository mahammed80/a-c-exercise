#include <iostream>
using namespace std;
int test(int n,int m){
	if((n>m)||(m>n)){
		cout<<n<<endl;
	}else if(n!=m){
		if((n%7==0)&&(m%7==0)){
			if(n>m){
				cout<<m<<endl;
			}else{
				cout<<n<<endl;
			}
		}
	}else{
		return 0;
	}
}
int main(){
	cout<<test(11,21)<<endl;
}
