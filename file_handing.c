#include <stdio.h>

int main() {
    FILE *ptr;
    int num = 100, readNum;

    // 1. फाइल को Write ("w") मोड में खोलें
    ptr = fopen("test.txt", "w");
    if (ptr == NULL) {
        printf("फाइल नहीं खुल पाई!\n");
        return 1;
    }
    fprintf(ptr, "%d", num); // फाइल में 100 लिखा
    fclose(ptr); // फाइल बंद की

    // 2. अब उसी फाइल को Read ("r") मोड में खोलें
    ptr = fopen("test.txt", "r");
    fscanf(ptr, "%d", &readNum); // फाइल से नंबर पढ़ा
    printf("फाइल से पढ़ा गया नंबर: %d\n", readNum);
    fclose(ptr); // फाइल बंद की

    return 0;
}
