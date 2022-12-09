/**
  ******************************************************************************
  * @file       finddialog.h 
  * @author     zxd 
  * @Version
  * @Date       10-December-2022
  ******************************************************************************
  * @Description
  *
  ******************************************************************************
  * @attention
  *
  * 
  ******************************************************************************
  */

#ifndef __FINDDIALOG_H
#define __FINDDIALOG_H

/* Inlucdes --------------------------------------------------------------- */
#include <QDialog>


/* Exported type ---------------------------------------------------------- */
class QCheckBox;
class QLabel;
class QLineEdit;
class QPushButton;


class FindDialog :  public QDialog
{
    /* 对于所有定义了信号的槽的类，在类定义开始处放置Q_OBJECT宏 */
    Q_OBJECT


public:
    /* 构造函数，parent参数指定父窗口部件是一个空指针，即没有父对象 */
    FindDialog(QWidget *parent = 0);

    /* 声明了当用户单击Find按钮是对话框发射的两个信号。signals关键字实际上是
     * 一个宏，在预处理时会变成标准C++代码 */
signals:
    void findNext(const QString &str, Qt::CaseSensitivity cs);
    void findPrevious(const QString &str, Qt::CaseSensitivity cs);

private slots:
    void findClicked();
    void enableFindButton(const QString &text);

private:
    /* 类前置声明，加快编译速度 */
    QLabel *label;
    QLineEdit *lineEdit;
    QCheckBox *caseCheckBox;
    QCheckBox *backwardCheckBox;
    QPushButton *findButton;
    QPushButton *closeButton;
};

#endif /* __FINDDIALOG_H */ 
  
