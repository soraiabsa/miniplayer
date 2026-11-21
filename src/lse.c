
#include "lse.h"
#include <stddef.h>
#include <stdlib.h>

/* Representacao interna: NAO mover para lse.h. */
typedef struct elem {
    void *carga;
    struct elem *prox;
} t_elem;

struct lse {
    t_elem *inicio;
    int tamanho;
    /* M08 (otimizacao opcional): t_elem *fim; */
};

/* M02: cria uma lista vazia. */
t_lse *lse_criar(void) {
    t_lse *l = malloc(sizeof(t_lse));

    if (l == NULL) {
        return NULL;
    }

    l->inicio = NULL;
    l->tamanho = 0;

    return l;
}

/* M02: retorna a quantidade de elementos. */
int lse_tamanho(const t_lse *l) {
    if (l == NULL) {
        return -1;
    }

    return l->tamanho;
}

/* M02: retorna a primeira carga ou NULL se a lista estiver vazia. */
void *lse_primeiro(const t_lse *l) {
    if (l == NULL || l->inicio == NULL) {
        return NULL;
    }

    return l->inicio->carga;
}

/* M02: libera uma lista vazia, sem liberar cargas externas. */
void lse_destruir(t_lse *l, void (*destruir)(void *)) { (void)destruir;free(l);}

/*Funções ainda nao implementadas */

/* M04*/
int lse_inserir_inicio(t_lse *l, void *c) {(void)l;  (void)c; return 0;}

/* M04*/
int lse_inserir_fim(t_lse *l, void *c) {   (void)l;    (void)c;    return 0;}

/* M04 */
void *lse_remover_inicio(t_lse *l) { (void)l;  return NULL;}

/* M04*/
void *lse_buscar(const t_lse *l, const void *ch, t_comparador cmp) { (void)l;  (void)ch;   (void)cmp;return NULL;}

/* M04 */
void *lse_remover(t_lse *l, const void *ch, t_comparador cmp) { (void)l;  (void)ch;(void)cmp;    return NULL;}

/* M05 */
int lse_inserir_ordenado(t_lse *l, void *c, t_comparador cmp) {(void)l;(void)c;(void)cmp; return 0;}



