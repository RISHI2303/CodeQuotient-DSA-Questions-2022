#include <bits/stdc++.h>
using namespace std;

/*
 *	@params:
 *		marks1 = A vector denoting the marks of first row students
 *		marks2 = A vector denoting the marks of second row students
 *
 *	@return:
 *		A vector of size (n + m), after merging the students in two rows
 */
vector<int> mergeStudents(vector<int> marks1, vector<int> marks2) {
    // Write your code here
    vector<int> ans;
    int i = 0, j = 0;

    while(i<marks1.size() && j<marks2.size()) {
        if(marks1[i] > marks2[j])
            ans.push_back(marks1[i++]);

        else if (marks1[i] < marks2[j])
            ans.push_back(marks2[j++]);

        else {
            ans.push_back(marks1[i++]);
            ans.push_back(marks2[j++]);
        }
    }

    while (i < marks1.size())
        ans.push_back(marks1[i++]);

    while (j < marks2.size())
        ans.push_back(marks2[j++]);

    return ans;
}

int main()
{
    int i, k, size = 0, size1 = 0;
    cin >> size;
    vector<int> a(size);
    for (i = 0; i < size; i++)
        cin >> a[i];

    cin >> size1;
    vector<int> b(size1);
    for (i = 0; i < size1; i++)
        cin >> b[i];

    vector<int> final = mergeStudents(a, b);

    for (i = 0; i < (size + size1); i++)
        cout << final[i] << " ";

    return 0;
}