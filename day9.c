#include <stdio.h>
int main()
{
    int subject;
    printf("which subject you have passed is%d\n"
    "1 maths and science\n"
    "2 maths\n"
    "3 science\n");

    scanf("%d",&subject);
     if ( subject==1){
        printf("you get a gift of 45 rupees");
     }

     else if( subject==2){
        printf("you get a gift of 15 rupees");
     }

     else if( subject==3){
        printf("you get agift of 15 rupees");
     }
    return 0;
}
