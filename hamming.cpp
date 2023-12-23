#include<stdio.h>
int main() 
{
    int data[7];
    int dataatrec[7],p,p1,p2,p3,i;
 
    printf("Enter 4 bits of data one by one\n");
    scanf("%d",&data[2]);
    scanf("%d",&data[4]);
    scanf("%d",&data[5]);
    scanf("%d",&data[6]);
 
    
    data[0]=data[2]^data[4]^data[6];
    
    data[1]=data[2]^data[5]^data[6];
    
    data[3]=data[4]^data[5]^data[6];
 
    printf("\nEncoded data is\n");
    for(i=0;i<7;i++)
    {
        printf("%d",data[i]);
     }
 
    printf("\n\nEnter received data bits one by one\n");
    
    for(i=0;i<7;i++)
        scanf("%d",&dataatrec[i]);
 
    p1=dataatrec[0]^dataatrec[2]^dataatrec[4]^dataatrec[6];
    p2=dataatrec[1]^dataatrec[2]^dataatrec[5]^dataatrec[6];
    p3=dataatrec[3]^dataatrec[4]^dataatrec[5]^dataatrec[6];
    p=p3*4+p2*2+p1 ;
 
    if(p==0) 
    {
       printf("\nNo error while transmission of data\n");
    }
    else 
    {
        printf("\nError on position %d",p);
    
        printf("\nData sent : ");
        for(i=0;i<7;i++)
        printf("%d",data[i]);
        
        printf("\nData received : ");
        for(i=0;i<7;i++)
        printf("%d",dataatrec[i]);
        printf("\nCorrect message is\n");
 

    if(dataatrec[7-p]==0)
    {
        dataatrec[7-p]=1;
     }
    else
    {
        dataatrec[7-p]=0;
     }
    for (i=0;i<7;i++) 
        {
            printf("%d",dataatrec[i]);
        }
    }
}
