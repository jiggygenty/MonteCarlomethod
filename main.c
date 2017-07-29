#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void main()
{
 double estimatedpi,circa=0,squaa=0;
 double i,j,dt=0.00001;
 int count=0;
 squaa=pow((1+dt)/dt,2);
 for(i=0;i<=1;i+=dt)
 {
     count++;
     for(j=0;j<=1;j+=dt)
     {
        if(ceil(pow(j,2)+pow(i,2))<=1)
            circa++;


     }
     if((count%100)==0)
      printf("%lf\n",4*circa/squaa);
 }

printf("%.12lf\n%.12lf",4*circa/squaa,M_PI);
}
