#include <math.h>
#include <stdio.h>

double trap(double a, double b, double n, double (*f_function)(double));
double g_function(double x);
double h_function(double x);

int main(void){
   double n, result;
   int function;
   printf("Type a number to choose: 1 for g(x) and 0 for h(x).\n");
   scanf("%d", &function);

   printf("Input how many polygons should be used to calculate the area.\n");
    scanf("%lf", &n);

    if(function != 1){
        result = trap(0,3.14159, n, &g_function);
    } else {
        result = trap(-1,2,n,&h_function);
    }
    printf("The area under the curve is: %lf", result); //odd wording but we haven't been given a standard of measurement.
    return 0;
}

double trap(double a, double b, double n, double (*f_function)(double)){
    double h = (b - a) / n;
    double sum = 0;
    for (int i = 1; i < n; ++i) {
        double x = a + i * h;
        sum += f_function(x);
    }
    double t = (h / 2) * (f_function(a) + f_function(b) + 2 * (sum));
    return t;
}

double g_function(double x){
    double g_function = pow(x,2) * sin(x);
    return g_function;
}

double h_function(double x){
    double h_function = sqrt(4- pow(x,2));
    return h_function;
}