#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "math.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    timer = new QTimer(this);
    timer2 = new QTimer(this);
    ui->setupUi(this);
    x=100;
    y=400;

    w=10;
    h=10;
    speed=1;
    size=1;


    connect(timer,SIGNAL (timeout()),this, SLOT(OnTimer()));
    connect(timer2,SIGNAL (timeout()),this, SLOT(OnTimer2()));


        QPixmap bkgnd("/Users/newlife/Documents/Programmer/QTProjects/Tank/1.jpg") ;

        QPalette palette;
        palette.setBrush(QPalette::Background, bkgnd);
        this->setPalette(palette);
        QMovie *movie=new QMovie("/Users/newlife/Documents/Programmer/QTProjects/Tank/1112.gif");
        QLabel* label;

        // Play GIF
        label=new QLabel(this);
        label->setGeometry(x+530,y-80,128,190);
        label->setMovie(movie);
        movie->start();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *)
{
    QPainter paint(this); // инициализация QPainter'а

    drawTank(paint,x,y);
    drawGun(paint, x, y);// отрисовка, запуск метода draw
    drawBomb(paint);
    drawWall(paint);

}

void MainWindow::drawTank(QPainter &paint, int x, int y)
{
    brush.setStyle(Qt::SolidPattern);//кисть сплошное закрашивание
    paint.setBrush(brush);//берется кисть с заданным по меню цветом (по умолчанию черная)
    QPolygon polygon;

    int *a= new int [11];//массив для координат точек : x1,y1,x2,y2,...

    for(int i=0;i<11;i+=2)

    {

    a[i]=x;

    a[i+1]=y;

    }

   // a[0]=100;
    //a[1]=400;

    //a[2]=100;
    a[3]-=110;

    a[4]+=130;
    a[5]-=110;

    a[6]+=130;
    a[7]-=50;

    a[8]+=250;
    a[9]-=50;

    a[10]+=280;
    a[11]-=1;


    polygon.setPoints(6,a);//задание координат полигону, первая переменная количество точек, вторая массив координа

    paint.drawPolygon(polygon);

    paint.drawEllipse(x,y,50,50);
    paint.drawEllipse(x+50,y,50,50);
    paint.drawEllipse(x+100,y,50,50);
    paint.drawEllipse(x+150,y,50,50);
    paint.drawEllipse(x+200,y,50,50);

    paint.setBrush(brush1);
    brush1.setStyle(Qt::NoBrush);
    brush1.setColor(Qt::red);
    paint.drawEllipse(x-35,y-10,320,70);


}
void MainWindow::drawGun(QPainter &paint, int x, int y){

    brush.setStyle(Qt::SolidPattern);
    paint.setBrush(brush);
    QPolygon polygon;
    int *a= new int [8];

    for(int i=0;i<8;i+=2)

    {

    a[i]=x;

    a[i+1]=y;

    }

    a[0]+=130;
    a[1]-=90;

    a[2]+=250;
    a[3]-=90;

    a[4]+=250;
    a[5]-=70;

    a[6]+=130;
    a[7]-=70;

    polygon.setPoints(4,a);

    paint.drawPolygon(polygon);


}

void MainWindow::drawBomb(QPainter &paint){

    paint.setBrush(brush);
    brush.setStyle(Qt::SolidPattern);

    paint.drawEllipse(z+150,k-90,20+size,20);

}

void MainWindow::drawWall(QPainter &paint){
    paint.setBrush(brush2);
    brush2.setStyle(Qt::SolidPattern);
    brush2.setColor(Qt::black);
    QPolygon polygon;
    int *a= new int [8];
    for (int i=0; i<8; i+=2){
    a[i]=t;
    a[i+1]=di;
}

    a[0]+=700;
    a[1]+=500;

    a[2]+=700;
    a[3]+=300-h;

    a[4]+=750+w;
    a[5]+=300-h;

    a[6]+=750+w;
    a[7]+=500;

    polygon.setPoints(4,a);

    paint.drawPolygon(polygon);

}

void MainWindow::on_actionRed_triggered()
{
    brush.setColor(Qt::red);//задаем красный цвет кисти

    repaint();


}


void MainWindow::OnTimer()

{//Для "поехали"
    if (x<400){
     x+=x/55;
     z+=z/55;
    }


 //изменение координаты

update();//запускаем обновление экрана

}
void MainWindow::OnTimer2()

{//для выстрела
    z+=10+speed;
    if (z>550&&count2!=1){
        count2++;
       di=sqrt(400000-pow(t,2));
    t=t+10;
    }

    update();
}

void MainWindow::on_action_triggered()
{//Слиться с местностью

    brush.setColor(QColor(210,255,88));
    update();

}

void MainWindow::on_action_2_triggered()
{

    if (count!=1){
        count+=1;

    if (size>30){
       x=x-60;
    } else{
         x=x-25;
    }


    }

    timer2->start(100);
    update();
//огонь
}

void MainWindow::on_action_3_triggered()
{

timer->start(100);
//Поехали
}

void MainWindow::on_actionBlue_triggered()
{
   //Открыть диалоговое окно


    d.show();
    if (d.exec()){

        w=d.w;
        h=d.h;
        speed=d.speed;
       size=d.size;
       if (w>200){
           w=200;
       }
       if (size>80){
           size=80;
       }
       if(h>100){
       h=100;
    }
}
}







