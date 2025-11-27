#ifndef TABLEENTRY_H
#define TABLEENTRY_H

#include <string>
#include <ostream>

template <typename V>
class TableEntry {
    public:
        // miembros públicos

        //atributos
        std::string key; //clave del par
        V value;         //valor del par

        //metodos
        TableEntry(std::string k, V v){
            key = k;
            value = v;
        }

        TableEntry(std::string k){
            key = k;
        }

        TableEntry(){
            key = "";
        }

        friend bool operator==(const TableEntry<V> &te1, const TableEntry<V> &te2){
            if(te1.key == te2.key){
                return true;
            }else{
                return false;
            }

        }

        friend bool operator!=(const TableEntry<V> &te1, const TableEntry<V> &te2){
            if(te1.key != te2.key){
                return true;
            }else{
                return false;
            }
        }

        friend std::ostream& operator<<(std::ostream &out, const TableEntry<V> &te){
            out << te.key << "->" << te.value;
            return out;
        }
};

#endif
