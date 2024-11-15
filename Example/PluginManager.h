//
// Created by simon on 16.10.24.
//

#ifndef EXAMPLE_PLUGINMANAGER_H
#define EXAMPLE_PLUGINMANAGER_H

#include "plugin/plugin.h"
#include <vector>
class PluginManager {
    std::vector<Plugin*> plugins;
public:

    PluginManager(std::vector<Plugin*> plugins) : plugins(plugins) {}

    void addPlugin(Plugin* plugin) {
        plugins.push_back(plugin);
    }

    void doSomething() {
        for (auto plugin : plugins) {
            plugin->doSomething();
        }
    }

    ~PluginManager() {
        for (auto plugin : plugins) {
            delete plugin;
        }
    }
};


#endif //EXAMPLE_PLUGINMANAGER_H
