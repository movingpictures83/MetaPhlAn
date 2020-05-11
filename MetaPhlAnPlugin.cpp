#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "MetaPhlAnPlugin.h"

void MetaPhlAnPlugin::input(std::string file) {
 inputfile = file;
}

void MetaPhlAnPlugin::run() {}

void MetaPhlAnPlugin::output(std::string file) {
 std::string outputfile = file;
 std::string myCommand = "";
myCommand += "metaphlan2.py " + inputfile + " --input_type fastq > " + outputfile;
myCommand += " ";
 system(myCommand.c_str());
}

PluginProxy<MetaPhlAnPlugin> MetaPhlAnPluginProxy = PluginProxy<MetaPhlAnPlugin>("MetaPhlAn", PluginManager::getInstance());
