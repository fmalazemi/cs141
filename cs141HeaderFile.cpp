#include <iostream>
#include<assert.h> 
#include<vector>

using namespace std;

char digitToChar(int n){
	
	if(n <= -1 || n >= 10){
		//raise an error
		assert(false && "digitToChar: Integer n is less than 0 or greater than 9!");
	}
	return char('0'+n) ; 
}

int charToDigit(char c){
	if(c < '0' || c > '9'){
		//raise an error 
		assert(false && "charToDigit: Char c is not a digit.");
	}
	return int(c -'0'); 
}

void sortArray(int A[], int n){
	sort(A, A+n); 
}

void sortVector(vector<int> v){
	sort(v.begin(), v.end()); 
}

void printIntArray(int A[], int n){
	for(int i = 0; i < n; i++){
		cout<<A[i]<<" "; 
	}
	cout<<endl;
}


void printVector(vector<int> v){
	for(int i : v){
		cout<<i<<" "; 
	}
	cout<<endl;
}

void printCharArray(char c[], int n){
	for(int i = 0; i < n; i++){
		cout<<c[i];
	}
	cout<<endl;
}
