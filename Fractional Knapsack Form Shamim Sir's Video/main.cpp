#include <bits/stdc++.h>

using namespace std;

vector<pair<int,int> > itemInfo(100);
priority_queue<pair <double,int> >pq;

int main()
{

    ifstream input("t.txt");

    if(!input.is_open())
        cout<<"File Not Opened"<<endl;

    int knapsack,weight,profit,index=1;
    input>>knapsack;
    while(input>>weight>>profit)
    {
        itemInfo[index++]=make_pair(weight,profit);
    }

    double unitProfit;

    for(int i=1;i<index;++i)
    {
        unitProfit=(float)(itemInfo[i].second/itemInfo[i].first);
        pq.push(make_pair(unitProfit,i));
    }
    double totalProfit=0.0;

    while(!pq.empty()&&knapsack!=0)
    {
        pair<double,int> frnt = pq.top();
        pq.pop();

        auto itemWeight = itemInfo[frnt.second].first;
        if(itemWeight<=knapsack)
        {
            totalProfit+=itemInfo[frnt.second].second;
            knapsack-=itemWeight;
            cout<<"Selected Item "<<frnt.second<<" ";
            cout<<"Weight "<<itemInfo[frnt.second].first;
            cout<<" Profit "<<itemInfo[frnt.second].second<<endl;
        }
        else
        {
            totalProfit+=knapsack*frnt.first;
            cout<<"Selected Item "<<frnt.second<<" ";
            cout<<"Weight "<<knapsack;
            cout<<" Profit "<<knapsack*frnt.first<<endl;
            break;
        }
    }

    cout<<totalProfit<<endl;





    return 0;
}
