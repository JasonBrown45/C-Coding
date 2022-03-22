#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct project_req{
	int first_worker;
	int last_worker;
	int first_point;
	int last_point;
	int point_req;
};

struct project_req req [200005];

int findSmallest(int arr[], int n){
    int i=0, small;
    small=arr[i];
    while(i<n)
    {
        if(small>arr[i])
            small = arr[i];
        i++;
    }
    return small;
}

int main(){
	int n;
	scanf("%d",&n);
	int worker_point[n+5];
	getchar();
	for(int i=1;i<=n;i++){
		scanf("%d",&worker_point[i]);
	}
	
	int q;
	scanf("%d",&q);
	for(int i=1;i<=q;i++){
		scanf("%d",&req[i].first_worker);
		scanf("%d",&req[i].last_worker);
		scanf("%d",&req[i].first_point);
		scanf("%d",&req[i].last_point);
		scanf("%d",&req[i].point_req);
	}
	
	for(int i=1;i<=q;i++){
		int res=0;
		int flag=0;
		int point=0;
		int store[n+5];
		for(int j=req[i].first_worker;j<=req[i].last_worker;j++){
			if(worker_point[j]>=req[i].first_point && worker_point[j]<=req[i].last_point){
				store[j]=worker_point[j];
				point++;
			}
			else continue;
			if(j==req[i].last_worker && point==0){
				int flag=1;
				break;
			}
		}
			
		if(flag==1){
			printf("%d\n",point);
			continue;	
		}
		for(int j=1;j<=point;j++){
				printf("array:%d\n ",store[j]);
			}
		while(true){
			for(int j=1;j<=point;j++){
				res+=store[j];
				printf("point x:%d\n",res/point);
			}
			if((res/point)<req[i].point_req){
				int small=findSmallest(store,point);
				for(int j=1;j<=point;j++){
					int temp=0;
					if(store[j]==small){
						store[j]==0;
						while(store[point]!=0){
        					temp=store[j];
        					store[j]=store[j+1];
        					store[j+1]=temp;
    					}
							
					} 
					
				}
						for(int j=1;j<=point;j++){
				printf("array:%d\n ",store[j]);
			}
				point--;
			}
			else if((res/point)>=req[i].point_req){
				break;
			}
		}
		printf("total: %d\n",point); 		
	}
}

