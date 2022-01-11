#include <iostream>

using namespace std;

template <typename T>
void insertionSort(T d[],int N)
{ 
    int i, j;
	int key; 
    for (i =0; i < N-1; i++)
    { 
        key = d[i+1]; 
        j = i; 

        while (j >= 0 && d[j] < key )
        { 
            d[j + 1] = d[j]; 
            j = j - 1; 
        } 
        d[j + 1] = key; 
		
			cout << "Pass " << i+1 << ":";
			for(int a=0;a<N;a++){
				cout << d[a] << " ";
			}
			cout << "\n";
    } 
	
} 

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}


