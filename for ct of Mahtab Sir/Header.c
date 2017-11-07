#include "header.h"
#include <iostream>
Date :: Date (int d,int m,int y)
{
    setdate(d,m,y);
}

void Date :: setdate(int d,int m,int y)
{
    m_d=d;m_m=m;m_y=y;
}
