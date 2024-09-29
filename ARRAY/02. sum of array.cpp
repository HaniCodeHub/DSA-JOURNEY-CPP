#include<iostream>
using namespace std;
int main(){
	
//	Take 20 elements from user input and find its sum with the help of an array.
	int arr[20];
	cout<<"Enter the elements of array: "<<endl;
	for(int i = 0; i<sizeof(arr)/sizeof(arr[0]); i++){
		cout<<i+1<<" : ";
		cin>>arr[i];
	}
	
	int sum = 0;
	for(int i = 0; i<sizeof(arr)/sizeof(arr[0]); i++){
		sum += arr[i];
	}
	cout<<sum;
	return 0;
}
