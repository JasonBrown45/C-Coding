#include <stdio.h>

int main(){
    int n,m,num1,num2,num3;
    scanf("%d", &n);
    for(int a=1;a<=n;a++){
        int counter=0;
        int arr1[1001],arr2[1001],arr3[1001];
        
        scanf("%d",&num1);
        for(int i=0;i<num1;i++){
        	scanf("%d",&arr1[i]);	
		}
        scanf("%d",&num2);
        for(int i=0;i<num2;i++){
        	scanf("%d",&arr2[i]);	
		} 
        scanf("%d",&num3);
        for(int i=0;i<num3;i++){
        	scanf("%d",&arr3[i]);	
		} 

        scanf("%d",&m);
        for(int j=0;j<num1;j++){
            for(int k=0;k<num2;k++){
                for(int l=0;l<num3;l++){
                    if(arr1[j]+arr2[k]+arr3[l]==m){
                        counter++;
                    }
                }
            }
        }
        printf("Case #%d: %d\n",a,counter);
    }
    return 0;
}
