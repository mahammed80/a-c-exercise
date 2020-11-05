#include <iostream>
using namespace std;
int rigth_most_zerobit(int n){
	int mask1=n+1;
	int mask2=~(n);
	return (mask1&mask2);
}
int main(){
	int num;
	cout<<"Enter number: ";
	cin>>num;
	cout<<"original number before isolating rightmost 0 bit: "<<num<<endl;

	int new_number= rigth_most_zerobit(num);

	cout<<"new number after isolating rightmost 0 bit: "<<new_number<<endl;

	return 0;
}
