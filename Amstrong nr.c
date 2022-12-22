#include<stdio.h>
int main(){
    int n,count =0,result=0,mul=1, cnt,remain;
    printf("enter the number you want to check whether is or isnt an Ambstrong nr:");
    scanf("%d",&n);
    int q=n;
    while(q!=0){
        q=q/10;
        count ++;
    }
    cnt=count;
    q=n;
    while(q!=0){
        remain=q%10;
        while(cnt!=0){
            mul=mul*rem;
            cnt--;
        }
        result=result+mul;
        cnt=count;
        q=q/10;
        mul=1;
    }
    if(result==n){
        printf("it is");
    }else{
        ("is not");
    }
    return 0;
}