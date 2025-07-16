void insert() {
    struct Demo dt[100];
    int i, ch, p;
    FILE *fp;

    for (i = 0;; i++) {
        printf("Eid = ");
        scanf("%d", &dt[i].eid); 

        printf("Name = ");
        scanf("%s", dt[i].nm);

        printf("Salary = ");
        scanf("%d", &dt[i].esal);

        printf("\nFor continue press 1, to stop press any other key: ");
        scanf("%d", &ch);

        if (ch != 1) {
            p = i;
            break;
        }
    }

    fp = fopen("DATA.xls", "a");
    if (fp == NULL) {
        printf(" Unable to open file. Check path or permissions.\n");
        return;
    }

    for (i = 0; i <= p; i++) {
        fprintf(fp, "%d\t%s\t%d\n", dt[i].eid, dt[i].nm, dt[i].esal);
        printf(" Writing: %d\t%s\t%d\n", dt[i].eid, dt[i].nm, dt[i].esal);
    }

    fclose(fp);
    printf(" Data inserted successfully!\n");
}
