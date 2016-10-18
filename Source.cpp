#include <iostream>
#include <string>
#include <vector>
#include "MyPainter2D.h"

MyPainter2D my_painter;

class GeometricObject
{

public:
	void(GeometricObject::*callback_)(void) = nullptr;

	void exe()
	{
		(this->*callback_)();
	}

	void drawCircle()//void drawCircle(const int& v)
	{
		//std::cout << "circle" << std::endl;
		my_painter.drawLine(180, 270, 270, 270, 0.0f, 0.0f, 1.0f);
		my_painter.drawLine(180, 180, 270, 180, 0.0f, 0.0f, 1.0f);
		my_painter.drawLine(180, 180, 180, 270, 0.0f, 0.0f, 1.0f);
		my_painter.drawLine(270, 180, 270, 270, 0.0f, 0.0f, 1.0f);

		for (int i = 200; i < 250; i++)
		{
			for (int j = 200; j < 250; j++)
				my_painter.drawOnePixel(i, j, 0.0f, 0.0f, 1.0f);
		}
	}

	void drawBox()
	{
		//std::cout << "box" << std::endl;
		int w = 50;
		int h = 50;

		int x = 325;
		int y = 175;

		for (int i = 0; i<w * 2; i++)
		{
			for (int j = 0; j<h * 2; j++)
			{
				if (w*h >(i + 0.5 - w)*(i + 0.5 - w) + (j + 0.5 - h)*(j + 0.5 - h))
					my_painter.drawOnePixel(i + x, j + y, 1.0f, 0.0f, 0.0f);
			}
		}

		w = 49;
		h = 49;
		x = 326;
		y = 176;

		for (int i = 0; i<w * 2; i++)
		{
			for (int j = 0; j<h * 2; j++)
			{
				if (w*h >(i + 0.5 - w)*(i + 0.5 - w) + (j + 0.5 - h)*(j + 0.5 - h))
					my_painter.drawOnePixel(i + x, j + y, 1.0f, 1.0f, 1.0f);
			}
		}


		for (int i = 350; i < 400; i++)
		{
			for (int j = 200; j < 250; j++)
				my_painter.drawOnePixel(i, j, 1.0f, 0.0f, 0.0f);
		}
	}

};

// And implement an templatized GeometricObject class. (3pts)
int main()
{
	GeometricObject my_box, my_circle;

	my_box.callback_ = &GeometricObject::drawBox;
	my_circle.callback_ = &GeometricObject::drawCircle;


	my_painter.initialize();
	while (!my_painter.ShouldCloseWindow())
	{
		for (int j = 0; j < my_painter.height; j++)
		{
			for (int i = 0; i < my_painter.width; i++)
				my_painter.drawOnePixel(i, j, 1.0f, 1.0f, 1.0f);
		}

		my_painter.preProcessing();
		
		my_box.exe();
		my_circle.exe();

		my_painter.postProcessing();

	}

	return 0;
}