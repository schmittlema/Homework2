#include <iostream>
using namespace std;

void printArray(int array[],int size){
	for(int i = 0;i<size;i++){
		cout<<array[i];
	}
	//cout<<endl;
}

void mergeSort(int array[], int size){
	int j = 0;
	if(size != 1){
		j =(j+size)/2;	
		int sub[j];
		int sub2[(size)-j];
		for(int i = 0;i<1+j;i++){
			sub[i] = array[i];				
		}
		int v = 0;
		for(int z = j; z<size;z++){
			sub2[v] = array[z];			
			v++;
		}
			
		mergeSort(sub,j);
		mergeSort(sub2,v);
		int one = 0;
		int two = 0;
		int w = 0;
		while(one<j && two <v){
			if(sub[one] < sub2[two]){
				array[w] = sub[one];
				one++;
			}
			else{
				array[w] = sub2[two];	
				two++;
			}
			w++;
		}
		while(one< j){
			array[w] = sub[one];
			w++;
			one++;
		}
		while(two< v){
			array[w] = sub2[two];
			w++;
			two++;	
		}
	}
}
	


int main(){
int array[10] = {7,2,3,4,5,6,2,10,9,1};
printArray(array,10);
cout<<endl;
mergeSort(array,10);
printArray(array,10);
cout<<endl;
}
