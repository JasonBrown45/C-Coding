#include <stdio.h>
#include <string.h>
struct tim{
	char id[30];
	char time[6];
	int flag;	
};

struct statio{
	char id[30];
	char station[110];	
};

int main(){

	int a;
	scanf("%d",&a);
	struct tim data1[1010];
	struct statio data2[1010];
	for(int i=0;i<a;i++) {
		scanf("%s %s",data1[i].id,data1[i].time);
		data1[i].flag=0;
	}
	for(int j=0;j<a;j++) scanf("%s %[^\n]",data2[j].id,data2[j].station);
	
   	for (int i=0;i<a-1;i++){
       	for (int j=0; j<a-i-1;j++)
           	if (strcmp(data2[j].id,data2[j+1].id)>0){
           		struct statio temp;
           		strcpy(temp.id, data2[j].id); 
                strcpy(data2[j].id, data2[j+1].id); 
                strcpy(data2[j+1].id, temp.id); 
                
                strcpy(temp.station, data2[j].station); 
                strcpy(data2[j].station, data2[j+1].station); 
                strcpy(data2[j+1].station, temp.station); 
           	}
	}

	for(int i=0;i<a;i++) printf("%s %s %s\n",data1[i].id,data1[i].time,data2[i].station);
	return 0;
}

