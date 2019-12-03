//
// Created by Ahmed on 27/11/2019.
//

#ifndef INDICEANALITICO_HEADER_H
#define INDICEANALITICO_HEADER_H

#endif //INDICEANALITICO_HEADER_H
//**********************************************************
/** start programming */
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>

#define  MAXSIZE 20
#define letters 26

struct nodo {
    char parola[MAXSIZE];
    int pagina;
    struct nodo * next;
};

typedef struct nodo * NODO;

/** ASSIGNMENT ALL POINTERS IN ARRAY A NULL **/
void assignment (NODO * arr){
    for (int i = 0; i < letters ; ++i) { *(arr + i) = NULL; }
}

/** get position **/
int h (int letter){ return letter - 65; }
/** SORT THE ARRAY  **/
void sort(NODO * teste , NODO nuovo){
    NODO app = *( teste );
    NODO scorri;
    if(!app){
        *(teste) = nuovo;
    } else if ((!app->next) && (strcmp(app->parola, nuovo->parola) < 0) ){
        app->next = nuovo;
    } else if ((!app->next) && (strcmp(app->parola, nuovo->parola) > 0) ){
        nuovo->next = app;
        *(teste) = nuovo;
    } else if ((strcmp(app->parola, nuovo->parola) > 0) ){
        nuovo->next = app;
        *(teste) = nuovo;
    } else{
        scorri = *teste;
        while (scorri->next){
            if(strcmp(scorri->parola, nuovo->parola) > 0){
                nuovo->next = scorri;
                scorri = nuovo;
            }
            scorri = scorri->next;
        }
        // INSERT IN THE TAIL
        if(!nuovo->next){
            scorri->next = nuovo;
        }
    }
    /*for (int i = 0; i < letters ; ++i) {
        NODO app = *( teste + i );
        NODO scorri;
        NODO prev;
        while (app != NULL){
            scorri = app ->next;
            while (scorri != NULL){
                if(strcmp(app->parola, scorri->parola) > 0){
                    prev = app;
                    app = scorri;
                    prev->next = scorri->next;
                    scorri->next = prev;
                    //app = scorri;
                }
                scorri = scorri->next;
            }
            app = app->next;
        }
    }*/
}

/** create a new node AND ASSIGNMENT THE HEAD AN ARRAY **/
void createNode(NODO * head , char parola [], int dim , int pagina ){
    NODO nuovo;
    nuovo = (NODO)malloc(sizeof(struct nodo));
    strcpy(nuovo->parola , parola );
    nuovo->pagina = pagina;
    nuovo->next = NULL;
    /*if (*head == NULL){
        *head = nuovo;
    }else{
        NODO app = * head;
        while (app->next != NULL){app = app->next ; }
        app->next = nuovo;
    }*/
    sort(head,nuovo);
}

/** READ FILE AND FILL ARRAY **/
void readFile(NODO *testa){
    FILE * fp;
    char app [MAXSIZE] , parola[MAXSIZE];
    int pagina , pos , rows = 0;
    fp = fopen("data.txt","r");
    if(!fp){ /// check file
        printf("Errore nell'apertura del file'");
        exit(1);
    }
    while (fgets(app,MAXSIZE,fp)){rows++;}
    rewind(fp);
    while (rows != 0){
        fscanf(fp,"%s %d" , parola , &pagina );
        strupr(parola);
        pos = h(parola[0]);
        createNode((testa + pos) , parola , MAXSIZE ,pagina);
        rows--;
    }
}


void insert(NODO * testa){
    FILE * fp;
    char chapter [MAXSIZE];
    int page , once , pos;
    printf("How once ? :_");
    scanf("%d",&once);
    fflush(stdin);
    fp = fopen("data.txt","a"); // open the file in mod append
    while (once) {
        printf("Enter the chapter name :_");
        gets(chapter); // get the string with the space
        fflush(stdin); // clean the buffer
        printf("Enter the page number :_");
        scanf("%d", &page); // get the number
        fflush(stdin);
        // write it on file
        fprintf(fp, "%s\t%d", chapter, page);
        strupr(chapter);
        pos = h(chapter[0]);
        createNode((testa + pos) , chapter , MAXSIZE ,page);
        once--;
    }
}

void show (NODO * teste){
    for (int i = 0; i < letters ; ++i) {
        NODO app = *(teste + i);
        printf("%d) ",i + 1);
        while (app != NULL){
           // printf("%x ---> ",app);
             printf("[ %s - %d | %x ====>  ",app->parola,app->pagina, app);
            //printf("%d) %s\t%d\t%x\n",i,app->parola,app->pagina,app->next);
            app = app->next;
            if(!app)
                printf("NULL ]\n");
        }
            if(!teste[i])
                printf("%s\n","NULL");
             //printf("%d) %x\n", i , !teste[i] ?  "NULL" : teste[i]);
    }
}
/** SEARCH OF ELEMENT **/
int search (NODO * teste){
    char chapter [MAXSIZE];
    printf("Enter the Chapter name :_");
    gets(chapter);
    fflush(stdin);
    strupr(chapter);
    NODO app = *(teste + h(chapter[0]));
    while (app){
        if(strcmp(strupr(app->parola), chapter ) == 0){
            printf("Found : %s -  %d | %x \n",app->parola,app->pagina, app);
            return 1;
        }
        app = app->next;
    }
    return 0;
}
/**  DELETE ELEMENT **/

int deleteElement(NODO * teste){
    char chapter [MAXSIZE];
    printf("Enter the Chapter name :_");
    gets(chapter);
    fflush(stdin);
    strupr(chapter);
    NODO app = *(teste + h(chapter[0]));
    NODO prev;
    if(app->next == NULL){
        *(teste + h(chapter[0])) = NULL;
        return  1;
    }
    while (app){
        //prev = app;
        if(strcmp(strupr(app->next->parola), chapter ) == 0){
             prev = app->next;
             app->next = app->next->next;
            free(prev);
            return 1;
        }
        app = app->next;

    }
    return 0;
}