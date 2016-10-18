#include <iostream>
#include <string>
#include <vector>
#include "MyPainter2D.h"

MyPainter2D my_painter;

//class Box // NO PARENT (2pts)
//{
//public:
//	// some variables
//	void draw()
//	{
//		//std::cout << "Box" << std::endl;
//		my_painter.drawLine(200, 400, 250, 400, 0.0f, 0.0f, 1.0f);
//		my_painter.drawLine(200, 350, 250, 350, 0.0f, 0.0f, 1.0f);
//		my_painter.drawLine(200, 350, 200, 400, 0.0f, 0.0f, 1.0f);
//		my_painter.drawLine(250, 350, 250, 400, 0.0f, 0.0f, 1.0f);
//	}
//};
//
//class Circle // NO PARENT (2pts)
//{
//public:
//	// some variables
//	void draw()
//	{
//		//std::cout << "Circle" << std::endl;
//		my_painter.drawLine(321, 80, 325, 80, 0.0f, 0.0f, 1.0f); my_painter.drawLine(326, 80, 330, 80, 0.0f, 0.0f, 1.0f);
//		my_painter.drawLine(317, 79, 320, 79, 0.0f, 0.0f, 1.0f); my_painter.drawLine(331, 79, 334, 79, 0.0f, 0.0f, 1.0f);
//		my_painter.drawLine(315, 78, 317, 78, 0.0f, 0.0f, 1.0f); my_painter.drawLine(334, 78, 336, 78, 0.0f, 0.0f, 1.0f);
//		my_painter.drawLine(313, 77, 314, 77, 0.0f, 0.0f, 1.0f); my_painter.drawLine(337, 77, 338, 77, 0.0f, 0.0f, 1.0f);
//		my_painter.drawLine(312, 76, 313, 76, 0.0f, 0.0f, 1.0f); my_painter.drawLine(338, 76, 339, 76, 0.0f, 0.0f, 1.0f);
//		my_painter.drawLine(310, 75, 311, 75, 0.0f, 0.0f, 1.0f); my_painter.drawLine(340, 75, 341, 75, 0.0f, 0.0f, 1.0f);
//		my_painter.drawLine(309, 74, 310, 74, 0.0f, 0.0f, 1.0f); my_painter.drawLine(341, 74, 342, 74, 0.0f, 0.0f, 1.0f);
//		my_painter.drawLine(308, 73, 309, 73, 0.0f, 0.0f, 1.0f); my_painter.drawLine(342, 73, 343, 73, 0.0f, 0.0f, 1.0f);
//		my_painter.drawLine(307, 72, 308, 72, 0.0f, 0.0f, 1.0f); my_painter.drawLine(343, 72, 344, 72, 0.0f, 0.0f, 1.0f);
//		my_painter.drawLine(306, 71, 307, 71, 0.0f, 0.0f, 1.0f); my_painter.drawLine(344, 71, 345, 71, 0.0f, 0.0f, 1.0f);
//		my_painter.drawLine(306, 70, 306, 70, 0.0f, 0.0f, 1.0f); my_painter.drawLine(345, 70, 345, 70, 0.0f, 0.0f, 1.0f);
//		my_painter.drawLine(305, 69, 305, 69, 0.0f, 0.0f, 1.0f); my_painter.drawLine(346, 69, 346, 69, 0.0f, 0.0f, 1.0f);
//		my_painter.drawLine(304, 68, 305, 68, 0.0f, 0.0f, 1.0f); my_painter.drawLine(346, 68, 347, 68, 0.0f, 0.0f, 1.0f);
//		my_painter.drawLine(304, 67, 304, 67, 0.0f, 0.0f, 1.0f); my_painter.drawLine(347, 67, 347, 67, 0.0f, 0.0f, 1.0f);
//		my_painter.drawLine(303, 64, 303, 66, 0.0f, 0.0f, 1.0f); my_painter.drawLine(348, 64, 348, 66, 0.0f, 0.0f, 1.0f);
//		my_painter.drawLine(302, 61, 302, 64, 0.0f, 0.0f, 1.0f); my_painter.drawLine(349, 61, 349, 64, 0.0f, 0.0f, 1.0f);
//		my_painter.drawLine(301, 56, 301, 60, 0.0f, 0.0f, 1.0f); my_painter.drawLine(350, 56, 350, 60, 0.0f, 0.0f, 1.0f);
//
//		my_painter.drawLine(301, 51, 301, 55, 0.0f, 0.0f, 1.0f); my_painter.drawLine(350, 51, 350, 55, 0.0f, 0.0f, 1.0f);
//		my_painter.drawLine(302, 47, 302, 50, 0.0f, 0.0f, 1.0f); my_painter.drawLine(349, 47, 349, 50, 0.0f, 0.0f, 1.0f);
//		my_painter.drawLine(303, 45, 303, 47, 0.0f, 0.0f, 1.0f); my_painter.drawLine(348, 45, 348, 47, 0.0f, 0.0f, 1.0f);
//		my_painter.drawLine(304, 44, 304, 44, 0.0f, 0.0f, 1.0f); my_painter.drawLine(347, 44, 347, 44, 0.0f, 0.0f, 1.0f);
//		my_painter.drawLine(304, 43, 305, 43, 0.0f, 0.0f, 1.0f); my_painter.drawLine(346, 43, 347, 43, 0.0f, 0.0f, 1.0f);
//		my_painter.drawLine(305, 42, 305, 42, 0.0f, 0.0f, 1.0f); my_painter.drawLine(346, 42, 346, 42, 0.0f, 0.0f, 1.0f);
//		my_painter.drawLine(306, 41, 306, 41, 0.0f, 0.0f, 1.0f); my_painter.drawLine(345, 41, 345, 41, 0.0f, 0.0f, 1.0f);
//		my_painter.drawLine(306, 40, 307, 40, 0.0f, 0.0f, 1.0f); my_painter.drawLine(344, 40, 345, 40, 0.0f, 0.0f, 1.0f);
//		my_painter.drawLine(307, 39, 308, 39, 0.0f, 0.0f, 1.0f); my_painter.drawLine(343, 39, 344, 39, 0.0f, 0.0f, 1.0f);
//		my_painter.drawLine(308, 38, 309, 38, 0.0f, 0.0f, 1.0f); my_painter.drawLine(342, 38, 343, 38, 0.0f, 0.0f, 1.0f);
//		my_painter.drawLine(309, 37, 310, 37, 0.0f, 0.0f, 1.0f); my_painter.drawLine(341, 37, 342, 37, 0.0f, 0.0f, 1.0f);
//		my_painter.drawLine(310, 36, 311, 36, 0.0f, 0.0f, 1.0f); my_painter.drawLine(340, 36, 341, 36, 0.0f, 0.0f, 1.0f);
//		my_painter.drawLine(312, 35, 313, 35, 0.0f, 0.0f, 1.0f); my_painter.drawLine(338, 35, 339, 35, 0.0f, 0.0f, 1.0f);
//		my_painter.drawLine(313, 34, 314, 34, 0.0f, 0.0f, 1.0f); my_painter.drawLine(337, 34, 338, 34, 0.0f, 0.0f, 1.0f);
//		my_painter.drawLine(315, 33, 317, 33, 0.0f, 0.0f, 1.0f); my_painter.drawLine(334, 33, 336, 33, 0.0f, 0.0f, 1.0f);
//		my_painter.drawLine(317, 32, 320, 32, 0.0f, 0.0f, 1.0f); my_painter.drawLine(331, 32, 334, 32, 0.0f, 0.0f, 1.0f);
//		my_painter.drawLine(321, 31, 325, 31, 0.0f, 0.0f, 1.0f); my_painter.drawLine(326, 31, 330, 31, 0.0f, 0.0f, 1.0f);
//	}
//};
//
//class GeometricObjectInterface
//{
//public:
//	virtual void draw() = 0;
//
//};
//
//template<class T_OPERATION>
//class GeometricObject : public GeometricObjectInterface
//{
//public:
//	void draw()
//	{
//		T_OPERATION operation;
//		operation.draw();
//	}
//};

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

	

	



	//std::vector<GeometricObjectInterface*> obj_list;

	//obj_list.push_back(new GeometricObject<Box>);
	//obj_list.push_back(new GeometricObject<Circle>);


	my_painter.initialize();
	while (!my_painter.ShouldCloseWindow())
	{
		for (int j = 0; j < my_painter.height; j++)
		{
			for (int i = 0; i < my_painter.width; i++)
				my_painter.drawOnePixel(i, j, 1.0f, 1.0f, 1.0f);
		}

		my_painter.preProcessing();

		/*for (auto itr : obj_list)
			itr->draw();*/

		my_box.exe();
		my_circle.exe();

		my_painter.postProcessing();

	}

	return 0;
}