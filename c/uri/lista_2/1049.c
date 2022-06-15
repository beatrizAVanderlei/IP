#include <stdio.h>
#include <string.h>

int main(){
    char v[] = "vertebrado", a[] = "ave", m[] = "mamifero", i[] = "invertebrado", is[] = "inseto", an[] = "anelideo";
    char c[] = "carnivoro", o[] = "onivoro", h[] = "herbivoro", hm[] = "hematofago"; 
    char a1[] = "aguia", a2[] = "pomba", m1[] = "homem", m2[] = "vaca", is1[] = "pulga", is2[] = "lagarta", an1[] = "sanguessuga", an2[] = "minhoca";
   
    char x[22], y[22], z[22];

    scanf ("%s", x);
    scanf ("%s", y);
    scanf ("%s", z);

    if(0 == strcmp(x,v)){

        if (0 == strcmp(y,a)){

                if (0 == strcmp(z,c)){
                    printf ("%s\n", a1);
                }
                else if (0 == strcmp(z,o)){
                    printf ("%s\n", a2);
                }
        }

        if (0 == strcmp(y,m)){
           
            if (0 == strcmp(z,o)){
                printf ("%s\n", m1);
            }
            else if (0 == strcmp(z,h)){
                printf ("%s\n", m2);
            }
        }
    }

    if (0 == strcmp(x,i)){

        if (0 == strcmp(y,is)){
    
            if (0 == strcmp(z,hm)){
                printf ("%s\n", is1);
            }
            else if (0 == strcmp(z,h)){
                printf ("%s\n", is2);
            }
        }
        
        if (0 == strcmp(y,an)){

            if (0 == strcmp(z,hm)){
                printf ("%s\n", an1);
            }
            else if (0 == strcmp(z,o)){
                printf("%s\n", an2);
            }
        }
    }

    return 0;

}
