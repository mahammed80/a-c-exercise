#include<iostream>
using namespace std;
unsigned int swap(int n){
	int mask=0xAAAAAAAAA;
	unsigned int odd=(n&mask);
	unsigned int even=n&(mask>>1);
	return (odd>>1)|(even <<1);
}
int main(){
	int T; 
	cout<<"Enter total number of elements (test cases): ";	
	cin>>T;
	

	unsigned int N;   

	for(int i=0;i<T;i++)
	{
		cout<<"Enter number: ";	
		cin>>N;
		cout<<"Original number is : "<<N<<endl;
		cout<<"Converted number is :"<<swap(N)<<endl;
	}
	
	return 0;

}
