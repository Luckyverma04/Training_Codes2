void show() {
    int i, p;
    struct Demo da[100];
    FILE *f;

    f = fopen("Data.xls", "r");
    if (f == NULL) {
        printf("File cannot be opened.\n");
        return;
    }

    for (i = 0;; i++) {
        if (fscanf(f, "%d %s %d", &da[i].eid, da[i].nm, &da[i].esal) != 3) {
            break;  
        }
    }

    p = i;
    fclose(f);
    for (i = 0; i < p; i++) {
        printf("%d\t%s\t%d\n", da[i].eid, da[i].nm, da[i].esal);
    }
}
