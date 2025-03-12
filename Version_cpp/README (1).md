# CALCULADORA DE TIEMPO QUE TARDA UN DEMONIO EN RECORRER UNA DISTANCIA EN PYTHON

## Introducción
Este programa calculael tiempo que tarda un demonio en recorrer una distancia dada, basándose en su tipo y, por ende, su velocidad. El programa toma como entrada el tipo de demonio (Zombieman, Imp o Baron of Hell) y la distancia a recorrer. Luego, calcula el tiempo necesario.

## Instalación
1. Ingresar a el repositorio en GitHub:
```bash
   https://github.com/Z-I-K-Oo/Parcial-.git
 ```  
   
2. Buscar el archivo:
  ```bash
    Codigo Version Python
```
3. Copilar el archivo C++
   ```bash
   g++ demonio.cpp -o demonio
```

4. Ejecuta el programa:

  ./demonio (En Linux/macOS)
   demonio.exe (En Windows)
```



## Guía de uso

1. Compile y ejecute el programa. Introduzca el demonio, especifique que tipo de demonio (Zombieman, Imp o Baron of Hell) e ingrese la distancia que el demonio debe recorrer.
2. Introduzca el demonio, especifique que tipo de demonio (Zombieman, Imp o Baron of Hell) e ingrese la distancia que el demonio debe recorrer.Segun el tipo de demonio se asignara una velicidad.

### Ejemplo con el codigo:
```bash
 if (tipo_demonio == "Zombieman") {
        velocidad = 5;
    } else if (tipo_demonio == "Imp") {
        velocidad = 10;
    } else if (tipo_demonio == "Baron of Hell") {
        velocidad = 3;
    }
```

## Documentación tecnica
- Script principal: Algoritmos.cpp
- Estructura:
  - El programa utiliza estructuras de control C++ simples y realiza cálculos basados en las entradas del usuario.
  - Después de ejecutar el programa, te pedirá que ingreses el tipo de demonio y la distancia, uno por línea.
  - El programa calculará el tiempo y mostrará el resultado.

## Errores Comunes
- **g++ comand not found"** Significa que el copilador C++ no esta instalado o no esta instalado correctamente.
- **Permission denied** Normalmente Linux/MacOS piden permisos para permitir la ejecución de ciertos archivos.
- **Errores de copilación** Son los mas comunes, ya que puede que escribas una letra o un numero de mas y esto impediria que el codigo se ejecutara, por lo que siempre hay que asegurarse de que lo que se esta escribiendo este bien.


## Contribuciones
Las contriciones a este proyecto seria geniales para poder hacer el codigo mas solido pero a la vez facil de usar para el usuario por que la idea es que el codigo funcione correctamente si, pero que sea de alta calidad y facil de etender para sus usuarios.

## Licencia
Este proyecto está licenciado bajo la Licencia Pública General de GNU (GPL) versión 3. Puedes usar, modificar y distribuir el software bajo la misma licencia. Vea el archivo LICENSE para más detalles.
