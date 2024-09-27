#include<iostream>
using namespace std;


int main(){
	
	/*array declaration */
//	int arr[5];
//	cout<<arr;



	/*initialization (5 ways)*/	
//	1...
//	int arr[5] = {1,2,3,4,5};
	
//	2...
//	int arr[] = {1,2,3,4,5};

//	3...
//	int arr[5];
//	for(int i=0; i<5; i++){
//		cout<<i<<" element: ";
//		cin>>arr[i];
//	}
	
//	4...
//	int arr[5] = {1,2};

//	5...
//	int arr[5] = {0};
	int arr[5] = {2};
	
	for(int i = 0; i<sizeof(arr)/sizeof(arr[0]); i++){
		cout<<arr[i]<<endl;
	}
	
	
	/*finding address of index*/
	cout<<arr + sizeof(arr[4]) * arr[0]<<endl;
	cout<<arr;
	
	
	return 0;	
}









