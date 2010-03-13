#include "morsewidget.h"

MorseWidget::MorseWidget() : Translator()
{
    setLetterMaps();
}

MorseWidget::MorseWidget( const QString& normalText ) : Translator( normalText ) {
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

    // ZNAKI POLSKIE
    this->CodeToNormalMap->insert( "0001000110", "¹" );
    this->NormalToCodeMap->insert( "¹", "0001000110" );

    this->CodeToNormalMap->insert( "010001000010", "æ" );
    this->NormalToCodeMap->insert( "æ", "010001000010" );

    this->CodeToNormalMap->insert( "000001000010", "ê" );
    this->NormalToCodeMap->insert( "ê", "000001000010" );

    this->CodeToNormalMap->insert( "000100000110", "³" );
    this->NormalToCodeMap->insert( "³", "000100000110" );

    this->CodeToNormalMap->insert( "010100010110", "ñ" );
    this->NormalToCodeMap->insert( "ñ", "010100010110" );

    this->CodeToNormalMap->insert( "0101010010", "ó" );
    this->NormalToCodeMap->insert( "ó", "0101010010" );

    this->CodeToNormalMap->insert( "0000000100000010", "œ" );
    this->NormalToCodeMap->insert( "œ", "0000000100000010" );

    this->CodeToNormalMap->insert( "01010000010010", "¿" );
    this->NormalToCodeMap->insert( "¿", "01010000010010" );

    this->CodeToNormalMap->insert( "010100000110", "Ÿ" );
    this->NormalToCodeMap->insert( "Ÿ", "010100000110" );

    this->CodeToNormalMap->insert( "0101010110", "ch" );
    this->NormalToCodeMap->insert( "ch", "0101010110");

    // DU¯E LITERY
    this->NormalToCodeMap->insert( "A", "000110" );

    this->NormalToCodeMap->insert( "B", "0100000010" );

    this->NormalToCodeMap->insert( "C", "0100010010" );

    this->NormalToCodeMap->insert( "D", "01000010" );

    this->NormalToCodeMap->insert( "E", "0010" );

    this->NormalToCodeMap->insert( "F", "0000010010" );

    this->NormalToCodeMap->insert( "G", "01010010" );

    this->NormalToCodeMap->insert( "H", "0000000010" );

    this->NormalToCodeMap->insert( "I", "000010" );

    this->NormalToCodeMap->insert( "J", "0001010110" );

    this->NormalToCodeMap->insert( "K", "01000110" );

    this->NormalToCodeMap->insert( "L", "0001000010" );

    this->NormalToCodeMap->insert( "M", "010110" );

    this->NormalToCodeMap->insert( "N", "010010" );

    this->NormalToCodeMap->insert( "O", "01010110" );

    this->NormalToCodeMap->insert( "P", "0001010010" );

    this->NormalToCodeMap->insert( "Q", "0101000110" );

    this->NormalToCodeMap->insert( "R", "00010010" );

    this->NormalToCodeMap->insert( "S", "00000010" );

    this->NormalToCodeMap->insert( "T", "0110" );

    this->NormalToCodeMap->insert( "U", "00000110" );

    this->NormalToCodeMap->insert( "V", "0000000110" );

    this->NormalToCodeMap->insert( "W", "00010110" );

    this->NormalToCodeMap->insert( "X", "0100000110" );

    this->NormalToCodeMap->insert( "Y", "0100010110" );

    this->NormalToCodeMap->insert( "Z", "0101000010" );

    // ZNAKI POLSKIE
    this->NormalToCodeMap->insert( "¥", "0001000110" );

    this->NormalToCodeMap->insert( "Æ", "010001000010" );

    this->NormalToCodeMap->insert( "Ê", "000001000010" );

    this->NormalToCodeMap->insert( "£", "000100000110" );

    this->NormalToCodeMap->insert( "Ñ", "010100010110" );

    this->NormalToCodeMap->insert( "Ó", "0101010010" );

    this->NormalToCodeMap->insert( "Œ", "0000000100000010" );

    this->NormalToCodeMap->insert( "¯", "01010000010010" );

    this->NormalToCodeMap->insert( "", "010100000110" );

    this->NormalToCodeMap->insert( "Ch", "0101010110");

    // 11 -spacja, 10 - odstêp, 00 - kropka, 01 - kreska
    // LICZBY
    this->CodeToNormalMap->insert( "000101010110", "1" );
    this->NormalToCodeMap->insert( "1", "000101010110" );

    this->CodeToNormalMap->insert( "000001010110", "2" );
    this->NormalToCodeMap->insert( "2", "000001010110" );

    this->CodeToNormalMap->insert( "000000010110", "3" );
    this->NormalToCodeMap->insert( "3", "000000010110" );

    this->CodeToNormalMap->insert( "000000000110", "4" );
    this->NormalToCodeMap->insert( "4", "000000000110" );

    this->CodeToNormalMap->insert( "000000000010", "5" );
    this->NormalToCodeMap->insert( "5", "000000000010" );

    this->CodeToNormalMap->insert( "010000000010", "6" );
    this->NormalToCodeMap->insert( "6", "010000000010" );

    this->CodeToNormalMap->insert( "010100000010", "7" );
    this->NormalToCodeMap->insert( "7", "010100000010" );

    this->CodeToNormalMap->insert( "010101000010", "8" );
    this->NormalToCodeMap->insert( "8", "010101000010" );

    this->CodeToNormalMap->insert( "010101010010", "9" );
    this->NormalToCodeMap->insert( "9", "010101010010" );

    this->CodeToNormalMap->insert( "010101010110", "0" );
    this->NormalToCodeMap->insert( "0", "010101010110" );

    // ZNAKI INTERPUNKCYJNE
    this->CodeToNormalMap->insert( "00010001000110", "." );
    this->NormalToCodeMap->insert( ".", "00010001000110" );

    this->CodeToNormalMap->insert( "01010000010110", "," );
    this->NormalToCodeMap->insert( ",", "01010000010110" );

    this->CodeToNormalMap->insert( "00010101010010", "'" );
    this->NormalToCodeMap->insert( "'", "00010101010010" );

    this->CodeToNormalMap->insert( "00000101000110", "_" );
    this->NormalToCodeMap->insert( "_", "00000101000110" );

    this->CodeToNormalMap->insert( "01010100000010", ":" );
    this->NormalToCodeMap->insert( ":", "01010100000010" );

    this->CodeToNormalMap->insert( "00000101000010", "?" );
    this->NormalToCodeMap->insert( "?", "00000101000010" );

    this->CodeToNormalMap->insert( "01000000000110", "-" );
    this->NormalToCodeMap->insert( "-", "01000000000110" );

    this->CodeToNormalMap->insert( "010000010010", "/" );
    this->NormalToCodeMap->insert( "/", "010000010010" );

    this->CodeToNormalMap->insert( "010001010010", "(" );
    this->NormalToCodeMap->insert( "(", "010001010010" );

    this->CodeToNormalMap->insert( "01000101000110", ")" );
    this->NormalToCodeMap->insert( ")", "01000101000110" );

    this->CodeToNormalMap->insert( "010000000110", "=" );
    this->NormalToCodeMap->insert( "=", "010000000110" );

    this->CodeToNormalMap->insert( "00010100010010", "@" );
    this->NormalToCodeMap->insert( "@", "00010100010010" );

}

void MorseWidget::setImageMap(){

}

QString MorseWidget::NormalToCode( const QString& str ){
    QString out = "";
    QString letter;
    for( int i = 0; i < str.length(); i++ ){
        letter = str.at(i);
        if( str[i].toLower() == 'c' && i+1 < str.length() && str[i+1] == 'h' )
            letter += str[i+1];
        out += NormalLetterToCodeLetter( letter );
    }
    return out;
}

QString MorseWidget::GetCodedLetter( int &pos, const QString& str ){
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

QString MorseWidget::ConvertToDotsSticks( const QString& str ){
    QString out = "";
    for( int i = 0; i + 1 < str.length(); i += 2 )
    {
        if( str[i] == '0' && str[i+1] == '0' ){
            out += ".";
        }
        else if( str[i] == '0' && str[i+1] == '1' ){
            out += "-";
        }
        else if( str[i] == '1' && str[i+1] == '0' ){
            out += " ";
        }
        else if( str[i] == '1' && str[i+1] == '1' ){
            out += "  ";
        }
    }
    return out;
}
