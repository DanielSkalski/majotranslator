#include "mainwidget.h"
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QGridLayout>
#include <QDebug>

MainWidget::MainWidget( QWidget * parent) : QWidget(parent)
{
    brailleWidget = new BrailleWidget();
    morseWidget = new MorseWidget();

    brailleCode = new QTextEdit();
    brailleCode->setReadOnly( true );
    morseCode = new QTextEdit();
    morseCode->setReadOnly( true );
    normalText = new QTextEdit();

    morseMode = new QCheckBox( "Klasyczny Morse" );
/*
    QHBoxLayout * codes = new QHBoxLayout();
    codes->addWidget( brailleCode );
    codes->addWidget( morseCode );

    QVBoxLayout * layout = new QVBoxLayout();
    layout->addLayout( codes );
    layout->addWidget( normalText );
*/

    QVBoxLayout * buttons = new QVBoxLayout();
    buttons->addWidget( morseMode );

    QGridLayout* layout = new QGridLayout();
    layout->addWidget( brailleCode, 0, 0 );
    layout->addWidget( morseCode, 0, 1 );
    layout->addWidget( normalText, 1, 0 );
    layout->addLayout( buttons, 1, 1 );


    connect( normalText, SIGNAL(textChanged()), this, SLOT(updateText()) );
    connect( morseMode, SIGNAL(clicked()), this, SLOT(changeMorseRep()) );

    this->setLayout( layout );
}

//------------------ S L O T S ------------------------------------//

void MainWidget::updateText( const QString& normal )
{
    QString braille = this->brailleWidget->NormalToCode( normal );
    QString morse = this->morseWidget->NormalToCode( normal );
    if( morseMode->isChecked() )
        morse = this->morseWidget->ConvertToDotsSticks( morse );
    this->brailleCode->setText( braille );
    this->morseCode->setText( morse );
}

void MainWidget::updateText()
{
    QString normal = this->normalText->toPlainText();
    updateText( normal );
}

void MainWidget::changeMorseRep(){
    QString str = this->normalText->toPlainText();
    str = this->morseWidget->NormalToCode( str );
    if( morseMode->isChecked() )
        str = this->morseWidget->ConvertToDotsSticks( str );
    this->morseCode->setText( str );
}
