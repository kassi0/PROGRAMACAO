import subprocess
import os.path
import time

pathb = '/dev/sdb'
pathc = '/dev/sdc'
pathd = '/dev/sdd'
pathe = '/dev/sde'
isExistb = os.path.exists(pathb)
isExistc = os.path.exists(pathc)
isExistd = os.path.exists(pathd)
isExiste = os.path.exists(pathe)
while (True):
    os.system('cls' if os.name == 'nt' else 'clear')
    if isExistb is True:

        print('PenDrive conectado, sendo formatado!')
        subprocess.call(["mkfs.vfat /dev/sdb -I"], shell=True)
        print("Pendrive Formatado Aguardando o Proximo")
        time.sleep(5)
    if isExistc is True:

        print('PenDrive conectado, sendo formatado!')
        subprocess.call(["mkfs.vfat /dev/sdc -I"], shell=True)
        print("Pendrive Formatado Aguardando o Proximo")
        time.sleep(5)
    if isExistd is True:

        print('PenDrive conectado, sendo formatado!')
        subprocess.call(["mkfs.vfat /dev/sdd -I"], shell=True)
        print("Pendrive Formatado Aguardando o Proximo")
        time.sleep(5)
    if isExiste is True:

        print('PenDrive conectado, sendo formatado!')
        subprocess.call(["mkfs.vfat /dev/sde -I"], shell=True)
        print("Pendrive Formatado Aguardando o Proximo")
        time.sleep(5)


