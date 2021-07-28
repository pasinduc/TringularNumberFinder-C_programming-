#include<stdio.h>
//int infinity( void);
int PrintSequence();
int main ( ){
  //  int N,R;
    //print();
    //infinity();
    //printf("add value Pt:");
    //scanf("%d",&Pt);
    
    //printf("High Value:");
    //scanf("%d",&R);
    //N = Previous( );
 //for (int i = N; i <= R; i++)
//{
   // N = N + i;
    //printf("%dth term is %d\n",i,N);
//}
 PrintSequence();
}


/*
//1 to infinity//
int infinity(void ){
int n = 0;
int k;
 printf("high value k:");
 scanf("%d",&k);
 for (int i = 1; i < k; i++)
 {
    n = n + i;
    printf("%dth term is %d \n",i,n);
 }

}*/ // all the commented lines are unwanted  ^^^^

int PrintSequence() {
int k,n,R;

 printf("Min Value k:");
 scanf("%d",&k);
 printf("High value R:");
 scanf("%d",&R);

 if (k>1){ 
     n = 0;
     for (int i = 1; i <k; i++)
     {
        n = n + i;
        
     }
     
    // return n;        // idont know why we dont add this line to this code
                       //success , but anyone who know please put some commit to learn 

    for (int i = k; i <=R; i++)
    {
        n = n + i;
        printf("%dth term is %d\n",i,n);
    }
    
 }
 else if( k ==1){
    n = 0;
    for (int i = 1; i <=R; i++)
    {
        n = n + i;
        printf("%dth term is %d\n",i,n);
    }
    
 }
 
 //printf("%d",n);
 //return n;
}
