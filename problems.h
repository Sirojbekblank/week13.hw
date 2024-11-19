

void days2years(int &days, int &years) {
   years=days/365;
   days=days%365;
}
// Problem 2
double func(double *x,double *y) {
    *y=*x*(*x)*(*x)*11/3+5;
}


// Problem 3
int minsNewYear(int *hour, int *min) {
    *min=*min+(23-(*hour))*60;
}

// Problem 4
double probability(int *y,int *w) {
    if(*y<*w) {
        return (7-(*w))/6.0;
    }
    if(*y>*w) {
        return (7-(*y))/6.0;
    }
}

// Problem 5
int presses(int *x) {
    int times=0;
    for(int i=1;i<=9;i++) {
        for(int j=1;j<=4;j++) {
            int n;
            for(int k=1;k<=j;k++) {
                n=n*10+i;
            }
            times+=j;
            if(n==*x) {
                return times;
            }
        }
    }
}
