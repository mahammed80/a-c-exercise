#include <iostream>
using namespace std;
int test(int num[],int arr_length){
	int flag=0;
	for(int i=0;i<arr_length;i++){
		if((num[i]==5&&(num[i+1]==5)||(num[i+1]==6))){
			flag++;
		}
	}
	return flag;
}
int main(){
	int arr_length;
	int num[]={5,5,3,4,3,5,6,5,5};
	arr_length=sizeof(num)/sizeof(num[0]);
	cout<<test(num,arr_length)<<endl;
}
