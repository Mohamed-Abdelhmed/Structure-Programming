#include<iostream>
using namespace std;
int main(){
    const float PI = 3.14159;
    double radius, height, volume;
    cout <<"--------Ver 1.0--------"<<endl<<"Enter the radius of the cylinder: ";
    cin >> radius;
    cout <<"Enter the height of the cylinder: ";
    cin >> height;
    volume = PI * (radius* radius) * height;
    cout <<"The volume of the cylinder is: "<<volume<<endl<<"Thank You.";
}
