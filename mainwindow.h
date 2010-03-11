#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui/QMainWindow>
#include <QAction>
#include <QMenu>
#include <QMenuBar>
#include "mainwidget.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    QMenu * loadMenu;
    QMenu * saveMenu;

    QAction * newFileAct;
    QAction * saveBrailleAct;
    QAction * saveMorseAct;
    QAction * saveNormalAct;
    QAction * loadBrailleAct;
    QAction * loadMorseAct;
    QAction * loadNormalAct;
    QAction * aboutAct;
    QAction * exitAct;

    MainWidget * main;

    void createActions();
    void createMenus();

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void newFile();

    void loadBraille();
    void loadMorse();
    void loadNormal();

    void saveBraille();
    void saveMorse();
    void saveNormal();

    void about();
};

#endif // MAINWINDOW_H
