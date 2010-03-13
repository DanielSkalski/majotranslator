#include "braillewidget.h"

BrailleWidget::BrailleWidget() : Translator()
{
    setLetterMaps();
}

BrailleWidget::BrailleWidget( const QString& normalText ) : Translator( normalText ) {
    setLetterMaps();
}
// do zmiany
void BrailleWidget::setLetterMaps(){
    //a
    this->CodeToNormalMap->insert( "100000", "a" );
    this->NormalToCodeMap->insert( "a", "100000" );
    //b
    this->CodeToNormalMap->insert( "110000", "b" );
    this->NormalToCodeMap->insert( "b", "110000" );
    //c
    this->CodeToNormalMap->insert( "100100", "c" );
    this->NormalToCodeMap->insert( "c", "100100" );
    //d
    this->CodeToNormalMap->insert( "100110", "d" );
    this->NormalToCodeMap->insert( "d", "100110" );
    //e
    this->CodeToNormalMap->insert( "100010", "e" );
    this->NormalToCodeMap->insert( "e", "100010" );
    //f
    this->CodeToNormalMap->insert( "110100", "f" );
    this->NormalToCodeMap->insert( "f", "110100" );
    //g
    this->CodeToNormalMap->insert( "110110", "g" );
    this->NormalToCodeMap->insert( "g", "110110" );
    //h
    this->CodeToNormalMap->insert( "110010", "h" );
    this->NormalToCodeMap->insert( "h", "110010" );
    //i
    this->CodeToNormalMap->insert( "010100", "i" );
    this->NormalToCodeMap->insert( "i", "010100" );
    //j
    this->CodeToNormalMap->insert( "010110", "j" );
    this->NormalToCodeMap->insert( "j", "010110" );
    //k
    this->CodeToNormalMap->insert( "101000", "k" );
    this->NormalToCodeMap->insert( "k", "101000" );
    //l
    this->CodeToNormalMap->insert( "111000", "l" );
    this->NormalToCodeMap->insert( "l", "111000" );
    //m
    this->CodeToNormalMap->insert( "101100", "m" );
    this->NormalToCodeMap->insert( "m", "101100" );
    //n
    this->CodeToNormalMap->insert( "101110", "n" );
    this->NormalToCodeMap->insert( "n", "101110" );
    //o
    this->CodeToNormalMap->insert( "101010", "o" );
    this->NormalToCodeMap->insert( "o", "101010" );
    //p
    this->CodeToNormalMap->insert( "111100", "p" );
    this->NormalToCodeMap->insert( "p", "111100" );
    //q
    this->CodeToNormalMap->insert( "111110", "q" );
    this->NormalToCodeMap->insert( "q", "111110" );
    //r
    this->CodeToNormalMap->insert( "111010", "r" );
    this->NormalToCodeMap->insert( "r", "111010" );
    //s
    this->CodeToNormalMap->insert( "011100", "s" );
    this->NormalToCodeMap->insert( "s", "011100" );
    //t
    this->CodeToNormalMap->insert( "011110", "t" );
    this->NormalToCodeMap->insert( "t", "011110" );
    //u
    this->CodeToNormalMap->insert( "101001", "u" );
    this->NormalToCodeMap->insert( "u", "101001" );
    //v
    this->CodeToNormalMap->insert( "111001", "v" );
    this->NormalToCodeMap->insert( "v", "111001" );
    //w
    this->CodeToNormalMap->insert( "010111", "w" );
    this->NormalToCodeMap->insert( "w", "010111" );
    //x
    this->CodeToNormalMap->insert( "101101", "x" );
    this->NormalToCodeMap->insert( "x", "101101" );
    //y
    this->CodeToNormalMap->insert( "101111", "y" );
    this->NormalToCodeMap->insert( "y", "101111" );
    //z
    this->CodeToNormalMap->insert( "101011", "z" );
    this->NormalToCodeMap->insert( "z", "101011" );
    //" "
    this->CodeToNormalMap->insert( "000000", " " );
    this->NormalToCodeMap->insert( " ", "000000" );

    //--------------- ZNAKI POLSKIE --------------------//
    this->CodeToNormalMap->insert( "100001", "¹" );
    this->NormalToCodeMap->insert( "¹", "100001" );

    this->CodeToNormalMap->insert( "001101", "ó" );
    this->NormalToCodeMap->insert( "ó", "001101" );

    this->CodeToNormalMap->insert( "100011", "ê" );
    this->NormalToCodeMap->insert( "ê", "100011" );

    this->CodeToNormalMap->insert( "100101", "æ" );
    this->NormalToCodeMap->insert( "æ", "100101" );

    this->CodeToNormalMap->insert( "110001", "³" );
    this->NormalToCodeMap->insert( "³", "110001" );

    this->CodeToNormalMap->insert( "100111", "ñ" );
    this->NormalToCodeMap->insert( "ñ", "100111" );

    this->CodeToNormalMap->insert( "010101", "œ" );
    this->NormalToCodeMap->insert( "œ", "010101" );

    this->CodeToNormalMap->insert( "011101", "Ÿ" );
    this->NormalToCodeMap->insert( "Ÿ", "011101" );

    this->CodeToNormalMap->insert( "111101", "¿" );
    this->NormalToCodeMap->insert( "¿", "111101" );



    //------------------------- DU¯E LITERY --------------------------------//
    //a
    this->CodeToNormalMap->insert( "000101100000", "A" );
    this->NormalToCodeMap->insert( "A", "000101100000" );
    //b
    this->CodeToNormalMap->insert( "000101110000", "B" );
    this->NormalToCodeMap->insert( "B", "000101110000" );
    //c
    this->CodeToNormalMap->insert( "000101100100", "C" );
    this->NormalToCodeMap->insert( "C", "000101100100" );
    //d
    this->CodeToNormalMap->insert( "000101100110", "D" );
    this->NormalToCodeMap->insert( "D", "000101100110" );
    //e
    this->CodeToNormalMap->insert( "000101100010", "E" );
    this->NormalToCodeMap->insert( "E", "000101100010" );
    //f
    this->CodeToNormalMap->insert( "000101110100", "F" );
    this->NormalToCodeMap->insert( "F", "000101110100" );
    //g
    this->CodeToNormalMap->insert( "000101110110", "G" );
    this->NormalToCodeMap->insert( "G", "000101110110" );
    //h
    this->CodeToNormalMap->insert( "000101110010", "H" );
    this->NormalToCodeMap->insert( "H", "000101110010" );
    //i
    this->CodeToNormalMap->insert( "000101010100", "I" );
    this->NormalToCodeMap->insert( "I", "000101010100" );
    //j
    this->CodeToNormalMap->insert( "000101010110", "J" );
    this->NormalToCodeMap->insert( "J", "000101010110" );
    //k
    this->CodeToNormalMap->insert( "000101101000", "K" );
    this->NormalToCodeMap->insert( "K", "000101101000" );
    //l
    this->CodeToNormalMap->insert( "000101111000", "L" );
    this->NormalToCodeMap->insert( "L", "000101111000" );
    //m
    this->CodeToNormalMap->insert( "000101101100", "M" );
    this->NormalToCodeMap->insert( "M", "000101101100" );
    //n
    this->CodeToNormalMap->insert( "000101101110", "N" );
    this->NormalToCodeMap->insert( "N", "000101101110" );
    //o
    this->CodeToNormalMap->insert( "000101101010", "O" );
    this->NormalToCodeMap->insert( "O", "000101101010" );
    //p
    this->CodeToNormalMap->insert( "000101111100", "P" );
    this->NormalToCodeMap->insert( "P", "000101111100" );
    //q
    this->CodeToNormalMap->insert( "000101111110", "Q" );
    this->NormalToCodeMap->insert( "Q", "000101111110" );
    //r
    this->CodeToNormalMap->insert( "000101111010", "R" );
    this->NormalToCodeMap->insert( "R", "000101111010" );
    //s
    this->CodeToNormalMap->insert( "000101011100", "S" );
    this->NormalToCodeMap->insert( "S", "000101011100" );
    //t
    this->CodeToNormalMap->insert( "000101011110", "T" );
    this->NormalToCodeMap->insert( "T", "000101011110" );
    //u
    this->CodeToNormalMap->insert( "000101101001", "U" );
    this->NormalToCodeMap->insert( "U", "000101101001" );
    //v
    this->CodeToNormalMap->insert( "000101111001", "V" );
    this->NormalToCodeMap->insert( "V", "000101111001" );
    //w
    this->CodeToNormalMap->insert( "000101010111", "W" );
    this->NormalToCodeMap->insert( "W", "000101010111" );
    //x
    this->CodeToNormalMap->insert( "000101101101", "X" );
    this->NormalToCodeMap->insert( "X", "000101101101" );
    //y
    this->CodeToNormalMap->insert( "000101101111", "Y" );
    this->NormalToCodeMap->insert( "Y", "000101101111" );
    //z
    this->CodeToNormalMap->insert( "000101101011", "Z" );
    this->NormalToCodeMap->insert( "Z", "000101101011" );

    this->CodeToNormalMap->insert( "000101100001", "¥" );
    this->NormalToCodeMap->insert( "¥", "000101100001" );

    this->CodeToNormalMap->insert( "000101001101", "Ó" );
    this->NormalToCodeMap->insert( "Ó", "000101001101" );

    this->CodeToNormalMap->insert( "000101100011", "Ê" );
    this->NormalToCodeMap->insert( "Ê", "000101100011" );

    this->CodeToNormalMap->insert( "000101100101", "Æ" );
    this->NormalToCodeMap->insert( "Æ", "000101100101" );

    this->CodeToNormalMap->insert( "000101110001", "£" );
    this->NormalToCodeMap->insert( "£", "000101110001" );

    this->CodeToNormalMap->insert( "000101100111", "Ñ" );
    this->NormalToCodeMap->insert( "Ñ", "000101100111" );

    this->CodeToNormalMap->insert( "000101010101", "Œ" );
    this->NormalToCodeMap->insert( "Œ", "000101010101" );

    this->CodeToNormalMap->insert( "000101011101", "" );
    this->NormalToCodeMap->insert( "", "000101011101" );

    this->CodeToNormalMap->insert( "000101111101", "¯" );
    this->NormalToCodeMap->insert( "¯", "000101111101" );



    //--------------------- LICZBY -------------------------------//
    //1
    this->CodeToNormalMap->insert( "001111100000", "1" );
    this->NormalToCodeMap->insert( "1", "001111100000" );
    //2
    this->CodeToNormalMap->insert( "001111110000", "2" );
    this->NormalToCodeMap->insert( "2", "001111110000" );
    //3
    this->CodeToNormalMap->insert( "001111100100", "3" );
    this->NormalToCodeMap->insert( "3", "001111100100" );
    //4
    this->CodeToNormalMap->insert( "001111100110", "4" );
    this->NormalToCodeMap->insert( "4", "001111100110" );
    //5
    this->CodeToNormalMap->insert( "001111100010", "5" );
    this->NormalToCodeMap->insert( "5", "001111100010" );
    //6
    this->CodeToNormalMap->insert( "001111110100", "6" );
    this->NormalToCodeMap->insert( "6", "001111110100" );
    //7
    this->CodeToNormalMap->insert( "001111110110", "7" );
    this->NormalToCodeMap->insert( "7", "001111110110" );
    //8
    this->CodeToNormalMap->insert( "001111110010", "8" );
    this->NormalToCodeMap->insert( "8", "001111110010" );
    //9
    this->CodeToNormalMap->insert( "001111010100", "9" );
    this->NormalToCodeMap->insert( "9", "001111010100" );
    //0
    this->CodeToNormalMap->insert( "001111010110", "0" );
    this->NormalToCodeMap->insert( "0", "001111010110" );



    //-------------- ZNAKI INTERPUNKCYJNE ----------------------------//
    this->CodeToNormalMap->insert( "010011", "." );
    this->NormalToCodeMap->insert( ".", "010011" );

    this->CodeToNormalMap->insert( "010000", "," );
    this->NormalToCodeMap->insert( ",", "010000" );

    this->CodeToNormalMap->insert( "001000", "'" );
    this->NormalToCodeMap->insert( "'", "001000" );

    this->CodeToNormalMap->insert( "010010", ":" );
    this->NormalToCodeMap->insert( ":", "010010" );

    this->CodeToNormalMap->insert( "010001", "?" );
    this->NormalToCodeMap->insert( "?", "010001" );

    this->CodeToNormalMap->insert( "001001", "-" );
    this->NormalToCodeMap->insert( "-", "001001" );

    this->CodeToNormalMap->insert( "110011", "/" );
    this->NormalToCodeMap->insert( "/", "110011" );

    this->CodeToNormalMap->insert( "011011", "(" );
    this->NormalToCodeMap->insert( "(", "011011" );

    this->CodeToNormalMap->insert( "011011", ")" );
    this->NormalToCodeMap->insert( ")", "011011" );

    this->CodeToNormalMap->insert( "011010", "!" );
    this->NormalToCodeMap->insert( "!", "011010" );
}
void BrailleWidget::setImageMap(){

}

QString BrailleWidget::GetCodedLetter( int &pos, const QString& str ){
    QString code = "";
    if( pos + 5 < str.size() ){
        code = str.mid( pos, 6 );
    }
    pos += 6;
    // jezeli jest to liczba lub wielka litera, pobierz dodatkowe 6 znakow
    if( code == "001111" || code == "000101" ){
        if( pos + 5 < str.size() ){
            code += str.mid( pos, 6 );
        }
        pos += 6;
    }
    return code;
}
