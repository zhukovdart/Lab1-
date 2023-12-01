#include <iostream> // Библиотека для работы с потоками ввода-вывода

using namespace std; // Пространство имен std

double R, y; // Описание переменных
double fact(double R)
{
    if(R >= -7 && R <= -6){
    y=2;
}
if(R >=-6 && R <=-2){
    y=(R+2)*0.25;
}
if(R > -2 && R <= 0){
    y = (sqrt(4-(R+2)*(R+2))+2);
}
if(R > 0 && R <= 2){
    y = (sqrt(4-(R)*(R)));
}
if(R >= 2 && R <= 3){
    y = -(R-2);
}
//cout << "y = " << y;
return y;
}
void main()
{
    //double R;
    for (R = -7; R <= 3; R++)
    {
        y = fact(R);        // Нахождение y
        cout <<"R = "<< R ;
        cout << "\t Y =" << y << endl; // вывод каждого y
    }
}
