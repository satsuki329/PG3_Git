#include<stdio.h>

class shapes
{
public:
	virtual void Size() = 0;
	virtual void Draw() = 0;

protected:
	float size;
	float radius;
};

class circle :public shapes
{
public:
	void Size();
	void Draw() { printf("面積 %f\n", size); };
};

class square :public shapes
{
public:
	void Size() override;
	void Draw() { printf("面積 %f\n", size); };
};

void shapes::Size() {}

void circle::Size()
{
	radius = 5.0f;
	printf("円の半径 %f\n", radius);
	size = radius * radius * 3.14f;
}


void square::Size()
{
	radius = 5.0f;
	printf("矩形の半径 %f\n", radius);
	size = radius * 2.0f * radius * 2.0f;
}

int main(void) {

	shapes*ishape[2] = { new circle,new square };

	ishape[0]->Size();
	ishape[1]->Size();

	ishape[0]->Draw();
	ishape[1]->Draw();

	delete ishape[0];
	delete ishape[1];

	return 0;
}

