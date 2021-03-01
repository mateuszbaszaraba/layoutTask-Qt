#ifndef DIALOG_H
#define DIALOG_H

#include <QWidget>
#include <QLineEdit>
#include <QGroupBox>

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QWidget
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);

public slots:
    void echoChanged(int);
    void validatorChanged(int);
    void alignmentChanged(int);
    void inputMaskChanged(int);
    void accessChanged(int);

private:
    QLineEdit *echoLineEdit;
    QLineEdit *validatorLineEdit;
    QLineEdit *alignmentLineEdit;
    QLineEdit *inputMaskLineEdit;
    QLineEdit *accessLineEdit;

};
#endif // DIALOG_H
