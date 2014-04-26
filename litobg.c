#include <stdio.h>
#include <time.h>
#define BLOCK 10000

int main(int argc,char* argv[]){
	
	FILE * fp, * p;
	int n=0;
	short int a;
	short int b;
	fp = fopen("ETOPO5.DAT","rb");
	p  = fopen("output.dat","ab");
	short int value[BLOCK];
	int begin=0,end=0;
	begin = clock();
	while(n=fread(value,2,BLOCK,fp)){
		for(int i=0;i<n;i++){
			b=value[i] <<8;
			a=value[i] >>8;
			value[i]=a+b;
		}
		fwrite(value,2,n,p);
	}
	end = clock();
	printf("the convert take %d seconds\n",end-begin);
	return 0;
}
