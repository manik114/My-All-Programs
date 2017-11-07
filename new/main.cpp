#include <stdio.h>


int main()
{
    long long int i,j,s,s2,len,maxi=0,maxi2=0,d=0;
    scanf("%lld%lld",&i,&j);
    for(s=i,len=0;s<=j;s++)
    {     s2=s;
        for(len=0,maxi=0;s2!=1;)
        {

            if(s2%2!=0)
            {
                d = (3*s2)+1;
                len++;
                }
                else
                {
                    d = s2/2;
                    len++;
                }
                s2=d;
            if(len>maxi)
                maxi=len;
                }
           if(maxi>maxi2)
           maxi2=maxi;
        }

    printf("%lld\n%lld\n%lld ",i,j,maxi2+1);
    return 0;
}
