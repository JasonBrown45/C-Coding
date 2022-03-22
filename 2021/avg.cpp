#include <stdio.h>

int main(){
	while(true){
	double arr[21],total;
	for(int i=0;i<20;i++){
		scanf("%lf",&arr[i]);
		total+=arr[i];
	}
	printf("%lf\n",total/20);
	total=0;
}
	return 0;
}

