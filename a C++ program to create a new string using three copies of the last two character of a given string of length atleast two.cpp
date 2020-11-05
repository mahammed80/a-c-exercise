#include <iostream >
using namespace std;
string test(string s){
	string result= s.substr(s.length()-2,s.length());
	return result+result+result;
}
int main(){
	cout<<test("hollo")<<endl;
	cout<<test("hi")<<endl;
	cout<<test("scjool")<<endl;
}
