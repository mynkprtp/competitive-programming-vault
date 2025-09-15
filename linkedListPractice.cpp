// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;
// };

// void insertNode(Node **headref, int val)
// {
//     Node *newNode = new Node();
//     newNode->data = val;
//     if (*headref == NULL)
//     {
//         *headref = newNode;
//         return;
//     }
//     newNode->next = *headref;
//     *headref = newNode;
//     return;
// }

// void printList(Node *head)
// {
//     while (head != NULL)
//     {
//         cout << head->data << " ";
//         head = head->next;
//     }
//     return;
// }
// Node* sortList(Node* head){
//     // if(head== NULL)
//     // return head;
//     Node* oddPointer = NULL;
//     Node* prevOdd= NULL;
//     Node* evenPointer = NULL;
//     Node* prevEven = NULL;
//     // Node* evenList=new Node();
//     while(head!=NULL){
//         if(head->data % 2 == 0){
//             if(prevEven == NULL){
//                 prevEven = head;
//                 evenPointer = prevEven;
//             }
//             else
//             {
//                 prevEven->next=head;
//                 prevEven=prevEven->next;
//             }
//         } else{
//             if(prevOdd == NULL){
//                 prevOdd = head;
//                 oddPointer = prevOdd;
//             }
//             else
//             {
//                 prevOdd->next=head;
//                 prevOdd=prevOdd->next;
//             }
//         }
//         head=head->next;
//     }
//     if(prevOdd!=NULL)
//     prevOdd->next=evenPointer;
//     if(prevEven!=NULL)
//     prevEven->next=NULL;
//     head=oddPointer;
//     return head;
// }

// int main()
// {
//     Node *headd = NULL;
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         insertNode(&headd, x);
//     }
//     printList(headd);
//     cout<<"\n";
//     headd=sortList(headd);
//     printList(headd);
//     return 0;
// }

// C++ program for implementation of KMP pattern searching
// algorithm

#include <bits/stdc++.h>
using namespace std;

void computeLPSArray(char* pat, int M, int* lps);

void KMPSearch(char* pat, char* txt)
{
	int M = strlen(pat);
	int N = strlen(txt);
	int lps[M];
	computeLPSArray(pat, M, lps);

	int i = 0; // index for txt[]
	int j = 0; // index for pat[]
	while (i<N) {
		if (pat[j] == txt[i]) {
			j++;
			i++;
		}
		if (j == M) {
			printf("Found pattern at index %d ", i - j);
			j = lps[j - 1];
		}
		else if (pat[j] != txt[i]) {
			if (j != 0)
				j = lps[j - 1];
			else
				i = i + 1;
		}
	}
}

// Fills lps[] for given pattern pat[0..M-1]
void computeLPSArray(char* pat, int M, int* lps)
{
	int i = 0;
	lps[0] = 0;
	int j = 1;
	while (j < M) {
		if (pat[i] == pat[j]) {
			lps[j++] = ++i;
		}else {
            if(i==0){
                lps[j++] = 0;
            }else{
			    i=lps[i-1];
            }
        }
        cout<<j<<"\n";
	}
}

// Driver code
int main()
{
	// char txt[] = "ABABDABACDABABCABAB";
	// char pat[] = "AB";
	// KMPSearch(pat, txt);
	cout<<(1LL<<60)<<endl;
	return 0;
}
