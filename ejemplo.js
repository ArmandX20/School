let lista = [250, 1, 8, 750, 6, 10000, 5];
function promedio(lista) {
  const sumaTotal = lista.reduce(function (acumulador, nuevoElemento) {
    return acumulador + nuevoElemento;
  });

  let prom = sumaTotal / lista.length;
  return prom;
}
function isPar(numero) {
  if (numero % 2 == 0) {
    return true;
  } else {
    return false;
  }
}

lista.sort(function (a, b) {
  return a - b;
});

let medio = parseInt(lista.length / 2);

if (isPar(lista.length)) {
  let item1 = lista[medio - 1];
  let item2 = lista[medio];
  let mediana = promedio([item1, item2]);
  console.log(`your list is: ${lista}`);
  console.log(`la mediana es: ${mediana}`);
} else {
  console.log(`la mediana es: ${lista[medio]}`);
  console.log(`your list is: ${lista}`);
}
