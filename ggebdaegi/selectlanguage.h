#ifndef SELECTLANGUAGE_H
#define SELECTLANGUAGE_H

#include <QDialog>
#include <QPushButton>

#define SUPPORT_LANGUAGE 3

namespace Ui {
class SelectLanguage;
}

enum PRINTLANGUAGE : int
{
    LANGUAGE_KOREAN = 0,
    LANGUAGE_JAPANESE,
    LANGUAGE_ENGLISH
};

class SelectLanguage : public QDialog
{
    Q_OBJECT

public:
    explicit SelectLanguage(QWidget *parent = nullptr);
    ~SelectLanguage();
    int pickLanguage() {return _pickLanguage;}

private slots:
    void SelectKorean();
    void SelectJapanese();
    void SelectEnglish();

private:
    Ui::SelectLanguage *ui;
    QPushButton* _targetLanguage[SUPPORT_LANGUAGE];
    int _pickLanguage;
};

#endif // SELECTLANGUAGE_H
