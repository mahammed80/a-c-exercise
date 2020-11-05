#include  <iostream>
using namespace std;
int test(int num[],int arr_length){
    int sum =0;
	for(int i=0;i<=arr_length;i++){	
		sum+=num[i];
	}
	cout<<sum-arr_length<<endl;
	return 0;
}
int main(){
	int arr_length;
	int num1[]={10, 20, 30, 40, 50};
	arr_length=sizeof(num1)/sizeof(num1[0]);
	cout<<test(num1,arr_length)<<endl;
	cout<<arr_length<<endl;
	
}
