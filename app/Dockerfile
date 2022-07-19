#CI base
FROM ubuntu:16.04 
#Instalacion de las dependencias de software 
RUN apt-get update && apt-get install build-essential -y && apt-get install libssl-dev -y
#Se copia el Codigo de las Aplicaciones a la imagen de contenedor
COPY . /home/hash/
WORKDIR /home/hash/
RUN make clean
RUN make
