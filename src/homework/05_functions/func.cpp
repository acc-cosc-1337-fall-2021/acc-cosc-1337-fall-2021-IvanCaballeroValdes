//add include statements
#include "func.h"
using namespace std;
//add function code here
double get_gc_content(const string& dna)
{
    double count;
    count = 0;
    for(int i=0; i<dna.size(); i++)
    {
        if(dna[i]=='G' || dna[i]=='C')
        {
            count++;
        }
    }
    return count/dna.size();
}
string reverse_string(string dna)
{
    int len=dna.size();
    int n=len-1;
    for(int i=0; i<(len/2); i++)
    {
        char temp=dna[i];
        dna[i]=dna[n];
        dna[n]-temp;
        n=n-1;
    }
    return dna; 
}
string get_dna_complement(string dna)
{
    string complement;
    int i;
    char letter;
    for(int i=0; i<dna.size(); i++)
    {
        letter=(dna[i]);
        complement.push_back(letter);
    }
    return complement;
}