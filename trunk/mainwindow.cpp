#include "mainwindow.h"
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    main = new MainWidget();
    setCentralWidget( main );

    createActions();
    createMenus();

    setWindowTitle("majoTRANSLATOR");
    setMinimumSize(900, 690);
    resize(960, 700);
}

MainWindow::~MainWindow()
{}


void MainWindow::createActions()
{
    newFileAct = new QAction(tr("&Nowy"), this);
    connect(newFileAct, SIGNAL(triggered()), this, SLOT(newFile()));

    saveBrailleAct = new QAction(tr("Zapisz Braillem"), this);
    connect(saveBrailleAct, SIGNAL(triggered()), this, SLOT(saveBraille()));

    saveMorseAct = new QAction(tr("Zapisz Morsem"), this);
    connect(saveMorseAct, SIGNAL(triggered()), this, SLOT(saveMorse()));

    saveNormalAct = new QAction(tr("Zapisz normalnym tekstem"), this);
    connect(saveNormalAct, SIGNAL(triggered()), this, SLOT(saveNormal()));

    loadBrailleAct = new QAction(tr("Za³aduj plik z Braillem"), this);
    connect(loadBrailleAct, SIGNAL(triggered()), this, SLOT(loadBraille()));

    loadMorseAct = new QAction(tr("Za³aduj plik z Morsem"), this);
    connect(loadMorseAct, SIGNAL(triggered()), this, SLOT(loadMorse()));

    loadNormalAct = new QAction(tr("Za³aduj plik ze zwyk³ym tekstem"), this);
    connect(loadNormalAct, SIGNAL(triggered()), this, SLOT(loadNormal()));

    aboutAct = new QAction(tr("O programie"), this);
    connect(aboutAct, SIGNAL(triggered()), this, SLOT(about()));

    exitAct = new QAction("WyjdŸ", this);
    connect(exitAct, SIGNAL(triggered()), this, SLOT(close()));
}

void MainWindow::createMenus()
{
    loadMenu = menuBar()->addMenu(tr("Za³aduj"));
    loadMenu->addAction(newFileAct);
    loadMenu->addAction(loadBrailleAct);
    loadMenu->addAction(loadMorseAct);
    loadMenu->addAction(loadNormalAct);
    loadMenu->addSeparator();
    loadMenu->addAction(aboutAct);
    loadMenu->addSeparator();
    loadMenu->addAction(exitAct);

    saveMenu = menuBar()->addMenu(tr("Zapisz"));
    saveMenu->addAction(saveBrailleAct);
    saveMenu->addAction(saveMorseAct);
    saveMenu->addAction(saveNormalAct);
}


void MainWindow::newFile()
{
    if( main != 0 ){
        delete main;
    }
    main = new MainWidget;
    setCentralWidget(main);
}

void MainWindow::loadBraille()
{
    newFile();
    QString name = QFileDialog::getOpenFileName(this, "Otworz plik", "", "plik tekstowy(*.txt)");
    QFile file(name);
    file.open(QIODevice::ReadOnly | QIODevice::Text);
    QTextStream in(&file);
    QString text;

    text = in.readAll();
    QString normal = main->brailleWidget->CodeToNormal(text);

    main->updateText( normal );
    main->normalText->setText( normal );
}
void MainWindow::loadMorse()
{
    newFile();
    QString name = QFileDialog::getOpenFileName(this, "Otworz plik", "", "plik tekstowy(*.txt)");
    QFile file(name);
    file.open(QIODevice::ReadOnly | QIODevice::Text);
    QTextStream in(&file);
    QString text;

    text = in.readAll();
    QString normal = main->morseWidget->CodeToNormal(text);

    main->updateText( normal );
    main->normalText->setText( normal );
}
void MainWindow::loadNormal()
{
    newFile();
    QString name = QFileDialog::getOpenFileName(this, "Otworz plik", "", "plik tekstowy(*.txt)");
    QFile file(name);
    file.open(QIODevice::ReadOnly | QIODevice::Text);
    QTextStream in(&file);
    QString text;
    text = in.readAll();

    main->updateText( text );
    main->normalText->setText( text );
}

void MainWindow::saveBraille()
{
    QString name = QFileDialog::getSaveFileName(this, "Zapisz w kodowaniu Braille'a", "braille.txt", "plik tekstowy(*.txt)");
    QFile file(name);
    file.open(QFile::WriteOnly | QIODevice::Text);
    QTextStream out(&file);
    out << main->brailleCode->toPlainText();
    file.close();
}
void MainWindow::saveMorse()
{
    QString name = QFileDialog::getSaveFileName(this, "Zapisz w kodowaniu Morse'a", "morse.txt", "plik tekstowy(*.txt)");
    QFile file(name);
    file.open(QFile::WriteOnly | QIODevice::Text);
    QTextStream out(&file);
    out << main->morseCode->toPlainText();
    file.close();
}
void MainWindow::saveNormal()
{
    QString name = QFileDialog::getSaveFileName(this, "Zapisz tekst normalny", "normal.txt", "plik tekstowy(*.txt)");
    QFile file(name);
    file.open(QFile::WriteOnly | QIODevice::Text);
    QTextStream out(&file);
    out << main->normalText->toPlainText();
    file.close();
}

void MainWindow::about(){
    QMessageBox::about(this, "MajoTRANSLATOR",
            "Program by Daniel Skalski");
}
