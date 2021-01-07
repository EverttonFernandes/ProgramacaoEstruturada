main(){
    int x=10, *p, **pp;
    p = &x;
    pp = &p;
    printf("%d",*pp);
}
