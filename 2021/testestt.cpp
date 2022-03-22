#include <stdio.h>
struct date{
	int dd;
	int mm;
	int yyyy;
};


int main(){
	int n,m;
	struct date data[26000];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d/%d/%d",&data[i].yyyy,&data[i].mm,&data[i].dd);
	}
	scanf("%d",&m);
	for(int j=0;j<m;j++){
		int x,counter=0,d,m,y;
		scanf("%d %d/%d/%d",&x,&y,&m,&d);
		if(x == 0){
            for(int i=0;i<n;i++){
                if(data[i].yyyy < y) counter++;
                else if(data[i].yyyy==y && data[i].mm<m) counter++;
                else if(data[i].yyyy==y && data[i].mm==m && data[i].dd<d) counter++;
                
            }
        }
		if(x==1){
            for(int i=0;i<n;i++){
                if(data[i].yyyy>y) counter++;
				else if(data[i].yyyy==y && data[i].mm>m) counter++;
				else if(data[i].yyyy==y && data[i].mm==m && data[i].dd>d) counter++;
            }
        }
		printf("Case #%d: %d\n",j+1,counter); 
	}
	return 0;
}

