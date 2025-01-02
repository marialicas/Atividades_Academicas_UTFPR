#include <stdio.h>
#include <string.h>

typedef struct {
  char nome[100];
  int energia;
  int defesa;
  int forca;
} personagem;

int luta(int forca, int defesa, int energia) {
  int dano;
  dano = forca - defesa;
  if (dano <= 0) {
    dano = 1;
  }
  energia = energia - dano;

  return energia;
}

void batalha(personagem p1, personagem p2, int rodadas) {
  int i;
  char resultado[101];

  for (i = 0; i < rodadas; i++) {
    p2.energia = luta(p1.forca, p2.defesa, p2.energia);

    if (p2.energia <= 0) {
      p2.energia = 0;
      break;
    }

    p1.energia = luta(p2.forca, p1.defesa, p1.energia);

    if (p1.energia <= 0) {
      p1.energia = 0;
      break;
    }
  }

  if (p1.energia > p2.energia) {
    strcpy(resultado, p1.nome);
  } else if (p2.energia > p1.energia) {
    strcpy(resultado, p2.nome);
  } else if (p2.energia == p1.energia) {
    strcpy(resultado, "empate");
  }

  printf("%s %d\n", p1.nome, p1.energia);
  printf("%s %d\n", p2.nome, p2.energia);
  printf("%s", resultado);
}

int main(void) {
  personagem p1, p2;
  int rodadas;

  scanf("%s %d %d %d", p1.nome, &p1.energia, &p1.defesa, &p1.forca);
  scanf("%s %d %d %d", p2.nome, &p2.energia, &p2.defesa, &p2.forca);
  scanf("%d", &rodadas);

  batalha(p1, p2, rodadas);

  return 0;
}