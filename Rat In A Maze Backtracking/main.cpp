#include <iostream>
#include <stdio.h>
#define N 4
using namespace std;

int maze[N+1][N+1];

bool isSafe(int x,int y)
{
    return (x>0&&x<=N && y>0&&y<=N && maze[x][y]==1);
}
int solution[N+1][N+1];
int mt=1;
bool finalsolution(int x,int y)
{
    if(x==2 && y==3)
    {
        solution[x][y]=mt;
        return true;
    }

    if(isSafe(x,y))
    {
        solution[x][y]=mt++;

        if(finalsolution(x+1,y))
            return true;
        if(finalsolution(x,y+1))
            return true;


        solution[x][y]=0;
        return false;
    }

    return false;

}

void printMaze()
{
    for(int i=1; i<=N; ++i)
    {
        for(int j=1; j<=N; ++j)
        {
            cout<<solution[i][j]<< " ";
        }
        cout<<endl;
    }
}

bool solveMaze()
{
    for(int i=1; i<=N; ++i)
        for(int j=1; j<=N; ++j)
            solution[i][j]=0;

    if(finalsolution(1,1)==false)
    {
        cout<<"NO WAY"<<endl;
        return false;
    }

    printMaze();
    return true;
}

int main()
{
    freopen("t.txt","r",stdin);
    for(int i=1; i<=N; ++i)
        for(int j=1; j<=N; ++j)
            cin>>maze[i][j];



    solveMaze();
    return 0;
}
