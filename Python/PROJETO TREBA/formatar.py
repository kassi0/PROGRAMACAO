import subprocess
import os.path
import time

path = '/dev/sdb'
isExist = os.path.exists(path)
while (True):
    os.system('cls' if os.name == 'nt' else 'clear')
    if isExist is True:

        print('PenDrive conectado, sendo formatado!')
        subprocess.call(["mkfs.vfat /dev/sdb -I"], shell=True)
        print("Pendrive Formatado Aguardando o Proximo")
        time.sleep(1)

    if isExist is False:
        print("PenDrive Não Conectado")
        time.sleep(5)

