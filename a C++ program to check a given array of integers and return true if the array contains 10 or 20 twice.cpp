#include <iostream>
using namespace std;
bool test(int num[],int arr_length){
	int flag=0;
	for(int i=0;i<arr_length;i++){
		if((num[i]==20)||(num[i]==10)){
			flag++;
		}
	  
	}
		if(flag>=2){
		return true;
	}
	else{
		return false;
	}

}
int main(){
	int arr_length;
	int num[]={12,13,10,20};
	arr_length=sizeof(num)/sizeof(num[0]);
	cout<<test(num,arr_length)<<endl;
	int num1[]={12,13,10};
	arr_length=sizeof(num1)/sizeof(num1[0]);
	cout<<test(num1,arr_length)<<endl;
}
