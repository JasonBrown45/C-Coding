 #include <stdio.h>
 
int main (){
    int a; 
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
    int n = 0, largest1 = 0, largest2 = 0, temp = 0;	
    scanf ("%d", &n);
    int array[n];
    for (int j = 0; j < n; j++){
        scanf ("%d", &array[j]);
    }
    
    largest1 = array[0];
    largest2 = array[1];
    
    if (largest1 < largest2)
    {
        temp = largest1;
        largest1 = largest2;
        largest2 = temp;
    }
 
    for (int j = 2; j < n; j++){
        if (array[j] > largest1){
            largest2 = largest1;
            largest1 = array[j];
        }
        else if (array[j] > largest2 && array[j] != largest1) largest2 = array[j];
    }
    printf ("Case #%lld: %lld\n",i,largest2);
	}
	return 0;
}
