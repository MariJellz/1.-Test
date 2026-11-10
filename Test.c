#include <stdio.h>  // präprozessor 

int leet(char Text[]) {    // func leet
    char e = 'e';
    int hits = 0;
    for (int i = 0; i < sizeof(Text); i++) {
        if (Text[i] == e) {
            e = 3;
            hits++;
        }
    }
return hits;
}

int main() {    // main func
    char Text[] = "";
    
    printf("Gebe einen Text ein: ");
    scanf("%s", &Text);
    leet(Text);
    printf("%s", Text);

    return 0;
}