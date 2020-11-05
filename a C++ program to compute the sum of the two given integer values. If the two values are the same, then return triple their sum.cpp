#include <iostream>
using namespace std;
int find(int x,int y){
	if(x==y){
		return (x+y)*3;
	}else{
	 return x+y;	
	}
}
int main(){
	cout<<find(1,2)<<endl;
	cout<<find(3,2)<<endl;
	cout<<find(2,2)<<endl;
}
