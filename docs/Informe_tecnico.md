![image](https://user-images.githubusercontent.com/89607474/175754481-5f6cb929-0db7-4a5e-b0c6-326b57eed208.png)

# Informe Técnico 
## Curso: Estructura de datos
### Detección de personas en secuencias de imágenes o video

**Alumnos:**

* Daniel Bassano (Diseñador y programador)
* Matías Roa (Líder, administrador y programador)

## 1. Introducción

El presente trabajo es un informe técnico del sistema de detección y Re identificación de personas en secuencias de imágenes o videos. Este diseño es una posible solución a los requerimientos que se exigen, para desarrollar el trabajo se ha dividido en 6 objetivos a realizar
Se dan a conocer en el presente informe un resumen del trabajo realizado, una descripción del problema, el objetivo general y los objetivos específicos ya nombrados anteriormente que son seis. También se da a conocer la solución propuesta tanto lógica y técnicamente (Código)
Se informa sobre las herramientas, proceso de instalación de estas para realizar el trabajo, diseño e implementación a realizar.
También se anexa una bitácora de los hitos desarrollados, los resultados esperados/obtenidos y una conclusión final.

### 1.1 Descripción del problema

Un trabajador de la empresa ACME, en específico el guardia de esta requiere de un sistema que no solo detecte a
las personas que pasan por el edificio, también que entregue datos, flujos, estimaciones de las personas que la cámara va detectando.

### 1.2 Objetivos

**Objetivo General**

1.  Desarrollar e implementar un algoritmo funcional que entregue datos facilitados por un detector de una cámara de seguridad.

**Objetivos específicos**

1.	Objetivo 01: Lectura y compresión del problema.
2.	Objetivo 02: Investigar la instalación y uso del editor a utilizar (Visual Studio Code). 
3.	Objetivo 03: Investigar/Adaptación al lenguaje de programación C++ e  la librería OpenCv y todas las funcionalidades que entregan estas.  
4.	Objetivo 04: Implementar y desarrollar métodos de un nodo.
5.	Objetivo 05: Implementar y desarrollar métodos de una lista enlazada simple. 
6.	Objetivo 06: Unificar todo el código implementado y que cubra los requerimientos solicitados.
7.	Objetivo 07: Lectura y compresión del problema actualizado.
8.	Objetivo 08: Implementar lectura de frames del video.
9.	Objetivo 09: Implementar y desarrollar metodos de una lista enlazada simple.
10.	Objetivo 10: Investigar sobre el arbol KdTree.
11.	Objetivo 11: Implementar arbol KdTree
12.	Objetivo 12: Modelar logica con arbol KdTree
13.	Objetivo 13: Unificar todo el código implementado y que cubra los requerimientos solicitados.

### 1.3 Solución propuesta

Diseñar e implementar con POO y la librería OpenCV en C++, un algoritmo que realice la detección de objetos, en este caso personas.
La lógica a implementar es implementar un Arbol binario de tipo KdTree, que vaya almacenando a las personas que van siendo
detectadas por su "centroide".

## 2. Materiales y métodos

El desarrollo de este Proyecto se lleva a cabo con orientación a objetos en C++ en el editor de código fuente Visual Studio Code, utilizando todas las herramientas que entrega C++ y la biblioteca de openCv, se implementara la lógica definida para llevar a cabo el algoritmo de solución.

### 2.1 Instalación

Las librerías utilizadas para la instalación y ejecución del código son los siguientes:
-	OpenCv: proporciona las herramientas para la visión artificial.
-	Iostream: Biblioteca estándar de C++, para manejar los dispositivos de entrada y salida.

### 2.2 Diseño 

Los componentes y clases usados son los siguientes:
-	Cmake: Herramienta para construir y empaquetar software.
-	Clase Detector: Objeto que detecta personas con la librería OpenCV mediante la detección Default
-	Clase Persona: Objeto del cual se instanciará una persona con los siguientes atributos: id, x e y inicio, x e y fin, x e y centro
-	Clase KdTreNode: Objeto el cual tendrá como atributo posiciones de una persona.
-	Clase KdTree: TDA que almacenara los nodos de las cordenadas de las personas.

### 2.3 Implementación

Para detectar personas tenemos el código de Detector.cpp que contiene una función detect( ), la cual genera rectángulos con un centroide y que los convierte en clase persona por cada rectángulo diferente detectado, retornando un vector lleno de clases Persona. La clase Persona, contiene las posiciones del rectángulo dados por la librería OpenCV, que detecta personas con la detección Default.

En el archivo detectPeople.cpp donde se encuentra el main( ) generamos nuestras instancias de clase Persona retornadas en un vector, el cual recorremos e ingresamos las instancias a nuestra estructura de datos (en modo de Nodo que contiene esta clase Persona), que en este caso es una lista enlazada circular. Una vez procesado el frame del video saltamos 5 frames (esto para que haya un cambio notable entre frames) y volvemos a procesar otro y dentro del ciclo iterador del vector de Persona (en el archivo detectPeople.cpp) comparamos la posición del centroide de cada Persona del vector con 1 de la Persona que se encuentra en la lista enlazada, tomamos el menor valor entre la diferencia de posiciones y se asume que es la misma persona. Si esta esta diferencia es mayor a cierto estándar y hay menos personas en el vector que en la lista se asume que esta persona desapareció del frame, entonces se elimina la persona de la lista enlazada.

Para los requerimientos que tratan sobre lo que quiere el guardia, para el trafico de entrada y salida se tiene 2 variables tipo int globales que se actualizan con +1 cada vez que una persona cruza desde el cuadrante bajo la línea roja al cuadrante superior e inversamente para la salida. Estos cálculos se hacen con la posición en Y de la persona y las coordenadas del frame, se compara la PosY vs las coordenadas de la matriz que genera el frame y se decide de donde a donde se desplaza la persona, mediante lo que arroja su posición inicial y final (de que entra a la lista a la que se elimina). Para los flujos se toman el total de cada contador y se divide por la unidad de tiempo necesaria.



## 3. Resultados obtenidos
En comparacion a la entrega anterior, los resultados de este proyecto en parte fueron  fructíferos, se implementaron los requerimientos ( no eficazmente) solicitados.
Debido a que al igual que la entrega anterior se presentaron los mismos impedimientos; la sintaxis de C++, errores específicos que llevaron tiempo en solucionarse, errores de build y compatibilidades. 
## 4. Conclusiones

Se puede decir que, en términos de soluciones, se logró  medianamente el objetivo del taller.
Por el lado de aprendizaje de trabajo multi-herramientas y mas cercano a lo profesional, se comprendió el tiempo y la responsabilidad necesaria para lograr resultados esperados.

# Anexos

## Anexo A: Instalación librerías OpenCV

No hubo dificultad en la instalación de la librería para ninguno de los participantes del grupo.

## Anexo B: Instalación de IDE y configuración librerías OpenCV

En la bitácora se aprecia que Daniel Bassano ocupó mucho más tiempo de lo esperado en instalar todas las herramientas necesarias para implementar la solución al problema propuesto. Esto fue debido a que en primera instancia se realizó la instalación, de Visual Studio 2022 y CMake, siguiendo las instrucciones del profesor dadas en el vídeo compartido en su canal de Youtube. La instalación se hizo correctamente, corroborado por la compilación correcta del código demo, que contenía el tutorial.

Luego, comenzaron las ayudantías y se recomendó que se ocupara VS Code. Lo cual incito a Daniel Bassano a instalar todo nuevamente, para así poder seguir las instrucciones del ayudante en una misma plataforma. Se siguieron todas las instrucciones al pie de la letra y el código más simple de “Hola Mundo” no compilaba, por el siguiente error:

>“CMake Error at CMakeLists.txt:2 (project):Failed to run MSBuild command:
>
>C:/Program Files/Microsoft Visual Studio/2022/Community/MSBuild/Current/Bin/amd64/MSBuild.exe
>
>to get the value of VCTargetsPath:
>
>Microsoft (R) Build Engine version 17.2.1+52cd2da31 for .NET Framework
>Copyright (C) Microsoft Corporation. All rights reserved.
>
>Build started 11/06/2022 15:15:20.
>-- Configuring incomplete, errors occurred!
>See also "C:/Users/Likonin!/Documents/VS Code/test_01/build/CMakeFiles/CMakeOutput.log".
>Project "C:\Users\Likonin!\Documents\VS”


Este error persistió durante todos los intentos de arreglarlo. Se intento instalar y desinstalar todo, en reiteradas ocasiones, seguir otros tutoriales y buscar en internet la solución, pero nada dio resultado. Como último recurso se contacto a principios de mes de Julio al ayudante, el cual recomendó que un día se juntara Daniel con él en la universidad a arreglar el problema, lo cual no fue posible debido a que el grupo no posee un notebook, esto llevo a pedirle ayuda al profesor después de clases online.

El problema persistió y se tomó la decisión de formatear el computador y seguir el tutorial del ayudante nuevamente, lo cual soluciono el problema, pero dejo con muy poco tiempo de familiarizarse con el lenguaje e IDE.

Un error que costó la no implementación total de la solución por falta de conocimientos, además de "error LNK2005" que impidío la compilación y testeo del código.

## Referencias

1. Vídeo ayuda de instalación de profesor, Dr. Juan Bekios-Calfa en su canal de youtube, BekiosLab: https://www.youtube.com/watch?v=Hu7ArOaFm2g
2. Vídeos ayuda de lógica del taller del profesor, Dr. Juan Bekios-Calfa en su canal de youtube, BekiosLab
3. Vídeo ayuda de instalación de ayudante Cristian Galleguillos: https://drive.google.com/drive/u/1/folders/1MTik-UAPAi0MgkdM-O9t6s_wD9JSVolE
4. Foro para ayuda de información y corrección de errores: https://stackoverflow.com
5. Git de implementacion del arbol binario: https://github.com/KorayGocmen/kdTree
