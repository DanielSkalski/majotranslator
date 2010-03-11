#ifndef TRANSLATOR_H
#define TRANSLATOR_H

#include <QWidget>
#include <QMap>

class Translator
{
protected:

    QString text;
    QString codedText;
    QMap<QString, QString> * CodeToNormalMap;
    QMap<QString, QString> * NormalToCodeMap;

    virtual void setLetterMaps() = 0;
    virtual void setImageMap() = 0;

public:
    Translator();
    Translator( QString normalText );
    virtual ~Translator(){
        delete CodeToNormalMap;
        delete NormalToCodeMap;
    }

    virtual QString CodeToNormal( QString );
    virtual QString GetCodedLetter( int &pos, QString str ) = 0;
    virtual QString CodeLetterToNormalLetter( QString );

    virtual QString NormalToCode( QString );
    virtual QString NormalLetterToCodeLetter( QString );

    void setText( QString );
};

#endif // TRANSLATOR_H
