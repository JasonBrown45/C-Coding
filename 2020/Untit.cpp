#include <stdio.h>

int main(){
	int a,b=-1,c=0;
	scanf("%d",&a);
	
		if (1>a){
		printf("invalid input");
	}
	else{
	for(int i=0;i<a;i++){

	if(a%2==1){
		b+=2;
		printf("%d\n",b);
	}	
	else{
		c+=2;
		printf("%d\n",c);
	}
}
}
	return 0;
}

