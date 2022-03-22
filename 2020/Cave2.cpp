#include <stdio.h>

int main(){
	int loop;
	scanf("%d",&loop);
	int sort[loop];
	
	for(int i=0;i<loop;i++){
		int input;
		scanf("%d",&input);
		int num[input+1];
		
		for(int j=0;j<input;j++){
			scanf("%d",&num[j]);
		}
		
		int red=1,health=1,rad=1;
		
		for(int j=0;j<input;j++){
			if(num[j]<0){
                if(red+num[j]>=1){
                    red+=num[j];
                    rad=0;
                }
                else if(red+num[j]<=0){
                    if(num[j]==-1 ){
                        health++;
                        red=2;
                        rad=2;
                    }
                    if(rad==1){
                        int temp=(red-num[j])-1;
                        red=temp;
                        health=temp;
                        rad=0;
                    }
                    else if(rad==0){
                        int temp=-(red+num[j])+1;
                        red+=temp;
                        health+=temp;
                    }
                    rad=0;
                    red+=num[j];
                }

            }
            else if(num[j]>0){
                red+=num[j];
            }
        sort[i]=health;
    }
}
    for(int i=1;i<=loop;i++){
        printf("Case #%d: %d\n",i,sort[i-1]);
    }
    return 0;
}
