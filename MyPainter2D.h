#pragma once
#include <GLFW/glfw3.h>
#include <iostream>


class MyPainter2D
{
public:
	GLFWwindow* window;

	const int width;
	const int height = 480;

	// color = (red, green, blue)
	float *pixels;


	MyPainter2D() //default constructor
		:window(nullptr), pixels(nullptr), width(640)
	{

	}

	~MyPainter2D()//destructor
	{
		std::cout << "destructor MyPainter2D" << std::endl;

		if (pixels != nullptr)
			delete pixels;

		glfwTerminate();
	}


	void initialize()
	{
		/* Initialize the library */
		if (!glfwInit())
		{
			std::cout << "glfw failed" << std::endl;

			exit(1);//end this process
		}

		/* Create a windowed mode window and its OpenGL context */
		window = glfwCreateWindow(width, height, "Hello World", NULL, NULL);
		if (!window)
		{
			glfwTerminate();
			std::cout << "window failed" << std::endl;

			exit(1);
		}

		/* Make the window's context current */
		glfwMakeContextCurrent(window);

		// color = (red, green, blue)
		pixels = new float[width * height * 3];
	}


	void drawOnePixel(const int& x, const int& y, const float& red, const float& green, const float& blue)
	{
		pixels[(x + width*y) * 3 + 0] = red;
		pixels[(x + width*y) * 3 + 1] = green;
		pixels[(x + width*y) * 3 + 2] = blue;
	}

	void drawLine(const int& x_s, const int& y_s, const int& x_e, const int& y_e, const float& red, const float& green, const float& blue)
	{
		if (x_e == x_s)
		{
			for (int y = y_s; y <= y_e; y++)
				drawOnePixel(x_s, y, red, green, blue);
		}
		else
		{
			for (int i = x_s; i <= x_e; i++)
			{
				const int j = (y_e - y_s)*(i - x_s) / (x_e - x_s) + y_s;
				drawOnePixel(i, j, red, green, blue);
			}
		}
	}


	bool ShouldCloseWindow()
	{
		return (bool)glfwWindowShouldClose(window);
	}

	void preProcessing()
	{
		/* Render here */
		glClear(GL_COLOR_BUFFER_BIT);
	}


	void postProcessing()
	{
		glDrawPixels(width, height, GL_RGB, GL_FLOAT, pixels);

		/* Swap front and back buffers */
		glfwSwapBuffers(window);

		/* Poll for and process events */
		glfwPollEvents();
	}

};