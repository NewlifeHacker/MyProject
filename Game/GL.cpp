#include <GL.h>
#include <QKeyEvent>
#include <QGLWidget>
#include <QString>


window :: window(){


}

//----------------------------------------------------------------------------------------
void window:: initializeGL() {
    glOrtho(0,1920,1080,0,0,1);
    glEnable(GL_TEXTURE_2D);
    glEnable(GL_BLEND);
    glDisable(GL_DEPTH_TEST);
    glEnable(  GL_LINE_SMOOTH);
    glEnable(GL_POINT_SMOOTH);
    glEnable (GL_SMOOTH);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
}
//----------------------------------------------------------------------------------------
void window:: resizeGL(int W, int  H) {
    glLoadIdentity();
    glViewport(0,0, (GLint)W,  (GLint)H );
    glOrtho(0,1920,1080,0,0,1);

}
//----------------------------------------------------------------------------------------
void window:: paintGL() {
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        qglClearColor(Qt::cyan);

        _proccessing();
        _draw();
}
//----------------------------------------------------------------------------------------
void window:: keyReleaseEvent (QKeyEvent * apKeyEvent){
    if (apKeyEvent -> key() == Qt::Key_Escape){
        close();
    }
}

//----------------------------------------------------------------------------------------

