[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/kl-E8VQf)


# _PUNTO 2_


## Investigar el archivo .gitignore
   _Su función es indicar qué archivos o carpetas deben ser ignorados por Git y, por lo tanto, no ser rastreados ni añadidos al repositorio._

### ¿Por qué es conveniente incluirlo?
    Evita subir archivos innecesarios
Permite excluir archivos temporales, compilados o generados automáticamente que no son relevantes para el repositorio (ej., archivos .log, carpetas node_modules, etc.).

1. Mejora la organización del repositorio
1. _Mantiene el repositorio limpio, incluyendo solo archivos esenciales para el desarrollo y evitando confusión entre los colaboradores._

 2. Optimiza el rendimiento 
 2. _Excluir archivos grandes o innecesarios evita que Git maneje información innecesaria, lo que puede mejorar la velocidad de las operaciones de Git._

3. Protege información sensible
3. _Se pueden excluir archivos que contengan credenciales o configuraciones locales (.env, claves API, etc.), evitando riesgos de seguridad._

### ¿Cuándo se debe hacer?
_Se debe incluir antes del primer commit_

### ¿Cómo configuraría el archivo .gitignore? 
_El archivo .gitignore se coloca en la raíz del proyecto y su sintaxis es simple:_

- Comentarios: Se usan con # al inicio de la línea.

- Ignorar archivos o carpetas: Se especifica el nombre directamente.

- Patrones globales: Se pueden usar comodines como * para definir reglas generales.



# _PUNTO 3_


