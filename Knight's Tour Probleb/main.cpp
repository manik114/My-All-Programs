#include <iostream>
#define N 8
using namespace std;

int solution[N][N];

void printSolution()
{
    for(int i=0; i<N; ++i)
    {
        for(int j=0; j<N; ++j)
        {
            cout<<solution[i][j]<<" ";
        }
        cout<<endl;
    }
}

bool isSafe(int x,int y)
{
    return (x>=0&&x<N&&y>=0&&y<N&&solution[x][y]==-1);
}


int solveKTUtil(int x,int y,int mt,int xMove[N],int yMove[N])
{
    //cout<<"SolveKTUtil"<<endl;
    int next_x,next_y;
    if(mt==N*N) return true;

    for(int k=0; k<8; ++k)
    {
        next_x=x+xMove[k];
        next_y=y+yMove[k];

        if(isSafe(next_x,next_y))
        {
            solution[next_x][next_y]=mt;
            if(solveKTUtil(next_x,next_y,mt+1,xMove,yMove)==true)
            {
                return true;
            }
            else
                solution[next_x][next_y]=-1;
        }
    }
    return false;
}

bool solveKT()
{
    cout<<"SolveKT"<<endl;

    for(int i=0; i<N; ++i)
    {
        for(int j=0; j<N; ++j)
        {
            solution[i][j]=-1;
        }
    }

    int xMove[8]= {-2,-1,1,2,2,1,-1,-2};
    int yMove[8]= {1,2,2,1,-1,-2,-2,-1};

    solution[0][0]=0;

    if(solveKTUtil(0,0,1,xMove,yMove)==false)
    {
        cout<<"No Solution "<<endl;
        return false;
    }

    else
        printSolution();
        return true;


    }

int main()
{
    solveKT();


    return 0;
}
