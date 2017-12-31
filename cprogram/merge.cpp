#include <iostream>

using namespace std;

void merge(int *a, int start, int middle, int end){

	int n1 = middle - start + 1;
	int n2 = end - middle;
	int temp1[n1], temp2[n2];

	for(int i = 0; i < n1; i++)
		temp1[i] = a[start + i];
	for(int i = 0; i < n2; i++)
		temp2[i] = a[middle + 1 + i];

	int i = 0;
	int j = 0;
	int m = start;

	while(i < n1 && j < n2){
		if(temp1[i] <= temp2[j]){
			a[m] = temp1[i];
			i++;
		}
		else{
			a[m] = temp2[j];
			j++;
		}
		m++;
	}

	while(i < n1){
		a[m] = temp1[i];
		m++;
		i++;
	}

        while(j < n2){
                a[m] = temp2[j];
                m++;
                j++;
        }	
	
}

void merge_sort(int *a, int start, int end){


	if(start < end){
	
		int middle = (start + end)/2;

		merge_sort(a, start, middle);
		merge_sort(a, middle+1, end);

		merge(a, start, middle, end);
	}
}


int main(){

	int *numbers = NULL;
	int num = 0;
	int start = 0;
	cout << "how many : " << endl;
	cin >> num ;
	int stop = num;
	numbers = new int [num];
	while(stop){
		cin >> numbers[start];

		start += 1;
		stop--;
	}

	merge_sort(numbers, 0, num-1);

	for(int i = 0; i < num; i++){
		cout << numbers[i] << endl;
	}
}
