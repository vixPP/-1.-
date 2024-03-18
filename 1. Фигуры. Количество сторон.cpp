#include <iostream>


using namespace std;

class Figure 
{
    
protected:
    int sides_count;
    string name;
public:
    Figure():sides_count(0)
    {
        name = "Фигура";
    }
    int get_sides_counts() const 
    {
        return sides_count;
    }

    string get_name()
    {
        return name;
    }

    void set_name(string name) 
    {
        this->name = name;
    }
};

class Triangle : public Figure 
{
public:
    Triangle()
    {
        name = "Треугольник";
        sides_count = 3;
    }
   
};

class Quadrilateral : public Figure 
{
public:
    Quadrilateral()
    {
        name = "Четырeхугольник";
        sides_count = 4;
    }
   
};

int main() 
{
    cout << "Колличество сторон: " << endl;

    Figure figure;
    cout << figure.get_name() << ": " << figure.get_sides_counts() << endl;

    Triangle triangle;
    cout << triangle.get_name() << ": " << triangle.get_sides_counts() << endl;

    Quadrilateral quadrilateral;
    cout << quadrilateral.get_name() << ": " << quadrilateral.get_sides_counts() << endl ;
 
    
    return 0;
}   

