#include<iostream>
using namespace std;
int main(){
//	use of sizeof() fuction
//	find the the size of a var & array
	int a;
	int arr[5];
	cout<<sizeof(a);
	cout<<endl;
	cout<<sizeof(arr);
	cout<<endl;
	
//	find the total no of elements
	cout<<sizeof(arr)/sizeof(arr[0])<<" elements";
	return 0;
}
