#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char num[1000];
    scanf("%[^\n]%*c",num);
    //printf("%lu",strlen(num));
    // for (int i=0; num[i]!='\0'; i++) {
    //     if (strcmp(i,num[i])) {
    //      printf("qo");
    //     }
    //     printf("%c\n",num[i]);
    // }
    
    int c[10],Count=0;
    char ch='0';
    for (int i=0; i<10; i++) {
        //printf("1");
        Count=0;
    
        for (int j=0;j<strlen(num); j++) {
            //printf("%d",i);
            
            if(ch==num[j]) {
                
                Count++;
            }
        
        }
        //printf("%d\n",count);
        c[i]=Count; 
        ch++; 
    }
    
    for (int i=0; i<10; i++) {
        printf("%d ",c[i]);
    }
       
    return 0;
}
