#include <iostream>
using namespace std;
int test(int x,int y,int z){
	int result=max(x,max(y,z));
	return result;
}
int main(){
	cout<<test(2,3,4)<<endl;
	cout<<test(443,2,1)<<endl;
	return 0;
}
