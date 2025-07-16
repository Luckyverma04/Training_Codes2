

void update() {
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

    printf("Enter Employee ID to update: ");
    scanf("%d", &id);

    for (i = 0; i < total; i++) {
        if (dt[i].eid == id) {
            printf("Record found: %d\t%s\t%d\n", dt[i].eid, dt[i].nm, dt[i].esal);
            printf("Enter new name: ");
            scanf("%s", dt[i].nm);
            printf("Enter new salary: ");
            scanf("%d", &dt[i].esal);
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
        fprintf(fp, "%d\t%s\t%d\n", dt[i].eid, dt[i].nm, dt[i].esal);
    }

    fclose(fp);
    printf("✅ Record updated successfully!\n");
}
