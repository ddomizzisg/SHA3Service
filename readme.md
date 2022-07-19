# Servicio de SHA3

Para levantar el servicio se debe de ejecutar el siguiente comando:

```bash
docker-compose up -d
```

Para acceder al servicio de SHA, se debe de ejecutar el siguiente comando:

```bash
docker-compose exec sha3 bash
```

Dentro del contenedor, para probar el servicio se debe de ejecutar el siguiente comando:

```bash
./hashTable <RUTA_AL_ARCHIVO>
```

Por ejemplo:


```bash
./hashTable /home/hash/makefile
```

Ejemplo de salida:

```bash
53a6ed30a7491dec4069bde6395079601434ebcb96527625b1fc4b5b9d3d5428
```