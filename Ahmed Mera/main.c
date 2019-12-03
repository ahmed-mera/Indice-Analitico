#include "header.h"
int main() {
    int choose;
    NODO  teste[26] ; /**  THIS MY ARRAY OF LETTERS **/
    assignment(teste); /** CALL FUNCTION FOR ASSIGNMENT ALL POINTERS A NULL**/
    readFile(teste); /** CALL FUNCTION FOR READING THE FILE AND FILL MY ARRAY  **/
    /** Start Menu **/
    while (1){
        printf("\t\t Menu \n1) Insert \n2) Show \n3) Sort \n4) Search \n5) Delete \n0) Exit \n ");
        printf("Choose:_");
        scanf("%d",&choose);
        fflush(stdin);
        system("cls");
        switch(choose){
            case 1:
                system("cls");
                insert(teste);
                printf("\n\t\t Inserted it with successfully ;) \n");
                break;
            case 2:
                system("cls");
                show(teste);
                break;
            case 3:
                system("cls");
               // sort(teste); /** CALL FUNCTION FOR SORTING MR ARRAY **/
                printf("\n\t\t Array sorted with successfully ;) \n");
                break;
            case 4:
                system("cls");
                if (! search(teste)){ printf("\tElement not found :( \n\n"); }
                break;
            case 5:
                system("cls");
                deleteElement(teste) ?  printf("\tElement deleted with successfully :) \n\n") : printf("\tElement not found :( \n\n");
                break;
            case 0:
                printf("\n\t\t\t Good By :) \n\n");
                exit(0);
                break;
            default:
                system("cls");
                printf("\n You Must choose a number :( \n");
                break;
        }
    }   /* for (int i = 0; i < letters ; ++i) {
        NODO app = *(teste + i);
        printf("%d) ",i + 1);
        while (app != NULL){
            printf("%x ---> ",app);
            // printf("%d) %s\t%d\t%x\n",i,app->parola,app->pagina,app->next);
            app = app->next;
            if(!app)
                printf("NULL\n");
        }
            if(!teste[i])
                printf("%s\n","NULL");
             //printf("%d) %x\n", i , !teste[i] ?  "NULL" : teste[i]);
    }*/
    return 0;
}
