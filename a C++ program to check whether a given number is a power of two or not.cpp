#include <iostream >
#include <cmath>
using namespace std;
string power_two(int n){
	for(int x=0;x<INT_MAX;x++){
		if(pow(2,x)==n){
			cout<<"true";
		}
		else if(pow(2,x)>n){
			break;
		}
		else{
			cout<<"false";
		}
	}
}
int main(){
	cout << "Is 8 is power of 2: " << power_two(8) << endl;
	cout << "Is 256 is power of 2: " << power_two(256) << endl;
	cout << "Is 124 is power of 2: " << power_two(124) << endl;
	return 0;
}
