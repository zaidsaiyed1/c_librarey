//C laibrary System
#include <stdio.h>
#include <conio.h>
#include <string.h>
//function declaration.
//void add_3(float a, float b, float c);
//tructure declaration.F
struct print
{
  char ppro[1000];
};
void main()
{
  int A, B, C, n1,n3,pn,n4,n5,men=1,n6;
// float n7;
  char nam[50], pro, y,n2,n;
  char cn,addr,n7;
system("cls");
  printf("\t\t\t\t\t==========Welcome to c world.==========\n");
  printf("\t\t\t\t------Here u can perform all practical of c------\n");
  printf(" Please enter yourss name:");
  gets(nam);
  //menu
  //while(men=1)
      while(men==1)
      {
  printf("\n\n\t");
  printf("\t\t1.Print the sentence's programe's.");
  printf("\t\t\t2.Arithematic opreation  programe's.\n\t");
  printf("\t\t\t3.Operater operation in c.");
  printf("\t\t\t4.Conditional statement in c.\n\t");
  printf("\t\t\t5.Play with loop.\t");
  printf("\t\t\t6.Array & string programe's.\n\t");
  printf("\t\t\t7.Pointer programe's.\t");
  printf("\t\t\t8.Function programe's.\n\t");
  printf("\t\t\t9.Structure programe's.\t");
  printf("\t\t\t10.File programe's.\n\t");
  printf("\t\t\t11.Add your feedback.\t");
  printf("\t\t\t12.Exit...\n\t");
  printf("Chose your options:");
  scanf("%d", &n1);
  switch (n1)
  {
  case 1:
   system("cls");
    printf("\t\t\t1.Print the sentence's programe's.\n");
    printf("\t\tplease select by which methoed do you want to print sentence.\n\n");
    printf("\t\t\tA.Print by printf scanf.\n");
    printf("\t\t\tB.Print by array in c\n");
    printf("\t\t\tC.Print by string function.\n");
   printf("Enter your choice-");
   scanf("%s",&n2);
    switch (n2)
    {
    case 'A':
    printf("\t\tA.print by printf scanf programes--\n");
    printf("\t\t\t1.programe to print hello world.\n");
    printf("\t\t\t2.Programe to print personal information (Name,address, collage name, phone number).\n");
    printf("Please enter your programe choice:-");
    scanf("%d",&n3);
    if(n3 == 1)
    {
      printf("\n1.programe of hello world--\n");
       printf("\n");
      printf("Hellow world\n\n");
       printf("You want to see a programe of this programe press y/n:");
      scanf("%s", &pro);
      if (pro == 'y')
      {
        struct print pro[1000];
   strcpy(pro[0].ppro,"\t\t\t\t#include<stdio.h>\n\t\t\t\t#include<conio.h>\n\t\t\t\tvoid main()\n\t\t\t\t{\n\t\t\t\tclrscr();\n\t\t\t\tprintf(''hello world'');\n\t\t\t\tgetch();\n\t\t\t\t}");
    printf("Progrme :\n%s",pro[0].ppro);
      }
      else {
        printf("you exit the case");
      }
    }
    else if(n3 == 2)
    {
      printf("\n2.programe of personal deatial--\n");
       printf("\nPersonal information:-\n");
          printf("Name: your name\n");
           printf("Address: your address\n");
            printf("Colage name:\n");
             printf("phone no: your phone number\n");
             printf("\n");
                printf("You want to see a programe of this programe press y/n:");
      scanf("%s", &pro);
         if (pro == 'y')
         {
        struct print pro[1000];
           strcpy(pro[1].ppro,"\t\t\t\t#include<stdio.h>\n\t\t\t\t#include<conio.h>\n\t\t\t\tvoid main()\n\t\t\t\t{\n\t\t\t\tclrscr();\n\t\t\t\tprintf(''Personal information:-'');\n\t\t\t\tprintf(''Name: your name'');\n\t\t\t\tprintf(''Address: your address'');\n\t\t\t\tprintf(''Colage name:'');\n\t\t\t\tprintf(''phone no: your phone number'');\n\t\t\t\tgetch();\n\t\t\t\t\t}");
              printf("Progrme :\n%s",pro[1].ppro);

               }
                 else
                    {
                       printf("You enter the wrong value");
                          }
    }
    else
    {
     printf("you exit the case");
    }
      break;
       case 'B':
           printf("\t\t\tB.Print by array in c\n");
             printf("\t\t\t1.Programe to print five elements initialization in array.\n");
             printf("\t\t\t2.Programe to print five elements stored in array.\n");
             printf("Enter youdr choice--");
             scanf("%d",&n4);
          if (n4 == 1)
          {
            printf("\n1.programe of initialization in array--\n");
            int i;
            int a[5]={1,2,3,4,5};
            a[0]=1;
            a[1]=2;
            a[2]=3;
            a[3]=4;
            a[4]=5;
               for(i=0; i<5; i++)
               {
                 printf("%d\n",a[i]);
               }
                printf("You want to see a programe of this programe press y/n:");
      scanf("%s", &pro);
      if (pro == 'y')
      {
        struct print pro[1000];
strcpy(pro[2].ppro,"\t\t\t\t#include<stdio.h>\n\t\t\t\t#include<conio.h>\n\t\t\t\tvoid main()\n\t\t\t\t{\n\t\t\t\tint i;\n\t\t\t\tint a[5]={1,2,3,4,5};\n\t\t\t\ta[0]=1;\n\t\t\t\ta[1]=2;\n\t\t\t\ta[2]=3;\n\t\t\t\ta[3]=4;\n\t\t\t\ta[4]=5;\n\t\t\t\tclrscr();\n\t\t\t\tfor(i=0; i<5; i++)\n\t\t\t\t{\n\t\t\t\tprintf(''%d'',a[i]);\n\t\t\t\t};\n\t\t\t\tgetch();\n\t\t\t\t}");
    printf("Progrme :\n%s",pro[2].ppro);
      }
      else {
        printf("you exit the case");
      }
               }
else if(n4 == 2)
{
  printf("\n2.programe of stored in array--\n");
    int a[5]={1,2,3,4,5};
    int i;
    for(i=0; i<5; i++)
    {
      printf("%d\n",a[i]);

    }
    printf("You want to see a programe of this programe press y/n:");
      scanf("%s", &pro);
      if (pro == 'y')
      {
        struct print pro[1000];
strcpy(pro[3].ppro,"\t\t\t\t#include<stdio.h>\n\t\t\t\t#include<conio.h>\n\t\t\t\tvoid main()\n\t\t\t\t{\n\t\t\t\tint i;\n\t\t\t\tint a[5]={1,2,3,4,5};\n\t\t\t\tclrscr();\n\t\t\t\tfor(i=0; i<5; i++)\n\t\t\t\t{\n\t\t\t\tprintf(''%d'',a[i]);\n\t\t\t\t}\n\t\t\t\tgetch();\n\t\t\t\t}");
    printf("Progrme :\n%s",pro[3].ppro);
      }
      else {
        printf("you exit the case");
      }

}
     break;
           case 'C':
               printf("\t\t\tC.Print by string function.\n");
                   printf("\t\t\t1.Programe to read and write string.\n");
                    printf("Enter your choice--");
             scanf("%d",&n5);
          if (n5 == 1)
          {
            printf("\t\t\t\n1.Programe to read and write string--\n");
            char str[20];
              printf("Enter your name:");
              scanf("%s",str);

              printf("%s",str);
               }
               printf("\nYou want to see a programe of this programe press y/n:");
      scanf("%s", &pro);
      if (pro == 'y')
      {
        struct print pro[1000];
strcpy(pro[4].ppro,"\t\t\t\t#include<stdio.h>\n\t\t\t\t#include<conio.h>\n\t\t\t\tvoid main()\n\t\t\t\tclrscr();\n\t\t\t\t printf(''Enter your name:'');\n\t\t\t\tscanf(''%s'',str);\n\t\t\t\tprintf(''%s'',str);\n\t\t\t\tgetch();\n\t\t\t\t}");
    printf("Progrme :\n%s",pro[4].ppro);
      }
      else {
        
        printf("you exit the case");
      }
break;
           default:
       printf("You enter wrong value");
       break;
      // goto *default;
    
   }
    break;

    case 2:
       system("cls");

  {
       printf("\t\t\t2.Arithematic opreation  programe's.\n");
      printf("\t\tplease select by which programe do you want performe.\n\n");
       printf("\t\t\t1.Normal arithematic operation programe's.\n");
       printf("\t\t\t2.Other arithematic calculation programe's\n");
        printf("Please enter your programe choice:-");
    scanf("%d",&n6);
    switch(n6)
    {
    case 1:
         printf("\t\t\t1.Normal arithematic operation programe's.\n");
         printf("\t\t\ta.Programe of addition of 2 numbers.\n");
         printf("\t\t\tb.programe of addition of 3 numbers.\n");
         printf("\t\t\tc.programe of subtraction of 2 numbers.\n");
         printf("\t\t\td.programe of multiplication of 2 numbers.\n");
         printf("\t\t\te.programe of Division of 2 numbers.\n");
         printf("\t\t\tf.programe to read marks of 3 subject and calculate total, average of them.\n");
          printf("Please enter your programe choice:-");
   // scanf("%d",&n7);
       scanf("%s",&n7);
    if (n7 == 'a')
    {
      system("cls");
     printf("\t\t\t1.1.Programe of addition of 2 numbers--\n\n");
    float a,b,c;
     printf("Enter the value of a:");
     scanf("%f",&a);
     printf("Enter the value of b:");
     scanf("%f",&b);
     c=a+b;
     printf("Addition of=%f",c);
        printf("\nYou want to see a programe of this programe  press y/n:");
      scanf("%s", &pro);
      if (pro == 'y')
      {
        struct print pro[1000];
strcpy(pro[5].ppro,"\t\t\t\t#include<stdio.h>\n\t\t\t\t#include<conio.h>\n\t\t\t\tvoid main()\n\t\t\t\tclrscr();\n\t\t\t\t float a,b,c;\n\t\t\t\t printf(''Enter the value of a:'');\n\t\t\t\tscanf(''%f'',&a);\n\t\t\t\t printf(''Enter the value of b:'');\n\t\t\t\tscanf(''%f'',&b);\n\t\t\t\tc=a+b;\n\t\t\t\tprintf(''Addition of=%f'',c);\n\t\t\t\tgetch();\n\t\t\t\t}");
    printf("Progrme :\n%s",pro[5].ppro);
      }
      else
      {
        printf("you exit the case");
      }
    }
    else if (n7 == 'b')
      {
     printf("\t\t\t1.2.programe of addition of 3 numbers.\n");
     float a,b,c,ans;
     printf("Enter the value of a,b,c:");
     scanf("%f\n%f\n%f",&a,&b,&c);
     //add_3(a,b,c);
      ans=a+b+c;
      printf("Addition of 3 number=%f",ans);
     printf("\nYou want to see a programe of this programe  press y/n:");
      scanf("%s", &pro);
       if (pro == 'y')
        {
        struct print pro[1000];
         strcpy(pro[6].ppro,"\t\t\t\t#include<stdio.h>\n\t\t\t\t#include<conio.h>\n\t\t\t\tvoid main()\n\t\t\t\tclrscr();\n\t\t\t\t float a,b,c;\n\t\t\t\t printf(''Enter the value of a&b&c::'');\n\t\t\t\tscanf(''%d %d %d'',&a,&b,&c);\n\t\t\t\tc=a+b+c;\n\t\t\t\tprintf(''addition of=%f'',c);\n\t\t\t\tgetch();\n\t\t\t\t}");
           printf("Progrme :\n%s",pro[6].ppro);
          }
        else
         {
        printf("you exit the case");
         }
      }
    else if (n7 == 'c')
      {
     printf("\t\t\tc.programe of subtraction of 2 numbers.\n");
     float a,b,c;
     printf("Enter the value of a,b:");
     scanf("%f\n%f",&a,&b);
     c= a-b;
     printf("Subtraction = %f",c);
     printf("\nYou want to see a programe of this programe  press y/n:");
      scanf("%s", &pro);
     if (pro == 'y')
      {
        struct print pro[1000];
     strcpy(pro[7].ppro,"\t\t\t\t#include<stdio.h>\n\t\t\t\t#include<conio.h>\n\t\t\t\tvoid main()\n\t\t\t\tclrscr();\n\t\t\t\t float a,b,c;\n\t\t\t\t printf(''Enter the value of a&b::'');\n\t\t\t\tscanf(''%f %f '',&a,&b,&c);\n\t\t\t\tc=a-b;\n\t\t\t\tprintf(''Subtraction of=%f'',c);\n\t\t\t\tgetch();\n\t\t\t\t}");
    printf("Progrme :\n%s",pro[7].ppro);
      }
        else
      {
        printf("you exit the case");
      }
      }
    else if (n7 == 'd')
      {
     printf("\t\t\td.programe of multiplication of 2 numbers.\n");
     float a,b,c;
     printf("Enter the value of a,b:");
     scanf("%f\n%f",&a,&b);
     c= a*b;
     printf("Subtraction = %f",c);
     printf("\nYou want to see a programe of this programe  press y/n:");
      scanf("%s", &pro);
     if (pro == 'y')
      {
        struct print pro[1000];
     strcpy(pro[8].ppro,"\t\t\t\t#include<stdio.h>\n\t\t\t\t#include<conio.h>\n\t\t\t\tvoid main()\n\t\t\t\tclrscr();\n\t\t\t\t float a,b,c;\n\t\t\t\t printf(''Enter the value of a&b::'');\n\t\t\t\tscanf(''%f %f '',&a,&b);\n\t\t\t\tc=a*b;\n\t\t\t\tprintf(''Multiplication of=%f'',c);\n\t\t\t\tgetch();\n\t\t\t\t}");
     printf("Progrme :\n%s",pro[8].ppro);
      }
        else
      {
        printf("you exit the case");
      }
      }
    else if (n7 == 'e')
      {
     printf("\t\t\te.programe of division of 2 numbers.\n");
     float a,b,c;
     printf("Enter the value of a,b:");
     scanf("%f\n%f",&a,&b);
     
     c= a/b;
     printf("Subtraction = %f",c);
     printf("\nYou want to see a programe of this programe  press y/n:");
      scanf("%s", &pro);
     if (pro == 'y')
      {
        struct print pro[1000];
     strcpy(pro[9].ppro,"\t\t\t\t#include<stdio.h>\n\t\t\t\t#include<conio.h>\n\t\t\t\tvoid main()\n\t\t\t\tclrscr();\n\t\t\t\t float a,b,c;\n\t\t\t\t printf(''Enter the value of a&b::'');\n\t\t\t\tscanf(''%f %f '',&a,&b);\n\t\t\t\tc=a/b;\n\t\t\t\tprintf(''Division of=%f'',c);\n\t\t\t\tgetch();\n\t\t\t\t}");
    printf("Progrme :\n%s",pro[9].ppro);
      }
        else
      {
        printf("you exit the case");
      }
      }
   /* else
    {
     printf("number is ivalid");
    }*/
      break;
    
    default:
       printf("You enter wrong value");
      break;
    
      
  }
      default:
       printf("You exit the case");
       break;
  }
   
  }
   printf("\nWould you like to perform another opreation press 1/0 1=yes, 0=no:");
      scanf("%d",&men);  

  }

    printf("Programe is end.\n\n");
    printf("\t\t\tThank you!");
    printf("\nCreated by-- Saiyed mohd zaid.");
    printf("\nIdea by-- Saiyed mohd zaid.");
  
  getch();
 
 }


//function defination
/*void add_3(float a,float b,float c)
{
  float ans;
 
}*/