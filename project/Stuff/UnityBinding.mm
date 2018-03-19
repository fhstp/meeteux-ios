//
//  UnityBinding.m
//  Unity-iPhone
//
//  Created by Kerstin Blumenstein on 19.03.18.
//

#import <Foundation/Foundation.h>

@interface UnityBinding : NSObject
{
}

@end

@implementation UnityBinding

@end

extern "C" {
    void switchToNative(const char* msg) {
        
        // doing stuff
        printf("switchToNative called");
        printf("%s", msg);
        
    }
}

