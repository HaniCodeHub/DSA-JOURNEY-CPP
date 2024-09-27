#include<iostream>
using namespace std;
int main(){
//	Find the second largest element in an array of unique elements of size n. Where n>3
	
	int arr[] = {1,2,4,5,6,3,10,20};
	int n, m;
	n = m = INT_MIN;
	
	for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
		if(n<arr[i]){
			n = arr[i];
		}
	}
	cout<<"Fist largest: "<<n<<endl;
	
	for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
		if(arr[i]>m && arr[i] != n){
			m = arr[i];
		}
	}
	cout<<"Second largest: "<<m;
	

	return 0;
}
