void delete() {
    struct Demo dt[100];
    int id, i = 0, total = 0, found = 0;
    FILE *fp;

    fp = fopen("DATA.xls", "r");
    if (fp == NULL) {
        printf("❌ File could not be opened (read mode)\n");
        return;
    }

    while (fscanf(fp, "%d\t%s\t%d\n", &dt[i].eid, dt[i].nm, &dt[i].esal) == 3) {
        i++;
    }
    total = i;
    fclose(fp);

    printf("Enter Employee ID to delete: ");
    scanf("%d", &id);

    for (i = 0; i < total; i++) {
        if (dt[i].eid == id) {
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("❌ Record with ID %d not found\n", id);
        return;
    }

    fp = fopen("DATA.xls", "w");
    if (fp == NULL) {
        printf("❌ File could not be opened (write mode)\n");
        return;
    }

    for (i = 0; i < total; i++) {
        if (dt[i].eid != id) {
            fprintf(fp, "%d\t%s\t%d\n", dt[i].eid, dt[i].nm, dt[i].esal);
        }
    }

    fclose(fp);
    printf("✅ Record deleted successfully!\n");
}
