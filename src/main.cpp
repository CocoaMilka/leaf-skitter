#include <iostream>
#include <GLFW/glfw3.h>

#include "input.hpp"

int main()
{
	std::cout << "hello everypony!!" << std::endl;

	GLFWwindow* window;
	
	// init library
	if (!glfwInit())
		return -1;

	// create window with opengl context
	window = glfwCreateWindow(640, 480, "Leaf Skitter", NULL, NULL);

	if (!window)
	{
		glfwTerminate();
		return -1;
	}

	glfwMakeContextCurrent(window);

	// reference input.hpp for keycallbacks
	glfwSetKeyCallback(window, key_callback);

	while(!glfwWindowShouldClose(window))
	{
		// render goes here!!
		glClear(GL_COLOR_BUFFER_BIT);
		
		// swap front and back buffers
		glfwSwapBuffers(window);

		glfwPollEvents();
	}

	glfwTerminate();
	return 0;
}
