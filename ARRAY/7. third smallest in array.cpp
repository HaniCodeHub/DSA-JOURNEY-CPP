#include<iostream>
using namespace std;
int main(){
//	Find the third smallest element in an array of unique elements size n. Where n>3.
	int arr[] = {45,32, 26, 74, 123, 79};
	int size = sizeof(arr)/sizeof(arr[0]);
	int n1, n2, n3;
	n1 = n2 = n3 = INT_MAX;
	for(int i=0; i<size; i++){
		if(n1>arr[i]){
			n1 = arr[i];
		}
	}
	cout<<"First smallest: "<<n1<<endl;
	
	for(int i=0; i<size; i++){
		if(n2>arr[i] && arr[i]!=n1){
			n2 = arr[i];
		}
	}
	cout<<"Second smallest: "<<n2<<endl;
	
	for(int i=0; i<size; i++){
		if(n3>arr[i] && arr[i]!=n1 && arr[i]!=n2){
			n3 = arr[i];
		}
	}
	cout<<"Third smallest: "<<n3;
	
	
	return 0;
}
