from PyQt5 import uic,QtWidgets
import subprocess
import getpass
import os

def chama_secretaria():
    tela_selecao.hide()
    secretaria.show()
    secretaria.backButton.clicked.connect(tela_selecao.show)
    secretaria.backButton.clicked.connect(secretaria.close)
    secretaria.pswd.setEchoMode(QtWidgets.QLineEdit.Password)

    def processo():
        computador = secretaria.computador.text()
        titulo = secretaria.titulo.text()
        pswd = secretaria.pswd.text()
        subprocess.call([f"rdesktop -u {titulo} -d tre-ba.gov.br -p {pswd} -g 95% -a 24 -z -x lan -r sound:remote {computador}.tre-ba.gov.br"], shell=True)

    secretaria.connectBut.clicked.connect(processo)


def chama_zecapital():
    tela_selecao.hide()
    zecapital.show()
    zecapital.backButton.clicked.connect(tela_selecao.show)
    zecapital.backButton.clicked.connect(zecapital.close)

    def processo():
        computador = secretaria.computador.text()
        titulo = secretaria.titulo.text()
        pswd = secretaria.pswd.text()
        subprocess.call([f"rdesktop -u {titulo} -d tre-ba.gov.br -p {pswd} -g 95% -a 24 -z -x lan -r sound:remote {computador}.tre-ba.gov.br"], shell=True)

    zecapital.connectBut.clicked.connect(processo)


def chama_zeinterior():
    tela_selecao.hide()
    zeinterior.show()
    zeinterior.backButton.clicked.connect(tela_selecao.show)
    zeinterior.backButton.clicked.connect(zeinterior.close)

    def processo():
        computador = secretaria.computador.text()
        titulo = secretaria.titulo.text()
        pswd = secretaria.pswd.text()
        subprocess.call([f"rdesktop -u {titulo} -d tre-ba.gov.br -p {pswd} -g 95% -a 24 -z -x lan -r sound:remote {computador}.tre-ba.gov.br"], shell=True)

    zeinterior.connectBut.clicked.connect(processo)




app=QtWidgets.QApplication([])
tela_selecao=uic.loadUi("fakejec.ui")
secretaria=uic.loadUi("secretaria.ui")
zecapital=uic.loadUi("zecapital.ui")
zeinterior=uic.loadUi("zeinterior.ui")
tela_selecao.pushButton.clicked.connect(chama_secretaria)
tela_selecao.pushButton_2.clicked.connect(chama_zecapital)
tela_selecao.pushButton_3.clicked.connect(chama_zeinterior)

tela_selecao.show()
app.exec()