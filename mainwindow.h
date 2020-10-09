#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    void mudarPosicaoBotoes();
    bool clicouVermelhoECirculoVermelho();
    bool clicouVerdeECirculoVerde();
    bool clicouAzulECirculoAzul();
    void desabilitarBotoes();
    void limparCampos();
    void habilitarBotoes();
    void zerarVariaveis();


public slots:
    void mudarPosicaoCirculo();
    void clicouBotao();
    void resetarJogo();
};
#endif // MAINWINDOW_H
