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
    Translator( const QString& normalText );
    virtual ~Translator(){
        delete CodeToNormalMap;
        delete NormalToCodeMap;
    }

    virtual QString CodeToNormal( const QString& );
    virtual QString GetCodedLetter( int &pos, const QString& str ) = 0;
    virtual QString CodeLetterToNormalLetter( const QString& );

    virtual QString NormalToCode( const QString& );
    virtual QString NormalLetterToCodeLetter( const QString& );

    void setText( const QString& );
};

#endif // TRANSLATOR_H
