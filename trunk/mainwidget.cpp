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

    QHBoxLayout * codes = new QHBoxLayout();
    codes->addWidget( brailleCode );
    codes->addWidget( morseCode );

    QVBoxLayout * layout = new QVBoxLayout();
    layout->addLayout( codes );
    layout->addWidget( normalText );

/*
    QGridLayout* layout = new QGridLayout( this );
    layout->addWidget( brailleCode, 0, 0 );
    layout->addWidget( morseCode, 0, 1 );
    layout->addWidget( normalText, 1, 0, 2, 2, Qt::AlignJustify );
*/

    connect( normalText, SIGNAL(textChanged()), this, SLOT(updateText()) );

    this->setLayout( layout );
}

//------------------ S L O T S ------------------------------------//

void MainWidget::updateText( QString normal )
{
    QString braille = this->brailleWidget->NormalToCode( normal );
    QString morse = this->morseWidget->NormalToCode( normal );
    this->brailleCode->setText( braille );
    this->morseCode->setText( morse );
}

void MainWidget::updateText()
{
    QString normal = this->normalText->toPlainText();
    updateText( normal );
}
