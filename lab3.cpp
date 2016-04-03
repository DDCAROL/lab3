#include<iostream>
#include<vector>
#include<fstream>
#include<algorithm>
#include<cstdlib>
using namespace std;

int main(){
	    ifstream filein("file.in",ios::in);
		    if(!filein){
				        cerr<<"Failed opening."<<endl;
						        exit(1);
								    }
			    int a;
				    filein>>a;
					    vector<int> num(a);
						    for(int j=0;j<a;j++)
								        filein>>num[j];
							    sort(num.begin(),num.end());
								    int total=0;
									    for(int j=3;j<8;j++)
											        total+=num[j];
										    cout<<total<<endl;
}

