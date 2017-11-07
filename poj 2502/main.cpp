#include <bits/stdc++.h>
#define pi pair<double,int>

using namespace std;

const static int MAX=201;

double dis[MAX],position[MAX][MAX];
int x[MAX],y[MAX],inf=10000000,n;
int check[MAX];

double dijkstra(int source,int destination) //apply dijkstra
{
    for(int i=1;i<=n;i++)
        dis[i]=inf; //init all distance

    memset(check,0,sizeof(check));

    dis[source]=0;

    priority_queue< pi,vector<pi>,greater<pi> >q; ///Min Heap

    q.push(make_pair(dis[source],source));

    while(!q.empty())
    {
        auto label=q.top().second; ///vertex label
        q.pop();

        if (check[label])
            continue; //checking if counted before

        check[label]=1;

        for(int j=1;j<=n;j++)
            if((!check[j])&&(position[label][j]+dis[label]<dis[j]))
            {
                dis[j]=dis[label]+position[label][j];
                q.push(make_pair(dis[j],j));
            }
    }
    return dis[destination];//distance to destination
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        scanf("%d%d%d%d",&x[1],&y[1],&x[2],&y[2]);
        n=2;
        for(int i=1;i<MAX;i++)
            for(int j=1;j<MAX;j++)
                position[i][j]=inf;

        int start=n+1;
        int tx,ty;
        int ck=0;
        while(1)
        {
            scanf("%d%d",&tx,&ty);
            if(tx==-1&&ty==-1)
            {
                ck++;
                for(int i=start;i<n;i++)
                {
                    auto temp=((sqrt(pow((x[i]-x[i+1]),2)+(pow((y[i]-y[i+1]),2))))/1000)/40; // train to train
                    if (temp<position[i][i+1])
                    {
                        position[i][i+1]=temp;
                        position[i+1][i]=temp;
                    }
                }
                start=n+1;
                if(ck==2) break; //inputs for two trains are finished
                continue;
            }
            n++;
            x[n]=tx;
            y[n]=ty;
        }
        for(int i=1;i<n;i++)
            for(int j=i+1;j<=n;j++)
            {
                auto temp=((sqrt(pow((x[i]-x[j]),2)+(pow((y[i]-y[j]),2))))/1000)/10; //station to station
                if (temp<position[i][j])
                {
                    position[i][j]=temp;
                    position[j][i]=temp;
                }
            }

        auto ans=dijkstra(1,2);
        ans*=60;
        printf("%.2f",ans);

        return 0;
    }
}
