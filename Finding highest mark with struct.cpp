
#include <iostream>
using namespace std;

struct Student {               // student ডাটা রাখার জন্য structure
    int id;                    // ছাত্রের আইডি
    char name[50];             // নাম (character array)
    float marks;               // মার্কস
};

// এই ফাংশন highest মার্কস student রিটার্ন করবে
Student getHighest(Student s[], int n) {
    int idx = 0;               // শুরুতে ধরলাম 0 index এর student highest

    for(int i = 1; i < n; i++){      // সব student compare করা
        if(s[i].marks > s[idx].marks)
            idx = i;                 // index update (highest পাওয়া)
    }
    return s[idx];              // highest student return করা
}

int main() {
    Student s[10];              // 10 student এর array

    cout << "Enter data of 10 students:\n";
    for(int i = 0; i < 10; i++){
        cout << "Student " << i+1 << " ID: ";
        cin >> s[i].id;         // আইডি ইনপুট

        cout << "Name: ";
        cin >> s[i].name;       // নাম ইনপুট (char array)

        cout << "Marks: ";
        cin >> s[i].marks;      // মার্কস ইনপুট (float)
    }

    Student top = getHighest(s, 10); // highest student বের করা

    cout << "\nHighest Marks Student:\n";
    cout << "ID: " << top.id << "\n";      // highest id
    cout << "Name: " << top.name << "\n";  // highest নাম
    cout << "Marks: " << top.marks << "\n";// highest মার্কস

    return 0;
}
