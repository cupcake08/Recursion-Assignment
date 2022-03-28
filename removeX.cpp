void removeX(char *in,int si = 0){
    if(in[si] == '\0') return; //base case
    removeX(in,si+1);
    if(in[si] == 'x'){
        int i = si+1;
        for(;in[i] != '\0';i++){
            in[i-1] = in[i];
        }
        in[i-1]='\0';
    }
}
