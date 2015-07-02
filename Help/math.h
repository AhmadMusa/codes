The C standard library contains a variety of functions that perform mathematical 
operations. The  "math.h" header file defines prototypes for the various floating-point functions. 

Trigonometric Functions :

acos() => 
Prototype:double acos(double x)
Returns the arccosine of its argument. The argument must be in the range -1 <= 
x <= 1, and the return value is in the range 0 <= acos <= p.

asin() => 
Prototype:double asin(double x)
Returns the arcsine of its argument. The argument must be in the range -1 <= x 
<= 1, and the return value is in the range -p/2 <= asin <= p/2. 

atan() => 
Prototype:double atan(double x)
Returns the arctangent of its argument. The return value is in the range -p/2 <= 
atan <= p/2.

cos() =>  
Prototype:double cos(double x)
Returns the cosine of its argument. 
sin() =>  
Prototype: double sin(double x)
Returns the sine of its argument. 
tan() =>  
Prototype: double tan(double x)
Returns the tangent of its argument. 



example : 

#include <stdio.h>
#include <math.h>
int main()
{
    double n ;
    scanf("%lf",&n);

    printf(" tan%lf=%lf \n sin%lf=%lf\n cos%lf=%lf\n arccos%lf=%lf \n arcsin%lf=%lf \n arctan %lf=%lf \n ",n,tan(n),n,sin(n),n,cos(n),n,acos(n),n,asin(n),n,atan(n));
}


Exponential and Logarithmic Functions :

exp()  
Prototype: double exp(double x)
Returns the natural exponent of its argument, that is, ex where e equals  2.7182818284590452354. 

log() 
Prototype: double log(double x)
Returns the natural logarithm of its argument. The argument must be greater than 
0.
 
log10()   
Prototype: double log10 
Returns the base-10 logarithm of its argument. The argument must be greater than 
0. 



Hyperbolic Functions 

cosh()   
Prototype:double cosh(double x)
Returns the hyperbolic cosine of its argument. 
sinh()   
Prototype: double sinh(double x)
Returns the hyperbolic sine of its argument. 
tanh()   
Prototype: double tanh(double x
Returns the hyperbolic tangent of its argument.

Other Mathematical Functions 
 
sqrt() 
Prototype: double sqrt(double 
x) 
Returns the square root of its argument. The argument must be zero or greater. 

ceil() 
Prototype: double ceil(double 
x) 
Returns the smallest integer not less than its argument. For example, ceil(4.5) 
returns 5.0, and ceil(-4.5) returns -4.0. Although ceil() returns an integer value, it is 
returned as a type double. 

abs()    
Prototype: int abs(int x)
Returns the absolute .

labs()    
Prototype : long labs(long x) 
value of their arguments. 

floor() 
Prototype :double floor(double 
x)
Returns the largest integer not greater than its argument. For example, floor(4.5) 
returns 4.0, and floor(-4.5) returns -5.0. 

modf()
Prototype: double 
modf(double x, 
double *y) 
Splits x into integral and fractional parts, each with the same sign as x. The 
fractional part is returned by the function, and the integral part is assigned to *y. 

pow() 
Prototype: double pow(double 
x, double y)
Returns xy. An error occurs if x == 0 and y <= 0, or if x < 0 and y is not an integer.



example : 

sqrt function ::

#include <stdio.h>
#include <math.h>
int main()
{
    double n ;
    scanf("%lf",&n);

    printf("root of %lf = %lf \n ",n,sqrt(n));
}


absolute value abs() function ::

#include <stdio.h>
#include <math.h>
int main()
{
    int n ;
    scanf("%d",&n);

    printf("absolute value of %d = %d \n ",n,abs(n));
}


