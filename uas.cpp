/*******************************************************
Nama Kelompok   : InsyaAllah Over Powered
NPM             : 27, 43, 75
Deskripsi       : Program nomor antrian restoran
*******************************************************/

/*
TO DO: 
1. Make UI
// 2. Queue for customer waiting list
3. Function list for menu makanan
// 4. Struct customer (Nama, notelp, banyak pengunjung)
6. Function check available table
// 7. List for tables
8. Enqueue customer
9. dequeue customer
10. linking table lists
11. search for table according to number of people
12. make customer from table leave
13. make customer from queue leave
14. 
*/

#include <iostream>
#include <string.h>

struct NodeCust
{
    int noAntrian;
    std::string nama;
    int totalCust;
    NodeCust *next;
};

struct QueueCust
{
    NodeCust *front;
    NodeCust *back;
};

struct NodeTable
{
    int noTable;
    bool available;
    NodeTable *next;
};

struct ListTable
{
    NodeTable *first;
    ListTable *next;
};

void createQueue(QueueCust &QC)
{
    QC.front = NULL;
    QC.back = NULL;
}

void createCust(NodeCust *&new_cust, std::string nama, int &totalCust, int &counter)
{
    new_cust = new NodeCust;
    new_cust->nama = nama;
    new_cust->totalCust = totalCust;
    new_cust->noAntrian = counter + 1;
    counter++;
    new_cust->next = NULL;
}

void createList(ListTable &LT)
{
    LT.next = NULL;
}

void createTable(NodeTable *&new_table, int noTable)
{
    new_table = new NodeTable;
    new_table->available = true;
    new_table->next = NULL;
}
