// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from proj.djinni

#pragma once

#include <string>
#include <utility>

namespace ezored
{
namespace domain
{

struct DeviceData final
{
    std::string uniqueIdentifier;
    std::string name;
    std::string systemName;
    std::string systemVersion;
    std::string model;
    std::string localizedModel;
    std::string appVersion;
    std::string appShortVersion;
    std::string appName;
    float screenWidth;
    float screenHeight;
    float screenScale;
    std::string systemOsName;
    std::string language;
    std::string imei;
    std::string region;

    DeviceData(std::string uniqueIdentifier_,
               std::string name_,
               std::string systemName_,
               std::string systemVersion_,
               std::string model_,
               std::string localizedModel_,
               std::string appVersion_,
               std::string appShortVersion_,
               std::string appName_,
               float screenWidth_,
               float screenHeight_,
               float screenScale_,
               std::string systemOsName_,
               std::string language_,
               std::string imei_,
               std::string region_)
        : uniqueIdentifier(std::move(uniqueIdentifier_)), name(std::move(name_)), systemName(std::move(systemName_)), systemVersion(std::move(systemVersion_)), model(std::move(model_)), localizedModel(std::move(localizedModel_)), appVersion(std::move(appVersion_)), appShortVersion(std::move(appShortVersion_)), appName(std::move(appName_)), screenWidth(std::move(screenWidth_)), screenHeight(std::move(screenHeight_)), screenScale(std::move(screenScale_)), systemOsName(std::move(systemOsName_)), language(std::move(language_)), imei(std::move(imei_)), region(std::move(region_))
    {
    }

    DeviceData()
        : uniqueIdentifier(), name(), systemName(), systemVersion(), model(), localizedModel(), appVersion(), appShortVersion(), appName(), screenWidth(), screenHeight(), screenScale(), systemOsName(), language(), imei(), region()
    {
    }
};

} // namespace domain
} // namespace ezored
