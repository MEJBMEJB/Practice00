#include "selectlanguage.h"
#include "ui_selectlanguage.h"

SelectLanguage::SelectLanguage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SelectLanguage)
{
   // ui->setupUi(this);

    setFixedSize(1920, 1080);
    _pickLanguage = -1;

    _targetLanguage[0] = new QPushButton(tr("Korean"), this);
    _targetLanguage[1] = new QPushButton(tr("Japanese"), this);
    _targetLanguage[2] = new QPushButton(tr("English"), this);

    _targetLanguage[0]->setGeometry(this->width() * 0.10, this->height() * 0.0, this->width() * 0.20, this->height() * 1.0);
    _targetLanguage[1]->setGeometry(this->width() * 0.40, this->height() * 0.0, this->width() * 0.20, this->height() * 1.0);
    _targetLanguage[2]->setGeometry(this->width() * 0.70, this->height() * 0.0, this->width() * 0.20, this->height() * 1.0);

    connect(_targetLanguage[0], &QPushButton::clicked, this, &SelectLanguage::SelectKorean);
    connect(_targetLanguage[1], &QPushButton::clicked, this, &SelectLanguage::SelectJapanese);
    connect(_targetLanguage[2], &QPushButton::clicked, this, &SelectLanguage::SelectEnglish);
}

SelectLanguage::~SelectLanguage()
{
    delete ui;
}
void SelectLanguage::SelectKorean()
{
    _pickLanguage = LANGUAGE_KOREAN;
    this->close();
}
void SelectLanguage::SelectJapanese()
{
    _pickLanguage = LANGUAGE_JAPANESE;
    this->close();
}
void SelectLanguage::SelectEnglish()
{
    _pickLanguage = LANGUAGE_ENGLISH;
    this->close();
}
