/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarmonte <sarmonte@estudiante.42urduliz    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:34:39 by sarmonte          #+#    #+#             */
/*   Updated: 2023/11/30 01:33:36 by sarmonte         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef LIBFT_H // INICIAMOS LA LIBRERIA

# define LIBFT_H //Forma de llamar a la libreria externamente
// #########################################
// #     INCLUDES A LIBRERIAS EXTERNAS     #
// #########################################
/* Nos evita tener que llamarlas en cada archivo de las funciones */

/* Funciones estandar relacionadas con el S.O. especialmente entrada/salida y
	otros servicios del sistema */
# include <unistd.h>

/* Proporciona prototipos de funciones para realizar operaciones que involucran
	asignación de memoria, control del entorno del programa y conversiones
	numéricas. */
# include <stdlib.h>

/* Proporciona prototipos de funciones para realizar 
	operaciones de entrada/salida */
# include <stdio.h>

/* Proporciona prototipos de funciones para
	manipular cadenas de caracteres */
# include <string.h>

/* Incluye informacion sobre los limites de los datos*/
# include <limits.h>

// #############################################################################
// #     LISTA DE LAS FUNCIONES                                                #
// #############################################################################


// #############################################################################
// # Parte 1: Funciones que no requieren funciones autorizadas          12/21  #
// #############################################################################

//01-Comprueba letras
int		ft_isalpha(int c);
//02-Comprueba numeros
int		ft_isdigit(int c);
//03-Comprueba letras y numeros
int		ft_isalnum(int c);
//04-Comprueba si es ascii
int		ft_isascii(int c);
//05-Comprueba que sea imprimible
int		ft_isprint(int c);
//06-Obtiene longitud de una cadena
size_t	ft_strlen(const char *s);
//07-Establece los valores de un bloque de memoria a un valor específico
void	*ft_memset(void *s, int c, size_t n);
//08-Borra n bytes de memoria escribiendo \0 en este area
void	ft_bzero(void *s, size_t n);
//09-Copia n bytes del área de memoria src al área de memoria dest
void	*ft_memcpy(void *dest, const void *src, size_t n);
//10-Copia n bytes de un area de memoria a otra, que pueden superponerse
void	*ft_memmove(void *dest, const void *src, size_t len);
//11-

/* 11 - ft_strlcpy - copia hasta tamaño - 1 caracteres de la cadena terminada
	en NUL src a dst , terminando en NUL el resultado. devuelve la longitud total
		de la cadena que intentaron crear (longitud src). */
/* 12 - ft_strlcat - agrega la cadena src terminada en NUL al final de dst.
	Agregará como máximo tamaño - strlen (dst) - 1 bytes, terminando en NUL el
		resultado. devuelve la longitud total de la cadena que intentaron crear
			(longitud src + dst). */

int		ft_toupper(int c);			//13-Convierte a mayusculas
int		ft_tolower(int c);			//14-Convierte a minusculas
/* 15 - ft_strchr - devuelve un puntero a la primera aparición del caracter c
	en la cadena s. */
/* 16 - ft_strrchr - devuelve un puntero a la última aparición del caracter c
	en la cadena s. */
/* 17 - ft_strncmp - compara dos cadenas pasadas como parametro n bytes como
	maximo, retorna la diferencia entre los dos primeros caracteres diferentes
		encontrados. */
/* 18 - ft_memchr - escanea los n bytes iniciales del área de memoria señalada
	por s para la primera instancia de c . Tanto c como los bytes del área de
	memoria señalados por s se interpretan como caracteres sin signo. devuelve
	un puntero al 	byte correspondiente o NULL si el carácter no aparece en
	el área de memoria dada */
void	*ft_memchr(const void *s, int c, size_t n);
/* 19 - ft_memcmp - compara los primeros n bytes (cada uno interpretado como un
	carácter sin signo ) de las áreas de memoria s1 y s2. evuelve un número
	entero menor que, igual o mayor que cero si se encuentra que los primeros n
	bytes de s1 , respectivamente, son menores, coinciden o son mayores que los
	primeros n bytes de s2. */


/* 20 - ft_strnstr - busca la cadena needle en la otra haystack durante un
	tamaño 	maximo len. Retorna haystack desde que se encontro lo similitud. */
/* 21 - ft_atoi - limpia una cadena de caracteres retornando el primer valor
	numerico aparecido en esta en forma de int. En este caso solo acepta un signo
		si aparece justo antes del valor numerico, si no retorna 0. */

// #############################################################################
// # Parte 1: Funciones que utilizan malloc                               0/2  #
// #############################################################################

/* 22 - calloc - asigna memoria para una matriz de tamaño count*size y la
	rellena de 0. devuelve un puntero a la memoria asignada que está alineado
	adecuadamente para cualquier tipo de variable */
/* 23 - strdup - La función strdup () devuelve un puntero a una nueva cadena que
	es un duplicado de la cadena s1. Decuelve un puntero a la cadena duplicada*/

// #############################################################################
// # Parte 2: Funciones adicionales                                      4/12  #
// #############################################################################

/* 24 - ft_substr - Reserva memoria (con malloc(3)) para la cadena de caracteres
	que va a devolver, y que proviene de la cadena pasada como argumento. Esta
	nueva cadena comienza en el índice ’start’ y
	tiene como tamaño máximo ’len’*/
/* 25 - ft_strjoin - Reserva memoria (con malloc(3))
	para la cadena de caracteres
	que va a devolver, y que resulta de la concatenación de s1 y s2 */
/* 26 - ft_strtrim - Reserva memoria (con malloc(3))
	para la cadena de caracteres que va a devolver, que es una copia de la
	cadena de caracteres pasada como 	argumento, sin los caracteres
	indicados en el set pasado como argumento al 	principio y al final
	de la cadena de caracteres. */
/* 27 - ft_split - Reserva memoria (con malloc(3)) para la tabla de cadena de
	caracteres que va a devolver, obtenida separando s con el carácter c, que se
	utiliza como delimitador. La tabla debe terminar con NULL. Retorna La tabla
	con las nuevas cadenas de caracteres que resulten del troceado.
	NULL si falla la reserva de memoria. */
/* 28 - ft_itoa - Reserva memoria (con malloc(3)) para la cadena de caracteres
	que va a devolver, que representa el integer pasado como argumento. Se deben
	gestionar los números negativos. Retorna la cadena de caracteres que
	representa al integer. NULL si falla la reserva de memoria. */
/* 29 - ft_strmapi - Aplica la función f a cada carácter de la de cadena de
	caracteres pasada como argumento para crear una nueva cadena de caracteres
	(con malloc (3)) que resulte de las aplicaciones sucesivas de f.
	Retorna La cadena de caracteres que resulte de las aplicaciones sucesivas
	de f. Devuelve NULL si falla la asignación. */
/* 30 - ft_striteri - A cada carácter de la string ’s’, aplica la función ’f’
	dando como parámetros el índice de cada carácter dentro de ’s’ y la dirección
	del propio carácter, que podrá modificarse si es necesario. */
/* 31 - ft_putchar_fd - Escribe el carácter c sobre el file descriptor
	proporcionado. */
void	ft_putchar_fd(char c, int fd); // 32-imprime un char en la salidad dada
void	ft_putstr_fd(char *c, int fd); //33-imprime una cadena en la salida dada
void	ft_putendl_fd(char *c, int fd); //34-imprime cadena+\n en la salida dada
void	ft_putnbr_fd(int nb, int fd); // 35-Escribe un int nb en la salida dada

// #############################################################################
// # Parte Bonus                                                          0/9  #
// #############################################################################

/* 32 - ft_lstnew - Reserva memoria (con malloc(3)) para un nuevo elemento que
	devuelve. La variable content se inicializa mediante el valor del parámetro
	content. La variable next se inicializa con NULL. Retorna El contenido del
	nuevo elemento. */
/* 33 - ft_lstadd_front - Añade el elemento new al principio de la lista */
/* 34 - ft_lstsize - Cuenta el número de elementos de la lista. */
/* 35 - ft_lstlast - Devuelve el último elemento de la lista. */
/* 36 - ft_lstadd_back - Añade el elemento new al final de la lista */
/* 37 - ft_lstdelone - Libera la memoria del elemento pasado como argumento
	utilizando la función del y después free(3). No se debe liberar la memoria
	de "next". A continuación, el puntero al elemento debe pasar a NULL */
/* 38 - ft_lstclear - Suprime y libera la memoria del elemento pasado como
	parámetro y de todos los elementos siguientes, con del y free (3) Por último,
	el puntero inicial debe pasar a NULL. */
/* 39 - ft_lstiter - Realiza una iteración sobre la lista lst y aplica la
	función f al contenido de cada elemento. */
/* 40 - ft_lstmap - Realiza una iteración sobre la lista lst y aplica la
	función f al contenido de cada elemento. Crea una nueva lista que resulta
	de las aplicaciones sucesivas de f. Disponemos de la función del si hay que
	elminar el contenido de algún elemento. */

#endif// Aquí cerramos la libreria
