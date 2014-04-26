#include <stdio.h>

int binsearch(int x ,int v[], int n)
{	
	int low,high,mid;
	
	low = 0;
	high = n-1;
	while (high >= 0){
		mid = (low+high)/2;
		if(x < v[mid])
			high = mid - 1;
		else if (x > v[mid])
			low = mid + 1;
		else
			return mid;
	}
	return -1;
}

int binsearch2(int x,int v[],int n)
{
	int low,high,mid;
	low = 0;
	high = n-1;
	mid = (low+high)/2;
	while (high >=0 && x != v[mid] ){
		if(x < v[mid])
			high = mid -1;
		else
			low = mid + 1;
		mid = (low+high)/2;
	}
    if ( x == v[mid]) return mid;
	return -1;
}
