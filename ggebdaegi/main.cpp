#include "mainwindow.h"
#include "selectlanguage.h"
#include <QApplication>
#include <QTranslator>

QTranslator transLanguage;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    SelectLanguage sl;
    sl.setModal(false);
    sl.exec();

    int choose = sl.pickLanguage();
    QString strstr = "";

    switch(choose)
    {
    case PRINTLANGUAGE::LANGUAGE_KOREAN:
        strstr = "Anneonghaseyo";
        break;
    case PRINTLANGUAGE::LANGUAGE_JAPANESE:
        strstr = "Ohayo gojaimas";
        break;
    case PRINTLANGUAGE::LANGUAGE_ENGLISH:
    default:
        strstr = "Hello";
        break;
    }

    MainWindow w;
    w.show();
    return a.exec();
}
