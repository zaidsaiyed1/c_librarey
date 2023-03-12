#include<stdio.h>
#include<conio.h>
#include<string.h>
#define PI 3.14
void printhello()
{
    printf("Hello, world!");
}
void pro1()
{
    printf("Program :\n");
    printf("\t\t\t\t#iclude<stio.h>\n");
    printf("\t\t\t\t#include<conio.h>\n");
    printf("\t\t\t\tvoid main()\n");
    printf("\t\t\t\t{\n");
    printf("\t\t\t\tclrscr();\n");
    printf("\t\t\t\tprintf(\"Hello, world!\");\n");
    printf("\t\t\t\tgetch();\n");
    printf("\t\t\t\t}");
}

void printpersonaldet()
{
    printf("\n2.programe of personal deatial--\n");
    printf("\nPersonal information:-\n");
    printf("Name: your name\n");
    printf("Address: your address\n");
    printf("Colage name:\n");
    printf("phone no: your phone number\n");
    printf("\n");
}
void pro2()
{
    printf("\t\t\t\t#include<stdio.h>\n\t\t\t\t#include<conio.h>");
    printf("\n\t\t\t\tvoid main()");
    printf("\n\t\t\t\t{\n\t\t\t\tclrscr();");
    printf("\n\t\t\t\tprintf(\"Personal information:-\");");
    printf("\n\t\t\t\tprintf(\"Name: your name\");");
    printf("\n\t\t\t\tprintf(\"Address: your address\");");
    printf("\n\t\t\t\tprintf(\"Colage name:\");");
    printf("\n\t\t\t\tprintf(\"phone no: your phone number\");");
    printf("\n\t\t\t\tgetch();\n\t\t\t\t}");
}
void printintalizearr()
{
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
}
void pro3()
{
    printf("\t\t\t\t#include<stdio.h>\n\t\t\t\t#include<conio.h>");
    printf("\n\t\t\t\tvoid main()\n\t\t\t\t{\n\t\t\t\tclrscr();");
    printf("\n\t\t\t\tint i;");
    printf("\n\t\t\t\tint a[5]={1,2,3,4,5};");
    printf("\n\t\t\t\ta[0]=1;\n\t\t\t\ta[1]=2;\n\t\t\t\ta[2]=3;\n\t\t\t\ta[3]=4;\n\t\t\t\ta[4]=5;");
    printf("\n\t\t\t\tclrscr();\n\t\t\t\tfor(i=0; i<5; i++)");
    puts("\n\t\t\t\t{\n\t\t\t\tprintf(\"%d\\n\",a[i]);\n\t\t\t\t}");
    printf("\n\t\t\t\tgetch();\n\t\t\t\t}");
}
void printstoredarr()
{
    printf("\n2.programe of stored in array--\n");
    int a[5]={1,2,3,4,5};
    int i;
    for(i=0; i<5; i++)
    {
      printf("%d\n",a[i]);
    }
    }
void pro4()
{
    printf("\t\t\t\t#include<stdio.h>\n\t\t\t\t#include<conio.h>");
    printf("\n\t\t\t\tvoid main()\n\t\t\t\t{\n\t\t\t\tclrscr();");
    printf("\n\t\t\t\tint a[5]={1,2,3,4,5};\n\t\t\t\tint i;");
    printf("\n\t\t\t\tfor(i=0; i<5; i++)\n\t\t\t\t{");
    puts("\n\t\t\t\tprintf(\"%d\\n\",a[i]);\n\t\t\t\t}");
    printf("\n\t\t\t\tgetch();\n\t\t\t\t}");
}
void printstrbystrfun()
{
    printf("\t\t\t\n1.Programe to read and write string--\n");
    char str[20];
    printf("Enter your name:");
    gets(str);
    puts(str);
}
void pro5()
{
    printf("\t\t\t\t#include<stdio.h>\n\t\t\t\t#include<conio.h>");
    printf("\n\t\t\t\tvoid main()\n\t\t\t\t{\n\t\t\t\tclrscr();");
    printf("\n\t\t\t\tchar str[20];");
    printf("\n\t\t\t\tprintf(\"Enter your name:\");");
    printf("\n\t\t\t\tgets(str);");
    printf("\n\t\t\t\tputs(str);");
    printf("\n\t\t\t\tgetch();\n\t\t\t\t}");
}
void add2no(float a, float b)
{
    float ans;
    ans=a+b;
    printf("Addition ans= %.3f...",ans);
}
void pro6()
{
    printf("\t\t\t\t#include<stdio.h>\n\t\t\t\t#include<conio.h>");
    printf("\n\t\t\t\tvoid main()\n\t\t\t\t{\n\t\t\t\tclrscr();\n\t\t\t\tfloat a,b,ans");
    puts("\n\t\t\t\tprintf(\"Enter the value of a:\");\n\t\t\t\tscanf(\"%f\",&a);");  
    puts("\t\t\t\tprintf(\"Enter the value of b:\");\n\t\t\t\tscanf(\"%f\",&b);");
    puts("\t\t\t\tans=a+b;\n\t\t\t\tprintf(\"Addition ans= %f\",ans);");
    printf("\t\t\t\tgetch();\n\t\t\t\t}");
}
void add3no(float a, float b, float c)
{
    float ans;
    ans=a+b+c;
    printf("Addition of 3 numbers ans= %.3f...",ans);
}
void pro7()
{
    printf("\t\t\t\t#include<stdio.h>\n\t\t\t\t#include<conio.h>");
    printf("\n\t\t\t\tvoid main()\n\t\t\t\t{\n\t\t\t\tclrscr();\n\t\t\t\tfloat a,b,c,ans");
    puts("\n\t\t\t\tprintf(\"Enter the value of a:\");\n\t\t\t\tscanf(\"%f\",&a);");  
    puts("\t\t\t\tprintf(\"Enter the value of b:\");\n\t\t\t\tscanf(\"%f\",&b);");
    puts("\t\t\t\tprintf(\"Enter the value of c:\");\n\t\t\t\tscanf(\"%f\",&c);");
    puts("\t\t\t\tans=a+b+c;\n\t\t\t\tprintf(\"Addition ans= %f\",ans);");
    printf("\t\t\t\tgetch();\n\t\t\t\t}");  
}
void sub2no(float x, float y)
{
    float ans;
    ans = x-y;
    printf("Subtraction ans=%.4f...",ans);
}
void pro8()
{
    printf("\t\t\t\t#include<stdio.h>\n\t\t\t\t#include<conio.h>");
    printf("\n\t\t\t\tvoid main()\n\t\t\t\t{\n\t\t\t\tclrscr();\n\t\t\t\tfloat a,b,ans");
    puts("\n\t\t\t\tprintf(\"Enter the value of a:\");\n\t\t\t\tscanf(\"%f\",&a);");  
    puts("\t\t\t\tprintf(\"Enter the value of b:\");\n\t\t\t\tscanf(\"%f\",&b);");
    puts("\t\t\t\tans=a-b;\n\t\t\t\tprintf(\"Subtraction ans= %f\",ans);");
    printf("\t\t\t\tgetch();\n\t\t\t\t}");   
}
void mul2no(float a, float b)
{
    float ans;
     ans= a*b;
     printf("Multiplication value = %.3f...",ans);
}
void pro9()
{
    printf("\t\t\t\t#include<stdio.h>\n\t\t\t\t#include<conio.h>");
    printf("\n\t\t\t\tvoid main()\n\t\t\t\t{\n\t\t\t\tclrscr();\n\t\t\t\tfloat a,b,ans");
    puts("\n\t\t\t\tprintf(\"Enter the value of a:\");\n\t\t\t\tscanf(\"%f\",&a);");  
    puts("\t\t\t\tprintf(\"Enter the value of b:\");\n\t\t\t\tscanf(\"%f\",&b);");
    puts("\t\t\t\tans=a*b;\n\t\t\t\tprintf(\"Multiplication ans= %f\",ans);");
    printf("\t\t\t\tgetch();\n\t\t\t\t}");
}
void div2no(float a, float b)
{
    float ans;
    ans= a/b;
    printf("Divison Ans = %f",ans);
}
void pro10()
{
    printf("\t\t\t\t#include<stdio.h>\n\t\t\t\t#include<conio.h>");
    printf("\n\t\t\t\tvoid main()\n\t\t\t\t{\n\t\t\t\tclrscr();\n\t\t\t\tfloat a,b,ans");
    puts("\n\t\t\t\tprintf(\"Enter the value of a:\");\n\t\t\t\tscanf(\"%f\",&a);");  
    puts("\t\t\t\tprintf(\"Enter the value of b:\");\n\t\t\t\tscanf(\"%f\",&b);");
    puts("\t\t\t\tans=a/b;\n\t\t\t\tprintf(\"divison ans= %f\",ans);");
    printf("\t\t\t\tgetch();\n\t\t\t\t}");    
}
void sub3total_avg(float a, float b, float c)
{
    float total,avg;
    total = a+b+c;
    avg = total/3;
    printf("Total of subject = %f\n",total);
    printf("Average of 3 subject = %f",avg);
}
void pro11()
{
    printf("\t\t\t\t#include<stdio.h>\n\t\t\t\t#include<conio.h>");
    printf("\n\t\t\t\tvoid main()\n\t\t\t\t{\n\t\t\t\tclrscr();\n\t\t\t\tfloat a,b,c,ans");
    puts("\n\t\t\t\tprintf(\"Enter the value of subject a:\");\n\t\t\t\tscanf(\"%f\",&a);");  
    puts("\t\t\t\tprintf(\"Enter the value of subject b:\");\n\t\t\t\tscanf(\"%f\",&b);");
    puts("\t\t\t\tprintf(\"Enter the value of subject c:\");\n\t\t\t\tscanf(\"%f\",&c);");
    printf("\t\t\t\ttotal=a+b+c;\n\t\t\t\tavg=total/3;");
    puts("\n\t\t\t\tprintf(\"Total of subject = %f\",total);\n\t\t\t\tprintf(\"Average of 3 subject = %f\",avg);");
    printf("\t\t\t\tgetch();\n\t\t\t\t}");
}
void areaofcircle(float r)
{
   float area;
   area = PI*r*r;
   printf("Area of circle= %.3f...",area);   
}
void pro12()
{
    printf("\t\t\t\t#include<stdio.h>\n\t\t\t\t#include<conio.h>\n\t\t\t\t#define PI 3.14");
    printf("\n\t\t\t\tvoid main()\n\t\t\t\t{\n\t\t\t\tclrscr();\n\t\t\t\tfloat r,PI,ans;");
    puts("\n\t\t\t\tprintf(\"Enter the value of radius:\");\n\t\t\t\tscanf(\"%f\",&r);");
    printf("\t\t\t\tans=PI*r*r;");
    puts("\n\t\t\t\tprintf(\"Area of circle= %f\",ans)");
    printf("\t\t\t\tgetch();\n\t\t\t\t}");  
}
void areaofrectangel(float a, float b)
{
float ans;
ans=a*b;
printf("Area of rectangel= %.3f...",ans);
}
void pro13()
{
    printf("\t\t\t\t#include<stdio.h>\n\t\t\t\t#include<conio.h>");
    printf("\n\t\t\t\tvoid main()\n\t\t\t\t{\n\t\t\t\tclrscr();\n\t\t\t\tint l,b,ans;");
    puts("\n\t\t\t\tprintf(\"Enter the value of length:\");\n\t\t\t\tscanf(\"%d\",&l);");
    puts("\t\t\t\tprintf(\"Enter the value of breath:\");\n\t\t\t\tscanf(\"%d\",&b);");
    printf("\t\t\t\tans=l*b;");
    puts("\n\t\t\t\tprintf(\"Area of rectangel= %d\",ans)");
    printf("\t\t\t\tgetch();\n\t\t\t\t}");     
}
void areaofsquare(float a)
{
  float ans;
  ans = a*a;
  printf("Area of square = %.3f...",ans);
}
 void pro14()
{
    printf("\t\t\t\t#include<stdio.h>\n\t\t\t\t#include<conio.h>");
    printf("\n\t\t\t\tvoid main()\n\t\t\t\t{\n\t\t\t\tclrscr();\n\t\t\t\tint a,ans;");
    puts("\n\t\t\t\tprintf(\"Enter the value of area:\");\n\t\t\t\tscanf(\"%d\",&a);");
    printf("\t\t\t\tans=a*a;");
    puts("\n\t\t\t\tprintf(\"Area of square= %d\",ans)");
    printf("\t\t\t\tgetch();\n\t\t\t\t}");   
}
void areaoftriangel(float b, float h)
{
    float ans;
    ans = 1/2*b*h;
    printf("Area of triangle = %f\n", ans);
}
void pro15()
{
    printf("\t\t\t\t#include<stdio.h>\n\t\t\t\t#include<conio.h>");
    printf("\n\t\t\t\tvoid main()\n\t\t\t\t{\n\t\t\t\tclrscr();\n\t\t\t\tint b,h,ans;");
    puts("\n\t\t\t\tprintf(\"Enter the value of base:\");\n\t\t\t\tscanf(\"%d\",&b);");
    puts("\t\t\t\tprintf(\"Enter the value of higth:\");\n\t\t\t\tscanf(\"%d\",&h);");
    printf("\t\t\t\tans=1/2*b*h;");
    puts("\n\t\t\t\tprintf(\"Area of triangel= %f\",ans)");
    printf("\t\t\t\tgetch();\n\t\t\t\t}");
}
void volumeofcylinder(float r, float h)
{
    float ans;
    ans = PI*r*r*h;
    printf("Volume of a cylinder = %f",ans);
}
void pro16()
{
    printf("\t\t\t\t#include<stdio.h>\n\t\t\t\t#include<conio.h>\n\t\t\t\t#define PI 3.14");
    printf("\n\t\t\t\tvoid main()\n\t\t\t\t{\n\t\t\t\tclrscr();\n\t\t\t\tint r,h,ans;");
    puts("\n\t\t\t\tprintf(\"Enter the radius of cylinder :\");\n\t\t\t\tscanf(\"%d\",&r);");
    puts("\t\t\t\tprintf(\"Enter the higth of cylinder :\");\n\t\t\t\tscanf(\"%d\",&h);");
    printf("\t\t\t\tans=PI*r*r*h;");
    puts("\n\t\t\t\tprintf(\"Area of triangel= %d\",ans)");
    printf("\t\t\t\tgetch();\n\t\t\t\t}"); 
}
void perimeterofcircle(float r)
{
    float ans;
    ans = 2*PI*r;
    printf("Peramiter of circle = %.3f",ans);
}
void pro17()
{
    printf("\t\t\t\t#include<stdio.h>\n\t\t\t\t#include<conio.h>\n\t\t\t\t#define PI 3.14");
    printf("\n\t\t\t\tvoid main()\n\t\t\t\t{\n\t\t\t\tclrscr();\n\t\t\t\tint r,ans;");
    puts("\n\t\t\t\tprintf(\"Enter the radius of circle:\");\n\t\t\t\tscanf(\"%d\",&r);");
    printf("\t\t\t\tans=2*r*h;");
    puts("\n\t\t\t\tprintf(\"Area of triangel= %d\",ans)");
    printf("\t\t\t\tgetch();\n\t\t\t\t}"); 
}
void perimeterofrectangel(float l, float h)
{
    float ans;
    ans = 2*(l+h);
    printf("Perimeter of a rectangel= %.3f",ans);
}
void pro18()
{
    printf("\t\t\t\t#include<stdio.h>\n\t\t\t\t#include<conio.h>");
    printf("\n\t\t\t\tvoid main()\n\t\t\t\t{\n\t\t\t\tclrscr();\n\t\t\t\tint l,h,ans;");
    puts("\n\t\t\t\tprintf(\"Enter the length of rectangel:\");\n\t\t\t\tscanf(\"%d\",&l);");
    puts("printf(\"Enter the height of rectangel:\");\n\t\t\t\tscanf(\"%d\",&h);");
    printf("\t\t\t\tans=2*(l+h);");
    puts("\n\t\t\t\tprintf(\"Perameter of rectangel= %d\",ans)");
    printf("\t\t\t\tgetch();\n\t\t\t\t}"); 
}
void perimeterofsquare(float s)
{
    float ans;
    ans = 4*s;
    printf("Perameter of square = %.3f",ans);

}
void pro19()
{
    printf("\t\t\t\t#include<stdio.h>\n\t\t\t\t#include<conio.h>");
    printf("\n\t\t\t\tvoid main()\n\t\t\t\t{\n\t\t\t\tclrscr();\n\t\t\t\tint s,ans;");
    puts("\n\t\t\t\tprintf(\"Enter the side of square:\");\n\t\t\t\tscanf(\"%d\",&s);");
    printf("\t\t\t\tans=4*s;");
    puts("\n\t\t\t\tprintf(\"Perameter of square= %d\",ans)");
    printf("\t\t\t\tgetch();\n\t\t\t\t}"); 
}
void fahrenhtocelsius(float f)
{
    float ans;
    ans=((f-32)*5)/9;
    printf("F to c = %.4f",ans);
}
void pro20()
{
    printf("\t\t\t\t#include<stdio.h>\n\t\t\t\t#include<conio.h>");
    printf("\n\t\t\t\tvoid main()\n\t\t\t\t{\n\t\t\t\tclrscr();\n\t\t\t\tint F,ans;");
    puts("\n\t\t\t\tprintf(\"Enter the value of fahrenheit:\");\n\t\t\t\tscanf(\"%d\",&F);");
    printf("\t\t\t\tans=((f-32)*5)/9;");
    puts("\n\t\t\t\tprintf(\"Fahrenheit to celsius= %d\",ans)");
    printf("\t\t\t\tgetch();\n\t\t\t\t}"); 
}
void celsitofahrenheit(float c)
{
    float ans;
    ans=((c-32)*5)/9;
    printf("F to c = %.4f",ans);
}
void pro21()
{
    printf("\t\t\t\t#include<stdio.h>\n\t\t\t\t#include<conio.h>");
    printf("\n\t\t\t\tvoid main()\n\t\t\t\t{\n\t\t\t\tclrscr();\n\t\t\t\tint F,ans;");
    puts("\n\t\t\t\tprintf(\"Enter the value of celsius:\");\n\t\t\t\tscanf(\"%d\",&F);");
    printf("\t\t\t\tans=((c-32)*5)/9;");
    puts("\n\t\t\t\tprintf(\"Celsius to fahrenheit= %d\",ans)");
    printf("\t\t\t\tgetch();\n\t\t\t\t}"); 
}
void simpleinterest(float p, float r, float t)
{
    float ans;
    ans=(p*r*t)/100;
    printf("Simple interest=%.4f",ans);
}
void pro22()
{
    printf("\t\t\t\t#include<stdio.h>\n\t\t\t\t#include<conio.h>");
    printf("\n\t\t\t\tvoid main()\n\t\t\t\t{\n\t\t\t\tclrscr();\n\t\t\t\tint p,r,t,ans;");
    puts("\n\t\t\t\tprintf(\"Enter the value of principal amount:\");\n\t\t\t\tscanf(\"%d\",&p);");
    puts("\t\t\t\tprintf(\"Enter the value of rate of interest:\");\n\t\t\t\tscanf(\"%d\",&r);");
    puts("\t\t\t\tprintf(\"Enter the value of time(in yeae):\");\n\t\t\t\tscanf(\"%d\",&t);");
    printf("\t\t\t\tans=(p*r*t)/100;");
    puts("\n\t\t\t\tprintf(\"Answer of S.I= %d\",ans)");
    printf("\t\t\t\tgetch();\n\t\t\t\t}"); 
}
void cm_to_m(float cm)
{
    float m,km;
    m=cm/100;
    km=cm/1000;
    printf("CM to M = %f\n",m);
    printf("CM to KM = %f",km);
}
void pro23()
{
    printf("\t\t\t\t#include<stdio.h>\n\t\t\t\t#include<conio.h>");
    printf("\n\t\t\t\tvoid main()\n\t\t\t\t{\n\t\t\t\tclrscr();\n\t\t\t\tint cm,m,km;");
    puts("\n\t\t\t\tprintf(\"Enter the centimeter value:\");\n\t\t\t\tscanf(\"%d\",&cm);");
    printf("\t\t\t\tm=cm/100;\n\t\t\t\tkm=cm/1000;");
    puts("\n\t\t\t\tprintf(\"CM to M= %d\",m\")");
    puts("\t\t\t\tprintf(\"CM to kM= %d\",km\")");
    printf("\t\t\t\tgetch();\n\t\t\t\t}"); 
   
}
void memory_convertion(float bit)
{
    float byt,kb,mb,gb,tb;
    byt = bit/8;
    printf("byte=%f\n",byt);
    kb = byt/1024;
    printf("kb=%f\n",kb);
    mb = kb/1024;
    printf("mb=%f\n",mb);
    gb = mb/1024;
    printf("gb=%f\n",gb);
    tb = gb/1024;
    printf("tb=%f",tb);
}
void pro24()
{
    printf("\t\t\t\t#include<stdio.h>\n\t\t\t\t#include<conio.h>");
    printf("\n\t\t\t\tvoid main()\n\t\t\t\t{\n\t\t\t\tclrscr();\n\t\t\t\tint bit,byt,kb,mb,gb,tb;");
    puts("\n\t\t\t\tprintf(\"Enter the bit value:\");\n\t\t\t\tscanf(\"%d\",&bit);");
    printf("\n\t\t\t\tbyt=bit/8;\n\t\t\t\tkb=byt/1024;");
    printf("\n\t\t\t\tmb=kb/1024;\n\t\t\t\tgb=mb/1024;");
    printf("\n\t\t\t\ttb=gb/1024;");
    puts("\n\t\t\t\tprintf(\"byt= %d\",byt);\n\t\t\t\tprintf(\"KB= %d\",kb);");
    puts("\t\t\t\tprintf(\"MB to Bytes= %d\",mb);\n\t\t\t\tprintf(\"GB to Bytes= %d\",gb);");
    puts("\t\t\t\tprintf(\"TB= %d\",tb);");
    printf("\t\t\t\tgetch();\n\t\t\t\t}"); 

}
void swap_values_with_thirvar(float a, float b)
{
  float temp;
  temp = a;
  a = b;
  b = temp;
  printf("a=%,4f",a);
  printf("b=%.4f",b);
}
void pro25()
{
    printf("\t\t\t\t#include<stdio.h>\n\t\t\t\t#include<conio.h>");
    printf("\n\t\t\t\tvoid main()\n\t\t\t\t{\n\t\t\t\tclrscr();\n\t\t\t\tint a,b,temp;");
    puts("\n\t\t\t\tprintf(\"Enter the values of a & b:\");\n\t\t\t\tscanf(\"%d %d\",&a,&b);");
    printf("\n\t\t\t\ttemp = a;");
    printf("\n\t\t\t\ta = b;");
    printf("\n\t\t\t\tb = temp;");
    puts("\n\t\t\t\tprintf(\"a=%d b=%d\",a,b);");
    printf("\t\t\t\tgetch();\n\t\t\t\t}"); 
}
void swap_values_without_thirvar(float a, float b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    b=a-b;
    printf("a=%.4f",a);
    printf("b=%.4f",b);
}
void pro26()
{
    printf("\t\t\t\t#include<stdio.h>\n\t\t\t\t#include<conio.h>");
    printf("\n\t\t\t\tvoid main()\n\t\t\t\t{\n\t\t\t\tclrscr();\n\t\t\t\tint a,b;");
    puts("\n\t\t\t\tprintf(\"Enter the values of a & b:\");\n\t\t\t\tscanf(\"%d %d\",&a,&b);");
    printf("\n\t\t\t\ta=a+b;\n\t\t\t\tb=a-b;\n\t\t\t\ta=a-b;\n\t\t\t\tb=a-b;");
    puts("\n\t\t\t\tprintf(\"a=%d b=%d\",a,b);");
    printf("\t\t\t\tgetch();\n\t\t\t\t}"); 
}