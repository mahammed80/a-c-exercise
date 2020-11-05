#include <iostream>
using namespace std;
bool test(int n[],int arr_length){
	for(int i=0;i<arr_length;i++){
		if(n[i] ==1&&n[i+1]==2&&n[i+2]==3){
			return true;
		}	
	}
	return false;
}
int main(){
   int arr_length;
   int num1[]={1,1,2,3,1};
   arr_length = sizeof(num1)/sizeof(num1[0]);
   cout<<test(num1,arr_length)<<endl;
   int nums2[] = {1,1,2,4,1};	
   arr_length = sizeof(nums2) / sizeof(nums2[0]);
   cout << test(nums2, arr_length) << endl;
   	
}
