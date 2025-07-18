#include<stdio.h>
int main()
{
    float m1,m2,m3,c,cpp,sum,per;
    int count = 0;
    printf("M1= ");
    scanf("%f", &m1);
    printf("M2= ");
    scanf("%f", &m2);
    printf("M=3 ");
    scanf("%f", &m3);
    printf("c= ");
    scanf("%f", &c);
    printf("cpp= ");
    scanf("%f", &cpp);
    sum=(m1+m2+m3+c+cpp);
    printf("\nSum= %.2f",sum);
    per=sum/5;
    printf("\nPer= %.2f \n",per);

if (m1<40)
    count++;
if (m2<40)
    count++;
if (m3<40)
    count++;
if (c<40)
    count++;
if (cpp<40)
    count++;

if (count == 1 || count == 2){
    printf("\n result = atkt");
}else if (count > 2){
    printf("\n result = Sem Back :(");
}else if (per >= 60){
    printf("first div");
}else if (per >= 50 && per < 60){
    printf("Second div");
}else if (per < 50){
    printf("Third div");
}
}
