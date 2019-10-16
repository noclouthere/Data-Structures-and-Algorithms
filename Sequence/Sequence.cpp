//
// Created by Miguel Mendoza on 2019-10-14.
//
#include "Sequence.h"
#include "assert.h"

main_savitch_3::sequence::sequence() {
    used = 0;
}

void main_savitch_3::sequence::start() {
    //  Postcondition: The first item on the sequence becomes the current item
    //  (but if the sequence is empty, then there is no current item).
    if(used > 0){
        current_index = 1;
    }
}

void main_savitch_3::sequence::advance() {
//     Precondition: is_item returns true.
//     Postcondition: If the current item was already the last item in the
//     sequence, then there is no longer any current item. Otherwise, the new
//     current item is the item immediately after the original current item.
    if (is_item()){
        //Checks if the current index is one less than the used
        if(current_index == used-1){
            //makes it so there's no current item
            current_index = -1;
        }
        else{
            current_index++;
        }
    }
}

bool main_savitch_3::sequence::is_item() const {
//     Postcondition: A true return value indicates that there is a valid
//     "current" item that may be retrieved by activating the current
//     member function (listed below). A false return value indicates that
//     there is no valid current item.
    if(used == 0 || current_index == -1)
        return false;
    else
        return true;

}

void main_savitch_3::sequence::insert(const main_savitch_3::sequence::value_type &entry) {
//     Precondition: size( ) < CAPACITY.
//     Postcondition: A new copy of entry has been inserted in the sequence
//     before the current item. If there was no current item, then the new entry
//     has been inserted at the front of the sequence. In either case, the newly
//     inserted item is now the current item of the sequence.

    assert(size() < CAPACITY);
    data[used] = entry;
    ++used;
}

void main_savitch_3::sequence::attach(const main_savitch_3::sequence::value_type &entry) {
//     Precondition: size( ) < CAPACITY.
//     Postcondition: A new copy of entry has been inserted in the sequence after
//     the current item. If there was no current item, then the new entry has
//     been attached to the end of the sequence. In either case, the newly
//     inserted item is now the current item of the sequence.

    assert(size() < CAPACITY);
    data[used] = entry;
    --used;

}

main_savitch_3::sequence::size_type main_savitch_3::sequence::size() const {
    return used;
}

//for (int i = used-1; i >= current_index; i--) {
//data[i+1] == data[i];
//}