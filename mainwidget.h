#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include <QTextEdit>
#include <QPushButton>
#include <QCheckBox>
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
    QCheckBox * morseMode;

    MainWidget(QWidget * parent = 0);

public slots:
    void updateText( const QString& str );
    void changeMorseRep();
    void updateText();
};

#endif // MAINWIDGET_H
