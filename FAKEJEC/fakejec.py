from PyQt5 import uic,QtWidgets,QtGui
from PyQt5.QtWidgets import QMessageBox, QPushButton
import subprocess


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
        computador = zecapital.computador.text()
        subprocess.call([f"rdesktop -d tre-ba.gov.br -g 95% -a 24 -z -x lan -r sound:remote {computador}.tre-ba.gov.br -cert-ignore"], shell=True)

    zecapital.connectBut.clicked.connect(processo)


def chama_zeinterior():
    tela_selecao.hide()
    zeinterior.show()
    zeinterior.backButton.clicked.connect(tela_selecao.show)
    zeinterior.backButton.clicked.connect(zeinterior.close)

    def processo():

        ze = zeinterior.ze.text()
        try:
            ze = int(ze)
        except Exception:
            QMessageBox.about(zeinterior, "Erro!", "Utilize Apenas números!")
            pass
        std = zeinterior.std.text()
        try:
            std = int(std)
        except Exception:
            QMessageBox.about(zeinterior, "Error!", "Utilize Apenas números!")
            pass

        subprocess.call([f"rdesktop -g 95% -a 24 -z -x lan -r sound:remote 10.171.{ze}.{std} -cert-ignore"], shell=True)


    zeinterior.connectBut.clicked.connect(processo)


app=QtWidgets.QApplication([])
tela_selecao=uic.loadUi("fakejec.ui")
tela_selecao.setGeometry(700,200,500,600)
secretaria=uic.loadUi("secretaria.ui")
secretaria.setGeometry(700,200,500,600)
zecapital=uic.loadUi("zecapital.ui")
zecapital.setGeometry(700,200,500,600)
zeinterior=uic.loadUi("zeinterior.ui")
zeinterior.setGeometry(700,200,500,600)
tela_selecao.pushButton.clicked.connect(chama_secretaria)
tela_selecao.pushButton_2.clicked.connect(chama_zecapital)
tela_selecao.pushButton_3.clicked.connect(chama_zeinterior)

tela_selecao.show()
app.exec()