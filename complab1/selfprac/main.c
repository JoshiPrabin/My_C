#include <stdio.h>
#include <stdlib.h>



void transfer(int n, char from,char to,char temp){


}
main(){
      int n;
      printf("enter the number of disks: ");
      scanf("%d",&n);
      transfer(n,'l','R','C');
      }
void transfer(int n, char from, char to, char temp){
    if(n>0){
        transfer(n-1,from,to,temp);
     printf("move %d from %c from %c",n,from,to);
     transfer(n-1,from,to,temp);;
    }
     return;
}

