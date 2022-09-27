//#include<glad/glad.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//void framebuffer_size_callback(GLFWwindow* window, int width, int height) {
//	glViewport(0, 0, width, height);
//}
//void processInput(GLFWwindow* window) {
//	if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
//		glfwSetWindowShouldClose(window, true);
//	if (glfwGetKey(window,GLFW_MOUSE_BUTTON_1)==GLFW_PRESS)
//	{
//		float c= rand() / float(RAND_MAX);
//		glClearColor(c,c,c,1.0f);
//		glClear(GL_COLOR_BUFFER_BIT);
//	}
//	
//}
//int main(int argc, char** argv) {
//	srand((unsigned int)(time(NULL)));
//	glfwInit();
//	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
//	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
//	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
//	GLFWwindow* window = glfwCreateWindow(800, 600, "OpenGL", NULL, NULL);
//	if (window == NULL) {
//		std::cout << "Failed to create GLFW window" << std::endl;
//		glfwTerminate();
//		return -1;
//	}
//	glfwMakeContextCurrent(window);
//	glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);
//	while (!glfwWindowShouldClose(window)) {
//		processInput(window);
//		float c = rand() / float(RAND_MAX);
//		glClearColor(c, c, c, 1.0f);
//		glClear(GL_COLOR_BUFFER_BIT);
//		glfwPollEvents();
//		glfwSwapBuffers(window);
//	}
//	glfwTerminate();
//	return 0;
//	
//}