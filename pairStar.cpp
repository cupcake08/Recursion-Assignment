// #include <cstring>
// void pairStar(char input[],int si=0) {
//     // Write your code here
// 	if(input[si]=='\0') return;
//     pairStar(input,si+1);
//     if(input[si]==input[si+1]){
//         int len = strlen(input);
//         for(int i=len;i>=si+1;i--){
//             input[i+1]=input[i];
//         }
//         input[si+1]='*';
//     }
// }

//-> Optimized Version
// going from start, therefore no need to include "cstring" library 
// so no need to calculate length everytime
void pairStar(char *in,int si=0){
    if(in[si]=='\0') return; ///base case
    pairStar(in,si+1);
    if(in[si] == in[si+1]){
        int i = si+1;
        char x = in[i];
        in[i++] = '*';
        for(;in[i] != '\0';i++){
            char y = in[i];
            in[i] = x;
            x = y;
        }
        in[i] = x;
        in[i+1] = '\0';
    }
}
