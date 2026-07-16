#include<iostream>
#include<Windows.h>



template<class T1, class T2>
class Minclass
{
private:
	T1 value1_;
	T2 value2_;

public:
	Minclass(T1 value1, T2 value2)
	{
		value1_ = value1;
		value2_ = value2;
	}

	double Min()
	{
		if (value1_ < value2_)
		{
			return value1_;
		}

		return value2_;
	}
};




int main() {

	Minclass<int, int> a(3, 5);
	Minclass<float, float> b(3.5f, 5.2f);
	Minclass<double, double> c(3.14, 5.67);
	Minclass<int, float> d(3, 5.2f);
	Minclass<int, double> e(3, 5.67);
	Minclass<float, double> f(3.5f, 5.67);

	std::cout << a.Min() << std::endl;
	std::cout << b.Min() << std::endl;
	std::cout << c.Min() << std::endl;
	std::cout << d.Min() << std::endl;
	std::cout << e.Min() << std::endl;
	std::cout << f.Min() << std::endl;

	return 0;
}