#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "convexhulldata.h"
#include <QWidget>
#include <QMenu>
#include <QAction>
#include <QWidget>
#include <QVBoxLayout>
#include <QLabel>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();



private slots:
    void on_action_triggered();

private slots:
    void openNewWindow()
    {
        ConvexhullData *newWindow = new ConvexhullData(this);
        newWindow->show();
    }
private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
