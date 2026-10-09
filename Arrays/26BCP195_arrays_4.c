#include <stdio.h>

int main() {
    int i,n[9]={1,2,5,10,20,50,100,200,500},
    c[9]={0,0,0,0,0,0,0,0,0},
    a[1000],b[1000],d[1000],e[1000],f[1000],g[1000],h[1000],j[1000];

    scanf("%d",&a[0]);

    for (i=0;i<a[0];i++) {
        a[i+1]=a[i]-n[8];
        if (a[i+1]>=0)c[0]++;
        if (a[i+1]<0) {
            b[0] = a[i+1] + n[8];
            break;
        }
    }
    for (i=0;i<a[0];i++) {
        b[i+1]=b[i]-n[7];
        if (b[i+1]>=0)c[1]++;
        if (b[i+1]<0) {
            d[0] = b[i+1] + n[7];
            break;
        }
    }
    for (i=0;i<a[0];i++) {
        d[i+1]=d[i]-n[6];
        if (d[i+1]>=0)c[2]++;
        if (d[i+1]<0) {
            e[0] = d[i+1] + n[6];
            break;
        }
    }
    for (i=0;i<a[0];i++) {
        e[i+1]=e[i]-n[5];
        if (e[i+1]>=0)c[3]++;
        if (e[i+1]<0) {
            f[0] = e[i+1] + n[5];
            break;
        }
    }
    for (i=0;i<a[0];i++) {
        f[i+1]=f[i]-n[4];
        if (f[i+1]>=0)c[4]++;
        if (f[i+1]<0) {
            g[0] = f[i+1] + n[4];
            break;
        }
    }
    for (i=0;i<a[0];i++) {
        g[i+1]=g[i]-n[3];
        if (g[i+1]>=0)c[5]++;
        if (g[i+1]<0) {
            h[0] = g[i+1] + n[3];
            break;
        }
    }
    for (i=0;i<a[0];i++) {
        h[i+1]=h[i]-n[2];
        if (h[i+1]>=0)c[6]++;
        if (h[i+1]<0) {
            j[0] = h[i+1] + n[2];
            break;
        }
    }

    printf("%d\n",c[0]);
    printf("%d\n",c[1]);
    printf("%d\n",c[2]);
}