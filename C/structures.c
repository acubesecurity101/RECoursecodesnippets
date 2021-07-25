#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

struct IDA{
bool isDecompilersupport;
bool isgraphviewsupport;
bool isdiscordrpcavailable;
};

struct RelyzeSoftware{

bool isDecompilersupport;
bool isgraphviewsupport;
bool binarydiffingsupport;
  
};

int main(void)
{

  struct IDA IDAFreeware;
  IDAFreeware.isDecompilersupport = false;
  IDAFreeware.isgraphviewsupport =  true;
  IDAFreeware.isdiscordrpcavailable = false;
   
  struct IDA IDAPro;
  IDAPro.isDecompilersupport = true;
  IDAPro.isgraphviewsupport =  true;
  IDAPro.isdiscordrpcavailable = false;


  struct RelyzeSoftware RelyzeCommunityversion;
  RelyzeCommunityversion.isDecompilersupport = true;
  RelyzeCommunityversion.isgraphviewsupport = true;
  RelyzeCommunityversion.binarydiffingsupport = false;

  struct RelyzeSoftware RelyzeProversion;
  RelyzeProversion.isDecompilersupport = true;
  RelyzeProversion.isgraphviewsupport = true;
  RelyzeProversion.binarydiffingsupport = true;

printf("IDA Freeware support for decompiler %d\n IDA Freeware support for graphview %d\n",IDAFreeware.isDecompilersupport, IDAFreeware.isgraphviewsupport);

printf("Relyze Software for decompiler in the community version %d\n Relyze Freeware support for binarydiffing %d\n", RelyzeCommunityversion.isDecompilersupport, RelyzeCommunityversion.binarydiffingsupport);
return 0;
}