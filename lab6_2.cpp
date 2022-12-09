#include <iostream>
#include <cmath>
using namespace std;


double radian;
double degree;
double xlength;
double ylength;
double truelength;

double deg2rad(double degree){
    radian = (M_PI*degree)/180;
    return radian;
}

double rad2deg(double red){
    degree = (180*red)/M_PI;
    return degree;
}

double findXComponent(double flength,double slength,double fdeg,double sdeg){
    xlength = flength*cos(fdeg)+slength*cos(sdeg);
    return xlength;
}

double findYComponent(double flength,double slength,double fdeg,double sdeg){
    ylength = flength*sin(fdeg)+slength*sin(sdeg);
    return ylength;
}

double pythagoras(double xcomp,double ycomp){
    truelength = sqrt(pow(xcomp,2)+pow(ycomp,2));
    return truelength;
}

void showResult(double vec_length,double vec_direct){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
    cout << "Length of the resultant vector = " << vec_length<< "\n";
    cout << "Direction of the resultant vector (deg) = "<< vec_direct<< "\n";
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
