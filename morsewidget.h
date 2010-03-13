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
    MorseWidget( const QString& normalText );

    QString NormalToCode( const QString& str );

    QString GetCodedLetter( int &pos, const QString& str );
    QString ConvertToDotsSticks( const QString& str );

};

#endif // MORSEWIDGET_H
