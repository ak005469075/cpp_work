 #include<iostream>
 #include<cmath>
using namespace std;
int main()
{
    double x1,y1,x2,y2;
    cin>>x1>>y1;
    cin>>x2>>y2;
    cout<<sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1))<<endl;
    return 0;
}
 //计算公式distance=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);distance=sqrt(distance);