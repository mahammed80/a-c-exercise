#include <iostream>
using namespace std;
string test(string sy,string word){
	return sy.substr(0,2)+word+sy.substr(2,4);
}
int main(){
	cout<<test("$$$$","word")<<endl;
	cout<<test("(())","dsdsff")<<endl;
}
