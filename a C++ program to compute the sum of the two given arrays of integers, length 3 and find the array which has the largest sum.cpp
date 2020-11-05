#include <iostream>
using namespace std;
int test(int num1[],int num2[],int arr_length1,int arr_length2){
	int sum1=0;
	int sum2=0;
	for(int i=0;i<arr_length1;i++){
		sum1+=num1[i];
	}
	for(int i=0;i<arr_length2;i++){
		sum2+=num2[i];
	}
	if(sum1>sum2){
	    	for(int i=0;i<arr_length1;i++){
		   cout<<num1[i]<<" ";
     	}
	    cout<<endl;
		
	}else{
			for(int i=0;i<arr_length2;i++){
		cout<<num2[i]<<" ";
	  }
	   cout<<endl;
	}
}
int main(){
	int arr_length1=0;
	int arr_length2=0;
	int num1[]={1, 5, 7};
	int num2[]={1, 5, 3};
	arr_length1=sizeof(num1)/sizeof(num1[0]);
	arr_length2=sizeof(num2)/sizeof(num2[0]);
	cout<<test(num1,num2,arr_length1,arr_length2)<<endl;
}
