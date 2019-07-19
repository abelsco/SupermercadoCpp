#-------------------------------------------------
#
# Project created by QtCreator 2017-05-29T23:16:54
#
#-------------------------------------------------

QT       += core gui
QT += sql
QTPLUGIN += qsqlmysql
QT += core network sql
INCLUDEPATH += "/opt/Qt/5.8/gcc_64/plugins/sqldrivers"
LIBS += -L"/opt/Qt/5.8/gcc_64/plugins/sqldrivers -libqsqlmysql.so"

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = APS_ES_1
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    administrador.cpp \
    busca.cpp \
    funcionario.cpp \
    cliente.cpp \
    produtos.cpp \
    conexaobanco.cpp \
    produtoscpp.cpp \
    administradorcpp.cpp \
    pedidoscpp.cpp \
    buscacpp.cpp \
    clientecpp.cpp \
    funcionariocpp.cpp \
    login.cpp \
    teste.cpp \
    clienteup.cpp \
    funcionarioup.cpp \
    administradorup.cpp \
    buscaup.cpp \
    produtoup.cpp \
    tabela.cpp

HEADERS  += mainwindow.h \
    administrador.h \
    busca.h \
    funcionario.h \
    cliente.h \
    produtos.h \
    conexaobanco.h \
    produtoscpp.h \
    administradorcpp.h \
    pedidoscpp.h \
    buscacpp.h \
    clientecpp.h \
    funcionariocpp.h \
    login.h \
    teste.h \
    clienteup.h \
    funcionarioup.h \
    administradorup.h \
    buscaup.h \
    produtoup.h \
    tabela.h

FORMS    += mainwindow.ui \
    administrador.ui \
    busca.ui \
    cliente.ui \
    funcionario.ui \
    administrador.ui \
    busca.ui \
    funcionario.ui \
    mainwindow.ui \
    cliente.ui \
    produtos.ui \
    login.ui \
    clienteup.ui \
    funcionarioup.ui \
    administradorup.ui \
    buscaup.ui \
    produtoup.ui \
    tabela.ui
