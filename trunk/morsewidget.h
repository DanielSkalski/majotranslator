#ifndef MORSEWIDGET_H
#define MORSEWIDGET_H

#include <QWidget>
#include "translator.h"

class MorseWidget : public Translator
{
    void setLetterMaps();
    void setImageMap();

public:
    MorseWidget();
    MorseWidget( QString normalText );

    QString GetCodedLetter( int &pos, QString str );

};

#endif // MORSEWIDGET_H
