#include <stdio.h>
#include<complex.h>
#include<math.h>
#include<cs50.h>


double complex calcu(int n,double PI,int j,int k);

int main()
{
    int n=4;
    double complex matrix[n][n];
    double complex f_n[n];
    double complex sum;
    double complex dff;
    double PI = acos(-1);
    float data[n];

    //double complex z3=calcu(n,PI,0,1);
    //printf(" %.1f%+.1fi\n", creal(z3), cimag(z3));

        for(int j=0;j<n;j++)
        {
            data[j]=get_float("input a data: ");
            //printf("data-%d=%.1f\n",j,data[j]);
        }

        for(int k=0;k<n;k++)
        {
                for(int l=0;l<n;l++)
                    {
                        matrix[k][l]=calcu(n,PI,k,l);
                        //printf("data-%d=%f",l,data[l]);
                        //printf("%.1f+%.1fi,",creal(matrix[k][l]), cimag(matrix[k][l]));
                        //dff=data[l]+0*I;
                        sum =matrix[k][l]*data[l];
                        printf("%.1f+%.1fi,",creal(sum),cimag(sum));
                        f_n[k]+=sum;
                    }
                    
            printf("\n");
            
            printf("f-%d=%.1f%+.1fi\n",k,creal(f_n[k]), cimag(f_n[k]));
        }

}


double complex calcu(int n,double PI,int j,int k)
{
    double complex z = cexp(I * ((2*PI*j*k)/n));
    return z;
}
