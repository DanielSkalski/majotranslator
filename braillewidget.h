#ifndef BRAILLEWIDGET_H
#define BRAILLEWIDGET_H

#include <QWidget>
#include "translator.h"

class BrailleWidget : public Translator
{
    void setLetterMaps();
    void setImageMap();

public:
    BrailleWidget();
    BrailleWidget( const QString& normalText );

    QString GetCodedLetter( int &pos, const QString& str );

};

#endif // BRAILLEWIDGET_H
