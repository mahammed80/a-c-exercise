#include <iostream>
using namespace std;
int test(int arr[],int arr_length){
   int start=0;
   int end =arr_length-1;
   while(start<end){
   	    int temp = arr[start]; 
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
   }
   for (int i = 0; i <arr_length ; i++)
   cout << arr[i] << " ";
   
   cout << endl;
}
int main(){
	int arr_length;
	int num[]={0,110,1,2,3,3,4};
	arr_length=sizeof(num)/sizeof(num[0]);
	
	cout<<test(num,arr_length)<<endl;
	return 0;
}
