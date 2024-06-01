#include <iostream>

class Figure 
{
protected:
	size_t sides_count;
	std::string name;
public:
	Figure(size_t sides = 0, std::string fig_name = "Фигура") : sides_count(sides), name(fig_name) {}

	size_t get_sides_count() const 
	{
		return sides_count;
	}
	std::string get_name() const 
	{
		return name;
	}
};

class Triangle : public Figure 
{
public:
	Triangle() : Figure(3, "Треугольник") {}
};

class Quadrangle : public Figure 
{
public:
	Quadrangle() : Figure(4, "Четырёхугольник") {}
};


int main() 
{
	setlocale(LC_ALL , "Russian");

	Figure figure;
	Triangle triangle;
	Quadrangle quadrangle;

	std::cout << "Количество сторон:\n";
	std::cout << figure.get_name() << ": " << figure.get_sides_count() << "\n";
	std::cout << triangle.get_name() << ": " << triangle.get_sides_count() << "\n";
	std::cout << quadrangle.get_name() << ": " << quadrangle.get_sides_count() << "\n";
}