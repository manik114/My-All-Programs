#include <bits/stdc++.h>
#define pii pair <int,int>
using namespace std;
int row,col;
int fx[]= {1,-1,0,0},fy[]= {0,0,1,-1};///directions in matrix
int matrix[1000][1000];
int cell[1000][1000];
int d[100][100],vis[100][100];

void dij(int sx,int sy)
{
    memset(vis,0,sizeof vis);
    memset(d,0,sizeof d);
    vis[sx][sy]=1;
    queue<pii> q;
    q.push(pii(sx,sy));
    while(!q.empty())
    {
        pii top=q.front();
        q.pop();
        int tx,ty;
        for(int ii=0; ii<4; ++ii)
        {
            tx=top.first+fx[ii];
            ty=top.second+fy[ii];
            if(tx>=0&&tx<row && ty>=0 && ty<col && cell[tx][ty]!=-1 && vis[tx][ty]==0)
            {
                vis[tx][ty]=1;
                d[tx][ty]=d[top.first][top.second]+matrix[tx][ty];
                q.push(pii(tx,ty));
            }
        }
    }
}
int main()
{
    int sw,sh,dw,dh;///source location and destination location
    cin>>col>>row;
    for(int i=0; i<row; ++i)
    {
        for(int j=0; j<col; ++j)
        {
            char in;
            cin>>in;
            if(in=='S')
            {
                sw=j;
                sh=i;
                matrix[i][j]=0;continue;
            }
            else if(in=='D')
            {
                dw=j;
                dh=i;
                matrix[i][j]=0;continue;
            }
            else if(in=='X')
            {
                cell[i][j]=-1;continue;
            }
            matrix[i][j]=in-'0';
        }
    }
    dij(sh,sw);
    cout<<d[dh][dw];
    return 0;
}
