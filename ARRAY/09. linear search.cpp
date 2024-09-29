#include<iostream>
using namespace std;
int main(){
	/*Find the index of a specific element in an array, if the element is nor present,
	 print -1. Ask the size of the array from the user and then implement it.*/
	 
	cout<<"Enter the size of array: ";
	int s;
	cin>>s;
	const int size = s;
	
	int arr[size];
//	entering the elements of array
	cout<<"Enter the elements of array:"<<endl;
	for(int i = 0; i<sizeof(arr)/sizeof(arr[0]); i++){
		cout<<i+1<<" : ";
		cin>>arr[i];
	}
	
	
//	finding the element
	int n, index = -1;
	cout<<"Enter the element to find: ";
	cin>>n;
	for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
		if(n == arr[i]){
			index = i;
			break;
		}
	}
	
	cout<<"Element is found at index: "<<index;	
	
	return 0;
}
