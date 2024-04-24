
  #include <stdio.h>

  // Função para calcular o total de segundos
  int calcularSegundos(int horas, int minutos, int segundos) {
      int totalSegundos = horas * 3600 + minutos * 60 + segundos;
      return totalSegundos;
  }

  // Função principal
  int main() {
      int horas, minutos, segundos;

      printf("Digite a quantidade de horas: ");
      scanf("%d", &horas);
      printf("Digite a quantidade de minutos: ");
      scanf("%d", &minutos);
      printf("Digite a quantidade de segundos: ");
      scanf("%d", &segundos);

      int totalSegundos = calcularSegundos(horas, minutos, segundos);
      printf("O total de segundos é: %d\n", totalSegundos);

      return 0;
  }