#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include<istream>
using namespace std;
#include <vector>
#include <map>

vector<string> tag_stack;
map<string, string> attribute;

void insert(string &name, string &var)//take two string of map attribute
{
    string full;//temporery string
    for (string &str : tag_stack)//make reference str and store the string from tag_stack
    {
        full+=str+".";//example tag1.tag2.//tag1.
    }
    full.pop_back();//tag1.tag2
    full += "~" + name;//tag1.tag2~attr_name//tag1.tag2~name
    attribute[full] = var;//<atribute_name,attribute_variable>//string[tag1.tag2~name]=attribute_variable
    //tag2~name
}
int main()
{
    int number_tag, query;
    //cout << "enter the number of tags : " << endl;
    cin >> number_tag;
    //cout << "enter the query : " << endl;
    cin >> query;
    for (int i = 0; i < number_tag; i++)
    {
        char c;
        //cout << "c" << endl;
        cin >> c;
        if (cin.peek() == '/')
        //The peek() function looks into the input stream and tells us what the next character is without removing it from the input stream.
        // Moreover, the peek() function can store the character in a designated memory locatio without actually removing it from the stream.
        {//when found / tag been closed  ignore it nd
            string tag_enter;//tag name
            cin >> tag_enter;
            tag_stack.pop_back();
        }
        else
        {
            string name;
            //cout << "enter the tag : " << endl;
            cin >> name;
            if (name.back() == '>')
            {
                name.pop_back();
                tag_stack.push_back(name);
            }
            else
            {
                tag_stack.push_back(name);
                for (;;)
                {
                    string attr_name, attr_operation, attr_variable;
                    cin >> attr_name >> attr_operation >> attr_variable;
                    if (attr_variable.back() == '>')
                    {
                        attr_variable.pop_back();
                        attr_variable.pop_back();
                        attr_variable = attr_variable.substr(1);
                        insert(attr_name, attr_variable);
                        break;
                    }
                    else
                    {
                        attr_variable.pop_back();
                        attr_variable=attr_variable.substr(1);
                        insert(attr_name,attr_variable);
                    }
                }
            }
        }
    }
    for(int i=0;i<query;++i)
    {
        string quer;
        //tag1.tag2~name
        cin>>quer;
        if(attribute.find(quer)!=attribute.end()){
        cout<<attribute[quer]<<endl;}
        else
        cout<<"Not Found!"<<endl;
    }
}


/*#include <iostream>
#include <map>
using namespace std;

map <string, string> tagMap;

void createMap(int &n, string pretag) {
    if(!n) return;

    string line, tag, attr, value;
    getline(cin, line);

    int i=1;
    if(line[i]=='/') {           // found closing tag
        while(line[i]!='>') i++;
        if(pretag.size()>(i-2))		// update tag
            tag = pretag.substr(0,pretag.size()-i+1);
        else
            tag = "";
    }
    else {                       // found opening tag
        while(line[i]!=' ' && line[i]!='>') i++;
        tag = line.substr(1,i-1);	// update tag
        if(pretag!="") tag = pretag + "." + tag;

        int j;
        while(line[i]!='>') { // go through attributes
            j = ++i;
            while(line[i]!=' ') i++;
            attr = line.substr(j,i-j);	// attribute name

            while(line[i]!='\"') i++;
            j = ++i;
            while(line[i]!='\"') i++;
            value = line.substr(j,i-j);	// attribute value
            i+= 1;

            tagMap[tag + "~" + attr] = value;
        }
    }
    createMap(--n, tag);
}

int main() {
    int n, q;
    cin >> n >> q;
    cin.ignore();
    createMap(n,"");

    string attr, value;
    while(q--) {
        getline(cin,attr);
        value = tagMap[attr];
        if(value=="") value = "Not Found!";
        cout << value << endl;
    }
    return 0;
}



// Searching a key on a B-tree in C++
/*
#include <iostream>
using namespace std;

class TreeNode
{
    int *keys;    // pointer integer type to keys
    int t;        // store
    TreeNode **C; // pointer to array child
    int n;
    bool leaf; // if true element exist

public:
    TreeNode(int temp, bool bool_leaf);

    void insertNonFull(int k);
    void splitChild(int i, TreeNode *y);
    void traverse();

    TreeNode *search(int k);

    friend class BTree;
};

class BTree
{
    TreeNode *root;
    int t;

public:
    BTree(int temp)
    {
        root = NULL;
        t = temp;
        cout << "inside btree constructor t is :" << t << endl;
    }

    void traverse()
    {
        if (root != NULL)
            root->traverse();
    }

    TreeNode *search(int k)
    {
        return (root == NULL) ? NULL : root->search(k);
    }

    void insert(int k);
};

TreeNode::TreeNode(int t1, bool leaf1)
{
    t = t1;
    leaf = leaf1;

    keys = new int[2 * t - 1];
    cout << "treenode constructor value of no of keys=" << 2 * t - 1 << endl;
    C = new TreeNode *[2 * t];
    cout << "treenode constructor value of no of child=" << 2 * t << endl;

    n = 0;
}

void TreeNode::traverse()
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (leaf == false)
            C[i]->traverse();
        cout << " " << keys[i];
    }

    if (leaf == false)
        C[i]->traverse();
}

TreeNode *TreeNode::search(int k)
{
    int i = 0;
    while (i < n && k > keys[i])
        i++;

    if (keys[i] == k)
        return this;

    if (leaf == true)
        return NULL;

    return C[i]->search(k);
}

void BTree::insert(int k)
{
    if (root == NULL)
    {
        root = new TreeNode(t, true);
        root->keys[0] = k;
        root->n = 1;
        cout << "i satisfy if of inset1 : " << k << " " << root->n << endl;
    }
    else
    {
        if (root->n == 2 * t - 1)
        {
            TreeNode *s = new TreeNode(t, false);

            s->C[0] = root;

            s->splitChild(0, root);

            int i = 0;
            if (s->keys[0] < k)
                i++;
            s->C[i]->insertNonFull(k);

            root = s;
        }
        else
            root->insertNonFull(k);
    }
}

void TreeNode::insertNonFull(int k)
{
    int i = n - 1;

    if (leaf == true)
    {
        while (i >= 0 && keys[i] > k)
        {
            keys[i + 1] = keys[i];
            i--;
        }

        keys[i + 1] = k;
        n = n + 1;
    }
    else
    {
        while (i >= 0 && keys[i] > k)
            i--;

        if (C[i + 1]->n == 2 * t - 1)
        {
            splitChild(i + 1, C[i + 1]);

            if (keys[i + 1] < k)
                i++;
        }
        C[i + 1]->insertNonFull(k);
    }
}

void TreeNode::splitChild(int i, TreeNode *y)
{
    TreeNode *z = new TreeNode(y->t, y->leaf);
    z->n = t - 1;
    cout << "inside spiltchild z->n = " << z->n << endl;
    cout << "inside spiltchild t = " << t << endl;
    for (int j = 0; j < t - 1; j++)
        z->keys[j] = y->keys[j + t];

    if (y->leaf == false)
    {
        for (int j = 0; j < t; j++)
            z->C[j] = y->C[j + t];
    }

    y->n = t - 1;
    for (int j = n; j >= i + 1; j--)
        C[j + 1] = C[j];

    C[i + 1] = z;

    for (int j = n - 1; j >= i; j--)
        keys[j + 1] = keys[j];

    keys[i] = y->keys[t - 1];
    n = n + 1;
}

int main()
{
    BTree t(3);
    t.insert(8);
    t.insert(9);
    t.insert(10);
    t.insert(11);
    t.insert(15);
    t.insert(16);
    t.insert(7);
    t.insert(18);
    t.insert(20);
    t.insert(23);

    cout << "The B-tree is: ";
    t.traverse();

  )
}

/*#include<string.h>
#include<iostream>
using namespace std;
template<class T>
void do_opera(char * str)
{
    int in=0,index=0;
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]=='<')
        {
            in=0;
            continue;
        }
        else if(str[i]=='>')
        {
            in=1;
            continue;
        }
        if(in==1)
        {
            str[index]=str[i];
            index++;
        }
    }str[index]='\0';
    while(str[0]==' ')
    {
        for(int i=0;i<strlen(str);i++)
        {
            str[i]=str[i+1];
        }
    }
    while(str[strlen(str)-1]==' ')
    {
        str[strlen(str)-1]='\0';
    }

}
int main()
{
    char str1[]="<h1>  monika verma <h2>";
    int str2[]={8,4,2,7};
    do_opera(str1);
    do_opera(str2);
    cout<<str1;
}

#include <iostream>
#include<vector>
using namespace std;
int main()
{
   int n, q, size, value, which, index;
    cin >> n >> q;
    vector<vector<int>> nvec;
    for (int i = 0; i < n; ++i) {
        cin >> size;
        vector<int> ivec;
        for (int j = 0; j < size; ++j) {
            cin >> value;
            ivec.push_back(value);
        }
        nvec.push_back(ivec);
    }
    for (int k = 0; k < q; ++k) {
        cin >> which >> index;
        cout << nvec[which][index] << endl;
    }
    return 0;
}*/