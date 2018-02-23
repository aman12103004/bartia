#include<stdio.h>
//using namespace std;
 main(){

for(int i=1;i<7;i++){

    for(int j=1;j<7;j++)
    {

       if((j==2&&(i>=1&&i<=6))||
          (i==1&&j==6)||
           (i==1&&j==5)||
            (i==2&&j==4)||
            (i==3&&j==3)||
            (i==4&&j==4)||
            (i==5&&j==5)||
            (i==6&&j==6)

          )
        printf("#");
            else
            printf(" ");

    }
    printf("\n");
   }

}
