/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen_File;
    QAction *actionSave_File;
    QWidget *centralWidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_tree_name;
    QTextBrowser *text_show_elements;
    QLabel *e_node_C;
    QLabel *node_C;
    QLabel *e_node_L;
    QLabel *e_node_R;
    QLabel *e_node_LL;
    QLabel *e_node_RR;
    QLabel *e_node_LR;
    QLabel *e_node_RL;
    QLabel *e_node_LLL;
    QLabel *e_node_LLR;
    QLabel *e_node_LRL;
    QLabel *e_node_LRR;
    QLabel *e_node_RLL;
    QLabel *e_node_RLR;
    QLabel *e_node_RRL;
    QLabel *e_node_RRR;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *element;
    QLineEdit *lineEditElement;
    QPushButton *buttonAdd;
    QPushButton *buttonDelete;
    QLabel *node_L;
    QLabel *node_LL;
    QLabel *node_LLL;
    QLabel *node_LLR;
    QLabel *node_LR;
    QLabel *node_LRL;
    QLabel *node_LRR;
    QLabel *node_R;
    QLabel *node_RR;
    QLabel *node_RRR;
    QLabel *node_RL;
    QLabel *node_RLL;
    QLabel *node_RRL;
    QLabel *node_RLR;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *LeafNumLineEdit;
    QPushButton *GetleafnumPushButton;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *PostPushButton;
    QPushButton *InPushButton;
    QPushButton *PrePushButton;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *PostThreadPushButton;
    QPushButton *InThreadPushButton;
    QPushButton *PreThreadPushButton;
    QPushButton *clearThreadPushButton;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *preThreadPushButton;
    QPushButton *inThreadPushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(673, 503);
        actionOpen_File = new QAction(MainWindow);
        actionOpen_File->setObjectName(QStringLiteral("actionOpen_File"));
        QFont font;
        font.setPointSize(10);
        actionOpen_File->setFont(font);
        actionSave_File = new QAction(MainWindow);
        actionSave_File->setObjectName(QStringLiteral("actionSave_File"));
        actionSave_File->setFont(font);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(30, 10, 571, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_tree_name = new QLabel(horizontalLayoutWidget);
        label_tree_name->setObjectName(QStringLiteral("label_tree_name"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_tree_name->sizePolicy().hasHeightForWidth());
        label_tree_name->setSizePolicy(sizePolicy);
        label_tree_name->setTextFormat(Qt::AutoText);
        label_tree_name->setScaledContents(false);
        label_tree_name->setWordWrap(false);

        horizontalLayout->addWidget(label_tree_name);

        text_show_elements = new QTextBrowser(horizontalLayoutWidget);
        text_show_elements->setObjectName(QStringLiteral("text_show_elements"));

        horizontalLayout->addWidget(text_show_elements);

        e_node_C = new QLabel(centralWidget);
        e_node_C->setObjectName(QStringLiteral("e_node_C"));
        e_node_C->setGeometry(QRect(312, 51, 47, 51));
        e_node_C->setPixmap(QPixmap(QString::fromUtf8(":/Ellipse.png")));
        e_node_C->setAlignment(Qt::AlignCenter);
        node_C = new QLabel(centralWidget);
        node_C->setObjectName(QStringLiteral("node_C"));
        node_C->setGeometry(QRect(315, 69, 41, 16));
        node_C->setAlignment(Qt::AlignCenter);
        e_node_L = new QLabel(centralWidget);
        e_node_L->setObjectName(QStringLiteral("e_node_L"));
        e_node_L->setGeometry(QRect(206, 90, 47, 51));
        e_node_L->setPixmap(QPixmap(QString::fromUtf8(":/Ellipse.png")));
        e_node_L->setAlignment(Qt::AlignCenter);
        e_node_R = new QLabel(centralWidget);
        e_node_R->setObjectName(QStringLiteral("e_node_R"));
        e_node_R->setGeometry(QRect(426, 90, 47, 51));
        e_node_R->setPixmap(QPixmap(QString::fromUtf8(":/Ellipse.png")));
        e_node_R->setAlignment(Qt::AlignCenter);
        e_node_LL = new QLabel(centralWidget);
        e_node_LL->setObjectName(QStringLiteral("e_node_LL"));
        e_node_LL->setGeometry(QRect(140, 140, 47, 51));
        e_node_LL->setPixmap(QPixmap(QString::fromUtf8(":/Ellipse.png")));
        e_node_LL->setAlignment(Qt::AlignCenter);
        e_node_RR = new QLabel(centralWidget);
        e_node_RR->setObjectName(QStringLiteral("e_node_RR"));
        e_node_RR->setGeometry(QRect(480, 140, 47, 51));
        e_node_RR->setPixmap(QPixmap(QString::fromUtf8(":/Ellipse.png")));
        e_node_RR->setAlignment(Qt::AlignCenter);
        e_node_LR = new QLabel(centralWidget);
        e_node_LR->setObjectName(QStringLiteral("e_node_LR"));
        e_node_LR->setGeometry(QRect(256, 140, 47, 51));
        e_node_LR->setPixmap(QPixmap(QString::fromUtf8(":/Ellipse.png")));
        e_node_LR->setAlignment(Qt::AlignCenter);
        e_node_RL = new QLabel(centralWidget);
        e_node_RL->setObjectName(QStringLiteral("e_node_RL"));
        e_node_RL->setGeometry(QRect(380, 140, 47, 51));
        e_node_RL->setPixmap(QPixmap(QString::fromUtf8(":/Ellipse.png")));
        e_node_RL->setAlignment(Qt::AlignCenter);
        e_node_LLL = new QLabel(centralWidget);
        e_node_LLL->setObjectName(QStringLiteral("e_node_LLL"));
        e_node_LLL->setGeometry(QRect(101, 210, 47, 51));
        e_node_LLL->setPixmap(QPixmap(QString::fromUtf8(":/Ellipse.png")));
        e_node_LLL->setAlignment(Qt::AlignCenter);
        e_node_LLR = new QLabel(centralWidget);
        e_node_LLR->setObjectName(QStringLiteral("e_node_LLR"));
        e_node_LLR->setGeometry(QRect(156, 210, 47, 51));
        e_node_LLR->setPixmap(QPixmap(QString::fromUtf8(":/Ellipse.png")));
        e_node_LLR->setAlignment(Qt::AlignCenter);
        e_node_LRL = new QLabel(centralWidget);
        e_node_LRL->setObjectName(QStringLiteral("e_node_LRL"));
        e_node_LRL->setGeometry(QRect(226, 210, 47, 51));
        e_node_LRL->setPixmap(QPixmap(QString::fromUtf8(":/Ellipse.png")));
        e_node_LRL->setAlignment(Qt::AlignCenter);
        e_node_LRR = new QLabel(centralWidget);
        e_node_LRR->setObjectName(QStringLiteral("e_node_LRR"));
        e_node_LRR->setGeometry(QRect(286, 210, 47, 51));
        e_node_LRR->setPixmap(QPixmap(QString::fromUtf8(":/Ellipse.png")));
        e_node_LRR->setAlignment(Qt::AlignCenter);
        e_node_RLL = new QLabel(centralWidget);
        e_node_RLL->setObjectName(QStringLiteral("e_node_RLL"));
        e_node_RLL->setGeometry(QRect(347, 210, 47, 51));
        e_node_RLL->setPixmap(QPixmap(QString::fromUtf8(":/Ellipse.png")));
        e_node_RLL->setAlignment(Qt::AlignCenter);
        e_node_RLR = new QLabel(centralWidget);
        e_node_RLR->setObjectName(QStringLiteral("e_node_RLR"));
        e_node_RLR->setGeometry(QRect(412, 210, 47, 51));
        e_node_RLR->setPixmap(QPixmap(QString::fromUtf8(":/Ellipse.png")));
        e_node_RLR->setAlignment(Qt::AlignCenter);
        e_node_RRL = new QLabel(centralWidget);
        e_node_RRL->setObjectName(QStringLiteral("e_node_RRL"));
        e_node_RRL->setGeometry(QRect(461, 210, 47, 51));
        e_node_RRL->setPixmap(QPixmap(QString::fromUtf8(":/Ellipse.png")));
        e_node_RRL->setAlignment(Qt::AlignCenter);
        e_node_RRR = new QLabel(centralWidget);
        e_node_RRR->setObjectName(QStringLiteral("e_node_RRR"));
        e_node_RRR->setGeometry(QRect(520, 210, 47, 51));
        e_node_RRR->setPixmap(QPixmap(QString::fromUtf8(":/Ellipse.png")));
        e_node_RRR->setAlignment(Qt::AlignCenter);
        horizontalLayoutWidget_2 = new QWidget(centralWidget);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(363, 290, 281, 61));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        element = new QLabel(horizontalLayoutWidget_2);
        element->setObjectName(QStringLiteral("element"));

        horizontalLayout_2->addWidget(element);

        lineEditElement = new QLineEdit(horizontalLayoutWidget_2);
        lineEditElement->setObjectName(QStringLiteral("lineEditElement"));
        lineEditElement->setMaxLength(3);

        horizontalLayout_2->addWidget(lineEditElement);

        buttonAdd = new QPushButton(horizontalLayoutWidget_2);
        buttonAdd->setObjectName(QStringLiteral("buttonAdd"));

        horizontalLayout_2->addWidget(buttonAdd);

        buttonDelete = new QPushButton(horizontalLayoutWidget_2);
        buttonDelete->setObjectName(QStringLiteral("buttonDelete"));

        horizontalLayout_2->addWidget(buttonDelete);

        node_L = new QLabel(centralWidget);
        node_L->setObjectName(QStringLiteral("node_L"));
        node_L->setGeometry(QRect(210, 108, 41, 16));
        node_L->setAlignment(Qt::AlignCenter);
        node_LL = new QLabel(centralWidget);
        node_LL->setObjectName(QStringLiteral("node_LL"));
        node_LL->setGeometry(QRect(143, 157, 41, 16));
        node_LL->setAlignment(Qt::AlignCenter);
        node_LLL = new QLabel(centralWidget);
        node_LLL->setObjectName(QStringLiteral("node_LLL"));
        node_LLL->setGeometry(QRect(103, 227, 41, 16));
        node_LLL->setAlignment(Qt::AlignCenter);
        node_LLR = new QLabel(centralWidget);
        node_LLR->setObjectName(QStringLiteral("node_LLR"));
        node_LLR->setGeometry(QRect(159, 228, 41, 16));
        node_LLR->setAlignment(Qt::AlignCenter);
        node_LR = new QLabel(centralWidget);
        node_LR->setObjectName(QStringLiteral("node_LR"));
        node_LR->setGeometry(QRect(259, 157, 41, 16));
        node_LR->setAlignment(Qt::AlignCenter);
        node_LRL = new QLabel(centralWidget);
        node_LRL->setObjectName(QStringLiteral("node_LRL"));
        node_LRL->setGeometry(QRect(229, 228, 41, 16));
        node_LRL->setAlignment(Qt::AlignCenter);
        node_LRR = new QLabel(centralWidget);
        node_LRR->setObjectName(QStringLiteral("node_LRR"));
        node_LRR->setGeometry(QRect(289, 228, 41, 16));
        node_LRR->setAlignment(Qt::AlignCenter);
        node_R = new QLabel(centralWidget);
        node_R->setObjectName(QStringLiteral("node_R"));
        node_R->setGeometry(QRect(429, 108, 41, 16));
        node_R->setAlignment(Qt::AlignCenter);
        node_RR = new QLabel(centralWidget);
        node_RR->setObjectName(QStringLiteral("node_RR"));
        node_RR->setGeometry(QRect(484, 157, 41, 16));
        node_RR->setAlignment(Qt::AlignCenter);
        node_RRR = new QLabel(centralWidget);
        node_RRR->setObjectName(QStringLiteral("node_RRR"));
        node_RRR->setGeometry(QRect(523, 227, 41, 16));
        node_RRR->setAlignment(Qt::AlignCenter);
        node_RL = new QLabel(centralWidget);
        node_RL->setObjectName(QStringLiteral("node_RL"));
        node_RL->setGeometry(QRect(383, 158, 41, 16));
        node_RL->setAlignment(Qt::AlignCenter);
        node_RLL = new QLabel(centralWidget);
        node_RLL->setObjectName(QStringLiteral("node_RLL"));
        node_RLL->setGeometry(QRect(350, 228, 41, 16));
        node_RLL->setAlignment(Qt::AlignCenter);
        node_RRL = new QLabel(centralWidget);
        node_RRL->setObjectName(QStringLiteral("node_RRL"));
        node_RRL->setGeometry(QRect(464, 228, 41, 16));
        node_RRL->setAlignment(Qt::AlignCenter);
        node_RLR = new QLabel(centralWidget);
        node_RLR->setObjectName(QStringLiteral("node_RLR"));
        node_RLR->setGeometry(QRect(415, 228, 41, 16));
        node_RLR->setAlignment(Qt::AlignCenter);
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(450, 350, 191, 41));
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        LeafNumLineEdit = new QLineEdit(widget);
        LeafNumLineEdit->setObjectName(QStringLiteral("LeafNumLineEdit"));
        sizePolicy.setHeightForWidth(LeafNumLineEdit->sizePolicy().hasHeightForWidth());
        LeafNumLineEdit->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(LeafNumLineEdit);

        GetleafnumPushButton = new QPushButton(widget);
        GetleafnumPushButton->setObjectName(QStringLiteral("GetleafnumPushButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(75);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(GetleafnumPushButton->sizePolicy().hasHeightForWidth());
        GetleafnumPushButton->setSizePolicy(sizePolicy1);
        GetleafnumPushButton->setMinimumSize(QSize(75, 0));

        horizontalLayout_4->addWidget(GetleafnumPushButton);

        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(10, 290, 341, 151));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        verticalLayout->setContentsMargins(-1, -1, -1, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        PostPushButton = new QPushButton(widget1);
        PostPushButton->setObjectName(QStringLiteral("PostPushButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(PostPushButton->sizePolicy().hasHeightForWidth());
        PostPushButton->setSizePolicy(sizePolicy2);

        horizontalLayout_3->addWidget(PostPushButton);

        InPushButton = new QPushButton(widget1);
        InPushButton->setObjectName(QStringLiteral("InPushButton"));
        sizePolicy2.setHeightForWidth(InPushButton->sizePolicy().hasHeightForWidth());
        InPushButton->setSizePolicy(sizePolicy2);

        horizontalLayout_3->addWidget(InPushButton);

        PrePushButton = new QPushButton(widget1);
        PrePushButton->setObjectName(QStringLiteral("PrePushButton"));
        PrePushButton->setEnabled(true);
        sizePolicy2.setHeightForWidth(PrePushButton->sizePolicy().hasHeightForWidth());
        PrePushButton->setSizePolicy(sizePolicy2);

        horizontalLayout_3->addWidget(PrePushButton);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        PostThreadPushButton = new QPushButton(widget1);
        PostThreadPushButton->setObjectName(QStringLiteral("PostThreadPushButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(PostThreadPushButton->sizePolicy().hasHeightForWidth());
        PostThreadPushButton->setSizePolicy(sizePolicy3);
        PostThreadPushButton->setMaximumSize(QSize(16777215, 100));

        horizontalLayout_5->addWidget(PostThreadPushButton);

        InThreadPushButton = new QPushButton(widget1);
        InThreadPushButton->setObjectName(QStringLiteral("InThreadPushButton"));
        sizePolicy3.setHeightForWidth(InThreadPushButton->sizePolicy().hasHeightForWidth());
        InThreadPushButton->setSizePolicy(sizePolicy3);

        horizontalLayout_5->addWidget(InThreadPushButton);

        PreThreadPushButton = new QPushButton(widget1);
        PreThreadPushButton->setObjectName(QStringLiteral("PreThreadPushButton"));
        PreThreadPushButton->setEnabled(true);
        sizePolicy3.setHeightForWidth(PreThreadPushButton->sizePolicy().hasHeightForWidth());
        PreThreadPushButton->setSizePolicy(sizePolicy3);

        horizontalLayout_5->addWidget(PreThreadPushButton);

        clearThreadPushButton = new QPushButton(widget1);
        clearThreadPushButton->setObjectName(QStringLiteral("clearThreadPushButton"));
        sizePolicy2.setHeightForWidth(clearThreadPushButton->sizePolicy().hasHeightForWidth());
        clearThreadPushButton->setSizePolicy(sizePolicy2);

        horizontalLayout_5->addWidget(clearThreadPushButton);


        verticalLayout->addLayout(horizontalLayout_5);

        verticalLayout->setStretch(0, 3);
        verticalLayout->setStretch(1, 4);

        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        preThreadPushButton = new QPushButton(widget1);
        preThreadPushButton->setObjectName(QStringLiteral("preThreadPushButton"));
        sizePolicy2.setHeightForWidth(preThreadPushButton->sizePolicy().hasHeightForWidth());
        preThreadPushButton->setSizePolicy(sizePolicy2);

        horizontalLayout_6->addWidget(preThreadPushButton);

        inThreadPushButton = new QPushButton(widget1);
        inThreadPushButton->setObjectName(QStringLiteral("inThreadPushButton"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(inThreadPushButton->sizePolicy().hasHeightForWidth());
        inThreadPushButton->setSizePolicy(sizePolicy4);

        horizontalLayout_6->addWidget(inThreadPushButton);


        verticalLayout_2->addLayout(horizontalLayout_6);

        verticalLayout_2->setStretch(0, 4);
        verticalLayout_2->setStretch(1, 2);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 673, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setMovable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        mainToolBar->addAction(actionOpen_File);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionSave_File);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionOpen_File->setText(QApplication::translate("MainWindow", "Open File", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionOpen_File->setToolTip(QApplication::translate("MainWindow", "Open File", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionSave_File->setText(QApplication::translate("MainWindow", "Save as", Q_NULLPTR));
        label_tree_name->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">Result:</span></p></body></html>", Q_NULLPTR));
        e_node_C->setText(QString());
        node_C->setText(QString());
        e_node_L->setText(QString());
        e_node_R->setText(QString());
        e_node_LL->setText(QString());
        e_node_RR->setText(QString());
        e_node_LR->setText(QString());
        e_node_RL->setText(QString());
        e_node_LLL->setText(QString());
        e_node_LLR->setText(QString());
        e_node_LRL->setText(QString());
        e_node_LRR->setText(QString());
        e_node_RLL->setText(QString());
        e_node_RLR->setText(QString());
        e_node_RRL->setText(QString());
        e_node_RRR->setText(QString());
        element->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">Element:</span></p></body></html>", Q_NULLPTR));
        buttonAdd->setText(QApplication::translate("MainWindow", "Add", Q_NULLPTR));
        buttonDelete->setText(QApplication::translate("MainWindow", "Delete", Q_NULLPTR));
        node_L->setText(QString());
        node_LL->setText(QString());
        node_LLL->setText(QString());
        node_LLR->setText(QString());
        node_LR->setText(QString());
        node_LRL->setText(QString());
        node_LRR->setText(QString());
        node_R->setText(QString());
        node_RR->setText(QString());
        node_RRR->setText(QString());
        node_RL->setText(QString());
        node_RLL->setText(QString());
        node_RRL->setText(QString());
        node_RLR->setText(QString());
        GetleafnumPushButton->setText(QApplication::translate("MainWindow", "\345\255\220\350\212\202\347\202\271\344\270\252\346\225\260", Q_NULLPTR));
        PostPushButton->setText(QApplication::translate("MainWindow", "\345\220\216\345\272\217\351\201\215\345\216\206", Q_NULLPTR));
        InPushButton->setText(QApplication::translate("MainWindow", "\344\270\255\345\272\217\351\201\215\345\216\206", Q_NULLPTR));
        PrePushButton->setText(QApplication::translate("MainWindow", "\345\211\215\345\272\217\351\201\215\345\216\206", Q_NULLPTR));
        PostThreadPushButton->setText(QApplication::translate("MainWindow", "\345\220\216\345\272\217\347\272\277\347\264\242\345\214\226", Q_NULLPTR));
        InThreadPushButton->setText(QApplication::translate("MainWindow", "\344\270\255\345\272\217\347\272\277\347\264\242\345\214\226", Q_NULLPTR));
        PreThreadPushButton->setText(QApplication::translate("MainWindow", "\345\211\215\345\272\217\347\272\277\347\264\242\345\214\226", Q_NULLPTR));
        clearThreadPushButton->setText(QApplication::translate("MainWindow", "\345\216\273\347\272\277\347\264\242\345\214\226", Q_NULLPTR));
        preThreadPushButton->setText(QApplication::translate("MainWindow", "\345\211\215\345\272\217\347\272\277\347\264\242\345\214\226\351\201\215\345\216\206", Q_NULLPTR));
        inThreadPushButton->setText(QApplication::translate("MainWindow", "\344\270\255\345\272\217\347\272\277\347\264\242\345\214\226\351\201\215\345\216\206", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
