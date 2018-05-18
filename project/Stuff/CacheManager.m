//
//  CacheManager.m
//  Unity-iPhone
//
//  Created by Kerstin Blumenstein on 18.05.18.
//

#import "CacheManager.h"

@implementation CacheManager

- (instancetype)init {
    if (self = [super init]) {
        _data = [[NSString alloc] init];
    }
    
    return self;
}

+ (instancetype)sharedManager {
    static CacheManager *selfManager;
    
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        selfManager = [[[self class] alloc] init];
    });
    
    return selfManager;
}

@end
