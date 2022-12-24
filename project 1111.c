#include<stdio.h>
int main()
{
    int sub[10],credit[10],i=0,j=0;
    int credit_sum,t=0;
    printf("---------- Welcome To East West University----------\n\n ");
    label1:
    printf("-------List of all required courses for semester:SUMMER-2022-------\n\n");
    printf("1.CSE106      credit:4\n");
    printf("2.CHE109      credit:4\n");
    printf("3.MAT102      credit:3\n");
    printf("4.ENG102      credit:3\n");
    printf("5.PHY109      credit:3\n");
    printf("6.CSE111      credit:3\n");
    printf("7.MAT121      credit:3\n");
    printf("8.STAT225     credit:3\n");
    printf("9.BUS135      credit:3\n");
    printf("10.PHY111     credit:3\n");
    printf("press 0 to set choice\n");
    i=0,j=0,t=0;
    do{
        scanf("%d",&sub[i]); //taking subject choice
        i++;
    }while(sub[i-1]!=0);
    for(i=0;;i++){            //populating corresponding credits
        if(sub[i]==1){
            credit[j]=4;
            j++;
        }
        if(sub[i]==2){
            credit[j]=4;
            j++;
        }
        if(sub[i]==3){
            credit[j]=3;
            j++;
        }
        if(sub[i]==4){
            credit[j]=3;
            j++;
        }
        if(sub[i]==5){
            credit[j]=3;
            j++;
        }
        if(sub[i]==6){
            credit[j]=3;
            j++;
        }
        if(sub[i]==7){
            credit[j]=3;
            j++;
        }
        if(sub[i]==8){
            credit[j]=3;
            j++;
        }
        if(sub[i]==9){
            credit[j]=3;
            j++;
        }
        if(sub[i]==10){
            credit[j]=3;
            j++;
        }
        if(sub[i]==0){
            credit[j]=0;
            break;
        }
    }
     printf("selected credits:");
    for(i=0;credit[i]!=0;i++){
        printf("%d  ",credit[i]);      //showing selected credits
    }
    printf("\n----------------------\n");
    for(i=0,credit_sum=0;sub[i]!=0;i++){    //showing credit sum
        credit_sum=credit_sum+credit[i];
    }printf("Total credit:%d\n",credit_sum);
        for(i=0;sub[i]!=0;i++){
            for(j=1;;j++){
                if(sub[i]==sub[i+j]){        //multiple checker
                    t=1;
                }
                if(sub[i+j]==0){
                    break;
                }
            }
        }
    if((credit_sum>=15 || credit_sum<=9)||t==1){    //credit checker
        printf("Invalid credit choice\n");
        printf("Credit limit:9-15\n");
        goto label1;
    }
    int cost=5000*credit_sum+10000;
    printf("your total cost= %d tk\n",cost);     //printing cost
    return 0;
}
