#include <iostream>
#include <random>
using namespace std;

int main()
{
    //variables in
double a,b,c; //ax^2+bx+c
int lim1, lim2;
cout<< "a b c vvedi "; cin>>a>> b>> c;
cout<<endl<< "Perdeli funcii 1-2 "; cin>>lim1>>lim2;
int accur;
cout<<endl<< "Tochnost' from 1 to 100 = "; cin>>accur;
//
int n = rand()%accur*20+50;

double area=0, x_coord=lim1,y_coord;
double func_long=lim2-lim1;
double step=func_long/n;
double x_center;
for(int n_c=1;n_c<n;n_c++){
    x_center = (x_coord+(x_coord+step))/2;
    area = area+ step*(a*x_center*x_center+b*x_center+c);
    }

cout<< "AREA IS = "<<area;
}
