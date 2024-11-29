#include <iostream>
#include <cmath>
using namespace std;
double deg2rad(double degree){
    return degree*(M_PI/180);
}
double findXComponent(double L1,double L2,double zeta1,double zeta2){
    double x;
    x= (L1*(cos(zeta1)))+(L2*(cos(zeta2)));
    return x;
}
double findYComponent(double L1,double L2,double zeta1,double zeta2){
    double y;
    y= (L1*(sin(zeta1)))+(L2*(sin(zeta2)));
    return y;
}
double pythagoras(double x,double y){
    double z;
    z=pow(((x*x)+(y*y)),0.5);\
    return z;
}
double rad2deg(double radius){
    return radius*(180/ M_PI);
}
void showResult(double vecL,double vecZ){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
    cout << "Length of the resultant vector = " << vecL <<endl;
    cout << "Direction of the resultant vector (deg) = " << vecZ <<endl;
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
}
int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 
    showResult(result_vec_length,result_vec_direction);
}
