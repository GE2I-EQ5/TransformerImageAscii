#include <stdio.h>


// Variable contenant l'image dimensions 120x180
extern unsigned char img[120][180];

// void setText(const char txt[][], int height, int width);
// A utiliser pour generer le fichier texte de sortie :
//     setText(le_tableau_de_caracteres, 24, 90);
void setText(void *txt, int height, int width){
    FILE *file = fopen("trump.txt", "w");
    for(int i = 0; i < height; i++){
        for (int j = 0; j < width; j++){
            fprintf(file, "%c", ((char *)txt)[i*width + j]);
        }
        fprintf(file,"\n");
    }
    fclose(file);
}

int main(){
    // l'image, dimensions 120x180, est dans la variable declaree
    // dans le fichier trump.c comme suite :
    // unsigned char img[120][180];

    // L'image au format ASCIIART doit donc être dans
    // un tableau de caractères de dimensions de 24x90 caracteres.

    // Programme a completer ci-dessous...

    return 0;

}
     
