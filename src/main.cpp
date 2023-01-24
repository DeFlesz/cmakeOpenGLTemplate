#include <iostream>
#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>

int main()
{
    std::cout << "Hello, world!\n";
    GLFWwindow *window;

    glfwInit();

    window = glfwCreateWindow(800, 600, "Okno", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        std::cout << "fail...\n";
        exit(EXIT_FAILURE);
    }

    while (!glfwWindowShouldClose(window))
    {
        /* code */
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    return 0;
}
