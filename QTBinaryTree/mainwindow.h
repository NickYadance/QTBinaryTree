#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QDebug>
#include <QDir>
#include <QFileDialog>
#include <QPainter>
#include <QMouseEvent>
#include <queue>
#include <utility>
#include <QMap>
#include <QIntValidator>
#include "binarytree.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionOpen_File_triggered();

    void on_buttonAdd_clicked();

    void on_buttonDelete_clicked();

    void on_actionSave_File_triggered();



    void on_PostPushButton_clicked();

    void on_InPushButton_clicked();

    void on_PrePushButton_clicked();

    void on_GetleafnumPushButton_clicked();

    void on_InThreadPushButton_clicked();

    void on_PreThreadPushButton_clicked();

    void on_PostThreadPushButton_clicked();

    void on_clearThreadPushButton_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_preThreadPushButton_clicked();

    void on_inThreadPushButton_clicked();

private:
    void initialization_item();
    void hideAllObject();
    void updateWindow();
    void setButton(bool showButtons);
    void paintEvent(QPaintEvent *event);

    std::map<std::string, QLine>        lines_to_ellipse;
    QVector< std::pair<QLabel*,QLabel*> >arrayNumberLabels;
    std::queue<int>                     queue_numbers_to_tree;
    Node *          root = nullptr;
    BinaryTree      bn;
    Ui::MainWindow *ui;
    QString         strNumbers;
    std::string     ID_LABELS[15];

};

#endif // MAINWINDOW_H
