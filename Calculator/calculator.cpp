#include <iostream>
#include "string_analysis.h"
#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QWidget *widget = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout;

    QLabel *label = new QLabel("Enter Whatever You Have On Your Mind:");
    QLineEdit *lineEdit = new QLineEdit;
    QPushButton *button = new QPushButton("Submit");

    QObject::connect(button, &QPushButton::clicked, [=](){
        std::string input = lineEdit->text().toStdString();
        int length = getLength(input);
        int wordCount = countWords(input);
        int vowelCount = countVowels(input);
        int consonantCount = countConsonants(input);
        int digitCount = countDigits(input);
        int specialCharCount = countSpecialChars(input);
        int digitSum = sumDigits(input);
        double digitSquaresRoot = squareRootOfDigitSquares(input);
        // Do something with the results, e.g. display them in a label
    });

    layout->addWidget(label);
    layout->addWidget(lineEdit);
    layout->addWidget(button);

    widget->setLayout(layout);
    widget->show();

    return app.exec();
}
