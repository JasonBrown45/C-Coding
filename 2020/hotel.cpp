#include <stdio.h>
#include <math.h>

int main(){

	double a[15],sum=0,tax1=0,tax2=0,sum1=0;
	for(int i=1;i<=12;i++) {
	scanf("%lf,",&a[i]);
	sum+=a[i];
	}
	tax1=floor(sum*0.05);
	tax2=floor(sum*0.07);
	sum1=sum-tax1-tax2;
	printf("%.2lf, %.2lf, %.2lf\n",tax2,tax1,sum1);
	return 0;
}
/*10.00, 10.10, 10.20, 10.30, 10.40, 10.50, 10.60, 10.70, 10.80, 10.90, 11.00, 11.10*/

