#include <stdio.h>

int main(){
	//pawn initialization
	int board,pawn,x[1005],y[1005],x_pos[1005],y_pos[1005],x_rook[1005],y_rook[1005];
	scanf("%d %d",&board,&pawn);
	for(int i=1;i<=pawn;i++){
		scanf("%d %d",&x[i],&y[i]);
	}
	//pos initialization
	int pos;
	scanf("%d",&pos);
	for(int j=1;j<=pos;j++){
		scanf("%d %d",&x_pos[j],&y_pos[j]);
	}
	//knight calculation
	
	return 0;
}
/*
3 5
1 1
1 2
1 3
2 1
2 3
4
2 2
3 1
3 2
3 3
*/
