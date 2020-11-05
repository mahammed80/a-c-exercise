#include <iostream>
using namespace std;
int test(string st1,string st2){
	int ctr=0;
	for(int i=0;i<st1.length()-1;i++){
		string fst= st1.substr(i,2);
		for(int j=0;j<st2.length()-1;j++){
			string sst=st2.substr(j,2);
			if(fst==sst){
			  	ctr++;
			}
		}
	}
	return ctr;
}
int main(){
   cout<<test("abcdefgh","abijsklm")<<endl;
   cout<<test("abcde","osuefrcd")<<endl;
}
