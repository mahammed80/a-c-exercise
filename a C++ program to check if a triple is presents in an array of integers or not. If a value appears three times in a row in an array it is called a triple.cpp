#include <iostream>
using namespace std;
int test(int num[],int arr_length){
	int flag=0;
	for(int i=0;i<arr_length;i++){
		if(num[i]==num[i+1]&&num[i+1]==num[i+2]){
			flag++;
		}
	}
	return flag;
}
int main(){
	int arr_length;
	int num1[]={1,1,2,2,1};
	arr_length= sizeof(num1)/sizeof(arr_length);
	cout<<test(num1,arr_length)<<endl;
	int num2[]={1,1,2,1,2,3};
	arr_length= sizeof(num2)/sizeof(arr_length);
	cout<<test(num2,arr_length)<<endl;
	int num3[]={22,33,22,22,22,33,33,33,4,4,4};
	arr_length= sizeof(num3)/sizeof(arr_length);
	cout<<test(num3,arr_length)<<endl;
}
