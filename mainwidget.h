#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include <QTextEdit>
#include <QPushButton>
#include "braillewidget.h"
#include "morsewidget.h"

class MainWidget : public QWidget
{
    Q_OBJECT

public:
    BrailleWidget * brailleWidget;
    MorseWidget * morseWidget;
    QTextEdit * brailleCode;
    QTextEdit * morseCode;
    QTextEdit * normalText;
    QPushButton * translate;

    MainWidget(QWidget * parent = 0);

public slots:
    void updateText( QString str );
    void updateText();
};

#endif // MAINWIDGET_H
