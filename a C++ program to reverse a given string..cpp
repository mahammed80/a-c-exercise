#include <iostream>
#include <string>
using namespace std;
string reverse(string s){
	string temp=s;
	int pos=0;
	for(int i=s.length()-1;i>=0;i--){
	    s[pos]=temp[i];
		pos++;
	}
	return s;
}
int main(){
     cout << "Original string: w3resource"; 
	cout << "\nReverse string: " << reverse("w3resource");
	cout << "\n\nOriginal string: Python"; 
	cout << "\nReverse string: " << reverse("Python");
	return 0;	
}
