
void srch() {
    int id, ct = 0;
    struct Demo ds;
    FILE *fs;

    fs = fopen("Data.xls", "r");
    if (fs == NULL) {
        printf("File not found!\n");
        return;
    }

    printf("\nEnter Id to search: ");
    scanf("%d", &id);

    while (fscanf(fs, "%d\t%s\t%d\n", &ds.eid, ds.nm, &ds.esal) == 3) {
        if (ds.eid == id) {
            printf("\nRecord Found:\n");
            printf("ID: %d\nName: %s\nSalary: %d\n", ds.eid, ds.nm, ds.esal);
            ct = 1;
            break;
        }
    }

    if (ct == 0) {
        printf("\nData Not Found\n");
    }

    fclose(fs);
}
