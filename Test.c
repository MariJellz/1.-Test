#include <stdio.h>  // präprozessor 

int leet(char Text[]) {    // func leet
    char e = 'e';
    int hits = 0;
    for (int i = 0; i < sizeof(Text[]) - 1; i++) {  // -1 wegen null terminierung
        if (Text[i] == e) {
            e = 3;
            hits++;
        }
        else () {

            printf("");
        }
    }
    printf("%d", hits);
return Text, hits;
}

int main() {    // main func
    char Text[] = "";
    
    printf("Gebe einen Text ein: ");
    scanf("%s", &Text);
    
    printf("%s", leet(Text));   // es sollte die e's von z.B. Meer zu 3 machen also M33r

    return 0;
}