#include<iostream>
using namespace std;
int main(){
//	Calculate the average of elements in an array of size 18.
	int arr[18];
	cout<<"Enter the elements of array: "<<endl;
	for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
		cout<<i+1<<" : ";
		cin>>arr[i];
	}
	
	int sum = 0, avg;
	for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
		sum += arr[i];
	}
	
	avg = sum/(sizeof(arr)/sizeof(arr[0]));
	cout<<"Average of elements: "<<avg;
	return 0;
}
