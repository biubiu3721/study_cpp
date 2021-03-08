#include "./map.h"

using namespace std;
int Basic()
{
    // define type as <string, int>, variable as m.
    map<string, int> m;
    string s;
    int num;
    cin>>s>>num;
    //pair<string, int>
    pair<string, int> tmp_pair = pair<string, int>(s, num);
    m.insert(tmp_pair);
    tmp_pair = pair<string, int>("July", 7);
    m.insert(tmp_pair);

    m["January"] = 1;
    m["March"] = 3;

    cout << m["July"] << "\n" << m["March"] << endl;
    return 0;
}
int MapStudyBeginEnd()
{
    std::cout << " >>> MapStudyBeginEnd() is called" << "\n";
    std::map<char,int> mymap;//container
    mymap['b'] = 100;
    mymap['a'] = 200;
    mymap['c'] = 300;
    // show content;
    for(std::map<char, int>::iterator it=mymap.begin(); it!=mymap.end(); ++it)
    {
        // The first item is key, the second item is value.
        std::cout << it->first << " => " <<it->second << "\n";
    }

    return 0;
}
int MapStudyEmpty()
{
    std::cout << " >>> MapStudyEmpty() is called" << "\n";
    std::map<char, int> mymap;
    mymap['a'] = 10;
    mymap['b'] = 20;
    mymap['c'] = 30;

    while(!mymap.empty())
    {
        std::cout << mymap.begin()->first << " => " << mymap.begin()->second << "\n";
	mymap.erase(mymap.begin());
    }

    return 0;
}
int MapStudySize()
{
    std::cout << " >>> MapStudySize() is called" << "\n";
    std::map<char, int> mymap;
    mymap['a'] = 10;
    mymap['b'] = 20;
    mymap['c'] = 30;

    std::cout << "mymap.size() is " << mymap.size() << "\n";

    return 0;
}
// local functions.
int cmp(pair<int, int>a, pair<int, int>b)
{
    if(a.first!=b.first)
    {
        return a.first>b.first;
    }		
    else
    {
        return a.second<b.second;
    }
}
int MapStudyCmp()
{
    typedef long long LL;
    const int INF=0x3f3f3f3f;
    pair<int, int> pa[100];
    int a,b;
    for( int i=0; i<5; i++)
        scanf("%d%d",&a,&b),pa[i]=make_pair(a,b);
    sort(pa,pa+5,cmp);
    for(int i=0;i<5;i++)
    { 
        printf("%d %d\n",pa[i].first,pa[i].second);
    }
    return 0;
}

