#include <iostream>


using namespace std;

class Figure 
{
    
protected:
    int sides_count;

public:
    Figure():sides_count(0){}
    int get_sides_counts() const 
    {
        return sides_count;
    }
};

class Triangle : public Figure 
{
public:
    Triangle()
    {
        sides_count = 3;
    }
   
};

class Quadrilateral : public Figure 
{
public:
    Quadrilateral()
    {
        sides_count = 4;
    }
   
};

int main() 
{
    Figure figure;
    Triangle triangle;
    Quadrilateral quadrilateral;
    cout << "Колличество сторон: " << endl;
    cout << "Фигура: " << figure.get_sides_counts() << endl;
    cout << "Треугольник: " << triangle.get_sides_counts() << endl;
    cout << "Четырехугольник: " << quadrilateral.get_sides_counts() << endl;
    
    return 0;
}

