
#include "musica.h"
#include <stdlib.h>
#include <string.h>

/*
 * Cria uma música e armazena seus dados.
 * Retorna NULL se os parâmetros forem inválidos,
 * se as strings não couberem ou se faltar memória.
 */
t_musica *musica_criar(int id, const char *titulo,
                       const char *artista, int duracao) {

    if (titulo == NULL || artista == NULL) {
        return NULL;
    }

    if (strlen(titulo) >= sizeof(((t_musica *)0)->titulo) ||
        strlen(artista) >= sizeof(((t_musica *)0)->artista)) {
        return NULL;
    }

    t_musica *musica = malloc(sizeof(t_musica));

    if (musica == NULL) {
        return NULL;
    }

    musica->id = id;
    strcpy(musica->titulo, titulo);
    strcpy(musica->artista, artista);
    musica->duracao = duracao;

    return musica;
}

/*
 * Libera a memória ocupada pela música.
 */
void musica_destruir(void *carga) {
    free(carga);
}
