#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int Q[3]= {1,1,0};
    int M[3]= {1,0,0};
    int A[3] = {0,0,0};
    int N[3] = {0,1,1};
    if (N==0){
        printf("Quotient is: %d",Q);
        printf("remaider is: %d",A);
    }
    else{
        A = 1;
        Q = 4;
        A = A-M;
        if (A[0]==1){
            Q[0]=0;
            A = A+M;

        }
        else if (A[0]==0){
            Q[0]=1;
        
        }
        N = N-1;
        if (N==0){
            printf("Quotient is: %d",Q);
            printf("remaider is: %d",A);
        }
        else{

        }
    }
    return 0;
}