//Write a program to create a class template for the ‘Array’ class. 3 Create a template for the bubble sort function. 

#include<iostream> 
using namespace std; 

template<class T> 
// A function to implement bubble sort 
void bubble(T a[], int n) 
{ 
	for(int i = 0; i < n-1; i++) 
		for(int j = n-1; i < j; j--) 
			if(a[j] < a[j-1]) 
				swap(a[j], a[j-1]); //calls template function 
} 

template<class X> 
//A Function to perform swapping 
void swap(X &a, X &b) 
{ 
	X temp = a; 
	a = b; 
	b = temp; 
} 

//Driver Code 
int main() 
{ 
	int a[5] = {10, 50, 30, 40, 20}; 
	int n = sizeof(a)/sizeof(a[0]); 
	
	float b[5] = {1.1, 5.5, 3.3, 4.4, 2.2}; 
	int m = sizeof(b)/sizeof(b[0]); 
	
	bubble(a, 5); //calls template function for int values 
	bubble(b, 5); //calls template function for float values 
	
	cout << " Sorted a-array "; 
              for(int i = 0; i < n; i++) 
		cout << a[i] << " "; 
	               cout << endl; 
	
	cout <<" Sorted b-array "; 
	for(int j = 0; j < m; j++) 
		cout << b[j] << " "; 
	cout << endl; 
return 0;		 
} 
