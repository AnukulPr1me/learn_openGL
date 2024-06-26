
#include <stdio.h>
#include <GL/glew.h>
#include <glfw3.h>

const GLint WIDTH = 800, HEIGHT = 600;

int main() {
	if (!glfwInit) {
		printf("GLFW initialisation failed");
		glfwTerminate();
		return 1;
	}

	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);

	GLFWwindow *mainWindow = glfwCreateWindow(WIDTH, HEIGHT, "Test Window", NULL, NULL);
	if (!mainWindow) {
		printf("GLFW Window creation failed!");
		glfwTerminate();
		return 1;
	}



}


