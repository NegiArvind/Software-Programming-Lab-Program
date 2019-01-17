#include<stdio.h>
 
int main()
{
    int n,i,f,frames[50];
 
    printf("Enter window size: ");
    scanf("%d",&n);
 
    printf("\nEnter number of frames to transmit: ");
    scanf("%d",&f);
 
    printf("\nEnter %d frames: ",f);
 
    for(i=1;i<=f;i++)
        scanf("%d",&frames[i]);
 
   
    for(i=1;i<=f;i++)
    {
        if(i%n==0)
        {
            printf("%d\n",frames[i]);
            printf("Acknowledgement is received\n\n");
        }
        else
            printf("%d ",frames[i]);
    }
 
    if(f%n!=0)
        printf("\nAcknowledgement is received\n");
 
    return 0;
}
