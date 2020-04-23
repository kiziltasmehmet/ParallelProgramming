#include "parallelradixsort.h"
 
void parallelRadixSort(){
	setColor(10);												
	printf("[INFO]: Data(s) sorting started.\n");
    pradixSort(veriler,i);
	printf("[INFO]: The data(s) was sorted successfully.\n");
	setColor(15);
}


void pradixSort(int arr[], int n)
{ 
	int exp = 1;
	int m = pgetMax(arr, n);
	for (exp = 1; m/exp > 0; exp *= 10){
		pcountSort(arr, n, exp);
	}
}

int pgetMax(int arr[], int n)
{
	int i=1;
    int mx = arr[0];
	for (i = 1; i < n; i++){
    	if (arr[i] > mx){
    		mx = arr[i];
		}      
	} 
    return mx;
}
 
void pcountSort(int arr[], int n, int exp)
{
    int output[n]; // output array
    int i, count[10] = {0};
 
    for (i = 0; i < n; i++){
    	count[ (arr[i]/exp)%10 ]++;
	}
	   
 	for (i = 1; i < 10; i++)
	{
    	count[i] += count[i - 1];
	}
  
	for (i = n - 1; i >= 0; i--)
    {
        output[count[ (arr[i]/exp)%10 ] - 1] = arr[i];
        count[ (arr[i]/exp)%10 ]--;
    }
    for (i = 0; i < n; i++)
	{
		arr[i] = output[i]; 
	}  
}
