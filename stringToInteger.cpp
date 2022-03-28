//recursive
int res = 0;
int stringToNumber(char *input,int si=0) {
    if(input[si] == '\0') return res;
    res = res * 10 + (input[si] - '0');
    int temp = stringToNumber(input,si+1);
    return res;
}

//iterative
int stringToNumber(char *in){
    bool flag = 1;
    int res = 0;
    for(int i=0;in[i] != '\0';i++){
        if(in[i]==0 && flag) continue;
        flag = 0;
        res = res * 10 + (in[i] - '0');
    }
    return res;
}
