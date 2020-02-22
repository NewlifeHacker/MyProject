
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPainter>
#include <QTimer> // библиотека для работы с таймером
#include <QMovie>
#include <QLabel>
#include <dialog.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void paintEvent(QPaintEvent *);
    void drawTank(QPainter & paint,int x,int y);
    void drawGun(QPainter &paint, int x, int y);
    void drawBomb(QPainter &paint);
    void drawWall(QPainter &paint);


    int w, h;//ширина и высота мишени
    int speed;//скорость снаряда
    int size;//размер снаряда



private slots:



    void on_action_triggered();

    void on_action_2_triggered();

    void on_action_3_triggered();

    void on_actionBlue_triggered();

    void on_actionRed_triggered();


private:
     QMovie movie;




Ui::MainWindow *ui;
Dialog d;
QBrush brush;
QBrush brush1;
QBrush brush2;
QTimer *timer;
QTimer *timer2;
int x,y;
int z=100,k=400;
double t=0, di=0;
int count=0;
int count2=0;

public slots:


void OnTimer();
void OnTimer2();

};

#endif // MAINWINDOW_H
