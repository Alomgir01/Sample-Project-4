#include<stdio.h>
int main()
{
    int department,sub[10],credit[10],i=0,j=0,credit_sum,t=0;
    printf("                                   ### WELCOME TO EAST WEST UNIVERSITY ###\n");
    printf("\nDEPARTMENT\t\t\t COURSE\n1. CSE\t\t\t|\t 1. CSE103\n2. EEE\t\t\t|\t 2. ENG102\n3. Civil\t\t|\t 3. MATH102\n4. Pharmacy\t\t|\t 4. CHE109\n");
    printf("5. GEB\t\t\t|\t 5. EEE101\n6. BBA\t\t\t|\t 6. CSE106\n7. LAW\t\t\t|\t 7. PHRAM101\n8. English\t\t|\t 8. GEB\n\t\t\t|\t 9. LAW\n\t\t\t|\t 10.BUS101\n");
    printf("\nPlease select any department to see your total payment slip: ");
    scanf("%d",&department);
    switch(department)
    {
    case 1: "CSE"
        ;
        break;
    case 2: "EEE"
        ;
        break;
    case 3: "Civil Engineering"
        ;
        break;
    case 4: "B.Pharm"
        ;
        break;
    case 5: "GEB"
        ;
        break;
    case  6: "Department of BBA"
        ;
        break;
    case 7: "Department of LAW"
        ;
        break;
    case 8: "Department of English"
        ;
        break;
    }
    {
        if(department==1)
        {
            printf("\n\a\t##### Welcome to CSE department #####\n");
            printf("Add courses for this semester(numeric number only):-\n");
        }
        else if(department==2)
        {
            printf("\n\a\t##### Welcome to EEE department #####\n");
            printf("Requiring courses for this semester:-\n");
        }
        else if(department==3)
        {
            printf("\n\a\t##### Welcome to Civil Engineering department #####\n");
            printf("Requiring courses for this semester:-\n");
        }
        else if(department==4)
        {
            printf("\n\a\t##### Welcome to Pharmacy department #####\n");
            printf("Requiring courses for this semester:-\n");
        }

        else if(department==5)
        {
            printf("\n\a\t##### Welcome to GEB department #####\n");
            printf("Requiring courses for this semester:-\n");
        }

        else if(department==6)
        {
            printf("\n\a\t##### Welcome to BBA department #####\n");
            printf("Requiring courses for this semester:-\n");
        }

        else if(department==7)
        {
            printf("\n\a\t##### Welcome to LAW department #####\n");
            printf("Requiring courses for this semester:-\n");
        }

        else if(department==8)
        {

            printf("\n\a\t##### Welcome to ENGLISH department #####\n");
            printf("Requiring courses for this semester:-\n");
        }
    }

    for(i=1;i<sub;i++)
    scanf("%d",&sub[i]);
    switch(sub[i])
    {
    case 1: "CSE"
        ;
        break;
    case 2: "EEE"
        ;
        break;
    case 3: "Civil Engineering"
        ;
        break;
    case 4: "B.Pharm"
        ;
        break;
    case 5: "GEB"
        ;
        break;
    case  6: "Department of BBA"
        ;
        break;
    case 7: "Department of LAW"
        ;
        break;
    case 8: "Department of English"
        ;
        break;
    }

    getch();
}




/*  //taking the desired course of the student as input.
  int credit=0,v;
  //start:
  while(credit>=15)
  {
start:
      printf("sei");
      scanf("%d",&v);
      if(v==0)
      {
          if(credit>=9)
          {
              break;
          }
          else
          {
              printf("ERROR!Enter credits greater than 9 and less than 15 credits.");
              goto start;
          }
      }
      switch(credit)
      {
      case 1:
      {
          credit=credit+3;
      }
      case 2:
      {
          credit=credit+3;
      }
      case 3:
      {
          credit=credit+4.5;
      }
      case 4:
      {
          credit+=4;
      }
      case 5:
      {
          credit=credit+3;
      }
      case 6:
      {
          credit=credit+3;
      }
      case 7:
      {
          credit=credit+3;
      }
      case 8:
      {
          credit+=3;
      }
      case 9:
      {
          credit+=3;
      }
      case 10:
      {
          credit+=3;
      }
      }


  }
  int y=calcredit(credit);
  printf("Total cost is %d",y);
}

int calcredit(int a)
{
  printf("\nEach credit hour cost 5000BDT.\n");
  int total=0,cost=5000;
  total=(a*5000)+adfee;
  return total;
}*/
