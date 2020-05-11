#ifndef METAPHLANPLUGIN_H
#define METAPHLANPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include <string>

class MetaPhlAnPlugin : public Plugin
{
public: 
 std::string toString() {return "MetaPhlAn";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
