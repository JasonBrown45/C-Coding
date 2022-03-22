#include<stdio.h>

int main(){
    int testcase;
    char letter[100005];
    char newlet[26]={0};
    int sletter;
    int counter;
    
    scanf("%d", &testcase);
    getchar();
    for(int i=1; i<=testcase; i++){
        scanf("%s", letter);
        getchar();
        int j=0;
        while(letter[j]!='\0'){
            if(letter[j] >= 'a' && letter[j] <= 'z'){
                sletter=letter[j] - 'a';
                newlet[sletter]++;
            }
            j++;
        }
        counter=0;
        for(int k=0; k<26; k++){
            if(newlet[k]!=0){
                counter++;
            }
        }
    
        if(counter%2==0){
            printf("Case #%d: Yay\n", i);
        }
        else printf("Case #%d: Ewwww\n", i);
    }
    return(0);
}
