#ifndef DISPLAYBLOODREQUESTSTATUSDIALOG_H
#define DISPLAYBLOODREQUESTSTATUSDIALOG_H

#include <QDialog>

namespace Ui {
class statusTextEdit_2;
}

class DisplayBloodRequestStatusDialog : public QDialog
{
    Q_OBJECT

public:
    explicit DisplayBloodRequestStatusDialog(QWidget *parent = nullptr);
    ~DisplayBloodRequestStatusDialog();

    void loadBloodRequestStatus();

private:
     Ui::statusTextEdit_2 *ui;

private slots:
    void onCloseButtonClicked();
};

#endif // DISPLAYBLOODREQUESTSTATUSDIALOG_H
