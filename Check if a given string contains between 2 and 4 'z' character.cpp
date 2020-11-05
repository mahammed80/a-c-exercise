#include <iostream>
using namespace std;
bool test(string str){
	int ctr =0;
	for(int i=0;i<str.length();i++){
		if(str[i]=='z'){
			ctr++;
			
		}
	}
	return ctr>1&&ctr<4;
}
int main(){
	cout<<test("frizz")<<endl;
	cout<<test("zane")<<endl;
	cout<<test("false")<<endl;
	return 0;
}
