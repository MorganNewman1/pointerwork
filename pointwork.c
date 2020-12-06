#include <stdio.h>

void funtions1()
{

int x;
float y;
char z;

	///mermoy address for the varaible
	printf("\tFunction 1\n");
	printf("The varaibale start x at locations %p\n", &x);
	printf("The varaibale start y at locations %p\n", &y);
	printf("The varaibale start z at locations %p\n", &z);
	printf("\n");
	///how to point
	int* px;
	px = &x;
	printf("pi = %p, which is for x\n",px);
	
	float*py;
	py = &y;
	printf("py = %p, which is for y\n",py);
	
	char*pz;
	pz = &z;
	printf("pz = %p, which is for z\n",pz);
	
	printf("\n");
	///For varaibale
	*px = 5;
	printf("px=%d\n", *px);
	
	*py = 3.14;
	printf("py=%f\n", *py);
	
	*pz = 'a';
	printf("pz=%c\n", *pz);
	printf("\n");
	///input by user
	//for x
	printf("Please enter a value for x: ");
	
	scanf("%d",px);
	
	printf("x=%d\n",x);
	
	//for y
	printf("Please enter a value for y: ");
	
	scanf("%f",py);
	
	printf("y=%f\n",y);
	
	//for z
	printf(" Please enter a value for z: ");
	
	scanf(" %c",pz);
	
	printf("z=%c\n",z);
	printf("*************************************************************\n");
}
void funtions2()
{

int x;
float y;
char z;

	///mermoy address for the varaible	
	printf("\tFunction 2\n");
	printf("The varaibale start x at locations %p\n", &x);
	printf("The varaibale start y at locations %p\n", &y);
	printf("The varaibale start z at locations %p\n", &z);
	printf("\n");
	///how to point
	void* pa;
	pa = &x;
	printf("pa = %p, which is for x\n",pa);
	
	
	pa = &y;
	printf("pa = %p, which is for y\n",pa);
	
	
	pa = &z;
	printf("pa = %p, which is for z\n",pa);
	
	printf("\n");
	///For varaibale
	
	*((int*)pa)= 5;
	//pa = 5;
	printf("x=%d\n",*((int*)pa));
	
	*((float*)pa)= 3.14;
	//pa = 3.14;
	printf("y= %f\n",*((float*)pa));
	
	*((char*)pa) = 'a';
	//pa = 'a';
	printf("z=%c\n",*((char*)pa));
	
	printf("\n");
	///input by user
	//for x
	
	printf("Please enter a value for x: ");
	
	scanf("%d",pa);
	
	printf("x=%d\n",*((int*)pa));
	
	//for y
	printf("Please enter a value for y: ");
	
	scanf("%f",pa);
	
	printf("y=%f\n",*((float*)pa));
	
	//for z
	printf(" Please enter a value for z: ");
	
	scanf(" %c",pa);
	
	printf("z=%c\n",*((char*)pa));
	printf("*************************************************************\n");
}	
	
void funtions3()
{
	int a;
	double b;
	///For memory address to see if they equal
	printf("\tFunction 3\n");
	printf("The varaibale start a for printf at locations %p\n", &a);
	printf("The varaibale start b for printf at locations %p\n", &b);
	
	printf("\n");
	
	double* pb;
	pb = &b;
	printf("pb = %p, which is for b\n",pb);
	
	int* pt;
	pt = &a;
	printf("pt = %p, which is for a\n",pt);
	//This part if for the sizeof()
	printf("\n");
	
	
	
	printf("-----Because double hold 8 byte and a int use 4 byte, so they are 4 byte apart as pointer.-----\n");
	printf("-----Because double and int point are the same\n");
	printf("pb = %p, size  is for b\n",sizeof(pb));
	printf("pt = %p, size is for a\n",sizeof(pt));
	printf("\n");
	printf("-----Because double need 8 byte and int need 4 byte variables are the different.\n");
	printf("int = %p, size  is for a\n",sizeof(a));
	printf("double = %p, size is for b\n",sizeof(b));
	printf("\n");
	printf("-----Because double hold 8 byte and a int use 4 byte, so they are 4 or 8 byte apart as Data type.-----\n");
	printf("-----Because double and int data type are the different\n");
	printf("double = %p, size  is for double\n",sizeof(double));
	printf("int = %p, size is for int\n",sizeof(int));

	
	printf("*************************************************************\n");
}


void funtions4()
{
int o = 42;

int* po;
int **pp;

po = &o;
pp = &po;

	printf("\tFunction 4\n");
   printf("the memory address of po from pp = %p\n", pp );
   printf("the number of o from pp = %d\n", **pp);
   
   
	printf("the memory address of po= %p\n", &po );
	printf("Value from po = %d\n", *po);
	printf("*************************************************************\n");
}
	
int main()
{

	
printf("\n");	
funtions1();
printf("\n");	
funtions2();
printf("\n");
funtions3();
printf("\n");
funtions4();
return 0;	
}
	
	
	
 