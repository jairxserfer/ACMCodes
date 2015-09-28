void criba(bool m[], int tam){
    m[0] = false;
    m[1] = false;
    for(int i = 2; i <= tam; ++i)
        m[i] = true;

    for(int i = 2; i*i <= tam; ++i) {
        if(m[i]) {
            for(int h = 2; i*h <= tam; ++h)
                m[i*h] = false;
        }
    }
}
