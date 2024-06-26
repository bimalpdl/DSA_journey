#include<iostream>
  using namespace std;
   int main(){
   int n;
   cout<<"Enter number of rows:"<<endl;
   cin>>n;
   for(int i = 0; i<n; i++){
   for(int j=0;j<n;j++){
   cout<<i;
  }
  cout<<endl;
  }
  return 0;
 }
 WAP in dart to do the same  task 
 void main() {
  int n;
  print("Enter number of rows:");
  n = int.parse(stdin.readLineSync()!);
  for(int i = 0; i<n; i++){
    for(int j=0;j<n;j++){
      stdout.write(i.toString());
      }
      stdout.writeln();
      }
      }
      Note: Dart is a modern, object-oriented language that runs on a VM. It's similar  
      to Java or C#. The above code is written in Dart and it does the same task as
      the C++ code. The main differences are:
      - Dart uses `print` instead of `cout` for printing to the console.
      - Dart uses `stdin.readLineSync()` to read input from the console, and
      `int.parse()` to convert the input string to an integer.
      - Dart uses `stdout.write()` and `stdout.writeln()` to print to the console.
      - Dart uses `toString()` to convert an integer to a string.
      - Dart uses `!` to assert that an expression is not null.
      - Dart uses `void main()` instead of `int main()` as the entry point of the
      program.
      - Dart uses `for` loops in a similar way to C++.
      - Dart uses `stdout.writeln()` to print a newline character to the console.
      