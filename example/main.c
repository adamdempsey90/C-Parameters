#include "defs.h"
int main(int argc, char *argv[]) {
    printf("Testing,\n");
    Parameters *p = (Parameters *)malloc(sizeof(Parameters));
    read_param_file("in.par",argc,argv,p);

	printf("nx = %d\n",p->nx);
	printf("ny = %d\n",p->ny);
	printf("xmin = %lg\n",p->xmin);
	printf("xmax = %lg\n",p->xmax);
    if (p->ctu) printf("CTU = Yes\n");
    else printf("CTU = No\n");
    if (p->plm) printf("PLM = Yes\n");
    else printf("PLM = No\n");
	printf("outputname = %s\n",p->outputname);

    return 1;
}
