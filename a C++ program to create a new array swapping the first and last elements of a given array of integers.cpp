#include <iostream>
using namespace std;
int test(int num[],int arr_length){
	int first=num[0];
	num[0]=num[arr_length-1];
	num[arr_length-1]=first;
	for(int i=0;i<arr_length;i++){
		cout<<num[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int arr_length=0;
	int num[]={1, 5, 7, 9, 11, 13 };
	arr_length=sizeof(num)/sizeof(num[0]);
	cout<<test(num,arr_length)<<endl;
}
