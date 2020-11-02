    #include <iostream>

    using namespace std;

    double x1,y1,x2,y2,x3,y3,x4,y4;
    double poleTR, pole1, pole2, pole3;

    int main()
    {
        while(cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4)
        {
        if ((x1==0)&&(y1==0)&&(x2==0)&&(y2==0)&&(x3==0)&&(y3==0)&&(x4==0)&&(y4==0)) {break;}
        poleTR=abs((x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2)));
        pole1=abs((x1*(y2-y4)+x2*(y4-y1)+x4*(y1-y2)));
        pole2=abs((x4*(y2-y3)+x2*(y3-y4)+x3*(y4-y2)));
        pole3=abs((x1*(y4-y3)+x4*(y3-y1)+x3*(y1-y4)));
        if (pole1+pole2+pole3!=poleTR) {cout<<"O"<<endl; continue;}
        if ((pole1==0)||(pole2==0)||(pole3==0)) {cout<<"E"<<endl; continue;}
        if ((pole1+pole2+pole3==poleTR)) {cout<<"I"<<endl; continue;}
        }
        return 0;
    }
