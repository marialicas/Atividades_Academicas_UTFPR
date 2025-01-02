#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  char nome[255];
  int saquesTotal;
  int bloqueiosTotal;
  int ataquesTotal;
  int saquesSucesso;
  int bloqueiosSucesso;
  int ataquesSucesso;
} jogador;

void PontoS(jogador *player, int nj) {
  int i, saqT = 0, blockT = 0, atcT = 0, sacST = 0, blockST = 0, atcST = 0;
  float PS, PB, PA;

  for (i = 0; i < nj; i++) {
    scanf("%s", player[i].nome);
    scanf("%d %d %d", &player[i].saquesTotal, &player[i].bloqueiosTotal,
          &player[i].ataquesTotal);
    scanf("%d %d %d", &player[i].saquesSucesso, &player[i].bloqueiosSucesso,
          &player[i].ataquesSucesso);

    saqT = saqT + player[i].saquesTotal;
    blockT = blockT + player[i].bloqueiosTotal;
    atcT = atcT + player[i].ataquesTotal;

    sacST = sacST + player[i].saquesSucesso;
    blockST = blockST + player[i].bloqueiosSucesso;
    atcST = atcST + player[i].ataquesSucesso;
  }

  PS = (sacST * 100) / (float)saqT;
  PB = (blockST * 100) / (float)blockT;
  PA = (atcST * 100) / (float)atcT;

  printf("Pontos de Saque: %.2f%%\n", PS);
  printf("Pontos de Bloqueio: %.2f%%\n", PB);
  printf("Pontos de Ataque: %.2f%%\n", PA);
}

int main() {
  int nj;

  scanf("%d", &nj);
  jogador player[nj];

  PontoS(player, nj);

  return 0;
}