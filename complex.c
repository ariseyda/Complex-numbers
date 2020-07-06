#include<stdio.h>
#include<math.h>
#define PI 3.141592654

//Define a structure called complex that is used for complex numbers and following functions: 
//- a function to display a complex variable. 
//- a function to receive real and imaginary parts of a complex variable from user. 
//- a function to conjugate a complex variable. 
//- a function to compute magnitude of a complex variable. 
//- a function to compute angle of a complex variable. Use double atan2(double y, double x) from <math.h>. 
//- a function to divide two complex variables. Test your functions in a program.
//- a function to subtract two complex variables. 
//- a function to multiply two complex variables. 


struct Complex{
	
	double real;
	double imaginary;
};
void divide_mltp_minus_c(double rc,double ic){
	
	double r,i;
	printf("\nEnter real part of complex number:");
	scanf("%lf",&r);
	printf("Enter imaginary part of complex number:");
	scanf("%lf",&i);
	
	double divide_r=(rc*r*1.0) + (ic*(i)*1.0);
	double divide_i=(rc*(-i)*1.0) + (ic*r*1.0);
	double denom=pow(r,2) + pow(i,2);
	
	double minus_r=(rc-r);
	double minus_i=(ic-i);
	double mltp_r=(rc*r) - (ic*i);
	double mltp_i=(rc*i) + (r*ic);
	
	printf("Divide: ((%.1f) + (%.1f i)) / ((%.1f) + (%.1f i)) = %.2f + (%.2f i) / %.1f",rc,ic,r,i,divide_r,divide_i,denom);
	printf("\nMinus: ((%.1f) + (%.1f i)) - ((%.1f) + (%.1f i)) = %.2f + (%.2f i) ",rc,ic,r,i,minus_r,minus_i);
	printf("\nMltp: ((%.1f) + (%.1f i)) * ((%.1f) + (%.1f i)) = %.2f + (%.2f i) ",rc,ic,r,i,mltp_r,mltp_i);
	
	
}
int main(){
	
    struct Complex cx;
	printf("Enter real part of complex number:");
	scanf("%lf",&cx.real);
	printf("Enter imaginary part of complex number:");
	scanf("%lf",&cx.imaginary);
	double r=cx.real;
	double i=cx.imaginary;
	printf("Complex number:(%.1f) + (%.1f i)",r,i);
	
	double magnitude=pow(r,2) + pow(i,2);
	
	printf("\nConjugate:((%.1f) + (%.1f i)) x ((%.1f) - (%.1f i))=%.2f",r,i,r,i,magnitude);
	
	//Function atan2() takes two arguments: x-coordinate and y-coordinate, and calculate the angle in radians for the quadrant.
	double result=atan2(r,i);
	result=result*180/PI*(1.0);
	
	printf("\nAngle:%.2f degree",result);
	
    divide_mltp_minus_c(r,i);
	
	return 0;
}
