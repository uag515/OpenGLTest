//
//  main.cpp
//  OpenGLTest
//
//  Created by UAG on 2019/12/25.
//  Copyright © 2019 DC. All rights reserved.
//

//#include <iostream>
//
//int main(int argc, const char * argv[]) {
//    // insert code here...
//    std::cout << "Hello, World!\n";
//    return 0;
//}
//
//  main.cpp
//  OpenGLTest
//
//  Created by Rick on 2017/3/6.
//  Copyright © 2017年 Rick. All rights reserved.
//

#define GL_SILENCE_DEPRECATION
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
//#include <math.h>
#include <GLUT/glut.h>


void init(void)
{
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0, 200.0, 0.0, 150.0);
}

void lineSegment(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 1, 1);
    glBegin(GL_LINES);
    glVertex2i(180, 15);
    glVertex2i(10, 145);
    glEnd();
    
    glBegin(GL_LINES);
    glVertex2i(0, 0);
    glVertex2i(10, 145);
    glEnd();
    
    glFlush();
}


int main(int argc, char ** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(50, 100);
    glutInitWindowSize(400, 300);
    glutCreateWindow("OpenGL Draw Line DEMO");

    init();
    glutDisplayFunc(lineSegment);
    glutMainLoop();

}

