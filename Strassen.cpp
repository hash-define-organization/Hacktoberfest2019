#include<iostream>

using namespace std;

class Strassen
{
            int i,j,a[2][2],b[2][2],c[2][2],p1,p2,p3,p4,p5,p6,p7;
            public:
                        Strassen()
                        {
                                    p1=0,p2=0,p3=0,p4=0,p5=0,p6=0,p7=0;
                                    for(i=0;i<2;i++)
                                    {
                                                for(j=0;j<2;j++)
                                                {
                                                            a[i][j] = 0;
                                                            b[i][j] = 0;
                                                            c[i][j] = 0;
                                                }
                                    }
                        }
                        void read()
                        {
                                    cout<<"Matrix 1 : "<<endl;
                                    for(i=0;i<2;i++)
                                    {
                                                for(j=0;j<2;j++)
                                                {
                                                            cin>>a[i][j];
                                                }
                                    }
                                    cout<<"Matrix 2 : "<<endl;
                                    for(i=0;i<2;i++)
                                    {
                                                for(j=0;j<2;j++)
                                                {
                                                            cin>>b[i][j];
                                                }
                                    }
                        }
                        void cal()
                        {
                                    p1 = (a[0][0] + a[1][1])*(b[0][0] + b[1][1]);
                                    p2 = (a[1][0] + a[1][1])*b[0][0];
                                    p3 = a[0][0]*(b[0][1] - b[1][1]);
                                    p4 = a[1][1]*(b[1][0] - b[0][0]);
                                    p5 = (a[0][0] + a[0][1])*b[1][1];
                                    p6 = (a[1][0] - a[0][0])*(b[0][0] + b[0][1]);
                                    p7 = (a[0][1] - a[1][1])*(b[1][0] + b[1][1]);
                                    c[0][0] = p1 + p4 + - p5 + p7;
                                    c[0][1] = p3 + p5;
                                    c[1][0] = p2 + p4;
                                    c[1][1] = p1 + p3 - p2 + p6;
                        }
                        void print()
                        {
                                    cout<<"Resultant Matrix : "<<endl;
                                    for(i=0;i<2;i++)
                                    {
                                                for(j=0;j<2;j++)
                                                {
                                                            cout<<c[i][j]<<"\t";
                                                }
                                                cout<<endl;
                                    }
                        }
};

main()
{
            Strassen s;


            cout<<"Enter the Matrix"<<endl;
            s.read();
            s.cal();
            s.print();
}
