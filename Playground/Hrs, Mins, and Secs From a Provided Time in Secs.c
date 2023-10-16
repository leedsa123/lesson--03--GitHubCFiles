#include <stdio.h>
int main(void){
// For instance, if time in seconds = 4000 
    int timeInseconds = 4000;
    int remSeconds = timeInseconds;
    
// Hours
    int h = timeInseconds / 3600;
    remSeconds = remSeconds - (h * 3600);

// Minutes    
    int m = remSeconds / 60;
    remSeconds = remSeconds - (m * 60);
    
    printf("%d seconds;\n%dH:%dM:%dsec\n", timeInseconds, h, m, remSeconds);
    
    return 0;
}