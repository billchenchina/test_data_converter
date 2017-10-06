#include <bits/stdc++.h>
using namespace std;
#if __cplusplus < 201103L
#include <bits/c++0x_warning.h>
#else
int main(int argc,char **argv)

{
    if(argc==1||(argc>=2&&strcmp(argv[1],"--help")==0))
    {
        cout<<"Here listed the help of this tool."<<endl
            <<"This tool will automatically convert data0,data1,data2....to data1,data2,data3..."<<endl
            <<"\tFirst argument inputs the prefix of all file names"<<endl
            <<"\tSecond argument inputs the number of test datas"<<endl;
        return 0;
    }
    if(argc!=3)
    {
        cerr<<"Error,arguments not equals 2"<<endl;
        return 0;
    }
    string prefix=argv[1];
    int num=atoi(argv[2]);
    for(int i=num-1;i>=0;i--)
    {
        string cmd1="mv ";
        cmd1.append(prefix);
        cmd1.append(to_string(i)+".out ");
        cmd1.append(prefix+to_string(i+1)+".out ");
        system(cmd1.c_str());
        cmd1="mv ";
        cmd1.append(prefix);
        cmd1.append(to_string(i)+".in ");
        cmd1.append(prefix+to_string(i+1)+".in ");
        system(cmd1.c_str());
    }

}
#endif
