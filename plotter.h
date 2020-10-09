#ifndef PLOTTER_H
#define PLOTTER_H

#include <QWidget>

class Plotter : public QWidget{
  Q_OBJECT
private:
  float ampl, freq;
  float teta;
  float velocidade;

public:
  explicit Plotter(QWidget *parent = 0);
  void paintEvent(QPaintEvent *e);
  int valorCorMostrada();

signals:

public slots:

};

#endif // PLOTTER_H
