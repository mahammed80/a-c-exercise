#include <iostream>
using namespace std;
int mostbit(int x){
	int i=0;
	while(x>0){
		if(x&1){
			return i;
		}
		x>>1;
		i++;
	}
	return i;
}
void uniqe(int arr[],int size){
	int res=0;
	for(int i=0;i<size;i++){
		res =res^arr[i];
	}
	int bitpos=mostbit(res);
	int mask=(1<<bitpos);
	int firstno=0;
	for(int i=0;i<size;i++){
		if((mask&arr[i])!=0){
			firstno=firstno^arr[i];
		}
	}
	int secondno =firstno^res;
	
	cout<<"Two Unique Numbers : "<<firstno<<" , "<<secondno;
}
int main() {
	int n;

	cout<<"Enter size of array : ";
	cin>>n;

	int arr[n];

	cout<<"Enter elements of array : \n";
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}

	uniqe(arr, n);

	return 0;
}
