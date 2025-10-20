Mostrar "Ingrese un número:"
  Leer n
  Si n < 0 entonces
      Mostrar "No existe factorial de números negativos"
  Sino
      factorial ← 1
      Para i desde 1 hasta n hacer
          factorial ← factorial * i
      Fin Para
      Mostrar "El factorial de n es", factorial
  Fin Si
Fin