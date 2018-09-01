﻿#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "inventario.h"

#ifndef SIZE 
#define SIZE 100
#endif


/*Creare una libreria in C che consenta la gestione di un inventario di magazzino.
La libreria deve avere una struttura dati astratta (ADT) chiamata Articolo con i seguenti campi: Nome, Descrizione, Marca, Prezzo.
La libreria deve inoltre contenere una ADT per memorizzare un listino prezzi e l'implementazione delle relative funzioni per: aggiungere, 
modificare, eliminare un articolo dal listino.

Scrivere inoltre un'applicazione console, che attraverso un menu, permetta di sfruttare le funzioni precedentemente create 
per gestire diversi listini di articoli. Implementare inoltre la possibilità di salvare e caricare i diversi listini su file, chiedendo all'utente 
il nome da dare il file (sia in caricamento sia in salvataggio).
Avvisare naturalmente l'utente se tenta di caricare un file che non esiste o se sta per sbaglio sovrascrivendo un file già esistente.*/


int main()
{	
	int scelta = 0, ID = 0;
	listino Listino = NULL;

	printf("-----------------------MENU-----------------------\n"
			  "Benvenuto nella gestione del magazzino!\n"
			  "-----------------------------------------------------\n"
			  "1) Aggiungi nuovo articolo\n"
			  "2) Modifica un articolo\n"
			  "3) Elimina un articolo\n"
			  "-----------------------------------------------------\n");
	while (scelta != -1)
	{
		printf("La tua scelta: ");
		scanf("%u", &scelta);

		switch (scelta)
		{
		case 1:
			InserisciArticolo(Listino, "Nome", "Descrizione", "Marca", 20.50, ID);
			ID++;
			break;

		case 2:
			break;

		case 3:
			break;
		default: printf("Comando non valido.\n");
			break;
		}
	}

	system("PAUSE");
}