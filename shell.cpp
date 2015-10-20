#include<iostream>
#include<vector>
using namespace std;

void printarray(int array[],int size){
	for(int i = 0; i<size;i++){
		cout<<array[i]<<" ";
	}
	cout<<endl;
}

//Used textbook insertion sort
void insertionSort(int array[],int size){
	int temp = 0;
	int j = 0;
	for(int i = 1;i<size;i++){
		j = i;
		while(j>0&& array[j] <array[j-1]){
			temp = array[j];		
			array[j] = array[j-1];
			array[j-1] = temp;
			--j;
		}
	}
}


//Shell Sort
void shellSort(int array[],int size){
	int gap = 5;
	int j = 0;	
	for(int v = 0; v<3;v++){
		for(int i= 0; i < gap; i++){
			int sub[(int) size/gap];
			int k = 0;
			j = i;		
			while(j<size){	
				sub[k] = array[j];
				j+=gap;
				k++;
			}
			insertionSort(sub,k);	
			int x = i; 
			for(int z = 0;z<k;z++){
				array[x] = sub[z];
				x+=gap;	
			}
		}
		gap-=2;
	}
}




int main(){
  int array[9] = {5,2,3,1,9,4,6,7,8};
  //insertionSort(array,5);
  printarray(array,9);
  shellSort(array,9);
  printarray(array,9);
}
