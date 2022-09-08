#include <GLFW/glfw3.h>

int main(void)
{
    GLFWwindow* window;
    if (!glfwInit())
        return -1;

    window = glfwCreateWindow(640, 480, "Shapes Rendering", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);

    while (!glfwWindowShouldClose(window))
    {
        glClear(GL_COLOR_BUFFER_BIT);

        /*glBegin(GL_TRIANGLES);

        glColor3f(1.f, 0.0f, 0.f);
        glVertex2f(-0.5f, -0.5f);

        glColor3f(0.f, 1.f, 0.f);
        glVertex2f(0.0f, 0.5f);

        glColor3f(0.f, 0.f, 1.f);
        glVertex2f(0.5f, -0.5f);

        glEnd();*/

        glBegin(GL_QUADS);

        glColor3f(1.f, 0.0f, 0.f);
        glVertex2f(-0.5f, -0.5f);

        glColor3f(0.f, 1.f, 0.f);
        glVertex2f(-0.5f, 0.5f);

        glColor3f(0.f, 0.f, 1.f);
        glVertex2f(0.5f, 0.5f);

        glColor3f(1.f, 1.f, 0.f);
        glVertex2f(0.5f, -0.5f);

        glEnd();

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwTerminate();

}
