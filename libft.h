/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarmonte <sarmonte@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:34:39 by sarmonte          #+#    #+#             */
/*   Updated: 2024/01/08 15:29:31 by sarmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// INICIAMOS LA LIBRERIA													   /
#ifndef LIBFT_H

// Forma de llamar a la libreria externamente								   /
# define LIBFT_H

// #############################################################################
// #     INCLUDES A LIBRERIAS EXTERNAS                                         #
// #############################################################################
// Nos evita tener que llamarlas en cada archivo de las funciones			   /

/* Funciones estandar relacionadas con el S.O. especialmente entrada/salida y
	otros servicios del sistema 											  */
# include <unistd.h>

/* Proporciona prototipos de funciones para realizar operaciones que involucran
	asignación de memoria, control del entorno del programa y conversiones
	numéricas. 																  */
# include <stdlib.h>

/* Proporciona prototipos de funciones para realizar 
	operaciones de entrada/salida											  */
# include <stdio.h> //Solo para printf, quitar al final. FALTA borrar

/* Proporciona prototipos de funciones para
	manipular cadenas de caracteres 										  */
# include <string.h>

// Incluye informacion sobre los limites de los datos						   /
# include <limits.h>

// #############################################################################
// #     LISTA DE LAS FUNCIONES                                                #
// #############################################################################

// #############################################################################
// # Parte 1: Funciones que no requieren funciones autorizadas          12/21  #
// #############################################################################

// 01-Comprueba letras														   /
int		ft_isalpha(int c);

// 02-Comprueba numeros														   /
int		ft_isdigit(int c);

// 03-Comprueba letras y numeros											   /
int		ft_isalnum(int c);

// 04-Comprueba si es ascii													   /
int		ft_isascii(int c);

// 05-Comprueba que sea imprimible											   /
int		ft_isprint(int c);

// 06-Obtiene longitud de una cadena										   /
size_t	ft_strlen(const char *s);

// 07-Establece los valores de un bloque de memoria a un valor específico (c)  /
void	*ft_memset(void *s, int c, size_t n);

// 08-Borra n bytes de memoria escribiendo \0 en este area					   /
void	ft_bzero(void *s, size_t n);

// 09-Copia n bytes del área de memoria src al área de memoria dest			   /
void	*ft_memcpy(void *dest, const void *src, size_t n);

// 10-Copia n bytes de un area de memoria a otra, que pueden superponerse	   /
void	*ft_memmove(void *dest, const void *src, size_t len);

//11-Copia de src a dest hasta n y añade \n. Devuelve la longitud total		   /
size_t	ft_strlcpy(char *dest, char *src, long unsigned int len);

// 12-Agrega src terminada en NUL al final de dst.Tamaño máximo size -1 (\n)   /
	// Devuelve la longitud total de la cadena que intentaron crear			   /
size_t	ft_strlcat(char *dest, const char *src, size_t size);

// 13-Convierte a mayusculas												   /
int		ft_toupper(int c);

// 14-Convierte a minusculas												   /
int		ft_tolower(int c);

// 15-Devuelve un puntero a la primera aparición del char c	en la cadena s	   /
char	*ft_strchr(const char *s, int c);

// 16-Devuelve un puntero a la última aparición del char c en la cadena s.	   /
char	*ft_strrchr(const char *s, int c);

// 17-Compara 2 cadenas pasadas como parametro n bytes como maximo, retorna	   /
	//la diferencia entre los 2 primeros caracteres diferentes encontrados	   /
int		ft_strncmp(const char *s1, const char *s2, size_t n);

// 18-Busca el valor c en los nbytes de la cadena s, devuelve puntero al	   /
	//byte encontrado o NULL si no lo encuentra								   /
void	*ft_memchr(const void *s, int c, size_t n);

// 19-Compara n bytes (unsigned char) de s1 y s2. Devuelve int >0, =0 o <0
	//si n de s1 es >, = o < que n de s2									   /
int		ft_memcmp(const void *s1, const void *s2, size_t n);

// 20-Busca la cadena needle en la otra haystack durante un	tamaño maximo	   /
	//len. Retorna haystack desde que se encontro la similitud				   /
//char	*ft_strnstr(const char *haystack, const char *needle);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
//  ft_strnstr //==========> FALTA <==========

// 21-Limpia una cadena de caracteres retornando el primer valor numerico	   /
	//aparecido en esta en forma de int. En este caso solo acepta un signo	   /
	//si aparece justo antes del valor numerico, si no retorna 0.			   /
int		ft_atoi(const char *str);

// #############################################################################
// # Parte 1: Funciones que utilizan malloc                               0/2  #
// #############################################################################

// 22-Asigna memoria para matriz tamaño count*size y rellena de 0. Devuelve *  /
	// a memoria asignada, alineado para cualquier tipo de variable			   /
void	*ft_calloc(size_t num_elements, size_t element_size);

// 23-Devuelve * a una string que es un duplicado de la cadena s1			   /
// strdup //==========> FALTA <==========

// #############################################################################
// # Parte 2: Funciones adicionales                                      4/12  #
// #############################################################################

/* 24-Reserva memoria (con malloc(3)) para la cadena de caracteres
	que va a devolver, y que proviene de la cadena pasada como argumento. Esta
	nueva cadena comienza en el índice ’start’ y
	tiene como tamaño máximo ’len’											  */
// ft_substr //==========> FALTA <==========

/* 25-Reserva memoria (con malloc(3)) para la cadena de caracteres
	que va a devolver, y que resulta de la concatenación de s1 y s2 		  */
// ft_strjoin //==========> FALTA <==========

/* 26 - ft_strtrim - Reserva memoria (con malloc(3))
	para la cadena de caracteres que va a devolver, que es una copia de la
	cadena de caracteres pasada como argumento, sin los caracteres
	indicados en el set pasado como argumento al principio y al final
	de la cadena de caracteres. 											  */
//==========> FALTA <==========

/* 27 - ft_split - Reserva memoria (con malloc(3)) para la tabla de cadena de
	caracteres que va a devolver, obtenida separando s con el carácter c, que se
	utiliza como delimitador. La tabla debe terminar con NULL. Retorna La tabla
	con las nuevas cadenas de caracteres que resulten del troceado.
	NULL si falla la reserva de memoria. 									  */
//==========> FALTA <==========

/* 28 - ft_itoa - Reserva memoria (con malloc(3)) para la cadena de caracteres
	que va a devolver, que representa el integer pasado como argumento. Se deben
	gestionar los números negativos. Retorna la cadena de caracteres que
	representa al integer. NULL si falla la reserva de memoria. 			  */
//==========> FALTA <==========

/* 29 - ft_strmapi - Aplica la función f a cada carácter de la de cadena de
	caracteres pasada como argumento para crear una nueva cadena de caracteres
	(con malloc (3)) que resulte de las aplicaciones sucesivas de f.
	Retorna La cadena de caracteres que resulte de las aplicaciones sucesivas
	de f. Devuelve NULL si falla la asignación. 							  */
//==========> FALTA <==========

/* 30 - ft_striteri - A cada carácter de la string ’s’, aplica la función ’f’
	dando como parámetros el índice de cada carácter dentro de ’s’ y la dirección
	del propio carácter, que podrá modificarse si es necesario. 			  */
//==========> FALTA <==========

// 31-imprime un char en la salidad dada									   /
void	ft_putchar_fd(char c, int fd);

// 32-imprime una cadena en la salida dada									   /
void	ft_putstr_fd(char *c, int fd);

// 33-imprime cadena+\n en la salida dada									   /
void	ft_putendl_fd(char *c, int fd);

// 34-Escribe un int nb en la salida dada									   /
void	ft_putnbr_fd(int nb, int fd);

// #############################################################################
// # Parte Bonus                                                          0/9  #
// #############################################################################

/* 35 - ft_lstnew - Reserva memoria (con malloc(3)) para un nuevo elemento que
	devuelve. La variable content se inicializa mediante el valor del parámetro
	content. La variable next se inicializa con NULL. Retorna El contenido del
	nuevo elemento.															  */
//==========> FALTA <==========

/* 36 - ft_lstadd_front - Añade el elemento new al principio de la lista	  */
//==========> FALTA <==========

/* 37 - ft_lstsize - Cuenta el número de elementos de la lista.				  */
//==========> FALTA <==========

/* 38 - ft_lstlast - Devuelve el último elemento de la lista.				  */
//==========> FALTA <==========

/* 39 - ft_lstadd_back - Añade el elemento new al final de la lista			  */
//==========> FALTA <==========

/* 40 - ft_lstdelone - Libera la memoria del elemento pasado como argumento
	utilizando la función del y después free(3). No se debe liberar la memoria
	de "next". A continuación, el puntero al elemento debe pasar a NULL		  */
//==========> FALTA <==========

/* 41 - ft_lstclear - Suprime y libera la memoria del elemento pasado como
	parámetro y de todos los elementos siguientes, con del y free (3) Por último,
	el puntero inicial debe pasar a NULL.									  */
//==========> FALTA <==========

/* 42 - ft_lstiter - Realiza una iteración sobre la lista lst y aplica la
	función f al contenido de cada elemento.								  */
//==========> FALTA <==========

/* 43 - ft_lstmap - Realiza una iteración sobre la lista lst y aplica la
	función f al contenido de cada elemento. Crea una nueva lista que resulta
	de las aplicaciones sucesivas de f. Disponemos de la función del si hay que
	elminar el contenido de algún elemento.									  */
//==========> FALTA <==========

// 44-Para saber si es un espacio											   /
int		ft_isspace(int c);
#endif// Aquí cerramos la libreria											   /
