#include<stdio.h>

int main() {
    
    int input;
    printf("enter the value of n:\n");
    scanf("%d",&input);
    
    for(int row=0; row<input; row++){
        for(int col=0; col<row+1; col++){ //number
            printf("%d",col+1);
        }
        
        for(int col=0; col<2*input-2*row-2; col++){ //spaces
            printf(" ");
        }
        
        for(int col=row; col>=0; col--){ //number
            printf("%d",col+1);
        }
        printf("\n");
    }
  
      for(int row=0; row<input-1; row++){
           
          for(int col=0; col<input-row-1; col++){
              printf("%d",col+1);
          }
          for(int col=0; col<2*row+2; col++){
              printf(" ");
          }
          for(int col=input-row-2; col>=0; col--){
              printf("%d",col+1);
          }
          printf("\n");
      }
    return 0;
}
