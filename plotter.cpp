#include "plotter.h"
#include <QPainter>
#include <QBrush>
#include <QPen>
#include <QColor>
#include <stdlib.h>

int valorRand;

Plotter::Plotter(QWidget *parent) : QWidget(parent){

}

void Plotter::paintEvent(QPaintEvent *e){
    QPainter painter(this);
    QBrush brush;
    QPen pen;

    brush.setColor(QColor(255,255,255));
    brush.setStyle(Qt::SolidPattern);

    pen.setWidth(20);

    valorRand = rand()%3 + 1;
    switch (valorRand) {
    case 1:
        pen.setColor(QColor(255,0,0));
        break;
    case 2:
         pen.setColor(QColor(0,255,0));
        break;
    case 3:
         pen.setColor(QColor(0,0,255));
        break;
    default:
         pen.setColor(QColor(255,0,0));
    }
    painter.setBrush(brush);
    painter.setPen(pen);

    int posicaoX = rand() %(width()-60) + 60;
    int posicaoY = rand() % (height()-60) + 60;

    painter.drawEllipse(posicaoX,posicaoY,20,20);

}

int Plotter::valorCorMostrada()
{
    return valorRand;
}



