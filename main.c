#include<stdio.h>
#include<stdlib.h>
int main()
{
system("color f0");
   int i,a,b;
   char c,name[]="",t,num,array[]="_o_a_d_",array1[]="_h_n_",array2[]="_e_",array3[]="d__r",array4[]="_r_b_c",array5[]="_m_r_t_s",array6[]="_i_l_n_",array7[]="_h_k_s_e_r_",array8[]="_u_i_e_",array9[]="_h_r_a_i_t",array10[]="_a_n_i_e",array11[]="_e_r_";
   printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tHANGMAN GAME\n\n\t\t\t\t\t\t\t================\n\n\t\t\t\t\t\t\t1-START GAME\n\n\t\t\t\t\t\t\t2-RULES\n\n\t\t\t\t\t\t\t3-EXIT\n\n");
    scanf("%d",&a);
    if(a==1)
       {
           clrscr();

           printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tLEVELS\n\n\t\t\t\t\t\t\t======\n\n\t\t\t\t\t\t\t1-EASY\n\n\t\t\t\t\t\t\t2-MEDIUM\n\n\t\t\t\t\t\t\t3-HARD\n\n");
scanf("%d",&b);
if(b==1)
{
//    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tPlease enter your name: ");
//  scanf("%s",name);
clrscr();
       printf("\n\t\t\t\t\t\t\tHint:Footballer\n");
       printf("\t\t\t\t\t\t\t===============\n\n\n");


       printf("\n\t\t\t\t");
       for(i=0;i<=6;i++)
       {
       printf("\t%c",array[i]);
       }
printf("\n\n\n");
for(c=0;c<=3;c++)
{
scanf(" %c",&num);

printf("\n\n");

     if(num=='l')
{
   t=num;
   num=array[4];
   array[4]=t;
   printf("\t\t\t\t");
   for(i=0;i<=6;i++)
   {
       printf("\t%c",array[i]);
   }
   printf("\n\n\n");
}


else  if(num=='r')
{
   t=num;
   num=array[0];
   array[0]=t;
   printf("\t\t\t\t");
   for(i=0;i<=6;i++)
   {
       printf("\t%c",array[i]);
   }
    printf("\n\n\n");

}

else if(num=='n')
    {
   t=num;
   num=array[2];
   array[2]=t;
   printf("\t\t\t\t");
   for(i=0;i<=6;i++)
   {
       printf("\t%c",array[i]);
   }
    printf("\n\n\n");
}


else if(num=='o')
{
    t=num;
   num=array[6];
   array[6]=t;
   printf("\t\t\t\t");
   for(i=0;i<=6;i++)
   {
       printf("\t%c",array[i]);
   }
    printf("\n\n\n");
}

else
{
    printf("wrong guess");
}



}
clrscr();
printf("\n\n\n\t\t\t\t\t\t\tHint:A Country\n");
printf("\t\t\t\t\t\t\t==============\n\n\n");

       printf("\t\t\t\t\t");
       for(i=0;i<=4;i++)
       {
       printf("\t%c",array1[i]);
       }
printf("\n\n\n");
for(c=0;c<=3;c++)
{
scanf(" %c",&num);

printf("\n\n");

     if(num=='c')
{
   t=num;
   num=array1[0];
   array1[0]=t;
   printf("\t\t\t\t");
   for(i=0;i<=4;i++)
   {
       printf("\t%c",array1[i]);
   }
   printf("\n\n\n");
}


else  if(num=='i')
{
   t=num;
   num=array1[2];
   array1[2]=t;
   printf("\t\t\t\t");
   for(i=0;i<=4;i++)
   {
       printf("\t%c",array1[i]);
   }
    printf("\n\n\n");

}

else if(num=='a')
    {
   t=num;
   num=array1[4];
   array1[4]=t;
   printf("\t\t\t\t");
   for(i=0;i<=4;i++)
   {
       printf("\t%c",array1[i]);
   }
    printf("\n\n\n");


    }
else
{
    printf("wrong guess");
}
}
clrscr();
       printf("\n\n\n\t\t\t\t\t\t\tHint:Drink\n");
       printf("\t\t\t\t\t\t\t==========\n\n\n");


       printf("\t\t\t\t");
       for(i=0;i<=2;i++)
       {
       printf("\t%c",array2[i]);
       }
printf("\n\n\n");
for(c=0;c<=1;c++)
{
scanf(" %c",&num);

printf("\n\n");

     if(num=='t')
{
   t=num;
   num=array2[0];
   array2[0]=t;
   printf("\t\t\t\t");
   for(i=0;i<=2;i++)
   {
       printf("\t%c",array2[i]);
   }
   printf("\n\n\n");
}


else  if(num=='a')
{
   t=num;
   num=array2[3];
   array2[3]=t;
   printf("\t\t\t\t");
   for(i=0;i<=2;i++)
   {
       printf("\t%c",array2[i]);
   }
    printf("\n\n\n");

}

else
{
    printf("wrong guess");
}
}
clrscr();
printf("\n\n\n\t\t\t\t\t\t\tHint:Animal\n");
printf("\t\t\t\t\t\t\t===========\n\n\n");

       printf("\t\t\t\t");
       for(i=0;i<=3;i++)
       {
       printf("\t%c",array3[i]);
       }
printf("\n\n\n");
for(c=0;c<=1;c++)
{
scanf(" %c",&num);

printf("\n\n");

     if(num=='e')
{
   t=num;
   num=array3[1];
   array3[1]=t;
   printf("\t\t\t\t");
   for(i=0;i<=3;i++)
   {
       printf("\t%c",array3[i]);
   }
   printf("\n\n\n");
}


else  if(num=='e')
{
   t=num;
   num=array3[2];
   array3[2]=t;
   printf("\t\t\t\t");
   for(i=0;i<=3;i++)
   {
       printf("\t%c",array3[i]);
   }
    printf("\n\n\n");

}



else
{
    printf("wrong guess");
}
}
}

else if (b==2)
{
    clrscr();
printf("\n\n\n\t\t\t\t\t\t\tHint:Language\n");
printf("\t\t\t\t\t\t\t=============\n\n\n");

       printf("\t\t\t\t");
       for(i=0;i<=5;i++)
       {
       printf("\t%c",array4[i]);
       }
printf("\n\n\n");
for(c=0;c<=2;c++)
{
scanf(" %c",&num);

printf("\n\n");

     if(num=='a')
{
   t=num;
   num=array4[0];
   array4[0]=t;
   printf("\t\t\t\t");
   for(i=0;i<=5;i++)
   {
       printf("\t%c",array4[i]);
   }
   printf("\n\n\n");
}


else  if(num=='a')
{
   t=num;
   num=array4[2];
   array4[2]=t;
   printf("\t\t\t\t");
   for(i=0;i<=5;i++)
   {
       printf("\t%c",array4[i]);
   }
    printf("\n\n\n");

}

else if(num=='i')
    {
   t=num;
   num=array4[4];
   array4[4]=t;
   printf("\t\t\t\t");
   for(i=0;i<=5;i++)
   {
       printf("\t%c",array4[i]);
   }
    printf("\n\n\n");
}

else
{
    printf("wrong guess");
}



}
clrscr();
printf("\n\n\n\t\t\t\t\t\t\tHint:An Airline\n");
printf("\t\t\t\t\t\t\t===============\n\n\n");

       printf("\t\t\t\t");
       for(i=0;i<=7;i++)
       {
       printf("\t%c",array5[i]);
       }
printf("\n\n\n");
for(c=0;c<=3;c++)
{
scanf(" %c",&num);

printf("\n\n");

     if(num=='e')
{
   t=num;
   num=array5[0];
   array5[0]=t;
   printf("\t\t\t\t");
   for(i=0;i<=7;i++)
   {
       printf("\t%c",array5[i]);
   }
   printf("\n\n\n");
}


else  if(num=='i')
{
   t=num;
   num=array5[2];
   array5[2]=t;
   printf("\t\t\t\t");
   for(i=0;i<=7;i++)
   {
       printf("\t%c",array5[i]);
   }
    printf("\n\n\n");

}

else if(num=='a')
    {
   t=num;
   num=array5[4];
   array5[4]=t;
   printf("\t\t\t\t");
   for(i=0;i<=7;i++)
   {
       printf("\t%c",array5[i]);
   }
    printf("\n\n\n");
}


else if(num=='e')
{
    t=num;
   num=array5[6];
   array5[6]=t;
   printf("\t\t\t\t");
   for(i=0;i<=7;i++)
   {
       printf("\t%c",array5[i]);
   }
    printf("\n\n\n");
}

else
{
    printf("wrong guess");
}
}
clrscr();
 printf("\n\n\n\t\t\t\t\t\t\tHint:A country famous for lakes\n");
 printf("\t\t\t\t\t\t\t===============================\n");


       printf("\t\t\t\t");
       for(i=0;i<=6;i++)
       {
       printf("\t%c",array6[i]);
       }
printf("\n\n\n");
for(c=0;c<=3;c++)
{
scanf(" %c",&num);

printf("\n\n");

     if(num=='f')
{
   t=num;
   num=array6[0];
   array6[0]=t;
   printf("\t\t\t\t");
   for(i=0;i<=6;i++)
   {
       printf("\t%c",array6[i]);
   }
   printf("\n\n\n");
}


else  if(num=='n')
{
   t=num;
   num=array6[2];
   array6[2]=t;
   printf("\t\t\t\t");
   for(i=0;i<=6;i++)
   {
       printf("\t%c",array6[i]);
   }
    printf("\n\n\n");

}


else if(num=='a')
{
    t=num;
   num=array6[4];
   array6[4]=t;
   printf("\t\t\t\t");
   for(i=0;i<=6;i++)
   {
       printf("\t%c",array6[i]);
   }
    printf("\n\n\n");
}
else if(num=='d')
{
    t=num;
   num=array6[6];
   array6[6]=t;
   printf("\t\t\t\t");
   for(i=0;i<=6;i++)
   {
       printf("\t%c",array6[i]);
   }
    printf("\n\n\n");
}

else
{
    printf("wrong guess");
}



}
clrscr();
printf("\n\n\n\t\t\t\t\t\t\tHint:Poet\n");
printf("\t\t\t\t\t\t\t=========\n\n\n");


       printf("\t\t\t\t");
       for(i=0;i<=10;i++)
       {
       printf("\t%c",array7[i]);
       }
printf("\n\n\n");
for(c=0;c<=5;c++)
{
scanf(" %c",&num);

printf("\n\n");

     if(num=='s')
{
   t=num;
   num=array7[0];
   array7[0]=t;
   printf("\t\t\t\t");
   for(i=0;i<=10;i++)
   {
       printf("\t%c",array7[i]);
   }
   printf("\n\n\n");
}


else  if(num=='a')
{
   t=num;
   num=array7[2];
   array7[2]=t;
   printf("\t\t\t\t");
   for(i=0;i<=10;i++)
   {
       printf("\t%c",array7[i]);
   }
    printf("\n\n\n");

}

else if(num=='e')
    {
   t=num;
   num=array7[4];
   array7[4]=t;
   printf("\t\t\t\t");
   for(i=0;i<=10;i++)
   {
       printf("\t%c",array7[i]);
   }
    printf("\n\n\n");
}


else if(num=='p')
{
    t=num;
   num=array7[6];
   array7[6]=t;
   printf("\t\t\t\t");
   for(i=0;i<=10;i++)
   {
       printf("\t%c",array7[i]);
   }
    printf("\n\n\n");
}
else if(num=='a')
{
    t=num;
   num=array7[8];
   array7[8]=t;
   printf("\t\t\t\t");
   for(i=0;i<=10;i++)
   {
       printf("\t%c",array7[i]);
   }
    printf("\n\n\n");
}
else  if(num=='e')
{
   t=num;
   num=array7[10];
   array7[10]=t;
   printf("\t\t\t\t");
   for(i=0;i<=10;i++)
   {
       printf("\t%c",array7[i]);
   }
    printf("\n\n\n");

}


else
{
    printf("wrong guess");
}




}

}else if(b==3)
{

clrscr();
printf("\n\n\n\t\t\t\t\t\t\tHint:Planet\n");
printf("\t\t\t\t\t\t\t===========\n\n\n");

       printf("\t\t\t\t");
       for(i=0;i<=6;i++)
       {
       printf("\t%c",array8[i]);
       }
printf("\n\n\n");
for(c=0;c<=4;c++)
{
scanf(" %c",&num);

printf("\n\n");

     if(num=='j')
{
   t=num;
   num=array8[0];
   array8[0]=t;
   printf("\t\t\t\t");
   for(i=0;i<=6;i++)
   {
       printf("\t%c",array8[i]);
   }
   printf("\n\n\n");
}


else  if(num=='p')
{
   t=num;
   num=array8[2];
   array8[2]=t;
   printf("\t\t\t\t");
   for(i=0;i<=6;i++)
   {
       printf("\t%c",array8[i]);
   }
    printf("\n\n\n");

}

else if(num=='t')
    {
   t=num;
   num=array8[4];
   array8[4]=t;
   printf("\t\t\t\t");
   for(i=0;i<=6;i++)
   {
       printf("\t%c",array8[i]);
   }
    printf("\n\n\n");
}


else if(num=='r')
{
    t=num;
   num=array8[6];
   array8[6]=t;
   printf("\t\t\t\t");
   for(i=0;i<=6;i++)
   {
       printf("\t%c",array8[i]);
   }
    printf("\n\n\n");
}

else
{
    printf("wrong guess");
}



}
clrscr();
printf("\n\n\n\t\t\t\t\t\t\tHint:Profession\n");
printf("\t\t\t\t\t\t\t===============\n\n\n");


       printf("\t\t\t\t");
       for(i=0;i<=9;i++)
       {
       printf("\t%c",array9[i]);
       }
printf("\n\n\n");
for(c=0;c<=5;c++)
{
scanf(" %c",&num);

printf("\n\n");

     if(num=='p')
{
   t=num;
   num=array9[0];
   array9[0]=t;
   printf("\t\t\t\t");
   for(i=0;i<=9;i++)
   {
       printf("\t%c",array9[i]);
   }
   printf("\n\n\n");
}


else  if(num=='a')
{
   t=num;
   num=array9[2];
   array9[2]=t;
   printf("\t\t\t\t");
   for(i=0;i<=9;i++)
   {
       printf("\t%c",array9[i]);
   }
    printf("\n\n\n");

}

else if(num=='m')
    {
   t=num;
   num=array9[4];
   array9[4]=t;
   printf("\t\t\t\t");
   for(i=0;i<=9;i++)
   {
       printf("\t%c",array9[i]);
   }
    printf("\n\n\n");
}


else if(num=='c')
{
    t=num;
   num=array9[6];
   array9[6]=t;
   printf("\t\t\t\t");
   for(i=0;i<=9;i++)
   {
       printf("\t%c",array9[i]);
   }
    printf("\n\n\n");
}
else if(num=='s')
{
    t=num;
   num=array9[8];
   array9[8]=t;
   printf("\t\t\t\t");
   for(i=0;i<=9;i++)
   {
       printf("\t%c",array9[i]);
   }
    printf("\n\n\n");
}


else
{
    printf("wrong guess");
}
}
clrscr();
printf("\n\n\n\t\t\t\t\t\t\tHint:Disease\n");
printf("\t\t\t\t\t\t\t============\n\n\n");

       printf("\t\t\t\t");
       for(i=0;i<=7;i++)
       {
       printf("\t%c",array10[i]);
       }
printf("\n\n\n");
for(c=0;c<=3;c++)
{
scanf(" %c",&num);

printf("\n\n");

     if(num=='j')
{
   t=num;
   num=array10[0];
   array10[0]=t;
   printf("\t\t\t\t");
   for(i=0;i<=7;i++)
   {
       printf("\t%c",array10[i]);
   }
   printf("\n\n\n");
}


else  if(num=='u')
{
   t=num;
   num=array10[2];
   array10[2]=t;
   printf("\t\t\t\t");
   for(i=0;i<=7;i++)
   {
       printf("\t%c",array10[i]);
   }
    printf("\n\n\n");

}

else if(num=='d')
    {
   t=num;
   num=array10[4];
   array10[4]=t;
   printf("\t\t\t\t");
   for(i=0;i<=7;i++)
   {
       printf("\t%c",array10[i]);
   }
    printf("\n\n\n");
}


else if(num=='c')
{
    t=num;
   num=array10[6];
   array10[6]=t;
   printf("\t\t\t\t");
   for(i=0;i<=7;i++)
   {
       printf("\t%c",array10[i]);
   }
    printf("\n\n\n");
}

else
{
    printf("wrong guess");
}
}
clrscr();
printf("\n\n\n\t\t\t\t\t\t\tHint:Synonym of Awkward\n");
printf("\t\t\t\t\t\t\t=======================\n\n\n");


       printf("\t\t\t\t");
       for(i=0;i<=4;i++)
       {
       printf("\t%c",array11[i]);
       }
printf("\n\n\n");
for(c=0;c<=2;c++)
{
scanf(" %c",&num);

printf("\n\n");

     if(num=='w')
{
   t=num;
   num=array11[0];
   array11[0]=t;
   printf("\t\t\t\t");
   for(i=0;i<=4;i++)
   {
       printf("\t%c",array11[i]);
   }
   printf("\n\n\n");
}


else  if(num=='i')
{
   t=num;
   num=array11[2];
   array11[2]=t;
   printf("\t\t\t\t");
   for(i=0;i<=4;i++)
   {
       printf("\t%c",array11[i]);
   }
    printf("\n\n\n");

}

else if(num=='d')
    {
   t=num;
   num=array11[4];
   array11[4]=t;
   printf("\t\t\t\t");
   for(i=0;i<=4;i++)
   {
       printf("\t%c",array11[i]);
   }
    printf("\n\n\n");

    }

else
{
    printf("wrong guess");
}
}
}
}





//printf("\n\n");
// num=getche();
//   printf("\n\n");
//    if(num=='c')
//{
//   t=num;
//   num=array[2];
//   array[2]=t;
//      loop();
//}
//else  if(num=='n')
//{
//   t=num;
//   num=array[0];
//   array[0]=t;
//     loop();
//}
// else if(num=='i')
//{
//     t=num;
//   num=array[1];
//   array[1]=t;
//     loop();
//}
//else if(num=='e')
//{
//    t=num;
//   num=array[3];
//   array[3]=t;
//loop();
//}
//else
//{
//    printf("wrong guess");
//}
//printf("\n\n");
//num=getche();
//printf("\n\n");
//  printf("\n\n");
  else if(a==2)
  {
      clrscr();
      printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t    RULES\n\n\t\t\t\t\t\t    ================\n\n\t\t\t\t\t\t    1-START GAME\n\n\t\t\t\t\t\t    2-RULES\n\n\t\t\t\t\t\t    3-EXIT\n\n");
  }
  else if(a==3)
  {
      clrscr();
       printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t    HANGMAN GAME\n\n\t\t\t\t\t\t    ================\n\n\t\t\t\t\t\t    1-START GAME\n\n\t\t\t\t\t\t    2-RULES\n\n\t\t\t\t\t\t    3-EXIT\n\n");
  }


    return 0;
}
void clrscr()
{
    system("cls");
}
