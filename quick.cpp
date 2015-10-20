#include<iostream>
using namespace std;
void printArray(int array[],int size){
        for(int i = 0;i<size;i++){
                cout<<array[i];
        }
        cout<<endl;
}


void quicksort(int array[],int size,int startpos){
	if((size-startpos)>1){
		int pivot = array[size-1];
		int pivotpos = size-1;
		int i = startpos;
		int j = startpos;
		while(j!=pivotpos){
			if(array[j]<=pivot){
				int temp = array[j];
				array[j] = array[i];
				array[i] = temp;
				i++;
			}
			j++;
		} 
		
		int temp = array[i];
		array[i] = pivot;
		array[pivotpos] = temp;
		quicksort(array,i,0);
  		quicksort(array,size,i+1);
	}	
}
int main(){
	int array[10] = {7,6,4,3,1,2,2,10,9,5};
	printArray(array,10);
	quicksort(array,10,0);
	printArray(array,10);

}
