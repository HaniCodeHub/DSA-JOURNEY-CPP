#include<iostream>
using namespace std;
int main(){
//	Create an array of char types and store 'a' to 'z' in it. Then print the element of the arrays.
	char ch[26];
	for(int i=0; i<sizeof(ch)/sizeof(ch[0]); i++){
		ch[i] = 97 + i;
	}
	
	for(int i = 0; i<sizeof(ch)/sizeof(ch[0]); i++){
		cout<<ch[i]<<endl;
	}
	
	return 0;
}
