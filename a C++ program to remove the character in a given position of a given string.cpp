#include <iostream>
using namespace std;
string test(string str,int n){
	return str.erase(n,1);
	
}
int main(){
	cout<<test("Python",1)<<endl;
	cout<<test("nfnn",3)<<endl;
	cout<<test("nvnnn",2)<<endl;
}
