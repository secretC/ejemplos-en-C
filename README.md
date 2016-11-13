# Ejemplos en C
## Ejecutar archivos:
### Modo 1: Usando make.
```bash
$ make -s
```

### Modo 2:  De manera simple.
```bash
$ gcc <tu_archivo.c> -std=c99 -o <tu_archivo_de_salida>
```
### Observación:
La bandera -std=c99 se usa en el caso que el código contenga bucles ("for" o "while")