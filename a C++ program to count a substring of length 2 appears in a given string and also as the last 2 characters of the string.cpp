#include <iostream>
using namespace std;
int test(string str){
	string last_two = str.substr(str.length()-2);
	int ctr=0;
	for(int i=0;i<str.length()-2;i++){
		if(str.substr(i,2) == (last_two)){
			ctr++;
		}
		
	}
	return ctr;
}
int main(){
	cout<<test("abcdsabababab")<<endl;
	cout<<test("abcabdabab")<<endl;
	cout<<test("aasdefeaassaaddaa")<<endl;
	return 0;
}
