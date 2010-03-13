#include "translator.h"

Translator::Translator()
{
    this->CodeToNormalMap = new QMap<QString, QString>();
    this->NormalToCodeMap = new QMap<QString, QString>();
}

Translator::Translator( const QString& normalText )
{
    this->CodeToNormalMap = new QMap<QString, QString>();
    this->NormalToCodeMap = new QMap<QString, QString>();

    this->text = normalText;
}

//-------------------- Translate Code To Normal ---------------------------//
// to bedzie do zmiany
QString Translator::CodeToNormal( const QString& codeStr ){
    QString out = "";
    for( int i = 0; i < codeStr.length(); )
         out += CodeLetterToNormalLetter( GetCodedLetter( i, codeStr ) );
    return out;
}
QString Translator::CodeLetterToNormalLetter( const QString& str ){
    QMap<QString, QString>::const_iterator it = CodeToNormalMap->find( str );
    if( it != CodeToNormalMap->end() )
        return it.value();
    else
        return " ";
}

//-------------------- Translate Normal To Code ---------------------------//
QString Translator::NormalToCode( const QString& str ){
    QString out = "";
    for( int i = 0; i < str.length(); i++ )
         out += NormalLetterToCodeLetter( QString(str.at(i)) );
    return out;
}

QString Translator::NormalLetterToCodeLetter( const QString& str ){
    QMap<QString, QString>::const_iterator it = NormalToCodeMap->find( str );
    if( it != NormalToCodeMap->end() )
        return it.value();
    else
        return NormalToCodeMap->find(" ").value();
}


void Translator::setText( const QString& newText ){
    this->text = newText;
}
