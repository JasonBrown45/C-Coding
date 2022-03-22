#include <stdio.h>

int main(){
	int a,b,c,t;
	scanf("%d %d %d",&a,&b,&c);
	t = a*3+b*2+c;

	switch(t){
		case 1: printf("Copper\n");
				break;
		case 2: printf("Estate or Copper\n");
				break;
		case 3: printf("Estate or Silver\n");	
				break;
	 	case 4: printf("Estate or Silver\n");	
				break;
		case 5: printf("Dutchy or Silver\n");	
				break;
		case 6: printf("Dutchy or Gold\n");	
				break;		
		case 7: printf("Dutchy or Gold\n");	
				break;
		case 8: printf("Province or Gold\n");	
				break;
		case 9: printf("Province or Gold\n");	
				break;
		case 10: printf("Province or Gold\n");	
				break;		
		case 11: printf("Province or Gold\n");	
				break;		
		case 12: printf("Province or Gold\n");	
				break;		
		case 13: printf("Province or Gold\n");	
				break;	
		case 14: printf("Province or Gold\n");	
				break;
		case 15: printf("Province or Gold\n");	
				break;										
	}	
	return 0;
}

