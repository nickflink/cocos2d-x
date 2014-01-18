//
//  CCLocalizedString.cpp
//  SkeletonX
//
//  Created by mac on 11-12-1.
//  Copyright (c) 2011年 GeekStudio. All rights reserved.
//


#include "CCApplication.h"
#include "platform/CCCommon.h"
#include "platform/CCFileUtils.h"
#include "CCDirector.h"
USING_NS_CC;

#include <iostream>
#include <sstream>
#include <string>
#include <map>
using namespace std;

#include "CCLocalizedString.h"

static map<std::string,std::string> localizedStrings;

std::string LocalizedString(std::string mKey, std::string mComment)
{
    
    LanguageType curLanguage = Application::getInstance()->getCurrentLanguage();
    const char * fileName;
    switch (curLanguage) {
        case LanguageType::ENGLISH:
            fileName = "Localized_en";
            break;
        case LanguageType::CHINESE:
            fileName = "Localized_zh";
            break;
        /**
         case for more localize
         */
        default:
            fileName = "Localized_en";
            break;
    }

    std::string resultStr;
    
    if (localizedStrings.empty()) 
    {
        // Initialize variables needed
        long fileSize = 0;
        unsigned char * fileContents = NULL;
        string line, fullPath, contents;
        
        // Get absolute path of file
        fullPath = FileUtils::getInstance()->fullPathForFilename( fileName );
        
        // Get data of file
        fileContents = FileUtils::getInstance()->getFileData( fullPath.c_str( ) , "r", &fileSize );
        contents.append( ( char * ) fileContents );
        
        // Create a string stream so that we can use getline( ) on it
        istringstream fileStringStream( contents );
        
        // Get file contents line by line
        while ( std::getline( fileStringStream, line ) )
		{
//            debug_Printf("line :%s",line.c_str());
            if (line.find("/*",0) == string::npos &&
                line.find("//",0) == string::npos &&
                line.find("*/",0) == string::npos ) //filter the valid string of one line
            {
//                debug_Printf("find the line not start with \" /* \"");
                std::string::size_type validPos= line.find('=',0);
                if ( validPos != string::npos) 
                {
//                    debug_Printf("fimd the line contain \" = \"");
                    std::string keyStr = line.substr(0,validPos-1);
                    std::string subStr = line.substr(validPos+1,line.size()-1); // get valid string
 
                    //trim space
                    keyStr.erase(0, keyStr.find_first_not_of(" \t")); // 去掉头部空格
                    keyStr.erase(keyStr.find_last_not_of(" \t") + 1); // 去掉尾部空格
                    
                    subStr.erase(0, subStr.find_first_not_of(" \t")); // 去掉头部空格
                    subStr.erase(subStr.find_last_not_of(" \t") + 1); // 去掉尾部空格
                    
                    //trim \" 
                    keyStr.erase(0, keyStr.find_first_not_of("\""));
                    keyStr.erase(keyStr.find_last_not_of("\"") + 1);
                    
                    subStr.erase(0, subStr.find_first_not_of("\""));
                    
                    
                    //trim ; character and last \" character
                    subStr.erase(subStr.find_last_not_of(";") + 1);
                    subStr.erase(subStr.find_last_not_of("\"") + 1);
                    
                    
                    //replace line feed with \n
                    string::size_type pos(0);
                    string old_value("\\n");
                    if((pos=subStr.find(old_value))!=string::npos)
                    {
                        for(; pos!=string::npos; pos+=1)
                        {   
                            if((pos=subStr.find(old_value,pos))!=string::npos)
                            {
                                subStr.erase(pos, 2);
                                subStr.insert(pos, 1, '\n');
                            }   
                            else   
                                break;
                        }
                    }
                    
                    localizedStrings.insert(std::pair<std::string, std::string>(keyStr,subStr));
                    
                    const char * keyChars = keyStr.c_str();
                    
                    if (strcmp(keyChars,mKey.c_str()) == 0) {
                        resultStr = subStr;
                    }
                }
            }
        }
        //must delete fileContents
        if (fileContents!= NULL) {
            delete [] fileContents;
            fileContents = NULL;
        }
        
        //return valid value
        if (resultStr.length() > 0){
            return resultStr;
        }
        return mKey;
    }
    else
    {
        std::map<std::string,std::string>::iterator itr = localizedStrings.find(std::string(mKey));
        if (itr != localizedStrings.end()) {
            return itr->second;
        }
    }
    return mKey;
}
