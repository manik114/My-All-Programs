#ifndef header_h
#define header_h

class Date
{
    int m_d,m_m,m_y;
public:
    Date(int d,int m,int y);

    void setdate(int d,int m,int y);

    void getd(){cout<< m_d <<endl;}
    void getm(){cout<< m_m <<endl;}
    void gety(){cout<< m_y <<endl;}
};

#endif // date_h
