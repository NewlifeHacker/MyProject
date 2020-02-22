#ifndef GL_H
#define GL_H
#include <QGLWidget>
#include <QtWidgets>
#include "dialog.h"
#include "ui_dialog.h"
#include <QImage>
#include <QtOpenGL>

struct window: QGLWidget
{


    window();



    void initializeGL() override;
    void resizeGL(int, int ) override;
    void paintGL() override;
    void keyReleaseEvent(QKeyEvent *) override;
   // void draw_image (QImage *);
   // void mousePressEvent(QMouseEvent *me) override;






private:

    void _proccessing();
    void _draw();


};


#endif // GL_H
