#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

#include <QMainWindow>
#include "ui_main_window.h"

namespace Ui
{
    class MainWindow;
}

class MainWindow : public QMainWindow 
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    virtual ~MainWindow();

private:
    Ui::MainWindow ui;
};

#endif