#include<iostream>
using namespace std;
int main(){
    int students, i, totalAge, *iptr, *sptr;

    cout<<"Total no of students in the class: ";
    cin>>students;

    iptr = (int*) malloc(students * sizeof(int));
    if(iptr == NULL){
        cout<<"memory is not available for "<<students<<" students \n";
        return 1;
    }
    sptr = iptr;
    totalAge=0;
    for(int i=1; i<=students; i++)
    {
        cout<<"Enter Age of student "<<i<<" = ";
        cin>>*sptr;
        totalAge = totalAge + *sptr;
        sptr++;
    }
    cout<<"Avg age of toatal calss is "<<totalAge/students<<" ";
    free(iptr);
    sptr == NULL;
    return 0;

}