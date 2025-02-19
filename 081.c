#include<stdio.h>

int main(){
    int i,arr[10]={2,4,2,6,6,4,7,9,6,5},sum=0,arrLength=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<arrLength;i++){
    	sum+=arr[i];
	}
	float mean=sum/arrLength;
	printf("Mean:%.2f\n",mean);
    for(i=0;i<arrLength;i++){
    	sum+=pow(arr[i]-mean,2);
	}
	float variance=sum/arrLength;
	printf("Variance:%.2f\n",variance);
	float standardDeviation=pow(variance,0.5);
	printf("Standard Deviation:%.2f",standardDeviation);
    return 0;
}

