#include <stdio.h>

class Animal
{
public:

	virtual void Voice() {
		printf("あにまる¥n");
	};
};

class Cat : public Animal
{
public:
	void Voice() override{
		printf("にゃ～\n");
	};
};

class Dog : public Animal
{
public:
	void Voice() override {
		printf("ワン！\n");
	};
};

int main(void) {

	Animal* animal[2] = { new Cat,new Dog };

	animal[0]->Voice();
	animal[1]->Voice();

	delete animal[0];
	delete animal[1];

	return 0;
}


