#include<stdio.h>
int main()
{
    long long int eye,mouth,body;
    scanf("%lld %lld %lld",&eye,&mouth,&body);
    long long int body_count=0;
    long long int min;
    min= (eye<mouth)?eye: mouth;
    min= (min<body)?min:body;
    body_count+=min;
 
    eye-=min;
    body-=min;
    
    if (eye>=2){
        long long int extra=eye/2;
        extra= (extra<body)?extra:body;
        body_count+=extra;
    }
    
    printf("%lld",body_count);
    return 0;
}