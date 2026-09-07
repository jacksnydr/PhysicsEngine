#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include <iostream>

int main() {

    //Initialize GLFW
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    // Create main window object
    GLFWwindow* window = glfwCreateWindow(800, 800, "Physics Engine", NULL, NULL);
    if (window == NULL) {
        std::cout << "Failed to create window" << std::endl;
        glfwTerminate();
        return -1;
    }

    // Make current opengl object set to window
    glfwMakeContextCurrent(window);

    // Load graphics
    gladLoadGL();
    glViewport(0, 0, 800, 800);

    // Color background
    glClearColor(0.07f, 0.13f, 0.17f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glfwSwapBuffers(window);

    // Main window loop
    while (!glfwWindowShouldClose(window)) {
        glfwPollEvents();
    }

    // End main program
    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}