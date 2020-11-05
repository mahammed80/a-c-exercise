#include <iostream>
using namespace std;
int uniqe_number(int *arr,int n){
	int count[64]={0};
	for(int i=0;i<n;i++){
		int k=0;
		int num =arr[i];
		while(num>0){
			count [k]+=(num&1);
			k++;
			num=num>>1;
		}
	}
	int power =1;
	int result =0;
	for(int j=0;j<64;j++){
		count [j]%=3;
		result+=count[j]*power;
		power =power<<1;
		
	}
	return result;
}
int main(){
	int arr[50];
	int m;
	cout<<"Enter lenght of the array: ";
	cin>>m;
	
	cout<<"Enter array elements..."<<endl;
	for(int c=0;c<m;c++)
	{
		cin>>arr[c];
	}
	cout<<uniqe_number(arr,m)<<" is the unique number in array.";

	return 0;
}
