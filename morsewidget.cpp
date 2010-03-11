#include "morsewidget.h"

MorseWidget::MorseWidget() : Translator()
{
    setLetterMaps();
}

MorseWidget::MorseWidget( QString normalText ) : Translator( normalText ) {
    setLetterMaps();
}

void MorseWidget::setLetterMaps(){
    //a
    this->CodeToNormalMap->insert( "000110", "a" );
    this->NormalToCodeMap->insert( "a", "000110" );
    //b
    this->CodeToNormalMap->insert( "0100000010", "b" );
    this->NormalToCodeMap->insert( "b", "0100000010" );
    //c
    this->CodeToNormalMap->insert( "0100010010", "c" );
    this->NormalToCodeMap->insert( "c", "0100010010" );
    //d
    this->CodeToNormalMap->insert( "01000010", "d" );
    this->NormalToCodeMap->insert( "d", "01000010" );
    //e
    this->CodeToNormalMap->insert( "0010", "e" );
    this->NormalToCodeMap->insert( "e", "0010" );
    //f
    this->CodeToNormalMap->insert( "0000010010", "f" );
    this->NormalToCodeMap->insert( "f", "0000010010" );
    //g
    this->CodeToNormalMap->insert( "01010010", "g" );
    this->NormalToCodeMap->insert( "g", "01010010" );
    //h
    this->CodeToNormalMap->insert( "0000000010", "h" );
    this->NormalToCodeMap->insert( "h", "0000000010" );
    //i
    this->CodeToNormalMap->insert( "000010", "i" );
    this->NormalToCodeMap->insert( "i", "000010" );
    //j
    this->CodeToNormalMap->insert( "0001010110", "j" );
    this->NormalToCodeMap->insert( "j", "0001010110" );
    //k
    this->CodeToNormalMap->insert( "01000110", "k" );
    this->NormalToCodeMap->insert( "k", "01000110" );
    //l
    this->CodeToNormalMap->insert( "0001000010", "l" );
    this->NormalToCodeMap->insert( "l", "0001000010" );
    //m
    this->CodeToNormalMap->insert( "010110", "m" );
    this->NormalToCodeMap->insert( "m", "010110" );
    //n
    this->CodeToNormalMap->insert( "010010", "n" );
    this->NormalToCodeMap->insert( "n", "010010" );
    //o
    this->CodeToNormalMap->insert( "01010110", "o" );
    this->NormalToCodeMap->insert( "o", "01010110" );
    //p
    this->CodeToNormalMap->insert( "0001010010", "p" );
    this->NormalToCodeMap->insert( "p", "0001010010" );
    //q
    this->CodeToNormalMap->insert( "0101000110", "q" );
    this->NormalToCodeMap->insert( "q", "0101000110" );
    //r
    this->CodeToNormalMap->insert( "00010010", "r" );
    this->NormalToCodeMap->insert( "r", "00010010" );
    //s
    this->CodeToNormalMap->insert( "00000010", "s" );
    this->NormalToCodeMap->insert( "s", "00000010" );
    //t
    this->CodeToNormalMap->insert( "0110", "t" );
    this->NormalToCodeMap->insert( "t", "0110" );
    //u
    this->CodeToNormalMap->insert( "00000110", "u" );
    this->NormalToCodeMap->insert( "u", "00000110" );
    //v
    this->CodeToNormalMap->insert( "0000000110", "v" );
    this->NormalToCodeMap->insert( "v", "0000000110" );
    //w
    this->CodeToNormalMap->insert( "00010110", "w" );
    this->NormalToCodeMap->insert( "w", "00010110" );
    //x
    this->CodeToNormalMap->insert( "0100000110", "x" );
    this->NormalToCodeMap->insert( "x", "0100000110" );
    //y
    this->CodeToNormalMap->insert( "0100010110", "y" );
    this->NormalToCodeMap->insert( "y", "0100010110" );
    //z
    this->CodeToNormalMap->insert( "0101000010", "z" );
    this->NormalToCodeMap->insert( "z", "0101000010" );
    //" "
    this->CodeToNormalMap->insert( "11", " " );
    this->NormalToCodeMap->insert( " ", "11" );
}
void MorseWidget::setImageMap(){

}

QString MorseWidget::GetCodedLetter( int &pos, QString str ){
    QString code = "";
    int i = pos;
    if( (i + 1 < str.size()) && str[i] == '1' && str[i+1] == '1' ){
        pos = i + 2;
        return "11";
    }
    for( ; (i + 1 < str.size()) && (str[i] != '1' && str[i+1] != '1'); i += 2 ){
        code += str[i];
        code += str[i+1];
        if( str[i] == '1' && str[i+1] == '0' ){// spacja
            pos = i + 2;
            return code;
        }
    }
    pos = i;
    return code;
}
