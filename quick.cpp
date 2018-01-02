#include <iostream>

using namespace std;

int partition(int *numbers, int top, int low){


	int pivot = numbers[top];
	int i = top - 1;
	int j = low + 1;
	int temp;

	do{
		do{
			j -= 1;
		}while(pivot > numbers[j]);

		do{
			i += 1;
		}while(pivot < numbers[i]);

		if(i < j){
			temp = numbers[i];
			numbers[i] = numbers[j];
			numbers[j] = temp;
		}
	 
	}while(i < j);

	return j;
}



void quicksort(int *numbers, int top, int low){

	if(top < low){

		int middle = partition(numbers, top, low);
		quicksort(numbers, top, middle);
		quicksort(numbers, middle + 1, low);

	}
}


int main(){

	int *numbers = NULL;
	
	cout << "how many ?" << endl;
	int num;
	cin >> num;
	
	numbers = new int [num];
	int stop = num;
	int start = 0;

	while(stop){
	
		cin >> numbers[start];
		start += 1;
		stop -= 1;
	}

	quicksort(numbers, 0, num-1);

	for(int i = 0; i < num; i++)
		cout << numbers[i] << endl;
}
