#include <iostream>
using namespace std;
string test(string st1,string st2){
	return st1+st2+st2+st1;
	
}
int main(){
	cout<<test("hi","hello")<<endl;
	cout<<test("whats","app")<<endl;
}
