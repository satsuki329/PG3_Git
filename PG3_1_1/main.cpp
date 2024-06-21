#include <stdio.h>
#include <iostream>

template <typename Type, typename Type2>


/*クラス名「TemplateClass」でクラステンプレート定義*/
class TemplateClass
{
public:
	TemplateClass(Type number1, Type2 number2) : number1(number1), number2(number2) {}

	Type Min()
	{
		if (number1 < number2)
		{
			return static_cast<Type>(number1);
		}
		else {
			return static_cast<Type2>(number2);
		}
	};
private:
	Type  number1;
	Type2 number2;
};

int main() {

	/*クラス名から型を考えて<>の中を定義しよう*/
	TemplateClass<int, float> intFloatTemplate(10, 50.0f);
	TemplateClass<int, double> intDoubleTemplate(80, 13.0);
	TemplateClass<float, int> floatIntTemplate(2.0f, 9);
	TemplateClass<float, double> floatDoubleTemplate(11.0f, 3.5);
	TemplateClass<double, int> doubleIntTemplate(666.0, 333);
	TemplateClass<double, float> doubleFloatTemplate(435.8, 563.5f);

	std::cout << "int(10)　と float(50.0f) を比べて小さい数字を表す：" << intFloatTemplate.Min() << std::endl;
	std::cout << "int(80)　と double(13.0) を比べて小さい数字を表す：" << intDoubleTemplate.Min() << std::endl;
	std::cout << "float(2.0f)　と int(9) を比べて小さい数字を表す：" << floatIntTemplate.Min() << std::endl;
	std::cout << "float(11.0f)　と double(3.5) を比べて小さい数字を表す：" << floatDoubleTemplate.Min() << std::endl;
	std::cout << "double(666.0)　と int(333) を比べて小さい数字を表す：" << doubleIntTemplate.Min() << std::endl;
	std::cout << "double(435.8)　と float(563.5) を比べて小さい数字を表す：" << doubleFloatTemplate.Min() << std::endl;

	return 0;
}