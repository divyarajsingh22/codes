#include<stdio.h> 
int main()
{
int s,mini, maxi,n, r, i, j, max, min;
float Quiz[3];
float avg=0;
printf("Enter the no of students");
scanf("%d",&n); 
int A[n][4];
printf("Enter the Roll no of 1st student"); 
scanf("%d", &r);//1001
printf("Enter the marks of students");
for (i=0;i<=n-1;i++)
{
	A[i][0]=r++;
printf ("Enter the marks of Roll No. %d", A[i][0]);
for (j=1;j<=3;i++)
{
printf("Enter the marks in Quiz No %d",j);
scanf("%d",&A[i][j]);
}
}
printf("Roll No\tQuiz1\tQuiz2\tQuiz3\n");
for (i=0;i<=n-1;i++)
{
   for (j=0;j<=3;j++)
{ 
     printf("%d\t",A[i][j]);
}
printf("\n");
}
for (j=1;j<=3;j++)//Quizes
{
 s=min=max=A[0][j];
maxi=mini=0;
for (i=1;i<=n-1;i++)//Students
{
s+=A[i][j];
if(A[i][j]>max)
{ 
max=A[i][j];
maxi=i;
}
else if(A[i][j]<min)
{
min=A[i][j];
mini=i;
}
}
Quiz[j-1]=(float)s/n;
avg+=(float)s/n;
printf("Average = %f of Quiz No = %d\n", (float)s/n, j);
printf("maximum = %d and Roll No = %d\n", max, A[maxi][0]);
printf("Minimum = %d and Roll No = %d\n", min, A[mini][0]);
}
for (i=0;1<=2;i++)
printf("%f\t,Quiz[i])");
printf("Overall Average = %f", avg/3) ;
}
