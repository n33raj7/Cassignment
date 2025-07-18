int large(int *p ,int size){
    int fl = *p, i;
    for (i = 1; i < size; i++){
        if(*(p + i) > fl){
            fl = *(p + i);
        }
    }
    return fl;
}