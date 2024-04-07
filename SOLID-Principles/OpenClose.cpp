#include <bits/stdc++.h> 
using namespace std;  

class Marker {
    string name;
    string color;
    int year;
    int price;
    // constructor
    public Marker (string name,string color,int year,int price ){
        this->name = name;
        this->color = color;
        this->year = year;
        this->price = price;
    };
};

class Invoice {
    private Marker marker;
    private int quantity;
    // constructor 
    public Invoice (Marker marker,int quantity){
        this->marker = marker;
        this->quantity = quantity;
    }

    public int calculatetotal(){
        int price = (this->marker->price*this->quantity);
        return price;
    }

    // public void printInvoice(){
    //     // print the invoice
    // }

    // public void saveToDb(){
    //     // save the data into db
    // }
};
// ************************************************************
//OPEN CLOSE 

class InvoiceDao{
    Invoice invoice;

    public InvoiceDao (Invoice invoice){
        this->invoice = invoice;
    }

    public void saveToDb(){
        // save the invoice to db
    }
}
// 
// new requirement
// not in right way
/*
we can not modify the class for any reason
but if need we can extend it according to us
*/
class InvoiceDao{
    Invoice invoice;

    public InvoiceDao (Invoice invoice){
        this->invoice = invoice;
    }

    public void saveToDb(){
        // save the invoice to db
    }
    public void saveToFile(){
        // save the invoice to File
    }
}


interface InvoiceDao{
    public void save(Invoice invoice);
}

class DatabaseInvoiceDao implements InvoiceDao{
    @override
    public void save(Invoice invoice){
        // save invoice to db
    }
}

class FileInvoiceDao implements InvoiceDao{
    @override
    public void save(Invoice invoice){
        // save invoice to File
    }
}