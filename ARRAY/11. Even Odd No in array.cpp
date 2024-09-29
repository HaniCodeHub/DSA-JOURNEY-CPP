#include<iostream>
using namespace std;
int main(){
	int arr[] = {1,2,3,4,5,6,7,8};
	int n = sizeof(arr)/sizeof(arr[0]);
	int even[n], odd[n], e=0, o=0;
//	separat the even and odd numbers
	for(int i=0; i<n; i++)
	{
		if(arr[i]%2==0){
			even[e] = arr[i];
			e++;
		} else{
			odd[o] = arr[i];
			o++;
		}
	}
	
//	printing the number
	cout<<"Even : ";
	for(int i=0; i<e; i++){
		cout<<even[i]<<" ";
	}
	cout<<endl<<"Odd : ";
	for(int i=0; i<o; i++){
		cout<<odd[i]<<" ";
	}
	
	return 0;
}
