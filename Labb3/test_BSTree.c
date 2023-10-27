#include <assert.h>
#include "BSTree.h"
#include <stdio.h>

/*Funktion för att testa ditt träd.
  OBS! Preorder, Inorder och Postorder
       maste testas manuellt via menyn*/
void testTree(BSTree tree);

/*Meny som kan användas för att testa enstaka funktioner
  Ni får givetvis skriva en egen meny om ni vill*/
void menuTree(BSTree tree);


int main(void)
{
    BSTree tree = emptyTree();
    
    testTree(tree);
    //menuTree(tree);
    
    return 0;
}


void testTree(BSTree tree)
{
    printf("Starting test\n");
    
    //Trädet ska vara tomt från början
    assert(isEmpty(tree));
    //Tester på tomt träd
    assert(!find(tree, 7)); //leta i tomt träd
    removeElement(&tree, 7); //ta bort från tomt träd - programmet ska inte krascha
    assert(depth(tree) == 0 && minDepth(tree) == 0);
    balanceTree(&tree); //balansera ett tomt träd - programmet ska inte krascha
    
    
    // Satt in 7 element i trädet
    int arr[7] = {5,10,1,3,7,19,16}, i;
    for (i = 0; i < 7; i++)
    {
        insertSorted(&tree, arr[i]);
    }
    
    // Verifiera att alla element finns i trädet
    for (i = 0; i < 7; i++)
    {
        assert(find(tree, arr[i]));
    }
    
    assert(numberOfNodes(tree) == 7);
    assert(depth(tree) == 4); // Om vi sätter in noderna i denna ordning blir djupet 4
    assert(minDepth(tree) == 3); // Med 7 noder är minimidjupet 3
    
    removeElement(&tree, 7); //Ta bort ett löv
    removeElement(&tree, 19); // Tar bort ett element med ett barn
    removeElement(&tree, 5); // Tar bort ett element med två barn
    assert(numberOfNodes(tree) == 4); // Tre noder har blivit borttagna
    // Verifiera att talen blivit borttagna
    assert(!find(tree, 7));
    assert(!find(tree, 19));
    assert(!find(tree, 5));
    
    //ta bort resterande noder i trädet
    removeElement(&tree, 10);
    removeElement(&tree, 1);
    removeElement(&tree, 3);
    removeElement(&tree, 16);
    
    assert(isEmpty(tree));
    
    //Lägg till i ett tomt träd
    insertSorted(&tree, 10);
    assert(find(tree, 10));
    
    // Addera 9 element så att trädet blir obalanserat
    for (i = 0; i < 9; i++)
        insertSorted(&tree, i+20);
    
    assert(numberOfNodes(tree) == 10);
    
    //Verifiera att trädet är obalanserat
    assert(depth(tree) != minDepth(tree));
    
    balanceTree(&tree);
    assert(numberOfNodes(tree) == 10); // Verifiera att antalet noder är detsamma
    assert(depth(tree) == minDepth(tree)); // Verifiera att trädet är balanserat
    
    // Töm trädet och kontrollera att det är tomt
    freeTree(&tree);
    assert(isEmpty(tree));
    assert(numberOfNodes(tree) == 0);
    assert(depth(tree) == 0);
    
    //Ta bort nod med två barn
    int arr2[14] = {3, 2, 1, 9, 5, 4, 7, 6, 8, 15, 13, 11, 14, 18};
    i = 0;
    for(int i = 0; i < 14; i++)
    {
        insertSorted(&tree, arr2[i]);
    }
    removeElement(&tree, 9);
    
    /*Avkommentera rad 106-116 om du vid borttagning av nod med två barn väljer det minsta i höger delträd som ersättare (11 ersätter då 9 i det här testet), jämför dina utskrifter av trädet med de utskrifter som visar hur trädet bör se ut. Om du behöver kan du justera mellanslagen i utskrifterna så att formateringen ser bra ut i din konsoll. */
    /*
    printf("\nPreorder\nYour tree:    ");
    printPreorder(tree, stdout);
    printf("\nCorrect tree: 3 2 1 11 5 4 7 6 8 15 13 14 18");
    printf("\nInorder\nYour tree:    ");
    printInorder(tree, stdout);
    printf("\nCorrect tree: 1 2 3 4 5 6 7 8 11 13 14 15 18");
    printf("\nPostorder\nYour tree:    ");
    printPostorder(tree, stdout);
    printf("\nCorrect tree: 1 2 4 6 8 7 5 14 13 18 15 11 3");
    */
    
    
    /*Avkommentera rad 120-130 om du vid borttagning av nod med två barn väljer det största i vänster delträd som ersättare (8 ersätter då 9 i det här testet), jämför dina utskrifter av trädet med de utskrifter som visar hur trädet bör se ut. Om du behöver kan du justera mellanslagen i utskrifterna så att formateringen ser bra ut i din konsoll. */
    /*
    printf("\nPreorder\nYour tree:    ");
    printPreorder(tree, stdout);
    printf("\nCorrect tree: 3 2 1 8 5 4 7 6 15 13 11 14 18");
    printf("\nInorder\nYour tree:    ");
    printInorder(tree, stdout);
    printf("\nCorrect tree: 1 2 3 4 5 6 7 8 11 13 14 15 18");
    printf("\nPostorder\nYour tree:    ");
    printPostorder(tree, stdout);
    printf("\nCorrect tree: 1 2 4 6 7 5 11 14 13 18 15 8 3");
    */

    printf("\n\nCongratulations, your program passet the test\n");
}


void menuTree(BSTree tree)
{
    int choice, data;
    char c;
    
    do
    {
        printf("\n\n--------------MENU--------------\n"
               "1 - Add to tree\n"
               "2 - Remove from tree\n"
               "3 - Print in preorder\n"
               "4 - Print in inorder\n"
               "5 - Print in postorder\n"
               "6 - Number of nodes in tree\n"
               "7 - Depth of tree (actual and theoretical)\n"
               "8 - Is the tree empty?\n"
               "9 - Balance tree\n"
               "10 - Search in tree\n"
               "11 - Free tree\n"
               "12 - End program\n"
               "-----------------------------------\n"
               "Choice: ");
        
        scanf("%d", &choice);
        while((c = getchar()) != '\n' && c != EOF); //Rensar läsbufferten
        
        switch(choice)
        {
            case 1: printf("Data to add: ");
                scanf("%d", &data);
                insertSorted(&tree, data);
                printf("Tree: ");
                printPreorder(tree, stdout);
                break;
            case 2: printf("Data to remove: ");
                scanf("%d", &data);
                removeElement(&tree, data);
                printf("Tree: ");
                printPreorder(tree, stdout);
                break;
            case 3: printf("Tree in preorder: ");
                printPreorder(tree, stdout);
                break;
            case 4: printf("Tree in inorder: ");
                printInorder(tree, stdout);
                break;
            case 5: printf("Tree in postorder: ");
                printPostorder(tree, stdout);
                break;
            case 6: printf("Number of nodes in tree: %d", numberOfNodes(tree));
                break;
            case 7: printf("Actual depth of tree: %d\n", depth(tree));
                printf("Theoretical minimum depth of tree: %d\n", minDepth(tree));
                break;
            case 8: if (isEmpty(tree) == 1)
                printf("The tree is empty\n");
            else
                printf("The tree is not empty\n");
                
                break;
            case 9: balanceTree(&tree);
                break;
            case 10: printf("Data to search for: ");
                scanf("%d", &data);
                if (find(tree, data) == 1)
                    printf("%d was found in the tree", data);
                else
                    printf("%d was not found in the tree", data);
                
                break;
            case 11: freeTree(&tree);
                break;
            case 12: printf("Ending tree menu\n"); break;
            default: printf("Wrong input\n");
        }
        
    }while(choice != 12);
    
    freeTree(&tree);
    
}



