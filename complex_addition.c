#include<stdio.h>
typedef struct complex
{
	float real;
	float img;
}complex;
complex add(complex,complex);
int main()
{
	complex n1,n2,result;
	printf("enter real and imginary parts of 1st complex number: ");
	scanf("%f%f",&n1.real,&n1.img);
	printf("enter real and imginary parts of 2nd complex number: ");
	scanf("%f%f",&n2.real,&n2.img);
	result=add(n1,n2);
	printf("result=%0.1f +i %0.1f ",result.real,result.img);	
}
complex add(complex n1,complex n2)
{
	complex temp;
	temp.real=n1.real+n2.real;
	temp.img=n1.img+n2.img;
	return temp;
}
