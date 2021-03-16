import sys
from PyQt5.QtWidgets import QApplication, QMainWindow, QPushButton, QToolTip, QLabel
from PyQt5 import QtGui
import subprocess
import getpass
import os

class Janela (QMainWindow):
    def __init__(self):
        super().__init__()

        self.topo = 200
        self.esquerda = 600
        self.largura = 500
        self.altura = 500
        self.titulo = "FAKEJEC"

        self.jeimg = QLabel(self)
        self.jeimg.move(188,10)
        self.jeimg.setPixmap(QtGui.QPixmap('je.png'))
        self.jeimg.resize(97,97)

        self.label_je = QLabel(self)
        self.label_je.setText("Justiça Eleitoral")
        self.label_je.setStyleSheet('QLabel{font:bold;font-size:25px}')
        self.label_je.move(145, 100)
        self.label_je.resize(270, 30)

        label_1 = QLabel(self)
        label_1.setText("Selecione a localização de sua estação:")
        label_1.move(30, 135)
        label_1.resize(400, 25)

        botao1 = QPushButton('OK',self)
        botao1.move(125,360)
        botao1.resize(260,60)
        botao1.clicked.connect(self.botao1_click)



        self.CarregarJanela()

    def CarregarJanela(self):
        self.setGeometry(self.esquerda,self.topo,self.largura,self.altura)
        self.setWindowTitle(self.titulo)
        self.show()

    def botao1_click(self):
        print('\nCOMPUTADOR SECRETARIA \n')
        print('EXEMPLO: "rbawSECRETARIA01"')
        computador = input('Digite o Nome do Computador: ')
        titulo = input('Título de Eleitor: ')
        pswd = getpass.getpass('Senha:')
        processo = subprocess.call([f"rdesktop -u {titulo} -d tre-ba.gov.br -p {pswd} -g 95% -a 24 -z -x lan -r sound:remote {computador}.tre-ba.gov.br"],shell=True)

aplicacao = QApplication(sys.argv)
j = Janela()
sys.exit(aplicacao.exec_())
