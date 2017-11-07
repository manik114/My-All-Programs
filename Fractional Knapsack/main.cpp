#include <bits/stdc++.h>

using namespace std;


class package
{
    int profit,weight;

public:
    package(int profit,int weight)
    {
        this->profit=profit;
        this->weight=weight;
    }
    friend bool cmp(package a,package b);
    friend double knapSack(int w,package obj[],int n);
};

 bool cmp (package a,package b)
    {
        return (a.profit/a.weight > b.profit/b.weight);
    }

double knapSack(int w,package obj[],int n)
{
    sort(obj,obj+n,cmp);



    double currentWeight = 0.0;
    double currentProfit = 0.0;

    for(int i=0;i<n;++i)
    {
        if(currentWeight+obj[i].weight<w)
        {
            currentWeight+=obj[i].weight;
            currentProfit+=obj[i].profit;
        }
        else
        {
            auto tmp = w-currentWeight;
            currentProfit+=obj[i].profit*(tmp/obj[i].weight);
            break;
        }
    }
    return currentProfit;
}


int main()
{
    package obj[]={{60,10},{100,20},{120,30}};

    int W=50;

    cout<<knapSack(W,obj,3);

    return 0;
}
