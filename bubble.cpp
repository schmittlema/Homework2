#include<iostream>
using namespace std;

void printArray(int array[],int size){
        for(int i = 0;i<size;i++){
                cout<<array[i];
        }
        cout<<endl;
}

void bubblesort(int array[],int size){
	int swaps = 1;
	int pass = 1;
	while (swaps != 0){
		swaps = 0;
		for(int i = 0;i<size-pass;i++){
			if(array[i]>array[i+1]){
				int temp = array[i+1];
				array[i+1] = array[i];
				array[i] = temp;
				swaps++;
			}
		}
		pass++;
	}	
}
int main(){
	int array[10] = {7,2,4,5,2,1,10,9,3,4};
	printArray(array,10);
	bubblesort(array,10);
	printArray(array,10);
}
